/* sane - Scanner Access Now Easy.

   Copyright (C) 2002 Frank Zago (sane at zago dot net)

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

/* 
	$Id: leo.h,v 1.4 2005-07-07 11:55:42 fzago-guest Exp $
*/

/* Commands supported by the scanner. */
#define SCSI_TEST_UNIT_READY			0x00
#define SCSI_INQUIRY					0x12
#define SCSI_SCAN						0x1b
#define SCSI_SET_WINDOW					0x24
#define SCSI_READ_10					0x28
#define SCSI_SEND_10					0x2a
#define SCSI_REQUEST_SENSE				0x03
#define SCSI_GET_DATA_BUFFER_STATUS		0x34

typedef struct
{
  unsigned char data[16];
  int len;
}
CDB;


/* Set a specific bit depending on a boolean.
 *   MKSCSI_BIT(TRUE, 3) will generate 0x08. */
#define MKSCSI_BIT(bit, pos) ((bit)? 1<<(pos): 0)

/* Set a value in a range of bits.
 *   MKSCSI_I2B(5, 3, 5) will generate 0x28 */
#define MKSCSI_I2B(bits, pos_b, pos_e) ((bits) << (pos_b) & ((1<<((pos_e)-(pos_b)+1))-1))

/* Store an integer in 2, 3 or 4 byte in an array. */
#define Ito16(val, buf) { \
 ((unsigned char *)buf)[0] = ((val) >> 8) & 0xff; \
 ((unsigned char *)buf)[1] = ((val) >> 0) & 0xff; \
}

#define Ito24(val, buf) { \
 ((unsigned char *)buf)[0] = ((val) >> 16) & 0xff; \
 ((unsigned char *)buf)[1] = ((val) >>  8) & 0xff; \
 ((unsigned char *)buf)[2] = ((val) >>  0) & 0xff; \
}

#define Ito32(val, buf) { \
 ((unsigned char *)buf)[0] = ((val) >> 24) & 0xff; \
 ((unsigned char *)buf)[1] = ((val) >> 16) & 0xff; \
 ((unsigned char *)buf)[2] = ((val) >>  8) & 0xff; \
 ((unsigned char *)buf)[3] = ((val) >>  0) & 0xff; \
}

#define MKSCSI_GET_DATA_BUFFER_STATUS(cdb, wait, buflen) \
	cdb.data[0] = SCSI_GET_DATA_BUFFER_STATUS; \
	cdb.data[1] = MKSCSI_BIT(wait, 0); \
	cdb.data[2] = 0; \
	cdb.data[3] = 0; \
	cdb.data[4] = 0; \
	cdb.data[5] = 0; \
	cdb.data[6] = 0; \
	cdb.data[7] = (((buflen) >>  8) & 0xff); \
	cdb.data[8] = (((buflen) >>  0) & 0xff); \
	cdb.data[9] = 0; \
	cdb.len = 10;

#define MKSCSI_INQUIRY(cdb, buflen) \
	cdb.data[0] = SCSI_INQUIRY; \
	cdb.data[1] = 0; \
	cdb.data[2] = 0; \
	cdb.data[3] = 0; \
	cdb.data[4] = buflen; \
	cdb.data[5] = 0; \
	cdb.len = 6;

#define MKSCSI_SCAN(cdb) \
	cdb.data[0] = SCSI_SCAN; \
	cdb.data[1] = 0; \
	cdb.data[2] = 0; \
	cdb.data[3] = 0; \
	cdb.data[4] = 0; \
	cdb.data[5] = 0; \
	cdb.len = 6;

#define MKSCSI_SEND_10(cdb, dtc, dtq, buflen) \
	cdb.data[0] = SCSI_SEND_10; \
	cdb.data[1] = 0; \
	cdb.data[2] = (dtc); \
	cdb.data[3] = 0; \
	cdb.data[4] = (((dtq) >> 8) & 0xff); \
	cdb.data[5] = (((dtq) >> 0) & 0xff); \
	cdb.data[6] = (((buflen) >> 16) & 0xff); \
	cdb.data[7] = (((buflen) >>  8) & 0xff); \
	cdb.data[8] = (((buflen) >>  0) & 0xff); \
	cdb.data[9] = 0; \
	cdb.len = 10;

#define MKSCSI_SET_WINDOW(cdb, buflen) \
	cdb.data[0] = SCSI_SET_WINDOW; \
	cdb.data[1] = 0; \
	cdb.data[2] = 0; \
	cdb.data[3] = 0; \
	cdb.data[4] = 0; \
	cdb.data[5] = 0; \
	cdb.data[6] = (((buflen) >> 16) & 0xff); \
	cdb.data[7] = (((buflen) >>  8) & 0xff); \
	cdb.data[8] = (((buflen) >>  0) & 0xff); \
	cdb.data[9] = 0; \
	cdb.len = 10;

#define MKSCSI_READ_10(cdb, dtc, dtq, buflen) \
	cdb.data[0] = SCSI_READ_10; \
	cdb.data[1] = 0; \
	cdb.data[2] = (dtc); \
	cdb.data[3] = 0; \
	cdb.data[4] = (((dtq) >> 8) & 0xff); \
	cdb.data[5] = (((dtq) >> 0) & 0xff); \
	cdb.data[6] = (((buflen) >> 16) & 0xff); \
	cdb.data[7] = (((buflen) >>  8) & 0xff); \
	cdb.data[8] = (((buflen) >>  0) & 0xff); \
	cdb.data[9] = 0; \
	cdb.len = 10;

#define MKSCSI_REQUEST_SENSE(cdb, buflen) \
	cdb.data[0] = SCSI_REQUEST_SENSE; \
	cdb.data[1] = 0; \
	cdb.data[2] = 0; \
	cdb.data[3] = 0; \
	cdb.data[4] = (buflen); \
	cdb.data[5] = 0; \
	cdb.len = 6;

#define MKSCSI_TEST_UNIT_READY(cdb) \
	cdb.data[0] = SCSI_TEST_UNIT_READY; \
	cdb.data[1] = 0; \
	cdb.data[2] = 0; \
	cdb.data[3] = 0; \
	cdb.data[4] = 0; \
	cdb.data[5] = 0; \
	cdb.len = 6;

/*--------------------------------------------------------------------------*/

static int
getbitfield (unsigned char *pageaddr, int mask, int shift)
{
  return ((*pageaddr >> shift) & mask);
}

/* defines for request sense return block */
#define get_RS_information_valid(b)       getbitfield(b + 0x00, 1, 7)
#define get_RS_error_code(b)              getbitfield(b + 0x00, 0x7f, 0)
#define get_RS_filemark(b)                getbitfield(b + 0x02, 1, 7)
#define get_RS_EOM(b)                     getbitfield(b + 0x02, 1, 6)
#define get_RS_ILI(b)                     getbitfield(b + 0x02, 1, 5)
#define get_RS_sense_key(b)               getbitfield(b + 0x02, 0x0f, 0)
#define get_RS_information(b)             getnbyte(b+0x03, 4)
#define get_RS_additional_length(b)       b[0x07]
#define get_RS_ASC(b)                     b[0x0c]
#define get_RS_ASCQ(b)                    b[0x0d]
#define get_RS_SKSV(b)                    getbitfield(b+0x0f,1,7)

/*--------------------------------------------------------------------------*/

#define MM_PER_INCH     25.4
#define mmToIlu(mm) (((mm) * dev->x_resolution) / MM_PER_INCH)
#define iluToMm(ilu) (((ilu) * MM_PER_INCH) / dev->x_resolution)

/*--------------------------------------------------------------------------*/

#define GAMMA_LENGTH 0x100	/* number of value per color */

/*--------------------------------------------------------------------------*/

enum Leo_Option
{
  /* Must come first */
  OPT_NUM_OPTS = 0,

  OPT_MODE_GROUP,
  OPT_MODE,			/* scanner modes */
  OPT_RESOLUTION,		/* X and Y resolution */

  OPT_GEOMETRY_GROUP,
  OPT_TL_X,			/* upper left X */
  OPT_TL_Y,			/* upper left Y */
  OPT_BR_X,			/* bottom right X */
  OPT_BR_Y,			/* bottom right Y */

  OPT_ENHANCEMENT_GROUP,
  OPT_CUSTOM_GAMMA,		/* Use the custom gamma tables */
  OPT_GAMMA_VECTOR_R,		/* Custom Red gamma table */
  OPT_GAMMA_VECTOR_G,		/* Custom Green Gamma table */
  OPT_GAMMA_VECTOR_B,		/* Custom Blue Gamma table */
  OPT_GAMMA_VECTOR_GRAY,	/* Custom Gray Gamma table */
  OPT_HALFTONE_PATTERN,		/* Halftone pattern */

  OPT_PREVIEW,			/* preview mode */

  /* must come last: */
  OPT_NUM_OPTIONS
};

/*--------------------------------------------------------------------------*/

/* 
 * Scanner supported by this backend. 
 */
struct scanners_supported
{
  int scsi_type;
  char scsi_vendor[9];
  char scsi_product[17];

  const char *real_vendor;
  const char *real_product;
};

/*--------------------------------------------------------------------------*/

#define BLACK_WHITE_STR		SANE_I18N("Black & White")
#define GRAY_STR			SANE_I18N("Grayscale")
#define COLOR_STR			SANE_I18N("Color")

/*--------------------------------------------------------------------------*/

/* Define a scanner occurence. */
typedef struct Leo_Scanner
{
  struct Leo_Scanner *next;
  SANE_Device sane;

  char *devicename;
  int sfd;			/* device handle */

  /* Infos from inquiry. */
  char scsi_type;
  char scsi_vendor[9];
  char scsi_product[17];
  char scsi_version[5];

  SANE_Range res_range;

  int x_resolution_max;		/* maximum X dpi */
  int y_resolution_max;		/* maximum Y dpi */

  /* SCSI handling */
  size_t buffer_size;		/* size of the buffer */
  SANE_Byte *buffer;		/* for SCSI transfer. */


  /* Scanner infos. */
  const struct scanners_supported *def;	/* default options for that scanner */

  /* Scanning handling. */
  int scanning;			/* TRUE if a scan is running. */
  int x_resolution;		/* X resolution in DPI */
  int y_resolution;		/* Y resolution in DPI */
  int x_tl;			/* X top left */
  int y_tl;			/* Y top left */
  int x_br;			/* X bottom right */
  int y_br;			/* Y bottom right */
  int width;			/* width of the scan area in mm */
  int length;			/* length of the scan area in mm */
  int pass;			/* current pass number */

  enum
  {
    LEO_BW,
    LEO_HALFTONE,
    LEO_GRAYSCALE,
    LEO_COLOR
  }
  scan_mode;

  int depth;			/* depth per color */

  size_t bytes_left;		/* number of bytes left to give to the backend */

  size_t real_bytes_left;	/* number of bytes left the scanner will return. */

  SANE_Byte *image;		/* keep the raw image here */
  size_t image_size;		/* allocated size of image */
  size_t image_begin;		/* first significant byte in image */
  size_t image_end;		/* first free byte in image */

  SANE_Parameters params;

  /* Options */
  SANE_Option_Descriptor opt[OPT_NUM_OPTIONS];
  Option_Value val[OPT_NUM_OPTIONS];

  /* Gamma table. 1 array per colour. */
  SANE_Word gamma_R[GAMMA_LENGTH];
  SANE_Word gamma_G[GAMMA_LENGTH];
  SANE_Word gamma_B[GAMMA_LENGTH];
  SANE_Word gamma_GRAY[GAMMA_LENGTH];
}
Leo_Scanner;

/*--------------------------------------------------------------------------*/

/* Debug levels. 
 * Should be common to all backends. */

#define DBG_error0  0
#define DBG_error   1
#define DBG_sense   2
#define DBG_warning 3
#define DBG_inquiry 4
#define DBG_info    5
#define DBG_info2   6
#define DBG_proc    7
#define DBG_read    8
#define DBG_sane_init   10
#define DBG_sane_proc   11
#define DBG_sane_info   12
#define DBG_sane_option 13

/*--------------------------------------------------------------------------*/

/* 32 bits from an array to an integer (eg ntohl). */
#define B32TOI(buf) \
	((((unsigned char *)buf)[0] << 24) | \
	 (((unsigned char *)buf)[1] << 16) | \
	 (((unsigned char *)buf)[2] <<  8) |  \
	 (((unsigned char *)buf)[3] <<  0))

#define B24TOI(buf) \
	((((unsigned char *)buf)[0] << 16) | \
	 (((unsigned char *)buf)[1] <<  8) | \
	 (((unsigned char *)buf)[2] <<  0))

#define B16TOI(buf) \
	((((unsigned char *)buf)[0] <<  8) | \
	 (((unsigned char *)buf)[1] <<  0))

/*--------------------------------------------------------------------------*/

/* Downloadable halftone patterns */
typedef unsigned char halftone_pattern_t[256];

static const halftone_pattern_t haltfone_pattern_diamond = {
  0xF0, 0xE0, 0x60, 0x20, 0x00, 0x19, 0x61, 0xD8, 0xF0, 0xE0, 0x60, 0x20,
  0x00, 0x19, 0x61, 0xD8,
  0xC0, 0xA0, 0x88, 0x40, 0x38, 0x58, 0x80, 0xB8, 0xC0, 0xA0, 0x88, 0x40,
  0x38, 0x58, 0x80, 0xB8,
  0x30, 0x50, 0x98, 0xB0, 0xC8, 0xA8, 0x90, 0x48, 0x30, 0x50, 0x98, 0xB0,
  0xC8, 0xA8, 0x90, 0x48,
  0x08, 0x10, 0x70, 0xD0, 0xF8, 0xE8, 0x68, 0x28, 0x08, 0x10, 0x70, 0xD0,
  0xF8, 0xE8, 0x68, 0x28,
  0x00, 0x18, 0x78, 0xD8, 0xF0, 0xE0, 0x60, 0x20, 0x00, 0x18, 0x78, 0xD8,
  0xF0, 0xE0, 0x60, 0x20,
  0x38, 0x58, 0x80, 0xB8, 0xC0, 0xA0, 0x88, 0x40, 0x38, 0x58, 0x80, 0xB8,
  0xC0, 0xA0, 0x88, 0x40,
  0xC8, 0xA8, 0x90, 0x48, 0x30, 0x50, 0x9B, 0xB0, 0xC8, 0xA8, 0x90, 0x48,
  0x30, 0x50, 0x9B, 0xB0,
  0xF8, 0xE8, 0x68, 0x28, 0x08, 0x18, 0x70, 0xD0, 0xF8, 0xE8, 0x68, 0x28,
  0x08, 0x18, 0x70, 0xD0,
  0xF0, 0xE0, 0x60, 0x20, 0x00, 0x19, 0x61, 0xD8, 0xF0, 0xE0, 0x60, 0x20,
  0x00, 0x19, 0x61, 0xD8,
  0xC0, 0xA0, 0x88, 0x40, 0x38, 0x58, 0x80, 0xB8, 0xC0, 0xA0, 0x88, 0x40,
  0x38, 0x58, 0x80, 0xB8,
  0x30, 0x50, 0x98, 0xB0, 0xC8, 0xA8, 0x90, 0x48, 0x30, 0x50, 0x98, 0xB0,
  0xC8, 0xA8, 0x90, 0x48,
  0x08, 0x10, 0x70, 0xD0, 0xF8, 0xE8, 0x68, 0x28, 0x08, 0x10, 0x70, 0xD0,
  0xF8, 0xE8, 0x68, 0x28,
  0x00, 0x18, 0x78, 0xD8, 0xF0, 0xE0, 0x60, 0x20, 0x00, 0x18, 0x78, 0xD8,
  0xF0, 0xE0, 0x60, 0x20,
  0x38, 0x58, 0x80, 0xB8, 0xC0, 0xA0, 0x88, 0x40, 0x38, 0x58, 0x80, 0xB8,
  0xC0, 0xA0, 0x88, 0x40,
  0xC8, 0xA8, 0x90, 0x48, 0x30, 0x50, 0x9B, 0xB0, 0xC8, 0xA8, 0x90, 0x48,
  0x30, 0x50, 0x9B, 0xB0,
  0xF8, 0xE8, 0x68, 0x28, 0x08, 0x18, 0x70, 0xD0, 0xF8, 0xE8, 0x68, 0x28,
  0x08, 0x18, 0x70, 0xD0
};

static const halftone_pattern_t haltfone_pattern_8x8_Coarse_Fatting = {
  0x12, 0x3A, 0xD2, 0xEA, 0xE2, 0xB6, 0x52, 0x1A, 0x12, 0x3A, 0xD2, 0xEA,
  0xE2, 0xB6, 0x52, 0x1A,
  0x42, 0x6A, 0x9A, 0xCA, 0xC2, 0x92, 0x72, 0x4A, 0x42, 0x6A, 0x9A, 0xCA,
  0xC2, 0x92, 0x72, 0x4A,
  0xAE, 0x8E, 0x7E, 0x26, 0x2E, 0x66, 0x86, 0xA6, 0xAE, 0x8E, 0x7E, 0x26,
  0x2E, 0x66, 0x86, 0xA6,
  0xFA, 0xBA, 0x5E, 0x06, 0x0E, 0x36, 0xDE, 0xF6, 0xFA, 0xBA, 0x5E, 0x06,
  0x0E, 0x36, 0xDE, 0xF6,
  0xE6, 0xBE, 0x56, 0x1E, 0x16, 0x3E, 0xD6, 0xEE, 0xE6, 0xBE, 0x56, 0x1E,
  0x16, 0x3E, 0xD6, 0xEE,
  0xC6, 0x96, 0x76, 0x4E, 0x46, 0x6E, 0x9E, 0xCE, 0xC6, 0x96, 0x76, 0x4E,
  0x46, 0x6E, 0x9E, 0xCE,
  0x2A, 0x62, 0x82, 0xA2, 0xAA, 0x8A, 0x7A, 0x22, 0x2A, 0x62, 0x82, 0xA2,
  0xAA, 0x8A, 0x7A, 0x22,
  0x0A, 0x32, 0xDA, 0xF2, 0xFE, 0xB2, 0x5A, 0x02, 0x0A, 0x32, 0xDA, 0xF2,
  0xFE, 0xB2, 0x5A, 0x02,
  0x12, 0x3A, 0xD2, 0xEA, 0xE2, 0xB6, 0x52, 0x1A, 0x12, 0x3A, 0xD2, 0xEA,
  0xE2, 0xB6, 0x52, 0x1A,
  0x42, 0x6A, 0x9A, 0xCA, 0xC2, 0x92, 0x72, 0x4A, 0x42, 0x6A, 0x9A, 0xCA,
  0xC2, 0x92, 0x72, 0x4A,
  0xAE, 0x8E, 0x7E, 0x26, 0x2E, 0x66, 0x86, 0xA6, 0xAE, 0x8E, 0x7E, 0x26,
  0x2E, 0x66, 0x86, 0xA6,
  0xFA, 0xBA, 0x5E, 0x06, 0x0E, 0x36, 0xDE, 0xF6, 0xFA, 0xBA, 0x5E, 0x06,
  0x0E, 0x36, 0xDE, 0xF6,
  0xE6, 0xBE, 0x56, 0x1E, 0x16, 0x3E, 0xD6, 0xEE, 0xE6, 0xBE, 0x56, 0x1E,
  0x16, 0x3E, 0xD6, 0xEE,
  0xC6, 0x96, 0x76, 0x4E, 0x46, 0x6E, 0x9E, 0xCE, 0xC6, 0x96, 0x76, 0x4E,
  0x46, 0x6E, 0x9E, 0xCE,
  0x2A, 0x62, 0x82, 0xA2, 0xAA, 0x8A, 0x7A, 0x22, 0x2A, 0x62, 0x82, 0xA2,
  0xAA, 0x8A, 0x7A, 0x22,
  0x0A, 0x32, 0xDA, 0xF2, 0xFE, 0xB2, 0x5A, 0x02, 0x0A, 0x32, 0xDA, 0xF2,
  0xFE, 0xB2, 0x5A, 0x02
};

static const halftone_pattern_t haltfone_pattern_8x8_Fine_Fatting = {
  0x02, 0x22, 0x92, 0xB2, 0x0A, 0x2A, 0x9A, 0xBA, 0x02, 0x22, 0x92, 0xB2,
  0x0A, 0x2A, 0x9A, 0xBA,
  0x42, 0x62, 0xD2, 0xF2, 0x4A, 0x6A, 0xDA, 0xFA, 0x42, 0x62, 0xD2, 0xF2,
  0x4A, 0x6A, 0xDA, 0xFA,
  0x82, 0xA2, 0x12, 0x32, 0x8A, 0xAA, 0x1A, 0x3A, 0x82, 0xA2, 0x12, 0x32,
  0x8A, 0xAA, 0x1A, 0x3A,
  0xC2, 0xE2, 0x52, 0x72, 0xCA, 0xEA, 0x5A, 0x7A, 0xC2, 0xE2, 0x52, 0x72,
  0xCA, 0xEA, 0x5A, 0x7A,
  0x0E, 0x2E, 0x9E, 0xBE, 0x06, 0x26, 0x96, 0xB6, 0x0E, 0x2E, 0x9E, 0xBE,
  0x06, 0x26, 0x96, 0xB6,
  0x4C, 0x6E, 0xDE, 0xFE, 0x46, 0x66, 0xD6, 0xF6, 0x4C, 0x6E, 0xDE, 0xFE,
  0x46, 0x66, 0xD6, 0xF6,
  0x8E, 0xAE, 0x1E, 0x3E, 0x86, 0xA6, 0x16, 0x36, 0x8E, 0xAE, 0x1E, 0x3E,
  0x86, 0xA6, 0x16, 0x36,
  0xCE, 0xEE, 0x60, 0x7E, 0xC6, 0xE6, 0x56, 0x76, 0xCE, 0xEE, 0x60, 0x7E,
  0xC6, 0xE6, 0x56, 0x76,
  0x02, 0x22, 0x92, 0xB2, 0x0A, 0x2A, 0x9A, 0xBA, 0x02, 0x22, 0x92, 0xB2,
  0x0A, 0x2A, 0x9A, 0xBA,
  0x42, 0x62, 0xD2, 0xF2, 0x4A, 0x6A, 0xDA, 0xFA, 0x42, 0x62, 0xD2, 0xF2,
  0x4A, 0x6A, 0xDA, 0xFA,
  0x82, 0xA2, 0x12, 0x32, 0x8A, 0xAA, 0x1A, 0x3A, 0x82, 0xA2, 0x12, 0x32,
  0x8A, 0xAA, 0x1A, 0x3A,
  0xC2, 0xE2, 0x52, 0x72, 0xCA, 0xEA, 0x5A, 0x7A, 0xC2, 0xE2, 0x52, 0x72,
  0xCA, 0xEA, 0x5A, 0x7A,
  0x0E, 0x2E, 0x9E, 0xBE, 0x06, 0x26, 0x96, 0xB6, 0x0E, 0x2E, 0x9E, 0xBE,
  0x06, 0x26, 0x96, 0xB6,
  0x4C, 0x6E, 0xDE, 0xFE, 0x46, 0x66, 0xD6, 0xF6, 0x4C, 0x6E, 0xDE, 0xFE,
  0x46, 0x66, 0xD6, 0xF6,
  0x8E, 0xAE, 0x1E, 0x3E, 0x86, 0xA6, 0x16, 0x36, 0x8E, 0xAE, 0x1E, 0x3E,
  0x86, 0xA6, 0x16, 0x36,
  0xCE, 0xEE, 0x60, 0x7E, 0xC6, 0xE6, 0x56, 0x76, 0xCE, 0xEE, 0x60, 0x7E,
  0xC6, 0xE6, 0x56, 0x76
};

static const halftone_pattern_t haltfone_pattern_8x8_Bayer = {
  0xF2, 0x42, 0x82, 0xC2, 0xFA, 0x4A, 0x8A, 0xCA, 0xF2, 0x42, 0x82, 0xC2,
  0xFA, 0x4A, 0x8A, 0xCA,
  0xB2, 0x02, 0x12, 0x52, 0xBA, 0x0A, 0x1A, 0x5A, 0xB2, 0x02, 0x12, 0x52,
  0xBA, 0x0A, 0x1A, 0x5A,
  0x72, 0x32, 0x22, 0x92, 0x7A, 0x3A, 0x2A, 0x9A, 0x72, 0x32, 0x22, 0x92,
  0x7A, 0x3A, 0x2A, 0x9A,
  0xE2, 0xA2, 0x62, 0xD2, 0xEA, 0xAA, 0x6A, 0xDA, 0xE2, 0xA2, 0x62, 0xD2,
  0xEA, 0xAA, 0x6A, 0xDA,
  0xFE, 0x4E, 0x8E, 0xCE, 0xF6, 0x46, 0xD6, 0xC6, 0xFE, 0x4E, 0x8E, 0xCE,
  0xF6, 0x46, 0xD6, 0xC6,
  0xBE, 0x0E, 0x1E, 0x5E, 0xB6, 0x06, 0x16, 0x56, 0xBE, 0x0E, 0x1E, 0x5E,
  0xB6, 0x06, 0x16, 0x56,
  0x7E, 0x3E, 0x2E, 0x9E, 0x76, 0x36, 0x26, 0x96, 0x7E, 0x3E, 0x2E, 0x9E,
  0x76, 0x36, 0x26, 0x96,
  0xEE, 0xAE, 0x6E, 0xDE, 0xE6, 0xA6, 0x66, 0xD6, 0xEE, 0xAE, 0x6E, 0xDE,
  0xE6, 0xA6, 0x66, 0xD6,
  0xF2, 0x42, 0x82, 0xC2, 0xFA, 0x4A, 0x8A, 0xCA, 0xF2, 0x42, 0x82, 0xC2,
  0xFA, 0x4A, 0x8A, 0xCA,
  0xB2, 0x02, 0x12, 0x52, 0xBA, 0x0A, 0x1A, 0x5A, 0xB2, 0x02, 0x12, 0x52,
  0xBA, 0x0A, 0x1A, 0x5A,
  0x72, 0x32, 0x22, 0x92, 0x7A, 0x3A, 0x2A, 0x9A, 0x72, 0x32, 0x22, 0x92,
  0x7A, 0x3A, 0x2A, 0x9A,
  0xE2, 0xA2, 0x62, 0xD2, 0xEA, 0xAA, 0x6A, 0xDA, 0xE2, 0xA2, 0x62, 0xD2,
  0xEA, 0xAA, 0x6A, 0xDA,
  0xFE, 0x4E, 0x8E, 0xCE, 0xF6, 0x46, 0xD6, 0xC6, 0xFE, 0x4E, 0x8E, 0xCE,
  0xF6, 0x46, 0xD6, 0xC6,
  0xBE, 0x0E, 0x1E, 0x5E, 0xB6, 0x06, 0x16, 0x56, 0xBE, 0x0E, 0x1E, 0x5E,
  0xB6, 0x06, 0x16, 0x56,
  0x7E, 0x3E, 0x2E, 0x9E, 0x76, 0x36, 0x26, 0x96, 0x7E, 0x3E, 0x2E, 0x9E,
  0x76, 0x36, 0x26, 0x96,
  0xEE, 0xAE, 0x6E, 0xDE, 0xE6, 0xA6, 0x66, 0xD6, 0xEE, 0xAE, 0x6E, 0xDE,
  0xE6, 0xA6, 0x66, 0xD6
};

static const halftone_pattern_t haltfone_pattern_8x8_Vertical_Line = {
  0x02, 0x42, 0x82, 0xC4, 0x0A, 0x4C, 0x8A, 0xCA, 0x02, 0x42, 0x82, 0xC4,
  0x0A, 0x4C, 0x8A, 0xCA,
  0x12, 0x52, 0x92, 0xD2, 0x1A, 0x5A, 0x9A, 0xDA, 0x12, 0x52, 0x92, 0xD2,
  0x1A, 0x5A, 0x9A, 0xDA,
  0x22, 0x62, 0xA2, 0xE2, 0x2A, 0x6A, 0xAA, 0xEA, 0x22, 0x62, 0xA2, 0xE2,
  0x2A, 0x6A, 0xAA, 0xEA,
  0x32, 0x72, 0xB2, 0xF2, 0x3A, 0x7A, 0xBA, 0xFA, 0x32, 0x72, 0xB2, 0xF2,
  0x3A, 0x7A, 0xBA, 0xFA,
  0x0E, 0x4E, 0x8E, 0xCE, 0x06, 0x46, 0x86, 0xC6, 0x0E, 0x4E, 0x8E, 0xCE,
  0x06, 0x46, 0x86, 0xC6,
  0x1E, 0x5E, 0x9E, 0xDE, 0x16, 0x56, 0x96, 0xD6, 0x1E, 0x5E, 0x9E, 0xDE,
  0x16, 0x56, 0x96, 0xD6,
  0x2E, 0x6E, 0xAE, 0xEE, 0x26, 0x66, 0xA6, 0xE6, 0x2E, 0x6E, 0xAE, 0xEE,
  0x26, 0x66, 0xA6, 0xE6,
  0x3E, 0x7E, 0xBE, 0xFE, 0x36, 0x76, 0xB6, 0xF6, 0x3E, 0x7E, 0xBE, 0xFE,
  0x36, 0x76, 0xB6, 0xF6,
  0x02, 0x42, 0x82, 0xC4, 0x0A, 0x4C, 0x8A, 0xCA, 0x02, 0x42, 0x82, 0xC4,
  0x0A, 0x4C, 0x8A, 0xCA,
  0x12, 0x52, 0x92, 0xD2, 0x1A, 0x5A, 0x9A, 0xDA, 0x12, 0x52, 0x92, 0xD2,
  0x1A, 0x5A, 0x9A, 0xDA,
  0x22, 0x62, 0xA2, 0xE2, 0x2A, 0x6A, 0xAA, 0xEA, 0x22, 0x62, 0xA2, 0xE2,
  0x2A, 0x6A, 0xAA, 0xEA,
  0x32, 0x72, 0xB2, 0xF2, 0x3A, 0x7A, 0xBA, 0xFA, 0x32, 0x72, 0xB2, 0xF2,
  0x3A, 0x7A, 0xBA, 0xFA,
  0x0E, 0x4E, 0x8E, 0xCE, 0x06, 0x46, 0x86, 0xC6, 0x0E, 0x4E, 0x8E, 0xCE,
  0x06, 0x46, 0x86, 0xC6,
  0x1E, 0x5E, 0x9E, 0xDE, 0x16, 0x56, 0x96, 0xD6, 0x1E, 0x5E, 0x9E, 0xDE,
  0x16, 0x56, 0x96, 0xD6,
  0x2E, 0x6E, 0xAE, 0xEE, 0x26, 0x66, 0xA6, 0xE6, 0x2E, 0x6E, 0xAE, 0xEE,
  0x26, 0x66, 0xA6, 0xE6,
  0x3E, 0x7E, 0xBE, 0xFE, 0x36, 0x76, 0xB6, 0xF6, 0x3E, 0x7E, 0xBE, 0xFE,
  0x36, 0x76, 0xB6, 0xF6
};