/* HP Scanjet 3900 series - USB layer

   Copyright (C) 2005-2008 Jonathan Bravo Lopez <jkdsoft@gmail.com>

   This file is part of the SANE package.

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

   As a special exception, the authors of SANE give permission for
   additional uses of the libraries contained in this release of SANE.

   The exception is that, if you link a SANE library with other files
   to produce an executable, this does not by itself cause the
   resulting executable to be covered by the GNU General Public
   License.  Your use of that executable is in no way restricted on
   account of linking the SANE library code into it.

   This exception does not, however, invalidate any other reasons why
   the executable file might be covered by the GNU General Public
   License.

   If you submit changes to SANE to the maintainers to be included in
   a subsequent release, you agree by submitting the changes that
   those changes may be distributed with this exception intact.

   If you write modifications of your own for SANE, it is your choice
   whether to permit this exception to apply to your modifications.
   If you do not wish that, delete this exception notice.
*/

#ifndef USBLAYER

#define USBLAYER

#define TIMEOUT      1000
#define BLK_READ_EP  0x81
#define BLK_WRITE_EP 0x02

int dataline_count = 0;

/* USB layer commands */
static int usb_ctl_write(USB_Handle usb_handle, int address,
			      SANE_Byte * buffer, int size,
			      int index);
static int usb_ctl_read(USB_Handle usb_handle, int address,
			     SANE_Byte * buffer, int size,
			     int index);

/* Higher level commands*/

static int IRead_Byte(USB_Handle usb_handle, int address,
			   SANE_Byte * data, int index);
static int IRead_Word(USB_Handle usb_handle, int address,
			   int * data, int index);
static int IRead_Integer(USB_Handle usb_handle, int address,
			      int * data, int index);
static int IRead_Buffer(USB_Handle usb_handle, int address,
			     SANE_Byte * buffer, int size,
			     int index);
static int IWrite_Byte(USB_Handle usb_handle, int address,
			    SANE_Byte data, int index1, int index2);
static int IWrite_Word(USB_Handle usb_handle, int address,
			    int data, int index);
static int IWrite_Integer(USB_Handle usb_handle, int address,
			       int data, int index);
static int IWrite_Buffer(USB_Handle usb_handle, int address,
			      SANE_Byte * buffer, int size,
			      int index);

static int Read_Byte(USB_Handle usb_handle, int address,
			  SANE_Byte * data);
static int Read_Word(USB_Handle usb_handle, int address,
			  int * data);
static int Read_Integer(USB_Handle usb_handle, int address,
			     int * data);
static int Read_Buffer(USB_Handle usb_handle, int address,
			    SANE_Byte * buffer, int size);
static int Read_Bulk(USB_Handle usb_handle, SANE_Byte * buffer,
			  size_t size);
static int Write_Byte(USB_Handle usb_handle, int address,
			   SANE_Byte data);
static int Write_Word(USB_Handle usb_handle, int address,
			   int data);
/*static int  Write_Integer  (USB_Handle usb_handle, int address, int data);*/
static int Write_Buffer(USB_Handle usb_handle, int address,
			     SANE_Byte * buffer, int size);
static int Write_Bulk(USB_Handle usb_handle, SANE_Byte * buffer,
			   int size);

static int show_buffer(int level, SANE_Byte * buffer,
			    int size);

/* Implementation */

static int
IWrite_Byte(USB_Handle usb_handle, int address, SANE_Byte data,
	    int index1, int index2)
{
	int rst = ERROR;
	SANE_Byte buffer[2] = { 0x00, 0x00 };

	if (usb_ctl_read(usb_handle, address + 1, buffer, 0x02, index1) == 2) {
		buffer[1] = (buffer[0] & 0xff);
		buffer[0] = (data & 0xff);

		if (usb_ctl_write(usb_handle, address, buffer, 0x02, index2)
		    == 2)
			rst = OK;
	}

	return rst;
}

static int
IWrite_Word(USB_Handle usb_handle, int address, int data,
	    int index)
{
	int rst = ERROR;
	SANE_Byte buffer[2];

	buffer[0] = (data & 0xff);
	buffer[1] = ((data >> 8) & 0xff);

	if (usb_ctl_write(usb_handle, address, buffer, 0x02, index) == 2)
		rst = OK;

	return rst;
}

static int
IWrite_Integer(USB_Handle usb_handle, int address, int data,
	       int index)
{
	int rst = ERROR;
	SANE_Byte buffer[4];

	buffer[0] = (data & 0xff);
	buffer[1] = ((data >> 8) & 0xff);
	buffer[2] = ((data >> 16) & 0xff);
	buffer[3] = ((data >> 24) & 0xff);

	if (usb_ctl_write(usb_handle, address, buffer, 0x04, index) == 4)
		rst = OK;

	return rst;
}

static int
IWrite_Buffer(USB_Handle usb_handle, int address, SANE_Byte * buffer,
	      int size, int index)
{
	int ret = ERROR;

	if (!((buffer == NULL) && (size > 0)))
		if (usb_ctl_write(usb_handle, address, buffer, size, index) ==
		    size)
			ret = OK;

	return ret;
}

static int
IRead_Byte(USB_Handle usb_handle, int address, SANE_Byte * data,
	   int index)
{
	SANE_Byte buffer[2] = { 0x00, 0x00 };
	int ret = ERROR;

	if (data != NULL)
		if (usb_ctl_read(usb_handle, address, buffer, 0x02, index) ==
		    2) {
			*data = (SANE_Byte) (buffer[0] & 0xff);
			ret = OK;
		}

	return ret;
}

static int
IRead_Word(USB_Handle usb_handle, int address, int * data,
	   int index)
{
	SANE_Byte buffer[2] = { 0x00, 0x00 };
	int ret = ERROR;

	if (data != NULL)
		if (usb_ctl_read(usb_handle, address, buffer, 0x02, index) ==
		    2) {
			*data = ((buffer[1] << 8) & 0xffff) +
				(buffer[0] & 0xff);
			ret = OK;
		}

	return ret;
}

static int
IRead_Integer(USB_Handle usb_handle, int address, int * data,
	      int index)
{
	SANE_Byte buffer[4] = { 0x00, 0x00, 0x00, 0x00 };
	int ret = ERROR;

	if (data != NULL) {
		*data = 0;
		if (usb_ctl_read(usb_handle, address, buffer, 0x04, index) ==
		    4) {
			int C;
			for (C = 3; C >= 0; C--)
				*data = ((*data << 8) +
					 (buffer[C] & 0xff)) & 0xffffffff;
			ret = OK;
		}
	}

	return ret;
}

static int
IRead_Buffer(USB_Handle usb_handle, int address, SANE_Byte * buffer,
	     int size, int index)
{
	int ret = ERROR;

	if (buffer != NULL)
		if (usb_ctl_read(usb_handle, address, buffer, size, index) ==
		    size)
			ret = OK;

	return ret;
}

static int
Write_Byte(USB_Handle usb_handle, int address, SANE_Byte data)
{
	return IWrite_Byte(usb_handle, address, data, 0x100, 0);
}

static int
Write_Word(USB_Handle usb_handle, int address, int data)
{
	return IWrite_Word(usb_handle, address, data, 0);
}

/*static int Write_Integer(USB_Handle usb_handle, int address, int data)
{
	return IWrite_Integer(usb_handle, address, data, 0);
}*/

static int
Write_Buffer(USB_Handle usb_handle, int address, SANE_Byte * buffer,
	     int size)
{
	return IWrite_Buffer(usb_handle, address, buffer, size, 0);
}

static int
Read_Byte(USB_Handle usb_handle, int address, SANE_Byte * data)
{
	return IRead_Byte(usb_handle, address, data, 0x100);
}

static int
Read_Word(USB_Handle usb_handle, int address, int * data)
{
	return IRead_Word(usb_handle, address, data, 0x100);
}

static int
Read_Integer(USB_Handle usb_handle, int address, int * data)
{
	return IRead_Integer(usb_handle, address, data, 0x100);
}

static int
Read_Buffer(USB_Handle usb_handle, int address, SANE_Byte * buffer,
	    int size)
{
	return IRead_Buffer(usb_handle, address, buffer, size, 0x100);
}

static int
Write_Bulk(USB_Handle usb_handle, SANE_Byte * buffer, int size)
{
	int rst = ERROR;

	if (buffer != NULL) {
		dataline_count++;
		DBG(DBG_CTL, "%06i BLK DO: %i. bytes\n", dataline_count,
		    size);
		show_buffer(4, buffer, size);

#ifdef STANDALONE
		if (usb_handle != NULL)
			if (usb_bulk_write
			    (usb_handle, BLK_WRITE_EP, (char *) buffer, size,
			     TIMEOUT) == size)
				rst = OK;
#else
		if (usb_handle != -1) {
			size_t mysize = size;
			if (sanei_usb_write_bulk(usb_handle, buffer, &mysize)
			    == SANE_STATUS_GOOD)
				rst = OK;
		}
#endif
	}

	if (rst != OK)
		DBG(DBG_CTL, "             : Write_Bulk error\n");

	return rst;
}

static int
Read_Bulk(USB_Handle usb_handle, SANE_Byte * buffer, size_t size)
{
	int rst = ERROR;

	if (buffer != NULL) {
		dataline_count++;
		DBG(DBG_CTL, "%06i BLK DI: Buffer length = %lu. bytes\n",
		    dataline_count, (u_long) size);

#ifdef STANDALONE
		if (usb_handle != NULL)
			rst = usb_bulk_read(usb_handle, BLK_READ_EP,
					    (char *) buffer, size, TIMEOUT);
#else
		if (usb_handle != -1)
			if (sanei_usb_read_bulk(usb_handle, buffer, &size) ==
			    SANE_STATUS_GOOD)
				rst = size;
#endif
	}

	if (rst < 0)
		DBG(DBG_CTL, "             : Read_Bulk error\n");
	else
		show_buffer(4, buffer, rst);

	return rst;
}

static int
usb_ctl_write(USB_Handle usb_handle, int address, SANE_Byte * buffer,
	      int size, int index)
{
	int rst = ERROR;

	dataline_count++;
	DBG(DBG_CTL, "%06i CTL DO: 40 04 %04x %04x %04x\n",
	    dataline_count, address & 0xffff, index, size);
	show_buffer(DBG_CTL, buffer, size);

#ifdef STANDALONE
	if (usb_handle != NULL)
		rst = usb_control_msg(usb_handle, 0x40,	/* Request type */
				      0x04,	/* Request      */
				      address,	/* Value        */
				      index,	/* Index        */
				      (char *) buffer,	/* Buffer       */
				      size,	/* Size         */
				      TIMEOUT);
#else
	if (usb_handle != -1) {
		if (sanei_usb_control_msg(usb_handle, 0x40,	/* Request type */
					  0x04,	/* Request      */
					  address,	/* Value        */
					  index,	/* Index        */
					  size,	/* Size         */
					  buffer)	/* Buffer       */
		    == SANE_STATUS_GOOD)
			rst = size;
		else
			rst = -1;
	}
#endif

	if (rst < 0)
		DBG(DBG_CTL, "             : Error, returned %i\n", rst);

	return rst;
}

static int
usb_ctl_read(USB_Handle usb_handle, int address, SANE_Byte * buffer,
	     int size, int index)
{
	int rst;

	rst = ERROR;

	dataline_count++;
	DBG(DBG_CTL, "%06i CTL DI: c0 04 %04x %04x %04x\n",
	    dataline_count, address & 0xffff, index, size);

#ifdef STANDALONE
	if (usb_handle != NULL)
		rst = usb_control_msg(usb_handle, 0xc0,	/* Request type */
				      0x04,	/* Request      */
				      address,	/* Value        */
				      index,	/* Index        */
				      (char *) buffer,	/* Buffer       */
				      size,	/* Size         */
				      TIMEOUT);
#else
	if (usb_handle != -1) {
		if (sanei_usb_control_msg(usb_handle, 0xc0,	/* Request type */
					  0x04,	/* Request      */
					  address,	/* Value        */
					  index,	/* Index        */
					  size,	/* Size         */
					  buffer)	/* Buffer       */
		    == SANE_STATUS_GOOD)
			rst = size;
		else
			rst = -1;
	}
#endif

	if (rst < 0)
		DBG(DBG_CTL, "             : Error, returned %i\n", rst);
	else
		show_buffer(DBG_CTL, buffer, rst);

	return rst;
}

static int
show_buffer(int level, SANE_Byte * buffer, int size)
{
	if (DBG_LEVEL >= level) {
		char *sline = NULL;
		char *sdata = NULL;
		int cont, data, offset = 0, col = 0;

		if ((size > 0) && (buffer != NULL)) {
			sline = (char *) malloc(256);
			if (sline != NULL) {
				sdata = (char *) malloc(256);
				if (sdata != NULL) {
					bzero(sline, 256);
					for (cont = 0; cont < size; cont++) {
						if (col == 0) {
							if (cont == 0)
								snprintf(sline, 255, "           BF: ");
							else
								snprintf(sline, 255, "               ");
						}
						data = (buffer[cont] & 0xff);
						snprintf(sdata, 255, "%02x ",
							 data);
						sline = strcat(sline, sdata);
						col++;
						offset++;
						if (col == 8) {
							col = 0;
							snprintf(sdata, 255,
								 " : %i\n",
								 offset - 8);
							sline = strcat(sline,
								       sdata);
							DBG(level, "%s",
							    sline);
							bzero(sline, 256);
						}
					}
					if (col > 0) {
						for (cont = col; cont < 8;
						     cont++) {
							snprintf(sdata, 255,
								 "-- ");
							sline = strcat(sline,
								       sdata);
							offset++;
						}
						snprintf(sdata, 255,
							 " : %i\n",
							 offset - 8);
						sline = strcat(sline, sdata);
						DBG(level, "%s", sline);
						bzero(sline, 256);
					}
					free(sdata);
				}
				free(sline);
			}
		} else
			DBG(level, "           BF: Empty buffer\n");
	}
	return OK;
}
#endif /*USBLAYER*/
