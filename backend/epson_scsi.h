#ifndef _EPSON_SCSI_H_
#define _EPSON_SCSI_H_

#include <sys/types.h>
#include <sane/sane.h>

#define TEST_UNIT_READY_COMMAND	(0x00)
#define READ_6_COMMAND			(0x08)
#define WRITE_6_COMMAND			(0x0a)
#define INQUIRY_COMMAND			(0x12)
#define TYPE_PROCESSOR			(0x03)

#define INQUIRY_BUF_SIZE		(36)

SANE_Status sanei_epson_scsi_sense_handler(int scsi_fd, u_char * result,
					   void *arg);
SANE_Status sanei_epson_scsi_inquiry(int fd, int page_code, void *buf,
				     size_t * buf_size);
int sanei_epson_scsi_read(int fd, void *buf, size_t buf_size,
			  SANE_Status * status);
int sanei_epson_scsi_write(int fd, const void *buf, size_t buf_size,
			   SANE_Status * status);

#endif
