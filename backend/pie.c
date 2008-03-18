/* sane - Scanner Access Now Easy.

   pie.c

   Copyright (C) 2000 Simon Munton, based on the umax backend by Oliver Rauch

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
   If you do not wish that, delete this exception notice.  */  
	
/*
 * 22-2-2003 set devlist to NULL in sane_exit()
 *           set first_dev to NULL in sane_exit()
 *           eliminated num_devices
 *
 * 23-7-2002 added TL_X > BR_X, TL_Y > BR_Y check in sane_start
 *
 * 17-9-2001 changed ADLIB to AdLib as the comparison is case sensitive and
 * 	     the scanner returns AdLib
 *
 * 7-5-2001 removed removal of '\n' after sanei_config_read()
 *	    free devlist allocated in sane_get_devices() on sane_exit()
 *
 * 2-3-2001 improved the reordering of RGB data in pie_reader_process()
 *
 * 11-11-2000 eliminated some warnings about signed/unsigned comparisons
 *            removed #undef NDEBUG and C++ style comments
 *
 * 1-10-2000 force gamma table to one to one mappping if lineart or halftone selected
 *
 * 30-9-2000 added ADLIB devices to scanner_str[]
 *
 * 29-9-2000 wasn't setting 'background is halftone bit' (BGHT) in halftone mode
 *
 * 27-9-2000 went public with build 4
 */ 
	
#include "sane/config.h"
	
#include <errno.h>
#include <fcntl.h>
#include <limits.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
	
#include "sane/sane.h"
#include "sane/sanei.h"
#include "sane/saneopts.h"
#include "sane/sanei_scsi.h"
#include "sane/sanei_debug.h"
	
#define BACKEND_NAME	pie
#include "sane/sanei_backend.h"
#include "sane/sanei_config.h"
	
# include "sane/sanei_thread.h"
	
#include "pie-scsidef.h"
	
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
#define DBG_dump	14
	
#define BUILD 9
	
#define PIE_CONFIG_FILE "pie.conf"
	
#define LINEART_STR         "Lineart"
#define HALFTONE_STR        "Halftone"
#define GRAY_STR            "Gray"
#define COLOR_STR           "Color"
	
#define LINEART             1
#define HALFTONE            2
#define GRAYSCALE           3
#define RGB                 4
	
#define CAL_MODE_PREVIEW        (INQ_CAP_FAST_PREVIEW)
#define CAL_MODE_FLATBED        0x00
#define CAL_MODE_ADF            (INQ_OPT_DEV_ADF)
#define CAL_MODE_TRANPSARENCY   (INQ_OPT_DEV_TP)
#define CAL_MODE_TRANPSARENCY1  (INQ_OPT_DEV_TP1)
	
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
	
/* names of scanners that are supported because */ 
/* the inquiry_return_block is ok and driver is tested */ 

	{ 
	
	"ScanAce II", 
	"ScanAce III", 
	
	"ScanAce III Plus", 
	"ScanMedia II", 
	
	"JetScan 630", 
};


/* times (in us) to delay after certain commands. Scanner seems to lock up if it returns busy
 * status and commands are repeatedly reissued (by kernel error handler) */ 
	
#define DOWNLOAD_GAMMA_WAIT_TIME	(1000000)
#define SCAN_WAIT_TIME			(1000000)
#define SCAN_WARMUP_WAIT_TIME		(500000)
#define TUR_WAIT_TIME			(500000)
	
/* options supported by the scanner */ 

{ 
		/* ------------------------------------------- */ 
		OPT_MODE_GROUP, 
		/* ------------------------------------------- */ 
		
		OPT_TL_Y, /* top-left y */ 
		OPT_BR_X, /* bottom-right x */ 
		OPT_BR_Y, /* bottom-right y */ 
		
		/* ------------------------------------------- */ 
		
	
	
		/* ------------------------------------------- */ 
		
		/* must come last: */ 
	NUM_OPTIONS 
};

/* This defines the information needed during calibration */ 

{
	
	 
	 
	 
	 
 

/* This structure holds the information about a physical scanner */ 

{
	
	
	
	 
	 
	
	 
	 
	 
	
	 
	 
	
	
	 
	 
	 
	 
	
	 
	 
	 
	
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	
	
	
	
	 
 

/* This structure holds information about an instance of an 'opened' scanner */ 

{
	
	 
	
	 
	
	 
	 
	 
	 
	
	 
	
	 
	 
	
	 
	 
	
	
	 
	


	{ 
		100 << SANE_FIXED_SCALE_SHIFT, /* maximum */ 
		0 << SANE_FIXED_SCALE_SHIFT /* quantization */  
};





/* ---------------------------------- PIE DUMP_BUFFER ---------------------------------- */ 
	
#define DBG_DUMP(level, buf, n)	{ if (DBG_LEVEL >= (level)) pie_dump_buffer(level,buf,n); }

pie_dump_buffer(int level, unsigned char *buf, int n) 
{
	
	
	
		
		
			
		
		
			
			
			
			
		
		



/* ---------------------------------- PIE INIT ---------------------------------- */ 

pie_init(Pie_Device * dev) /* pie_init is called once while driver-initialization */ 
{
	
	
	
	
	
	
#ifdef HAVE_SANEI_SCSI_OPEN_EXTENDED
		DBG(DBG_info,
		    
	
#else /* 
		DBG(DBG_info, "fixed scsi buffer size = %d bytes\n",
		    
	
#endif /* 
} 

/* ---------------------------- SENSE_HANDLER ------------------------------ */ 

sense_handler(__sane_unused__ int scsi_fd, unsigned char *result,
	      __sane_unused__ void *arg) /* is called by sanei_scsi */ 
{
	
	
	
		/* Pie_Device *dev = arg; */ 
		
	
	
	
	
	
	
		
		
		     "invalid sense key => handled as DEVICE BUSY!\n");
		
		
	
	
		
		
		     
		
	
		
	
		
		
	
		
			
		
		else if (asc_ascq == 0x0483)
			
			     "-> Not Ready - Need manual service\n");
		
		else if (asc_ascq == 0x0881)
			
			     "-> Not Ready - Communication time out\n");
		
		else
			
			     "-> unknown medium error: asc=%d, ascq=%d\n",
			     asc, 
		
	
		
			
		
		else if (asc_ascq == 0x3a00)
			
		
		else if (asc_ascq == 0x3b05)
			
		
		else if (asc_ascq == 0x3a80)
			
		
		else
			
			     "-> unknown medium error: asc=%d, ascq=%d\n",
			     asc, 
		
	
		
			
		
		else if (asc_ascq == 0x4082)
			
		
		else if (asc_ascq == 0x4083)
			
		
		else if (asc_ascq == 0x0403)
			
		
		else if (asc_ascq == 0x6200)
			
		
		else if (asc_ascq == 0x6000)
			
		
		else if (asc_ascq == 0x6081)
			
		
		else if (asc_ascq == 0x8180)
			
			     "-> DC offset or black level calibration failure\n");
		
		else if (asc_ascq == 0x8181)
			
			     
		
		else if (asc_ascq == 0x8182)
			
			     
		
		else if (asc_ascq == 0x8183)
			
			     "-> Shading curve adjustment failure\n");
		
		else if (asc_ascq == 0x8184)
			
		
		else if (asc_ascq == 0x8185)
			
		
		else if (asc_ascq == 0x8186)
			
		
		else if (asc_ascq == 0x8187)
			
			     "-> Scan pixel map less than 5100 pixels!\n");
		
		else if (asc_ascq == 0x4700)
			
		
		else if (asc_ascq == 0x4b00)
			
		
		else
			
			     "-> unknown hardware error: asc=%d, ascq=%d\n",
			     asc, 
		
		
	
		
			
		
		else if (asc_ascq == 0x2c01)
			
		
		else if (asc_ascq == 0x2c02)
			
			     "-> Invalid combination of windows\n");
		
		else if (asc_ascq == 0x2c81)
			
		
		else if (asc_ascq == 0x2400)
			
		
		else if (asc_ascq == 0x2481)
			
			     "-> Request too many lines of data\n");
		
		else if (asc_ascq == 0x2000)
			
		
		else if (asc_ascq == 0x2501)
			
		
		else if (asc_ascq == 0x2601)
			
		
		else if (asc_ascq == 0x2602)
			
			     
		
		else if (asc_ascq == 0x2603)
			
			     "-> Parameter value invalid - Invalid threshold\n");
		
		else if (asc_ascq == 0x2680)
			
			     
		
		else if (asc_ascq == 0x2681)
			
			     
		
		else if (asc_ascq == 0x2682)
			
			     
		
		else if (asc_ascq == 0x2683)
			
			     
		
		else if (asc_ascq == 0x2684)
			
			     
		
		else if (asc_ascq == 0x2685)
			
			     
		
		else if (asc_ascq == 0x2686)
			
			     
		
		else if (asc_ascq == 0x2687)
			
			     
		
		else if (asc_ascq == 0x2688)
			
			     
		
		else if (asc_ascq == 0x2689)
			
			     
		
		else if (asc_ascq == 0x268a)
			
			     
		
		else if (asc_ascq == 0x268b)
			
			     
		
		else if (asc_ascq == 0x268c)
			
			     
		
		else if (asc_ascq == 0x3d00)
			
			     "-> Invalid bits in identify field\n");
		
		else if (asc_ascq == 0x4900)
			
		
		else if (asc_ascq == 0x8101)
			
			     "-> Not enough memory for color packing\n");
		
			
			
				
				
					
					
					      "-> illegal parameter in CDB\n");
					
				
				else
					
					
					     
					
				
				      "-> error detected in byte %d\n",
				      
				
			
		
		
	
		
			
			     "-> power on, reset or bus device reset\n");
		
			
			     
		
			
			     "-> unit attention - calibration will be ignored\n");
		
		else
			
			     "-> unit attention: asc=%d, ascq=%d\n", asc,
			     ascq);
		
	
		
		     "-> vendor specific sense-code: asc=%d, ascq=%d\n", asc,
		     
		
	
		
			
			     "-> Received ABORT message from initiator\n");
		
			
			     "-> Initiator detected error message received\n");
		
			
		
			
		
		else
			
			     "-> aborted command: asc=%d, ascq=%d\n", asc,
			     ascq);
		
		
	



/* -------------------------------- PIE PRINT INQUIRY ------------------------- */ 

pie_print_inquiry(Pie_Device * dev) 
{
	
	
	
	
	     dev->vendor);
	
	     dev->product);
	
	     dev->version);
	
	      
	
	     
	
	     
	
	     
	
	     
	
	      
	
	     
	
	     
	
	      
	
	      
	
	      "Filters.......................: %s%s%s%s (%02x)\n",
	      
	      
	      
	      
	      
	
	      "Color depths..................: %s%s%s%s%s%s (%02x)\n",
	      
	      inquiry_color_depths & INQ_COLOR_DEPTH_16 ? "16 bit " : "",
	      
	      inquiry_color_depths & INQ_COLOR_DEPTH_12 ? "12 bit " : "",
	      
	      inquiry_color_depths & INQ_COLOR_DEPTH_10 ? "10 bit " : "",
	      
	      
	      
	      
	
	      
	      inquiry_color_format & INQ_COLOR_FORMAT_INDEX ? "Indexed " : "",
	      
	      inquiry_color_format & INQ_COLOR_FORMAT_LINE ? "Line " : "",
	      
	      inquiry_color_format & INQ_COLOR_FORMAT_PIXEL ? "Pixel " : "",
	      
	
	      "Image Format..................: %s%s%s%s (%02x)\n",
	      
	      inquiry_image_format & INQ_IMG_FMT_OKLINE ? "OKLine " : "",
	      
	      inquiry_image_format & INQ_IMG_FMT_BLK_ONE ? "BlackOne " : "",
	      
	      inquiry_image_format & INQ_IMG_FMT_MOTOROLA ? "Motorola " : "",
	      
	      
	
	      
	      
	      inquiry_scan_capability & INQ_CAP_PWRSAV ? "PowerSave " : "",
	      
	      inquiry_scan_capability & INQ_CAP_EXT_CAL ? "ExtCal " : "",
	      
	      inquiry_scan_capability & INQ_CAP_FAST_PREVIEW ? "FastPreview" :
	      
	      
	      inquiry_scan_capability & INQ_CAP_DISABLE_CAL ? "DisCal " : "",
	      
	      
	
	      "Optional Devices..............: %s%s%s%s (%02x)\n",
	      
	      inquiry_optional_devices & INQ_OPT_DEV_MPCL ? "MultiPageLoad " :
	      
	      
	      inquiry_optional_devices & INQ_OPT_DEV_TP1 ? "TransModule1 " :
	      "",
	      
	      inquiry_optional_devices & INQ_OPT_DEV_TP ? "TransModule " : "",
	      
	      
	
	      
	
	     
	
	      
	
	     
	
	     
	
	     
	
	     
	
	     


/* ------------------------------ PIE GET INQUIRY VALUES -------------------- */ 

pie_get_inquiry_values(Pie_Device * dev, unsigned char *buffer) 
{
	
	
	
	
	
	
	
	
	
	
	
		
		
			/* y res is a multiplier */ 
			dev->inquiry_pixel_resolution = dev->inquiry_x_res;
		
		
		
	
	else
		
		
			/* y res really is resolution */ 
			dev->inquiry_pixel_resolution =
			
		
	
		(double) get_inquiry_fb_max_scan_width(buffer) /
		
	
		
		
	
	
	
		(double) (get_inquiry_trans_x2(buffer) -
			  
		dev->inquiry_pixel_resolution;
	
		
			   
		dev->inquiry_pixel_resolution;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	



/* ----------------------------- PIE DO INQUIRY ---------------------------- */ 

pie_do_inquiry(int sfd, unsigned char *buffer) 
{
	
	
	
	
	
	
	
		sanei_scsi_cmd(sfd, inquiry.cmd, inquiry.size, buffer, &size);
	
		
		
		     "pie_do_inquiry: command returned status %s\n",
		     
		
	
	
	
		sanei_scsi_cmd(sfd, inquiry.cmd, inquiry.size, buffer, &size);
	
		
		
		     "pie_do_inquiry: command returned status %s\n",
		     
		



/* ---------------------- PIE IDENTIFY SCANNER ---------------------- */ 

pie_identify_scanner(Pie_Device * dev, int sfd) 
{
	
	
	
	
	
	
	
	
	
	      IN_periph_devtype_scanner)
		
		
		
	
	
	
	
	
	
		
		
		
	
	
	
		
		
		
	
	
	
		
		
		
	
	      vendor, 
	
		
		
		     (vendor, scanner_str[2 * i], strlen(scanner_str[2 * i])))
			
			
			     (product, scanner_str[2 * i + 1],
			      
				
				
				
				
				
			
		
		
	



/* ------------------------------- GET SPEEDS ----------------------------- */ 

pie_get_speeds(Pie_Device * dev) 
{
	
	
	
		
		
		
		
		
		
	
	else
		
		
		
		
		
			
			
			
			
		
		



/* ------------------------------- GET HALFTONES ----------------------------- */ 

pie_get_halftones(Pie_Device * dev, int sfd) 
{
	
	
	
	
	
	
	
		
		
		
		
		
		
		
		
		
		
			sanei_scsi_cmd(sfd, buffer, swrite.size + size, NULL,
				       NULL);
		
			
			
			     
			     
			
		
		else
			
			
				/* now read the halftone data */ 
				memset(buffer, '\0', sizeof buffer);	/* clear buffer */
			
			
			
			
				sanei_scsi_cmd(sfd, sread.cmd, sread.size,
					       buffer, &size);
			
				
				
				     
				     
				
			
			else
				
				
				
				
				
		


/* ------------------------------- GET CAL DATA ----------------------------- */ 

pie_get_cal_info(Pie_Device * dev, int sfd) 
{
	
	
	
	
	
	
		
	
	
	
	
	
	
	
		sanei_scsi_cmd(sfd, buffer, swrite.size + size, NULL, NULL);
	
		
		
		     "pie_get_cal_info: write command returned status %s\n",
		     
		
	
	else
		
		
			/* now read the cal data */ 
			memset(buffer, '\0', sizeof buffer);	/* clear buffer */
		
		
		
		
			sanei_scsi_cmd(sfd, sread.cmd, sread.size, buffer,
				       &size);
		
			
			
			     
			     
			
		
		else
			
			
			
			
				
					dev->cal_info_count);
			
				
				
					buffer[8 + i * buffer[5]];
				
					buffer[9 + i * buffer[5]];
				
					buffer[10 + i * buffer[5]];
				
					buffer[11 + i * buffer[5]];
				
					
					buffer[12 + 
				
				      
				      dev->cal_info[i].send_bits,
				      
				      dev->cal_info[i].num_lines,
				      
				
			
		



/* ------------------------------- ATTACH SCANNER ----------------------------- */ 

attach_scanner(const char *devicename, Pie_Device ** devp) 
{
	
	
	
	
	
		
		
			
			
				
				
				
			
			
		
	
	
		
		
		
	
	
#ifdef HAVE_SANEI_SCSI_OPEN_EXTENDED
		bufsize = 16384;	/* 16KB */
	
	      (devicename, &sfd, sense_handler, dev, &bufsize) != 0)
		
		
		
		
		
	
		
		
		     
		     
		
		
		
		
	
	      
	      
	
#else /* 
		bufsize = sanei_scsi_max_request_size;
	
		
		
		
		
		
	
#endif /* 
		
	
	
		
		
		     "attach_scanner: scanner-identification failed\n");
		
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		SANE_FIX(dev->inquiry_fb_width * SANE_MM_PER_INCH);
	
	
	
		SANE_FIX(dev->inquiry_fb_length * SANE_MM_PER_INCH);
	
	
	
		
	
	
	
	
	
	
	
	
	
	
#if 0
		dev->analog_gamma_range.min = SANE_FIX(1.0);
	
	
	
#endif /* 
		
	
	
		
		
		
	



/* --------------------------- MAX STRING SIZE ---------------------------- */ 

max_string_size(SANE_String_Const strings[]) 
{
	
	
	
		
		
		
			
			
			
		
	



/* --------------------------- INIT OPTIONS ------------------------------- */ 

init_options(Pie_Scanner * scanner) 
{
	
	
	
	
	
		
		
		
			SANE_CAP_SOFT_SELECT | SANE_CAP_SOFT_DETECT;
		
	
	
	
	
	
	
		/* "Mode" group: */ 
		scanner->opt[OPT_MODE_GROUP].title = "Scan Mode";
	
	
	
	
	
		/* scan mode */ 
		scanner->opt[OPT_MODE].name = SANE_NAME_SCAN_MODE;
	
	
	
	
		
				 scan_mode_list);
	
	
		(SANE_String_Const *) scanner->device->scan_mode_list;
	
		(SANE_Char *) strdup(scanner->device->scan_mode_list[0]);
	
		/* x-resolution */ 
		scanner->opt[OPT_RESOLUTION].name = SANE_NAME_SCAN_RESOLUTION;
	
	
	
	
	
	
		&scanner->device->dpi_range;
	
	
		/* "Geometry" group: */ 
		
	
	
	
	
		SANE_CONSTRAINT_NONE;
	
		/* top-left x */ 
		scanner->opt[OPT_TL_X].name = SANE_NAME_SCAN_TL_X;
	
	
	
	
	
	
		&(scanner->device->x_range);
	
	
		/* top-left y */ 
		scanner->opt[OPT_TL_Y].name = SANE_NAME_SCAN_TL_Y;
	
	
	
	
	
	
		&(scanner->device->y_range);
	
	
		/* bottom-right x */ 
		scanner->opt[OPT_BR_X].name = SANE_NAME_SCAN_BR_X;
	
	
	
	
	
	
		&(scanner->device->x_range);
	
	
		/* bottom-right y */ 
		scanner->opt[OPT_BR_Y].name = SANE_NAME_SCAN_BR_Y;
	
	
	
	
	
	
		&(scanner->device->y_range);
	
	
		/* "enhancement" group: */ 
		
	
	
	
	
		SANE_CONSTRAINT_NONE;
	
		/* grayscale gamma vector */ 
		scanner->opt[OPT_GAMMA_VECTOR].name = SANE_NAME_GAMMA_VECTOR;
	
	
	
	
	
		SANE_CONSTRAINT_RANGE;
	
	
		&scanner->gamma_range;
	
		
	
	
		/* red gamma vector */ 
		scanner->opt[OPT_GAMMA_VECTOR_R].name =
		SANE_NAME_GAMMA_VECTOR_R;
	
	
	
	
	
		SANE_CONSTRAINT_RANGE;
	
	
		&(scanner->gamma_range);
	
		
	
		/* green gamma vector */ 
		scanner->opt[OPT_GAMMA_VECTOR_G].name =
		SANE_NAME_GAMMA_VECTOR_G;
	
	
	
	
	
		SANE_CONSTRAINT_RANGE;
	
	
		&(scanner->gamma_range);
	
		
	
		/* blue gamma vector */ 
		scanner->opt[OPT_GAMMA_VECTOR_B].name =
		SANE_NAME_GAMMA_VECTOR_B;
	
	
	
	
	
		SANE_CONSTRAINT_RANGE;
	
	
		&(scanner->gamma_range);
	
		
	
		/* halftone pattern */ 
		scanner->opt[OPT_HALFTONE_PATTERN].name =
		SANE_NAME_HALFTONE_PATTERN;
	
		SANE_TITLE_HALFTONE_PATTERN;
	
	
	
		
				 halftone_list);
	
		
	
		
	
		
	
	
		/* speed */ 
		scanner->opt[OPT_SPEED].name = SANE_NAME_SCAN_SPEED;
	
	
	
	
		
				 speed_list);
	
		SANE_CONSTRAINT_STRING_LIST;
	
		
	
		
	
		/* lineart threshold */ 
		scanner->opt[OPT_THRESHOLD].name = SANE_NAME_THRESHOLD;
	
	
	
	
	
	
	
	
	
		/* "advanced" group: */ 
		
	
	
	
	
		SANE_CONSTRAINT_NONE;
	
		/* preview */ 
		scanner->opt[OPT_PREVIEW].name = SANE_NAME_PREVIEW;
	
	
	
	
	



/*------------------------- PIE POWER SAVE -----------------------------*/ 

pie_power_save(Pie_Scanner * scanner, int time) 
{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
				NULL, NULL);
	
		
		
		     "pie_power_save: write command returned status %s\n",
		     
		
	



/*------------------------- PIE SEND EXPOSURE ONE -----------------------------*/ 

pie_send_exposure_one(Pie_Scanner * scanner, int filter, int value) 
{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
				NULL, NULL);
	
		
		
		     
		     
		
	



/*------------------------- PIE SEND EXPOSURE -----------------------------*/ 

pie_send_exposure(Pie_Scanner * scanner) 
{
	
	
	
	
		
	
	
		
	
	
		
	



/*------------------------- PIE SEND HIGHLIGHT/SHADOW ONE -----------------------------*/ 

pie_send_highlight_shadow_one(Pie_Scanner * scanner, int filter,
			      
{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
				NULL, NULL);
	
		
		
		     
		     
		
	



/*------------------------- PIE SEND HIGHLIGHT/SHADOW -----------------------------*/ 

pie_send_highlight_shadow(Pie_Scanner * scanner) 
{
	
	
	
	
		
	
		pie_send_highlight_shadow_one(scanner, FILTER_GREEN, 100, 0);
	
		
	
		pie_send_highlight_shadow_one(scanner, FILTER_BLUE, 100, 0);
	
		
	



/*------------------------- PIE PERFORM CAL ----------------------------*/ 

pie_perform_cal(Pie_Scanner * scanner, int cal_index) 
{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		scanner->device->cal_info[cal_index].pixels_per_line;
	
	
	
	
		
	
	
		
	
	
	
		
		
		
		
		
	
	
		/* alllocate buffers for the receive data, the result buffers, and for the send data */ 
		rcv_buffer = (unsigned char *) malloc(rcv_length);
	
	
	
	
	
	      ||!neutral_result)
		
		
			/* at least one malloc failed, so free all buffers (free accepts NULL) */ 
			free(rcv_buffer);
		
		
		
		
		
		
	
		/* read the cal data a line at a time, and accumulate into the result arrays */ 
		while (rcv_lines--)
		
		
			/* TUR */ 
			status = pie_wait_scanner(scanner);
		
			
			
			
			
			
			
			
			
		
		
		
		      "pie_perform_cal: reading 1 line (%lu bytes)\n",
		      (u_long) size);
		
			
					rcv_buffer, 
		
			
			
			     
			     
			
			
			
			
			
			
			
		
		
			/* which result buffer does this line belong to? */ 
			if (scanner->colormode == RGB)
			
			
				
			
			else if (*rcv_buffer == 'G')
				
			
			else if (*rcv_buffer == 'B')
				
			
			else if (*rcv_buffer == 'N')
				
			
			else
				
				
				     "pie_perform_cal: invalid index byte (%02x)\n",
				     
				
				
				
				
				
				
				
				
			
			
		
		else
			
			
				/* monochrome - no bytes indicating filter here */ 
				result = neutral_result;
			
			
		
			/* now add the values in this line to the result array */ 
			for (i = 0; i < pixels_per_line; i++)
			
			
			
				
				
				
			
		
	
		/* got all the cal data, now process it ready to send back */ 
		free(rcv_buffer);
	
	
		
		
		
		
		
		
		
	
	
	
	
	
		/* set up scsi command and data */ 
		size = send_length;
	
	
	
	
	
	
		
		
			/* only send data for filter we expect to send */ 
			if (!(filter & scanner->cal_filter))
			
		
		
		
			
			
				
			
				
				
			
				
				
			
				
				
			
				
				
				
			
		
		else
			
		
			/* for each pixel */ 
			for (i = 0; i < pixels_per_line; i++)
			
			
			
				/* make average */ 
				x = result[i] / rcv_lines;
			
				/* ensure not overflowed */ 
				if (x > fullscale)
				
			
				/* process according to required calibration equation */ 
				if (scanner->device->inquiry_cal_eqn)
				
				
					
				
				else
					
					       x) * fullscale) / (x * k);
				
			
				
			
			else if (send_bits > rcv_bits)
				
			
				/* put result into send buffer */ 
				*send_ptr++ = x;
			
				
			
		
	
		/* now send the data back to scanner */ 
		
		/* TUR */ 
		status = pie_wait_scanner(scanner);
	
		
		
		
		
		
		
		
		
	
	      (u_long) size);
	
	
		
				NULL, 
	
		
		
		     "pie_perform_cal: write command returned status %s\n",
		     
		
		
		
		
		
		
		
	
	
	
	
	
	



/*------------------------- PIE DO CAL -----------------------------*/ 

pie_do_cal(Pie_Scanner * scanner) 
{
	
	
	
	
		
		
		      cal_index < scanner->device->cal_info_count;
		      
			
			     
				
				
				
					
				
		
	



/*------------------------- PIE DWNLD GAMMA ONE -----------------------------*/ 

pie_dwnld_gamma_one(Pie_Scanner * scanner, int filter, SANE_Int * table) 
{
	
	
	
	
	
	
	
		/* TUR */ 
		status = pie_wait_scanner(scanner);
	
		
		
		
	
		
	
	else
		
	
	
		
	
	
	
	
	
	
	
	
		
		
			
			
			
		
		else
			
			
			
		
	
	
		
				NULL, NULL);
	
		
		
		     
		     
		
	
	



/*------------------------- PIE DWNLD GAMMA -----------------------------*/ 

pie_dwnld_gamma(Pie_Scanner * scanner) 
{
	
	
	
		
		
			
					     scanner->gamma_table[1]);
		
			
		
			
					     scanner->gamma_table[2]);
		
			
		
			
					     scanner->gamma_table[3]);
		
			
		
	
	else
		
		
		
			/* if lineart or half tone, force gamma to be one to one by passing NULL */ 
			if (scanner->colormode == GRAYSCALE)
			
		
		else
			
		
		
			
		
	
	



/*------------------------- PIE SET WINDOW -----------------------------*/ 

pie_set_window(Pie_Scanner * scanner) 
{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
	
		SANE_MM_PER_INCH;
	
	
	
	
	
	
	
	
	
	
	
	
	
		
				NULL, NULL);
	
		
		
		     "pie_set_window: write command returned status %s\n",
		     
		
	



/*------------------------- PIE MODE SELECT -----------------------------*/ 

pie_mode_select(Pie_Scanner * scanner) 
{
	
	
	
	
	
	
	
	
	
	
	
	
		/* size of data */ 
		data[1] = size - 2;
	
		/* set resolution required */ 
		set_data(data, 2, scanner->resolution, 2);
	
		/* set color filter and color depth */ 
		switch (scanner->colormode)
		
	
		
			
			
			
				FILTER_RED | FILTER_GREEN | FILTER_BLUE;
			
		
		else
			
			
			     
			
			
		
		
	
	
	
		
			/* choose which filter to use for monochrome mode */ 
			if (scanner->device->
			    inquiry_filters & INQ_FILTER_NEUTRAL)
			
			
			
			
		
		else if (scanner->device->inquiry_filters & INQ_FILTER_GREEN)
			
			
			
			
		
		else if (scanner->device->inquiry_filters & INQ_FILTER_RED)
			
			
			
			
		
		else if (scanner->device->inquiry_filters & INQ_FILTER_BLUE)
			
			
			
			
		
		else
			
			
			     
			
			
		
			
		
		else
			
		
		
	
		/* choose color packing method */ 
		if (scanner->device->
		    inquiry_color_format & INQ_COLOR_FORMAT_LINE)
		
	
	else if (scanner->device->
		 inquiry_color_format & INQ_COLOR_FORMAT_INDEX)
		
	
	else
		
		
		     
		
		
	
		/* choose data format */ 
		if (scanner->device->inquiry_image_format & INQ_IMG_FMT_INTEL)
		
	
	else
		
		
		     
		
		
	
		/* set required speed */ 
		i = 0;
	
		
		
		     (scanner->device->speed_list[i],
		      scanner->val[OPT_SPEED].s) 
			
		
		
	
		
	
	else
		
	
	
		/* if preview supported, ask for preview, limit resolution to max for fast preview */ 
		if (scanner->val[OPT_PREVIEW].w 
		    &&(scanner->device->
		       inquiry_scan_capability & INQ_CAP_FAST_PREVIEW))
		
		
		
		
		
		
		     scanner->device->inquiry_fast_preview_res)
			
				  scanner->device->inquiry_fast_preview_res,
				  2);
		
	
		/* set required halftone pattern */ 
		i = 0;
	
		
		
		     (scanner->device->halftone_list[i],
		      
			
		
		
	
		
	
	else
		
	
	
	
	
	
		
				NULL);
	
		
		
		     "pie_mode_select: write command returned status %s\n",
		     
		
	



/*------------------------- PIE SCAN -----------------------------*/ 

pie_scan(Pie_Scanner * scanner, int start) 
{
	
	
	
		/* TUR */ 
		status = pie_wait_scanner(scanner);
	
		
		
		
	
	
	do
		
		
			sanei_scsi_cmd(scanner->sfd, scan.cmd, scan.size,
				       NULL, NULL);
		
			
			
			     "pie_scan: write command returned status %s\n",
			     
			
			
	
	
	



/* --------------------------------------- PIE WAIT SCANNER -------------------------- */ 

pie_wait_scanner(Pie_Scanner * scanner) 
{
	
	
	
	
	do
		
		
			
			
			
			
		
			/* test unit ready */ 
			status =
			
					
		
		
			
			
				
				
				     "scanner reports %s, waiting ...\n",
				     
				
			
			
	
	
	



/* -------------------------------------- PIE GET PARAMS -------------------------- */ 

pie_get_params(Pie_Scanner * scanner) 
{
	
	
	
	
	
	
		
	
		
	
	else
		
	
	
		
				&size);
	
		
		
		     "pie_get_params: command returned status %s\n",
		     
		
	
	else
		
		
		     get_param_scan_width(buffer));
		
		     get_param_scan_lines(buffer));
		
		     get_param_scan_bytes(buffer));
		
		      
		
		     
		
		     get_param_scan_period(buffer));
		
		     get_param_scsi_xfer_rate(buffer));
		
		     inquiry_image_format & INQ_IMG_FMT_OKLINE)
			
			     
		
			get_param_scan_filter_offset1(buffer);
		
			get_param_scan_filter_offset2(buffer);
		
		
			get_param_scan_width(buffer);
		
		
			
		
			
			
			
				3 * get_param_scan_bytes(buffer);
			
		
			
			
			
				get_param_scan_bytes(buffer);
			
		
		
			
			
			
				get_param_scan_bytes(buffer);
			
			
		
		
	



/* -------------------------------------- PIE GRAB SCANNER -------------------------- */ 

pie_grab_scanner(Pie_Scanner * scanner) 
{
	
	
	
	
		
	
		
				reserve_unit.size, NULL, 
	
		
		
		     "pie_grab_scanner: command returned status %s\n",
		     
		
	
	else
		
		
		
	



/* ------------------------------------ PIE GIVE SCANNER -------------------------- */ 

pie_give_scanner(Pie_Scanner * scanner) 
{
	
	
	
		
				release_unit.size, NULL, 
	
		
		
		     "pie_give_scanner: command returned status %s\n",
		     
		
	
	else
		
		
		
	



/* ------------------- PIE READER PROCESS INDEXED ------------------- */ 

pie_reader_process_indexed(Pie_Scanner * scanner, FILE * fp) 
{
	
	
	
	
	
	
	
	
	
	
	
	      
	
	
	
		/* allocate receive buffer */ 
		buffer = malloc(bytes_per_line + 2);
	
		
		
		
	
		/* allocate deskew buffers for RGB mode */ 
		if (scanner->colormode == RGB)
		
		
		
			bytes_per_line * (scanner->filter_offset1 +
					  
		
		
		      
		      
		
		     
		     
		
		
		
		
			
			
			
			
			
			
			
		
		
		
	
		
		
		
		
		do
			
			
				
						sread.size, buffer, 
		
		
		
			
			
				/* we're assuming that we get red before green before blue here */ 
				switch (*buffer)
				
			
				
					/* copy to red buffer */ 
					memcpy(red_in, buffer + 2,
					       bytes_per_line);
				
					/* advance in pointer, and check for wrap */ 
					red_in += bytes_per_line;
				
					
				
					/* increment red line count */ 
					red_count++;
				
				     
				     
				
			
				
					/* copy to green buffer */ 
					memcpy(green_in, buffer + 2,
					       bytes_per_line);
				
					/* advance in pointer, and check for wrap */ 
					green_in += bytes_per_line;
				
					
				
					/* increment green line count */ 
					green_count++;
				
				     
				     
				
			
				
					/* check we actually have red and green data available */ 
					if (!red_count || !green_count)
					
					
					     
					     
					
					
				
				
				
				      
				
					
					
						*dest;
					
						/* now pack the pixels lines into RGB format */ 
						dest = reorder;
					
					
					
					
						
						
						
						
						
					
						scanner->params.
						bytes_per_line, fp);
					
						/* advance out pointers, and check for wrap */ 
						red_out += bytes_per_line;
					
					     (red_buffer + red_size))
						
					
					
					     (green_buffer + green_size))
						
				
				
			
				
				     
				
			
		
		else
			
			
			     
			     (u_long) size);
			
				/* just send the data on, assume filter bytes not present as per calibration case */ 
				fwrite(buffer, 1,
				       scanner->params.bytes_per_line, fp);
			
		
	
	
	
	
	



/* --------------------------------- PIE READER PROCESS ------------------------ */ 

pie_reader_process(Pie_Scanner * scanner, FILE * fp) 
{
	
	
	
	
	
	      scanner->params.lines, 
	
	
	
		
		
		
		
		
	
	
		
		
		
		
		do
			
			
				
						sread.size, buffer, 
		
		
		
			
			
			
			
			
			
			
			
			       i--)
				
				
				
				
				
				
			
				fp);
			
		
		else
			
			
				fp);
			
		
		
	
	
	



/* --------------------------------- READER PROCESS SIGTERM HANDLER  ------------ */ 

reader_process_sigterm_handler(int signal) 
{
	
	     signal);
	
#ifdef HAVE_SANEI_SCSI_OPEN_EXTENDED
		sanei_scsi_req_flush_all();	/* flush SCSI queue */
	
#else /* 
		sanei_scsi_req_flush_all();	/* flush SCSI queue */
	
#endif /* 
		


/* ------------------------------ READER PROCESS ----------------------------- */ 

reader_process(void *data) /* executed as a child process */ 
{
	
	
	
	
	
	
	
		
		
		
		
#if defined (__APPLE__) && defined (__MACH__)
			sigdelset(&ignore_set, SIGUSR2);
		
#endif /* 
			sigprocmask(SIG_SETMASK, &ignore_set, 0);
		
		
	
	
	
	
	
	
	
		
		
		
	
	
		
	
	else if (scanner->device->
		 inquiry_color_format & INQ_COLOR_FORMAT_INDEX)
		
	
	else
		
	
	
	



/* -------------------------------- ATTACH_ONE ---------------------------------- */ 
	
/* callback function for sanei_config_attach_matching_devices(dev_name, attach_one) */ 
static SANE_Status 
attach_one(const char *name) 
{
	
	



/* ----------------------------- CLOSE PIPE ---------------------------------- */ 

close_pipe(Pie_Scanner * scanner) 
{
	
	
		
		
		
		
	



/* ---------------------------- DO CANCEL ---------------------------------- */ 

do_cancel(Pie_Scanner * scanner) 
{
	
	
	
		
		
		
		
		
		
		
	
		
		
		
		
		
		      "closing scannerdevice filedescriptor\n");
		
		
		
	



/* --------------------------------------- SANE INIT ---------------------------------- */ 
	
sane_init(SANE_Int * version_code,
	  SANE_Auth_Callback __sane_unused__ authorize) 
{
	
	
	
	
	
	
		
	
	
		
		
		
		
	
		
		
			
			
			
		
		
			
			
			
		
		
	
	



/* ----------------------------------------- SANE EXIT ---------------------------------- */ 

sane_exit(void) 
{
	
	
	
	
		
		
		
		
		
		
			
		
		
			
		
		
	
	
		
		
		
		



/* ------------------------------------------ SANE GET DEVICES --------------------------- */ 
	
sane_get_devices(const SANE_Device *** device_list,
		 SANE_Bool __sane_unused__ local_only) 
{
	
	
	
	
	
		
	
		
		
		
	
	
		
		
		
	
	
		
		
		
	
	
	



/* --------------------------------------- SANE OPEN ---------------------------------- */ 
	
sane_open(SANE_String_Const devicename, SANE_Handle * handle) 
{
	
	
	
	
	
	
		
		
			
			
				
				
				
			
		
			
			
			
				
				
				
			
		
	
	else
		
		
		
	
		
		
		
	
	
		
		
		
	
	
	
	
	
	
	      
	
	
	
	
		(SANE_Int *) malloc(scanner->gamma_length * sizeof(SANE_Int));
	
		(SANE_Int *) malloc(scanner->gamma_length * sizeof(SANE_Int));
	
		(SANE_Int *) malloc(scanner->gamma_length * sizeof(SANE_Int));
	
		(SANE_Int *) malloc(scanner->gamma_length * sizeof(SANE_Int));
	
		
		
			
			
			
		
	
	
	
	
	



/* ------------------------------------ SANE CLOSE --------------------------------- */ 

sane_close(SANE_Handle handle) 
{
	
	
	
		/* remove handle from list of open handles: */ 
		prev = 0;
	
		
		
			
			
			
		
		
	
		
		
		
		
	
		
		
		
	
		
		
		
	
	else
		
		
		
	
	
	
	
	
	
	
	
	



/* ---------------------------------- SANE GET OPTION DESCRIPTOR ----------------- */ 

sane_get_option_descriptor(SANE_Handle handle, SANE_Int option) 
{
	
	
	
		
		
		
	



/* ---------------------------------- SANE CONTROL OPTION ------------------------ */ 
	
sane_control_option(SANE_Handle handle, SANE_Int option, SANE_Action action,
		    
{
	
	
	
	
	
		
		
		
	
		
		
		
	
		
		
		
	
	
		
		
		
	
	
		
		
		
	
		
		
		
			
			
				/* word options: */ 
		case OPT_NUM_OPTS:
		
		
		
		
		
		
		
			
			
			
				/* word-array options: */ 
		case OPT_GAMMA_VECTOR:
		
		
		
			
				scanner->opt[option].size);
			
			
#if 0
				/* string options: */ 
		case OPT_SOURCE:
			
#endif /* 
		case OPT_MODE:
		
		
			
			
			
		
	
	else if (action == SANE_ACTION_SET_VALUE)
		
		
			
		
			
			     option, 
			
		
			
			     option, 
			
		
			
			     option, 
			
		
			
			     option, 
			
		
			
			
		
			
			
			
		
			sanei_constrain_value(scanner->opt + option, val,
					      info);
		
			
			
			
		
			
			
				/* (mostly) side-effect-free word options: */ 
		case OPT_RESOLUTION:
		
		
		
		
			
				
				
				
			
				/* fall through */ 
		case OPT_NUM_OPTS:
		
		
			
			
			
				/* side-effect-free word-array options: */ 
		case OPT_GAMMA_VECTOR:
		
		
		
			
				scanner->opt[option].size);
			
			
				/* options with side-effects: */ 
		
		
			
			
				
				
				
			
			
				
				
					SANE_INFO_RELOAD_OPTIONS |
					SANE_INFO_RELOAD_PARAMS;
				
			
				SANE_CAP_INACTIVE;
			
				SANE_CAP_INACTIVE;
			
				SANE_CAP_INACTIVE;
			
				SANE_CAP_INACTIVE;
			
				SANE_CAP_INACTIVE;
			
			
			
				
				
					
					
						cap &= 
					
				
				else
					
					
				
					~SANE_CAP_INACTIVE;
				
			
			else
				
				
			
			      ||(strcmp(val, HALFTONE_STR) == 0) 
			      ||(strcmp(val, GRAY_STR) == 0))
				
				
					~SANE_CAP_INACTIVE;
				
			
			else if (strcmp(val, COLOR_STR) == 0)
				
				
					/* scanner->opt[OPT_GAMMA_VECTOR].cap &= ~SANE_CAP_INACTIVE; */ 
					scanner->opt[OPT_GAMMA_VECTOR_R].
					cap &= ~SANE_CAP_INACTIVE;
				
					~SANE_CAP_INACTIVE;
				
					~SANE_CAP_INACTIVE;
				
			
		
		
		
		
			
				
				
				
			
			
		
			
		
	



/* ------------------------------------ SANE GET PARAMETERS ------------------------ */ 
	
sane_get_parameters(SANE_Handle handle, SANE_Parameters * params) 
{
	
	
	
	
		
		
		
		
			
				    scanner->val[OPT_TL_X].w);
		
			
				    scanner->val[OPT_TL_Y].w);
		
		
		
#if 0
			if ((scanner->val[OPT_RESOLUTION_BIND].w ==
			     SANE_TRUE) 
					     SANE_TRUE))
			
			
			
		
#endif /* 
			if (x_dpi > 0.0 && y_dpi > 0.0 && width > 0.0
			    && length > 0.0)
			
			
			
			
				width * x_dots_per_mm;
			
			
		
	
	
	      || strcmp(mode, HALFTONE_STR) == 0)
		
		
		
			(scanner->params.pixels_per_line + 7) / 8;
		
		
	
	else if (strcmp(mode, GRAY_STR) == 0)
		
		
		
			scanner->params.pixels_per_line;
		
		
	
	else			/* RGB */
		
		
		
			3 * scanner->params.pixels_per_line;
		
		
	
		(scanner->params.format !=
		 SANE_FRAME_RED 
		 
	
		
		
		
	



/* ----------------------------------------- SANE START --------------------------------- */ 
	
{
	
	
	
	
	
	
		/* Check for inconsistencies */ 
		
		
		
		     "sane_start: %s (%.1f mm) is bigger than %s (%.1f mm) " 
		     "-- aborting\n", 
		     SANE_UNFIX(scanner->val[OPT_TL_X].w),
		     
		     SANE_UNFIX(scanner->val[OPT_BR_X].w));
		
		
	
		
		
		     "sane_start: %s (%.1f mm) is bigger than %s (%.1f mm) " 
		     "-- aborting\n", 
		     SANE_UNFIX(scanner->val[OPT_TL_Y].w),
		     
		     SANE_UNFIX(scanner->val[OPT_BR_Y].w));
		
		
	
	
		
		
#ifdef HAVE_SANEI_SCSI_OPEN_EXTENDED
		int scsi_bufsize = 131072;	/* 128KB */
		
		      (scanner->device->sane.name, &(scanner->sfd),
		       sense_handler, 
			
			
			
			
		
			
			
			     
			     
			
			
			
		
		     
		     
		
		
#else /* 
			if (sanei_scsi_open 
			    (scanner->device->sane.name, &(scanner->sfd),
			     sense_handler,
			     
			
			
			     
			
			
		
			/* there is no need to reallocate the buffer because the size is fixed */ 
#endif /* 
			
#if 0
			if (pie_check_values(scanner->device) != 0)
			
			
			
			
			
			
			
			
		
#endif /* 
#if 0
			scanner->params.bytes_per_line =
			scanner->device->row_len;
		
			scanner->device->width_in_pixels;
		
		
		
		      
		
		     
		
		     
		
		     
		
		     
		
		     
		
		     
		
		     
		
		     
		
		     
		
		     
		
		     
		
		     
		
		     
		
#endif /* 
			
			/* grab scanner */ 
			if (pie_grab_scanner(scanner))
			
			
			
			
			     
			
			
		
		
		
	
		
		
		
	
	else if (strcmp(mode, HALFTONE_STR) == 0)
		
		
		
	
	else if (strcmp(mode, GRAY_STR) == 0)
		
		
		
	
	else if (strcmp(mode, COLOR_STR) == 0)
		
		
		
	
		/* get and set geometric values for scanning */ 
		scanner->resolution =
		SANE_UNFIX(scanner->val[OPT_RESOLUTION].w);
	
	
	
	
	
	
	
		
	
		/* send gammacurves */ 
		
	
	
		
		
		
		
		
		
		
		
		
	
	
	
		sanei_thread_begin(reader_process, (void *) scanner);
	
		
		
		     
		
		
	
		
		
		
		
	



/* -------------------------------------- SANE READ ---------------------------------- */ 
	
sane_read(SANE_Handle handle, SANE_Byte * buf, SANE_Int max_len,
	  
{
	
	
	
	
	
	
		
		
		
	
		
		
			
			
			
			
		
		else
			
			
			
			
		
	
	
		
		
		
		
	



/* ------------------------------------- SANE CANCEL -------------------------------- */ 

sane_cancel(SANE_Handle handle) 
{
	
	
	
		
		
		



/* -------------------------------------- SANE SET IO MODE --------------------------- */ 
	
sane_set_io_mode(SANE_Handle handle, SANE_Bool non_blocking) 
{
	
	
	      non_blocking);
	
		
		
		
	
	      0)
		
		
		
	



/* --------------------------------------- SANE GET SELECT FD ------------------------- */ 
	
sane_get_select_fd(SANE_Handle handle, SANE_Int * fd) 
{
	
	
	
		
		
		
	
	


