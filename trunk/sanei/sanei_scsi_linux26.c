/* sane - Scanner Access Now Easy.
   Copyright (C) 1996, 1997 David Mosberger-Tang
   Copyright (C) 2003 Frank Zago
   This file is part of the SANE package.

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330, Boston,
   MA 02111-1307, USA.

   This file provides a SCSI interface for Linux 2.6.
*/

#include "../include/sane/config.h"
#include "../include/lalloca.h"
#include "../include/lassert.h"

#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <sys/ioctl.h>
#include <sys/param.h>
#include <sys/types.h>

#define LINUX_INTERFACE		1

#ifdef HAVE_RESMGR
# include <resmgr.h>
#endif

#define USE LINUX_INTERFACE
#include <scsi/sg.h>

#include "../include/sane/sanei.h"
#include "../include/sane/sanei_config.h"
#include "../include/sane/sanei_scsi.h"

#define BACKEND_NAME	sanei_scsi
#include "../include/sane/sanei_debug.h"

#ifdef SG_BIG_BUFF
# define MAX_DATA	SG_BIG_BUFF
#endif

#ifndef MAX_DATA
# define MAX_DATA	(32*1024)
#endif

#ifdef SG_SET_TIMEOUT
# ifdef _SC_CLK_TCK
#  define GNU_HZ  sysconf(_SC_CLK_TCK)
# else
#  ifdef HZ
#   define GNU_HZ  HZ
#  else
#   ifdef CLOCKS_PER_SEC
#    define GNU_HZ  CLOCKS_PER_SEC
#   endif
#  endif
# endif
#endif

/* default timeout value: 120 seconds */
static int sane_scsicmd_timeout = 120;
int sanei_scsi_max_request_size = MAX_DATA;
#if USE == LINUX_INTERFACE
/* the following #defines follow Douglas Gilbert's sample code
   to maintain run time compatibility with the old and the
   new SG driver for Linux
*/
#include "linux_sg3_err.h"	/* contains several definitions of error codes */
#ifndef SG_SET_COMMAND_Q
#define SG_SET_COMMAND_Q 0x2271
#endif
#ifndef SG_SET_RESERVED_SIZE
#define SG_SET_RESERVED_SIZE 0x2275
#endif
#ifndef SG_GET_RESERVED_SIZE
#define SG_GET_RESERVED_SIZE 0x2272
#endif
#ifndef SG_GET_SCSI_ID
#define SG_GET_SCSI_ID 0x2276
#else
#define SG_GET_SCSI_ID_FOUND
#endif
#ifndef SG_GET_VERSION_NUM
#define SG_GET_VERSION_NUM 0x2282
#endif
#ifndef SG_NEXT_CMD_LEN
#define SG_NEXT_CMD_LEN 0x2283
#endif

#ifndef SCSIBUFFERSIZE
#define SCSIBUFFERSIZE (128 * 1024)
#endif

/* the struct returned by the SG ioctl call SG_GET_SCSI_ID changed
   from version 2.1.34 to 2.1.35, and we need the informations from
   the field s_queue_depth, which was introduced in 2.1.35.
   To get this file compiling also with older versions of sg.h, the
   struct is re-defined here.
*/
typedef struct xsg_scsi_id
{
	int host_no;		/* as in "scsi<n>" where 'n' is one of 0, 1, 2 etc */
	int channel;
	int scsi_id;		/* scsi id of target device */
	int lun;
	int scsi_type;		/* TYPE_... defined in scsi/scsi.h */
	short h_cmd_per_lun;	/* host (adapter) maximum commands per lun */
	short d_queue_depth;	/* device (or adapter) maximum queue length */
	int unused1;		/* probably find a good use, set 0 for now */
	int unused2;		/* ditto */
}
SG_scsi_id;

typedef struct req
{
	struct req *next;
	int fd;
	u_int running:1, done:1;
	SANE_Status status;
	size_t *dst_len;
	void *dst;

/* take the definition of the ioctl parameter SG_IO as a
   compiler flag if the new SG driver is available
*/
	union
	{
		struct
		{
			struct sg_header hdr;
			/* Make sure this is the last element, the real size is
			   SG_BIG_BUFF and machine dependant */
			u_int8_t data[1];
		}
		cdb;
/* at present, Linux's SCSI system limits the sense buffer to 16 bytes
   which is definitely too small. Hoping that this will change at some time,
   let's set the sense buffer size to 64.
*/
#define SENSE_MAX 64
#define MAX_CDB 12
		struct
		{
			struct sg_io_hdr hdr;
			u_char sense_buffer[SENSE_MAX];
			u_int8_t data[1];
		}
		sg3;
	}
	sgdata;
}
req;

typedef struct Fdparms
{
	int sg_queue_used, sg_queue_max;
	size_t buffersize;
	req *sane_qhead, *sane_qtail, *sane_free_list;
}
fdparms;

#endif

static struct
{
	u_int in_use:1;		/* is this fd_info in use? */
	u_int fake_fd:1;	/* is this a fake file descriptor? */
	u_int bus, target, lun;	/* nexus info; used for some interfaces only */
	SANEI_SCSI_Sense_Handler sense_handler;
	void *sense_handler_arg;
	void *pdata;		/* platform-specific data */
}
 *fd_info;

static u_char cdb_sizes[8] = {
	6, 10, 10, 12, 12, 12, 10, 10
};

#define CDB_SIZE(opcode)	cdb_sizes[(((opcode) >> 5) & 7)]


static int num_alloced = 0;


static int sg_version = 0;

static SANE_Status
get_max_buffer_size(const char *file)
{
	int fd = -1;
	int buffersize = SCSIBUFFERSIZE, i;
	size_t len;
	char *cc, *cc1, buf[32];

#ifdef HAVE_RESMGR
	fd = rsm_open_device(file, O_RDWR);
#endif

	if (fd == -1)
		fd = open(file, O_RDWR);

	if (fd > 0) {
		cc = getenv("SANE_SG_BUFFERSIZE");
		if (cc) {
			i = strtol(cc, &cc1, 10);
			if (cc != cc1 && i >= 32768)
				buffersize = i;
		}

		ioctl(fd, SG_SET_RESERVED_SIZE, &buffersize);
		if (0 == ioctl(fd, SG_GET_RESERVED_SIZE, &buffersize)) {
			if (buffersize < sanei_scsi_max_request_size)
				sanei_scsi_max_request_size = buffersize;
			close(fd);
			DBG(4, "get_max_buffer_size for %s: %i\n", file,
			    sanei_scsi_max_request_size);
			return SANE_STATUS_GOOD;
		} else {
			close(fd);
			/* ioctl not available: we have the old SG driver */
			fd = open("/proc/sys/kernel/sg-big-buff", O_RDONLY);
			if (fd > 0
			    && (len = read(fd, buf, sizeof(buf) - 1)) > 0) {
				buf[len] = '\0';
				sanei_scsi_max_request_size = atoi(buf);
				close(fd);
			} else
				sanei_scsi_max_request_size =
					buffersize <
					SG_BIG_BUFF ? buffersize :
					SG_BIG_BUFF;
			return SANE_STATUS_IO_ERROR;
		}
	} else
		return SANE_STATUS_GOOD;
}


SANE_Status
sanei_scsi_open_extended(const char *dev, int *fdp,
			 SANEI_SCSI_Sense_Handler handler,
			 void *handler_arg, int *buffersize)
{
	u_int bus = 0, target = 0, lun = 0, fake_fd = 0;
	char *real_dev = 0;
	void *pdata = 0;
	char *cc, *cc1;
	int fd, i;

	static int first_time = 1;

	cc = getenv("SANE_SCSICMD_TIMEOUT");
	if (cc) {
		i = strtol(cc, &cc1, 10);
		/* 20 minutes are hopefully enough as a timeout value ;) */
		if (cc != cc1 && i > 0 && i <= 1200) {
			sane_scsicmd_timeout = i;
		} else {
			DBG(1,
			    "sanei_scsi_open: timeout value must be between 1 and 1200 seconds\n");
		}
	}

	DBG_INIT();

	if (first_time) {
		first_time = 0;

		/* Try to determine a reliable value for sanei_scsi_max_request_size:

		   With newer versions of the SG driver, check the available buffer
		   size by opening all SG device files belonging to a scanner,
		   issue the ioctl calls for setting and reading the reserved
		   buffer size, and take the smallest value. 

		   For older version of the SG driver, which don't support variable
		   buffer size, try to read /proc/sys/kernel/sg-big-biff ; if
		   this fails (SG driver too old, or loaded as a module), use
		   SG_BIG_BUFF
		 */

		sanei_scsi_max_request_size = SCSIBUFFERSIZE;
		cc = getenv("SANE_SG_BUFFERSIZE");
		if (cc) {
			i = strtol(cc, &cc1, 10);
			if (cc != cc1 && i >= 32768)
				sanei_scsi_max_request_size = i;
		}
		sanei_scsi_find_devices(0, 0, "Scanner", -1, -1, -1, -1,
					get_max_buffer_size);
		sanei_scsi_find_devices(0, 0, "Processor", -1, -1, -1, -1,
					get_max_buffer_size);
		DBG(4,
		    "sanei_scsi_open: sanei_scsi_max_request_size=%d bytes\n",
		    sanei_scsi_max_request_size);
	}

	fd = -1;
#ifdef HAVE_RESMGR
	fd = rsm_open_device(dev, O_RDWR | O_EXCL | O_NONBLOCK);
#endif

	if (fd == -1)
		fd = open(dev, O_RDWR | O_EXCL | O_NONBLOCK);
	if (fd < 0) {
		SANE_Status status = SANE_STATUS_INVAL;

		if (errno == EACCES)
			status = SANE_STATUS_ACCESS_DENIED;
		else if (errno == EBUSY)
			status = SANE_STATUS_DEVICE_BUSY;

		DBG(1, "sanei_scsi_open: open of `%s' failed: %s\n",
		    dev, strerror(errno));
		return status;
	}

	if (real_dev)
		free(real_dev);

#ifdef SG_SET_TIMEOUT
	/* Set large timeout since some scanners are slow but do not
	   disconnect... ;-( */
	{
		int timeout;
		timeout = sane_scsicmd_timeout * GNU_HZ;
		ioctl(fd, SG_SET_TIMEOUT, &timeout);
	}
#endif

#ifdef SGIOCSTL
	{
		struct scsi_adr sa;

		sa.sa_target = target;
		sa.sa_lun = 0;
		if (ioctl(fd, SGIOCSTL, &sa) == -1) {
			DBG(1,
			    "sanei_scsi_open: failed to attach to target: %u (%s)\n",
			    sa.sa_target, strerror(errno));
			return SANE_STATUS_INVAL;
		}
	}
#endif /* SGIOCSTL */

	{
		SG_scsi_id sid;
		int ioctl_val;
		int real_buffersize;
		fdparms *fdpa = 0;
		SG_scsi_id devinfo;

		pdata = fdpa = malloc(sizeof(fdparms));
		if (!pdata) {
			close(fd);
			return SANE_STATUS_NO_MEM;
		}
		memset(fdpa, 0, sizeof(fdparms));
		/* default: allow only one command to be sent to the SG driver
		 */
		fdpa->sg_queue_max = 1;

		/* Try to read the SG version. If the ioctl call is successful,
		   we have the new SG driver, and we can increase the buffer size
		   using another ioctl call.
		   If we have SG version 2.1.35 or above, we can additionally enable
		   command queueing.
		 */
		if (0 == ioctl(fd, SG_GET_VERSION_NUM, &sg_version)) {
			DBG(1, "sanei_scsi_open: SG driver version: %i\n",
			    sg_version);

			ioctl_val = ioctl(fd, SG_GET_SCSI_ID, &devinfo);
			if (ioctl_val == EINVAL || ioctl_val == ENOTTY) {
				DBG(1,
				    "sanei_scsi_open: The file %s is not an SG device file\n",
				    dev);
				close(fd);
				return SANE_STATUS_INVAL;
			}

			if (devinfo.scsi_type != 6 && devinfo.scsi_type != 3) {
				DBG(1,
				    "sanei_scsi_open: The device found for %s does not look like a scanner\n",
				    dev);
				close(fd);
				return SANE_STATUS_INVAL;
			}

			/* try to reserve a SG buffer of the size specified by *buffersize
			 */
			ioctl(fd, SG_SET_RESERVED_SIZE, buffersize);

			/* the set call may not be able to allocate as much memory
			   as requested, thus we read the actual buffer size.
			 */
			if (0 ==
			    ioctl(fd, SG_GET_RESERVED_SIZE,
				  &real_buffersize)) {
				/* if we got more memory than requested, we stick with
				   with the requested value, in order to allow
				   sanei_scsi_open to check the buffer size exactly.
				 */
				if (real_buffersize < *buffersize)
					*buffersize = real_buffersize;
				fdpa->buffersize = *buffersize;
			} else {
				DBG(1,
				    "sanei_scsi_open: cannot read SG buffer size - %s\n",
				    strerror(errno));
				close(fd);
				return SANE_STATUS_NO_MEM;
			}
			DBG(1,
			    "sanei_scsi_open_extended: using %i bytes as SCSI buffer\n",
			    *buffersize);

			if (sg_version >= 20135) {
				DBG(1,
				    "trying to enable low level command queueing\n");

				if (0 == ioctl(fd, SG_GET_SCSI_ID, &sid)) {
					DBG(1,
					    "sanei_scsi_open: Host adapter queue depth: %i\n",
					    sid.d_queue_depth);

					ioctl_val = 1;
					if (0 ==
					    ioctl(fd, SG_SET_COMMAND_Q,
						  &ioctl_val)) {
						fdpa->sg_queue_max =
							sid.d_queue_depth;
						if (fdpa->sg_queue_max <= 0)
							fdpa->sg_queue_max =
								1;
					}
				}
			}
		} else {
			/* we have a really old SG driver version, or we're not opening
			   an SG device file 
			 */
			if (ioctl(fd, SG_GET_TIMEOUT, &ioctl_val) < 0) {
				DBG(1,
				    "sanei_scsi_open: The file %s is not an SG device file\n",
				    dev);
				close(fd);
				return SANE_STATUS_INVAL;
			}
			if (sanei_scsi_max_request_size < *buffersize)
				*buffersize = sanei_scsi_max_request_size;
			fdpa->buffersize = *buffersize;
		}
		if (sg_version == 0) {
			DBG(1,
			    "sanei_scsi_open: using old SG driver logic\n");
		} else {
			DBG(1,
			    "sanei_scsi_open: SG driver can change buffer size at run time\n");
			if (fdpa->sg_queue_max > 1)
				DBG(1,
				    "sanei_scsi_open: low level command queueing enabled\n");
			if (sg_version >= 30000) {
				DBG(1,
				    "sanei_scsi_open: using new SG header structure\n");
			}
		}
	}

/* Note: this really relies on fd to start small. Windows starts a little higher than 3. */

	if (fd >= num_alloced) {
		size_t new_size, old_size;

		old_size = num_alloced * sizeof(fd_info[0]);
		num_alloced = fd + 8;
		new_size = num_alloced * sizeof(fd_info[0]);
		if (fd_info)
			fd_info = realloc(fd_info, new_size);
		else
			fd_info = malloc(new_size);
		memset((char *) fd_info + old_size, 0, new_size - old_size);
		if (!fd_info) {
			if (!fake_fd)
				close(fd);
			return SANE_STATUS_NO_MEM;
		}
	}
	fd_info[fd].in_use = 1;
	fd_info[fd].sense_handler = handler;
	fd_info[fd].sense_handler_arg = handler_arg;
	fd_info[fd].fake_fd = fake_fd;
	fd_info[fd].bus = bus;
	fd_info[fd].target = target;
	fd_info[fd].lun = lun;
	fd_info[fd].pdata = pdata;

	if (fdp)
		*fdp = fd;

	return SANE_STATUS_GOOD;
}

/* The "wrapper" for the old open call */
SANE_Status
sanei_scsi_open(const char *dev, int *fdp,
		SANEI_SCSI_Sense_Handler handler, void *handler_arg)
{
	int i = 0;
	int wanted_buffersize = SCSIBUFFERSIZE, real_buffersize;
	SANE_Status res;
	char *cc, *cc1;
	static int first_time = 1;

	if (first_time) {
		cc = getenv("SANE_SG_BUFFERSIZE");
		if (cc) {
			i = strtol(cc, &cc1, 10);
			if (cc != cc1 && i >= 32768)
				wanted_buffersize = i;
		}
	} else
		wanted_buffersize = sanei_scsi_max_request_size;

	real_buffersize = wanted_buffersize;
	res = sanei_scsi_open_extended(dev, fdp, handler, handler_arg,
				       &real_buffersize);

	/* make sure that we got as much memory as we wanted, otherwise
	   the backend might be confused
	 */
	if (!first_time && real_buffersize != wanted_buffersize) {
		DBG(1, "sanei_scsi_open: could not allocate SG buffer memory "
		    "wanted: %i got: %i\n", wanted_buffersize,
		    real_buffersize);
		sanei_scsi_close(*fdp);
		return SANE_STATUS_NO_MEM;
	}

	first_time = 0;
	return res;
}

void
sanei_scsi_close(int fd)
{
	if (fd_info[fd].pdata) {
		req *req, *next_req;

		/* make sure that there are no pending SCSI calls */
		sanei_scsi_req_flush_all_extended(fd);

		req = ((fdparms *) fd_info[fd].pdata)->sane_free_list;
		while (req) {
			next_req = req->next;
			free(req);
			req = next_req;
		}
		free(fd_info[fd].pdata);
	}

	fd_info[fd].in_use = 0;
	fd_info[fd].sense_handler = 0;
	fd_info[fd].sense_handler_arg = 0;

	if (!fd_info[fd].fake_fd)
		close(fd);
}

#include <ctype.h>
#include <signal.h>

#include <sys/time.h>

#define WE_HAVE_ASYNC_SCSI
#define WE_HAVE_FIND_DEVICES

static int pack_id = 0;
static int need_init = 1;
static sigset_t all_signals;


static sigset_t
atomic_begin(void)
{
	sigset_t old_mask;
	if (need_init) {
		need_init = 0;
		sigfillset(&all_signals);
	}
	sigprocmask(SIG_BLOCK, &all_signals, &old_mask);
	return old_mask;
}

static void
atomic_end(sigset_t old_mask)
{
	sigprocmask(SIG_SETMASK, &old_mask, 0);
}

static void
issue(struct req *req)
{
	sigset_t old_mask;
	ssize_t nwritten;
	fdparms *fdp;
	struct req *rp;
	int retries;
	int ret;

	if (!req)
		return;

	fdp = (fdparms *) fd_info[req->fd].pdata;
	DBG(4, "sanei_scsi.issue: %p\n", (void *) req);

	rp = fdp->sane_qhead;
	while (rp && rp->running) {
		rp = rp->next;
	}

	while (rp && fdp->sg_queue_used < fdp->sg_queue_max) {
		retries = 20;
		while (retries) {
			errno = 0;
			if (sg_version < 30000) {
				old_mask = atomic_begin();


				rp->running = 1;
				nwritten =
					write(rp->fd, &rp->sgdata.cdb,
					      rp->sgdata.cdb.hdr.pack_len);
				ret = 0;
				if (nwritten != rp->sgdata.cdb.hdr.pack_len) {
					/* ENOMEM can easily happen, if both command queueing
					   inside the SG driver and large buffers are used.
					   Therefore, if ENOMEM does not occur for the first
					   command in the queue, we simply try to issue
					   it later again.
					 */
					if (errno == EAGAIN
					    || (errno == ENOMEM
						&& rp != fdp->sane_qhead)) {
						/* don't try to send the data again, but
						   wait for the next call to issue()
						 */
						rp->running = 0;
					}
				}

				atomic_end(old_mask);
			} else {
				old_mask = atomic_begin();

				rp->running = 1;
				ret = ioctl(rp->fd, SG_IO,
					    &rp->sgdata.sg3.hdr);
				nwritten = 0;

				if (ret < 0) {
					/* ENOMEM can easily happen, if both command queuein
					   inside the SG driver and large buffers are used.
					   Therefore, if ENOMEM does not occur for the first
					   command in the queue, we simply try to issue
					   it later again.
					 */
					if (errno == EAGAIN
					    || (errno == ENOMEM
						&& rp != fdp->sane_qhead)) {
						/* don't try to send the data again, but
						   wait for the next call to issue()
						 */
						rp->running = 0;
					} else {	/* game over */

						rp->running = 0;
						rp->done = 1;
						rp->status =
							SANE_STATUS_IO_ERROR;
					}
				}


				atomic_end(old_mask);

				if (rp == fdp->sane_qhead && errno == EAGAIN) {
					retries--;
					usleep(10000);
				} else {
					retries = 0;
				}
			}

			if ((sg_version < 30000
			     && nwritten != rp->sgdata.cdb.hdr.pack_len)
			    || (sg_version >= 30000 && ret < 0)) {
				if (rp->running) {
					if (sg_version < 30000) {
						DBG(1,
						    "sanei_scsi.issue: bad write (errno=%i) %s %li\n",
						    errno, strerror(errno),
						    (long) nwritten);
					} else if (sg_version > 30000) {
						DBG(1,
						    "sanei_scsi.issue: SG_IO ioctl error (errno=%i, ret=%d) %s\n",
						    errno, ret,
						    strerror(errno));
					}

					rp->done = 1;

					if (errno == ENOMEM) {
						DBG(1,
						    "sanei_scsi.issue: SG_BIG_BUF inconsistency? "
						    "Check file PROBLEMS.\n");
						rp->status =
							SANE_STATUS_NO_MEM;
					} else {
						rp->status =
							SANE_STATUS_IO_ERROR;
					}

				} else {
					if (errno == ENOMEM) {
						DBG(1,
						    "issue: ENOMEM - cannot queue SCSI command. "
						    "Trying again later.\n");
					} else {
						DBG(1,
						    "issue: EAGAIN - cannot queue SCSI command. "
						    "Trying again later.\n");
					}
				}

				break;	/* in case of an error don't try to queue more commands */

			} else {
				if (sg_version < 30000) {
					req->status = SANE_STATUS_IO_ERROR;
				} else if (sg_version > 30000) {	/* SG_IO is synchronous, we're all set */
					req->status = SANE_STATUS_GOOD;
				}
			}

			fdp->sg_queue_used++;
			rp = rp->next;
		}
	}
}

void
sanei_scsi_req_flush_all_extended(int fd)
{
	fdparms *fdp;
	struct req *req, *next_req;
	int len, count;

	fdp = (fdparms *) fd_info[fd].pdata;
	for (req = fdp->sane_qhead; req; req = next_req) {
		if (req->running && !req->done) {
			count = sane_scsicmd_timeout * 10;
			while (count) {
				errno = 0;
				if (sg_version < 30000)
					len = read(fd,
						   &req->sgdata.cdb,
						   req->sgdata.cdb.
						   hdr.reply_len);
				else
					len = read(fd,
						   &req->sgdata.sg3.
						   hdr, sizeof(Sg_io_hdr));
				if (len >= 0 || (len < 0 && errno != EAGAIN))
					break;
				usleep(100000);
				count--;
			}
			((fdparms *) fd_info[req->fd].pdata)->sg_queue_used--;
		}
		next_req = req->next;

		req->next = fdp->sane_free_list;
		fdp->sane_free_list = req;
	}

	fdp->sane_qhead = fdp->sane_qtail = 0;
}

void
sanei_scsi_req_flush_all()
{
	int fd, i, j = 0;

	/* sanei_scsi_open allows only one open file handle, so we
	   can simply look for the first entry where in_use is set
	 */

	fd = num_alloced;
	for (i = 0; i < num_alloced; i++)
		if (fd_info[i].in_use) {
			j++;
			fd = i;
		}

	assert(j < 2);

	if (fd < num_alloced)
		sanei_scsi_req_flush_all_extended(fd);
}

SANE_Status
sanei_scsi_req_enter2(int fd,
		      const void *cmd, size_t cmd_size,
		      const void *src, size_t src_size,
		      void *dst, size_t * dst_size, void **idp)
{
	struct req *req;
	size_t size;
	fdparms *fdp;

	sigset_t old_mask;

	fdp = (fdparms *) fd_info[fd].pdata;

	if (fdp->sane_free_list) {
		req = fdp->sane_free_list;
		fdp->sane_free_list = req->next;
		req->next = 0;
	} else {
		if (sg_version < 30000)
			size = (sizeof(*req) - sizeof(req->sgdata.cdb.data)
				+ fdp->buffersize);
		else
			size = sizeof(*req) + MAX_CDB +
				fdp->buffersize -
				sizeof(req->sgdata.sg3.data);
		req = malloc(size);
		if (!req) {
			DBG(1,
			    "sanei_scsi_req_enter: failed to malloc %lu bytes\n",
			    (u_long) size);
			return SANE_STATUS_NO_MEM;
		}
	}
	req->fd = fd;
	req->running = 0;
	req->done = 0;
	req->status = SANE_STATUS_GOOD;
	req->dst = dst;
	req->dst_len = dst_size;
	if (sg_version < 30000) {
		memset(&req->sgdata.cdb.hdr, 0, sizeof(req->sgdata.cdb.hdr));
		req->sgdata.cdb.hdr.pack_id = pack_id++;
		req->sgdata.cdb.hdr.pack_len = cmd_size + src_size
			+ sizeof(req->sgdata.cdb.hdr);
		req->sgdata.cdb.hdr.reply_len = (dst_size ? *dst_size : 0)
			+ sizeof(req->sgdata.cdb.hdr);
		memcpy(&req->sgdata.cdb.data, cmd, cmd_size);
		memcpy(&req->sgdata.cdb.data[cmd_size], src, src_size);
		if (CDB_SIZE(*(const u_char *) cmd) != cmd_size) {
			if (ioctl(fd, SG_NEXT_CMD_LEN, &cmd_size)) {
				DBG(1,
				    "sanei_scsi_req_enter2: ioctl to set command length failed\n");
			}
		}
	} else {
		memset(&req->sgdata.sg3.hdr, 0, sizeof(req->sgdata.sg3.hdr));
		req->sgdata.sg3.hdr.interface_id = 'S';
		req->sgdata.sg3.hdr.cmd_len = cmd_size;
		req->sgdata.sg3.hdr.iovec_count = 0;
		req->sgdata.sg3.hdr.mx_sb_len = SENSE_MAX;
		/* read or write? */
		if (dst_size && *dst_size) {
			req->sgdata.sg3.hdr.dxfer_direction =
				SG_DXFER_FROM_DEV;
			req->sgdata.sg3.hdr.dxfer_len = *dst_size;
			req->sgdata.sg3.hdr.dxferp = dst;
		} else if (src_size) {
			req->sgdata.sg3.hdr.dxfer_direction = SG_DXFER_TO_DEV;
			if (src_size > fdp->buffersize) {
				DBG(1,
				    "sanei_scsi_req_enter2 warning: truncating write data "
				    "from requested %li bytes to allowed %li bytes\n",
				    (long) src_size, (long) fdp->buffersize);
				src_size = fdp->buffersize;
			}
			req->sgdata.sg3.hdr.dxfer_len = src_size;
			memcpy(&req->sgdata.sg3.data[MAX_CDB], src, src_size);
			req->sgdata.sg3.hdr.dxferp =
				&req->sgdata.sg3.data[MAX_CDB];
		} else {
			req->sgdata.sg3.hdr.dxfer_direction = SG_DXFER_NONE;
		}
		if (cmd_size > MAX_CDB) {
			DBG(1,
			    "sanei_scsi_req_enter2 warning: truncating write data "
			    "from requested %li bytes to allowed %i bytes\n",
			    (long) cmd_size, MAX_CDB);
			cmd_size = MAX_CDB;
		}
		memcpy(req->sgdata.sg3.data, cmd, cmd_size);
		req->sgdata.sg3.hdr.cmdp = req->sgdata.sg3.data;
		req->sgdata.sg3.hdr.sbp = &(req->sgdata.sg3.sense_buffer[0]);
		req->sgdata.sg3.hdr.timeout = 1000 * sane_scsicmd_timeout;
#ifdef ENABLE_SCSI_DIRECTIO
		/* for the adventurous: If direct IO is used,
		   the kernel locks the buffer. This can lead to conflicts,
		   if a backend uses shared memory.
		   OTOH, direct IO may be faster, and it reduces memory usage
		 */
		req->sgdata.sg3.hdr.flags = SG_FLAG_DIRECT_IO;
#else
		req->sgdata.sg3.hdr.flags = 0;
#endif
		req->sgdata.sg3.hdr.pack_id = pack_id++;
		req->sgdata.sg3.hdr.usr_ptr = 0;
	}

	req->next = 0;
	old_mask = atomic_begin();
	{
		if (fdp->sane_qtail) {
			fdp->sane_qtail->next = req;
			fdp->sane_qtail = req;
		} else {
			fdp->sane_qhead = fdp->sane_qtail = req;
		}
	}
	atomic_end(old_mask);

	DBG(4, "scsi_req_enter: entered %p\n", (void *) req);

	*idp = req;
	issue(req);

	DBG(10, "scsi_req_enter: queue_used: %i, queue_max: %i\n",
	    ((fdparms *) fd_info[fd].pdata)->sg_queue_used,
	    ((fdparms *) fd_info[fd].pdata)->sg_queue_max);

	return SANE_STATUS_GOOD;
}

SANE_Status
sanei_scsi_req_wait(void *id)
{
	SANE_Status status = SANE_STATUS_GOOD;
	struct req *req = id;
	ssize_t nread = 0;

	/* we don't support out-of-order completion */
	assert(req == ((fdparms *) fd_info[req->fd].pdata)->sane_qhead);

	DBG(4, "sanei_scsi_req_wait: waiting for %p\n", (void *) req);

	issue(req);		/* ensure the command is running */
	if (req->done) {
		issue(req->next);	/* issue next command, if any */
		status = req->status;
	} else {
		sigset_t old_mask;
		if (sg_version < 30000) {
			fd_set readable;

			/* wait for command completion: */
			FD_ZERO(&readable);
			FD_SET(req->fd, &readable);
			select(req->fd + 1, &readable, 0, 0, 0);

			/* now atomically read result and set DONE: */
			old_mask = atomic_begin();
			nread = read(req->fd, &req->sgdata.cdb,
				     req->sgdata.cdb.hdr.reply_len);
			req->done = 1;
			atomic_end(old_mask);
		} else {
			IF_DBG(if (DBG_LEVEL >= 255)
			       system("cat /proc/scsi/sg/debug 1>&2");)

				/* set DONE: */
				nread = 0;	/* unused in this code path */
			req->done = 1;
		}

		if (fd_info[req->fd].pdata)
			((fdparms *) fd_info[req->fd].pdata)->sg_queue_used--;

		/* Now issue next command asap, if any.  We can't do this
		   earlier since the Linux kernel has space for just one big
		   buffer.  */
		issue(req->next);

		DBG(4, "sanei_scsi_req_wait: read %ld bytes\n", (long) nread);

		if (nread < 0) {
			DBG(1,
			    "sanei_scsi_req_wait: read returned %ld (errno=%d)\n",
			    (long) nread, errno);
			status = SANE_STATUS_IO_ERROR;
		} else {
			if (sg_version < 30000) {
				nread -= sizeof(req->sgdata.cdb.hdr);

				/* check for errors, but let the sense_handler decide.... */
				if ((req->sgdata.cdb.hdr.result != 0)
				    ||
				    (((req->sgdata.cdb.hdr.
				       sense_buffer[0] & 0x7f) != 0)
#ifdef HAVE_SG_TARGET_STATUS
				     /* this is messy... Sometimes it happens that we have
				        a valid looking sense buffer, but the DRIVER_SENSE
				        bit is not set. Moreover, we can check this only for
				        not tooo old SG drivers
				      */
				     && (req->sgdata.cdb.hdr.
					 driver_status & DRIVER_SENSE)
#endif
				    )) {
					SANEI_SCSI_Sense_Handler
						handler =
						fd_info[req->fd].
						sense_handler;
					void *arg =
						fd_info[req->fd].
						sense_handler_arg;

					DBG(1,
					    "sanei_scsi_req_wait: SCSI command complained: %s\n",
					    strerror(req->sgdata.cdb.
						     hdr.result));
					DBG(10,
					    "sense buffer: %02x %02x %02x %02x %02x %02x %02x %02x"
					    " %02x %02x %02x %02x %02x %02x %02x %02x\n",
					    req->sgdata.cdb.hdr.
					    sense_buffer[0],
					    req->sgdata.cdb.hdr.
					    sense_buffer[1],
					    req->sgdata.cdb.hdr.
					    sense_buffer[2],
					    req->sgdata.cdb.hdr.
					    sense_buffer[3],
					    req->sgdata.cdb.hdr.
					    sense_buffer[4],
					    req->sgdata.cdb.hdr.
					    sense_buffer[5],
					    req->sgdata.cdb.hdr.
					    sense_buffer[6],
					    req->sgdata.cdb.hdr.
					    sense_buffer[7],
					    req->sgdata.cdb.hdr.
					    sense_buffer[8],
					    req->sgdata.cdb.hdr.
					    sense_buffer[9],
					    req->sgdata.cdb.hdr.
					    sense_buffer[10],
					    req->sgdata.cdb.hdr.
					    sense_buffer[11],
					    req->sgdata.cdb.hdr.
					    sense_buffer[12],
					    req->sgdata.cdb.hdr.
					    sense_buffer[13],
					    req->sgdata.cdb.hdr.
					    sense_buffer[14],
					    req->sgdata.cdb.hdr.
					    sense_buffer[15]);
#ifdef HAVE_SG_TARGET_STATUS
					/* really old SG header do not define target_status,
					   host_status and driver_status
					 */
					DBG(10,
					    "target status: %02x host status: %02x"
					    " driver status: %02x\n",
					    req->sgdata.cdb.hdr.
					    target_status,
					    req->sgdata.cdb.hdr.
					    host_status,
					    req->sgdata.cdb.hdr.
					    driver_status);

					if (req->sgdata.cdb.hdr.host_status == DID_NO_CONNECT || req->sgdata.cdb.hdr.host_status == DID_BUS_BUSY || req->sgdata.cdb.hdr.host_status == DID_TIME_OUT || req->sgdata.cdb.hdr.driver_status == DRIVER_BUSY || req->sgdata.cdb.hdr.target_status == 0x04)	/* BUSY */
#else
					if (req->sgdata.cdb.hdr.
					    result == EBUSY)
#endif
						status = SANE_STATUS_DEVICE_BUSY;
					else if (handler)
						/* sense handler should return SANE_STATUS_GOOD if it
						   decided all was ok afterall */
						status = (*handler)
							(req->fd,
							 req->sgdata.
							 cdb.hdr.
							 sense_buffer, arg);
					else
						status = SANE_STATUS_IO_ERROR;
				}

				/* if we are ok so far, copy over the return data */
				if (status == SANE_STATUS_GOOD) {
					if (req->dst)
						memcpy(req->dst,
						       req->sgdata.
						       cdb.data, nread);

					if (req->dst_len)
						*req->dst_len = nread;
				}
			} else {
				/* check for errors, but let the sense_handler decide.... */
				if (((req->sgdata.sg3.hdr.
				      info & SG_INFO_CHECK) != 0)
				    || ((req->sgdata.sg3.hdr.sb_len_wr > 0)
					&&
					((req->sgdata.sg3.
					  sense_buffer[0] & 0x7f) != 0)
					&& (req->sgdata.sg3.hdr.
					    driver_status & DRIVER_SENSE))) {
					SANEI_SCSI_Sense_Handler
						handler =
						fd_info[req->fd].
						sense_handler;
					void *arg =
						fd_info[req->fd].
						sense_handler_arg;

					DBG(1,
					    "sanei_scsi_req_wait: SCSI command complained: %s\n",
					    strerror(errno));
					DBG(10,
					    "sense buffer: %02x %02x %02x %02x %02x %02x %02x %02x"
					    " %02x %02x %02x %02x %02x %02x %02x %02x\n",
					    req->sgdata.sg3.
					    sense_buffer[0],
					    req->sgdata.sg3.
					    sense_buffer[1],
					    req->sgdata.sg3.
					    sense_buffer[2],
					    req->sgdata.sg3.
					    sense_buffer[3],
					    req->sgdata.sg3.
					    sense_buffer[4],
					    req->sgdata.sg3.
					    sense_buffer[5],
					    req->sgdata.sg3.
					    sense_buffer[6],
					    req->sgdata.sg3.
					    sense_buffer[7],
					    req->sgdata.sg3.
					    sense_buffer[8],
					    req->sgdata.sg3.
					    sense_buffer[9],
					    req->sgdata.sg3.
					    sense_buffer[10],
					    req->sgdata.sg3.
					    sense_buffer[11],
					    req->sgdata.sg3.
					    sense_buffer[12],
					    req->sgdata.sg3.
					    sense_buffer[13],
					    req->sgdata.sg3.
					    sense_buffer[14],
					    req->sgdata.sg3.sense_buffer[15]);
					DBG(10,
					    "target status: %02x host status: %04x"
					    " driver status: %04x\n",
					    req->sgdata.sg3.hdr.
					    status,
					    req->sgdata.sg3.hdr.
					    host_status,
					    req->sgdata.sg3.hdr.
					    driver_status);

					/* the first three tests below are an replacement of the
					   error "classification" as it was with the old SG driver,
					   the fourth test is new.
					 */
					if (req->sgdata.sg3.hdr.host_status == SG_ERR_DID_NO_CONNECT || req->sgdata.sg3.hdr.host_status == SG_ERR_DID_BUS_BUSY || req->sgdata.sg3.hdr.host_status == SG_ERR_DID_TIME_OUT || req->sgdata.sg3.hdr.driver_status == DRIVER_BUSY || req->sgdata.sg3.hdr.masked_status == 0x04)	/* BUSY */
						status = SANE_STATUS_DEVICE_BUSY;
					else if (handler
						 && req->sgdata.sg3.
						 hdr.sb_len_wr)
						/* sense handler should return SANE_STATUS_GOOD if it
						   decided all was ok afterall */
						status = (*handler)
							(req->fd,
							 req->sgdata.
							 sg3.
							 sense_buffer, arg);

					/* status bits INTERMEDIATE and CONDITION MET should not
					   result in an error; neither should reserved bits
					 */
					else if (((req->sgdata.sg3.
						   hdr.status & 0x2a) == 0)
						 && (req->sgdata.sg3.
						     hdr.
						     host_status ==
						     SG_ERR_DID_OK)
						 &&
						 ((req->sgdata.sg3.
						   hdr.
						   driver_status &
						   ~SG_ERR_DRIVER_SENSE)
						  == SG_ERR_DRIVER_OK))
						status = SANE_STATUS_GOOD;
					else
						status = SANE_STATUS_IO_ERROR;
				}
				if (req->sgdata.sg3.hdr.resid) {
					DBG(1,
					    "sanei_scsi_req_wait: SG driver returned resid %i\n",
					    req->sgdata.sg3.hdr.resid);
					DBG(1,
					    "                     NOTE: This value may be bogus\n");
				}
			}
		}
	}
	{
		/* dequeue and release processed request: */
		sigset_t old_mask = atomic_begin();

		((fdparms *) fd_info[req->fd].pdata)->sane_qhead =
			((fdparms *) fd_info[req->fd].pdata)->
			sane_qhead->next;

		if (!((fdparms *) fd_info[req->fd].pdata)->sane_qhead)
			((fdparms *) fd_info[req->fd].pdata)->sane_qtail = 0;
		req->next =
			((fdparms *) fd_info[req->fd].pdata)->sane_free_list;
		((fdparms *) fd_info[req->fd].pdata)->sane_free_list = req;

		atomic_end(old_mask);
	}
	return status;
}

SANE_Status
sanei_scsi_cmd2(int fd,
		const void *cmd, size_t cmd_size,
		const void *src, size_t src_size,
		void *dst, size_t * dst_size)
{
	SANE_Status status;
	void *id;

	status = sanei_scsi_req_enter2(fd, cmd, cmd_size, src,
				       src_size, dst, dst_size, &id);
	if (status != SANE_STATUS_GOOD)
		return status;
	return sanei_scsi_req_wait(id);
}

/* The following code (up to and including sanei_scsi_find_devices() )
   is trying to match device/manufacturer names and/or SCSI addressing
   numbers (i.e. <host,bus,id,lun>) with a sg device file name
   (e.g. /dev/sg3).
*/
#define PROCFILE	"/proc/scsi/scsi"
#define DEVFS_MSK	"/dev/scsi/host%d/bus%d/target%d/lun%d/generic"
#define SCAN_MISSES 5

/* Some <scsi/scsi.h> headers don't have the following define */
#ifndef SCSI_IOCTL_GET_IDLUN
#define SCSI_IOCTL_GET_IDLUN 0x5382
#endif

static int lx_sg_dev_base = -1;
static int lx_devfs = -1;

static const struct lx_device_name_list_tag
{
	const char *prefix;
	char base;
}
lx_dnl[] = {
	{
	"/dev/sg", 0}
	, {
	"/dev/sg", 'a'}
	, {
	"/dev/uk", 0}
	, {
	"/dev/gsc", 0}
};

static int			/* Returns open sg file descriptor, or -1 for no access,
				   or -2 for not found (or other error) */
lx_mk_devicename(int guess_devnum, char *name, size_t name_len)
{
	int dev_fd, k, dnl_len;
	const struct lx_device_name_list_tag *dnp;

	dnl_len = NELEMS(lx_dnl);
	k = ((-1 == lx_sg_dev_base) ? 0 : lx_sg_dev_base);
	for (; k < dnl_len; ++k) {
		dnp = &lx_dnl[k];
		if (dnp->base)
			snprintf(name, name_len, "%s%c", dnp->prefix,
				 dnp->base + guess_devnum);
		else
			snprintf(name, name_len, "%s%d", dnp->prefix,
				 guess_devnum);
		dev_fd = -1;
#ifdef HAVE_RESMGR
		dev_fd = rsm_open_device(name, O_RDWR | O_NONBLOCK);
#endif
		if (dev_fd == -1)
			dev_fd = open(name, O_RDWR | O_NONBLOCK);
		if (dev_fd >= 0) {
			lx_sg_dev_base = k;
			return dev_fd;
		} else if ((EACCES == errno) || (EBUSY == errno)) {
			lx_sg_dev_base = k;
			return -1;
		}
		if (-1 != lx_sg_dev_base)
			return -2;
	}
	return -2;
}

static int			/* Returns 1 for match, else 0 */
lx_chk_id(int dev_fd, int host, int channel, int id, int lun)
{
#ifdef SG_GET_SCSI_ID_FOUND
	struct sg_scsi_id ssid;

	if ((ioctl(dev_fd, SG_GET_SCSI_ID, &ssid) >= 0)) {
		DBG(2, "lx_chk_id: %d,%d  %d,%d  %d,%d  %d,%d\n",
		    host, ssid.host_no, channel, ssid.channel, id,
		    ssid.scsi_id, lun, ssid.lun);
		if ((host == ssid.host_no)
		    && (channel == ssid.channel)
		    && (id == ssid.scsi_id) && (lun == ssid.lun))
			return 1;
		else
			return 0;
	}
#endif
	{
		struct my_scsi_idlun
		{
			int dev_id;
			int host_unique_id;
		}
		my_idlun;
		if (ioctl(dev_fd, SCSI_IOCTL_GET_IDLUN, &my_idlun) >= 0) {
			if (((my_idlun.dev_id & 0xff) == id)
			    && (((my_idlun.dev_id >> 8) & 0xff) == lun)
			    && (((my_idlun.dev_id >> 16) & 0xff) == channel))
				return 1;	/* cheating, assume 'host' number matches */
		}
	}
	return 0;
}

static int			/* Returns 1 if match with 'name' set, else 0 */
lx_scan_sg(int exclude_devnum, char *name, size_t name_len,
	   int host, int channel, int id, int lun)
{
	int dev_fd, k, missed;

	if (-1 == lx_sg_dev_base)
		return 0;
	for (k = 0, missed = 0; (missed < SCAN_MISSES) && (k < 255);
	     ++k, ++missed) {
		DBG(2, "lx_scan_sg: k=%d, exclude=%d, missed=%d\n", k,
		    exclude_devnum, missed);
		if (k == exclude_devnum) {
			missed = 0;
			continue;	/* assumed this one has been checked already */
		}
		if ((dev_fd = lx_mk_devicename(k, name, name_len)) >= 0) {
			missed = 0;
			if (lx_chk_id(dev_fd, host, channel, id, lun)) {
				close(dev_fd);
				return 1;
			}
			close(dev_fd);
		} else if (-1 == dev_fd)
			missed = 0;	/* no permissions but something found */
	}
	return 0;
}

static int			/* Returns 1 if match, else 0 */
lx_chk_devicename(int guess_devnum, char *name,
		  size_t name_len, int host, int channel, int id, int lun)
{
	int dev_fd;

	if (host < 0)
		return 0;
	if (0 != lx_devfs) {	/* simple mapping if we have devfs */
		if (-1 == lx_devfs) {
			if ((dev_fd =
			     lx_mk_devicename(guess_devnum, name,
					      name_len)) >= 0)
				close(dev_fd);	/* hack to load sg driver module */
		}
		snprintf(name, name_len, DEVFS_MSK, host, channel, id, lun);
		dev_fd = open(name, O_RDWR | O_NONBLOCK);
		if (dev_fd >= 0) {
			close(dev_fd);
			lx_devfs = 1;
			DBG(1,
			    "lx_chk_devicename: matched device(devfs): %s\n",
			    name);
			return 1;
		} else if (ENOENT == errno)
			lx_devfs = 0;
	}

	if ((dev_fd = lx_mk_devicename(guess_devnum, name, name_len)) < -1) {	/* no candidate sg device file name found, try /dev/sg0,1 */
		if ((dev_fd = lx_mk_devicename(0, name, name_len)) < -1) {
			if ((dev_fd =
			     lx_mk_devicename(1, name, name_len)) < -1)
				return 0;	/* no luck finding sg fd to open */
		}
	}
	if (dev_fd >= 0) {
/* now check this fd for match on <host, channel, id, lun> */
		if (lx_chk_id(dev_fd, host, channel, id, lun)) {
			close(dev_fd);
			DBG(1,
			    "lx_chk_devicename: matched device(direct): %s\n",
			    name);
			return 1;
		}
		close(dev_fd);
	}
/* if mismatch then call scan algorithm */
	if (lx_scan_sg(guess_devnum, name, name_len, host, channel, id, lun)) {
		DBG(1, "lx_chk_devicename: matched device(scan): %s\n", name);
		return 1;
	}
	return 0;
}

void				/* calls 'attach' function pointer with sg device file name iff match */
sanei_scsi_find_devices(const char *findvendor,
			const char *findmodel,
			const char *findtype, int findbus,
			int findchannel, int findid,
			int findlun, SANE_Status(*attach) (const char *dev))
{
#define FOUND_VENDOR  1
#define FOUND_MODEL   2
#define FOUND_TYPE    4
#define FOUND_REV     8
#define FOUND_HOST    16
#define FOUND_CHANNEL 32
#define FOUND_ID      64
#define FOUND_LUN     128
#define FOUND_ALL     255

	size_t findvendor_len = 0, findmodel_len = 0, findtype_len = 0;
	char vendor[32], model[32], type[32], revision[32];
	int bus, channel, id, lun;

	int number, i, j, definedd;
	char line[256], dev_name[128], *c1, *c2, ctmp;
	const char *string;
	FILE *proc_fp;
	char *end;
	struct
	{
		const char *name;
		size_t name_len;
		int is_int;	/* integer valued? (not a string) */
		union
		{
			void *v;	/* avoids compiler warnings... */
			char *str;
			int *i;
		}
		u;
	}
	param[] = {
		{
			"Vendor:", 7, 0, {
			0}
		}
		, {
			"Model:", 6, 0, {
			0}
		}
		, {
			"Type:", 5, 0, {
			0}
		}
		, {
			"Rev:", 4, 0, {
			0}
		}
		, {
			"scsi", 4, 1, {
			0}
		}
		, {
			"Channel:", 8, 1, {
			0}
		}
		, {
			"Id:", 3, 1, {
			0}
		}
		, {
			"Lun:", 4, 1, {
			0}
		}
	};

	param[0].u.str = vendor;
	param[1].u.str = model;
	param[2].u.str = type;
	param[3].u.str = revision;
	param[4].u.i = &bus;
	param[5].u.i = &channel;
	param[6].u.i = &id;
	param[7].u.i = &lun;

	DBG_INIT();

	proc_fp = fopen(PROCFILE, "r");
	if (!proc_fp) {
		DBG(1, "could not open %s for reading\n", PROCFILE);
		return;
	}

	number = bus = channel = id = lun = -1;

	vendor[0] = model[0] = type[0] = '\0';
	if (findvendor)
		findvendor_len = strlen(findvendor);
	if (findmodel)
		findmodel_len = strlen(findmodel);
	if (findtype)
		findtype_len = strlen(findtype);

	definedd = 0;
	while (!feof(proc_fp)) {
		fgets(line, sizeof(line), proc_fp);
		string = sanei_config_skip_whitespace(line);

		while (*string) {
			for (i = 0; i < NELEMS(param); ++i) {
				if (strncmp
				    (string, param[i].name,
				     param[i].name_len) == 0) {
					string += param[i].name_len;
					/* Make sure that we don't read the next parameter name
					   as a value, if the real value consists only of spaces
					 */
					c2 = string + strlen(string);
					for (j = 0; j < NELEMS(param); ++j) {
						c1 = strstr(string,
							    param[j].name);
						if ((j != i) && c1
						    && (c1 < c2))
							c2 = c1;
					}
					ctmp = *c2;
					*c2 = 0;
					string = sanei_config_skip_whitespace
						(string);

					if (param[i].is_int) {
						if (*string) {
							*param[i].u.
								i =
								strtol
								(string,
								 &end, 10);
							string = (char *)
								end;
						} else
							*param[i].u.i = 0;
					} else {
						strncpy(param[i].u.
							str, string, 32);
						param[i].u.str[31] = '\0';
						/* while (*string && !isspace (*string))
						   ++string;
						 */
					}
					/* string = sanei_config_skip_whitespace (string); */
					*c2 = ctmp;
					string = c2;
					definedd |= 1 << i;

					if (param[i].u.v == &bus) {
						++number;
						definedd = FOUND_HOST;
					}
					break;
				}
			}
			if (i >= NELEMS(param))
				++string;	/* no match */
		}

		if (FOUND_ALL != definedd)
			/* some info is still missing */
			continue;

		definedd = 0;
		if ((!findvendor
		     || strncmp(vendor, findvendor, findvendor_len) == 0)
		    && (!findmodel
			|| strncmp(model, findmodel, findmodel_len) == 0)
		    && (!findtype
			|| strncmp(type, findtype, findtype_len) == 0)
		    && (findbus == -1 || bus == findbus)
		    && (findchannel == -1 || channel == findchannel)
		    && (findid == -1 || id == findid)
		    && (findlun == -1 || lun == findlun)) {
			DBG(2,
			    "sanei_scsi_find_devices: vendor=%s model=%s type=%s\n\t"
			    "bus=%d chan=%d id=%d lun=%d  num=%d\n",
			    findvendor, findmodel, findtype, bus,
			    channel, id, lun, number);
			if (lx_chk_devicename
			    (number, dev_name, sizeof(dev_name), bus,
			     channel, id, lun)
			    && ((*attach) (dev_name) != SANE_STATUS_GOOD)) {
				fclose(proc_fp);
				return;
			}
		}
		vendor[0] = model[0] = type[0] = 0;
		bus = channel = id = lun = -1;
	}
	fclose(proc_fp);
}

#ifndef WE_HAVE_ASYNC_SCSI

SANE_Status
sanei_scsi_req_enter2(int fd, const void *cmd,
		      size_t cmd_size, const void *src,
		      size_t src_size, void *dst,
		      size_t * dst_size, void **idp)
{
	return sanei_scsi_cmd2(fd, cmd, cmd_size, src, src_size, dst,
			       dst_size);
}

SANE_Status
sanei_scsi_req_wait(void *id)
{
	return SANE_STATUS_GOOD;
}

void
sanei_scsi_req_flush_all(void)
{
}

void
sanei_scsi_req_flush_all_extended(int fd)
{
}

#endif /* WE_HAVE_ASYNC_SCSI */

SANE_Status
sanei_scsi_req_enter(int fd,
		     const void *src, size_t src_size,
		     void *dst, size_t * dst_size, void **idp)
{
	size_t cmd_size = CDB_SIZE(*(const char *) src);

	if (dst_size && *dst_size)
		assert(src_size == cmd_size);
	else
		assert(src_size >= cmd_size);

	return sanei_scsi_req_enter2(fd, src, cmd_size,
				     (const char *) src + cmd_size,
				     src_size - cmd_size, dst, dst_size, idp);
}

SANE_Status
sanei_scsi_cmd(int fd, const void *src, size_t src_size,
	       void *dst, size_t * dst_size)
{
	size_t cmd_size = CDB_SIZE(*(const char *) src);

	if (dst_size && *dst_size)
		assert(src_size == cmd_size);
	else
		assert(src_size >= cmd_size);

	return sanei_scsi_cmd2(fd, src, cmd_size,
			       (const char *) src + cmd_size,
			       src_size - cmd_size, dst, dst_size);
}
