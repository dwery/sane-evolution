/* sane - Scanner Access Now Easy.

   Copyright (C) 2000 Mustek.
   Originally maintained by Tom Wang <tom.wang@mustek.com.tw>

   Copyright (C) 2001, 2002 by Henning Meier-Geinitz.

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

   This file implements a SANE backend for Mustek 1200UB and similar 
   USB flatbed scanners.  */

#ifndef mustek_usb_high_h
#define mustek_usb_high_h
#include "mustek_usb_mid.h"

/* ---------------------------------- macros ------------------------------ */

#define I8O8RGB 0
#define I8O8MONO 1
#define I4O1MONO 2

/* ---------------------------------- types ------------------------------- */

struct Mustek_Usb_Device;

typedef SANE_Status(*Powerdelay_Function) (ma1017 *, SANE_Byte);

typedef SANE_Status
	(*Getline_Function) (struct Mustek_Usb_Device * dev, SANE_Byte *,
			     SANE_Bool is_order_invert);

typedef SANE_Status(*Backtrack_Function) (struct Mustek_Usb_Device * dev);

typedef enum Colormode
{
	RGB48 = 0,
	RGB42 = 1,
	RGB36 = 2,
	RGB30 = 3,
	RGB24 = 4,
	GRAY16 = 5,
	GRAY14 = 6,
	GRAY12 = 7,
	GRAY10 = 8,
	GRAY8 = 9,
	TEXT = 10,
	RGB48EXT = 11,
	RGB42EXT = 12,
	RGB36EXT = 13,
	RGB30EXT = 14,
	RGB24EXT = 15,
	GRAY16EXT = 16,
	GRAY14EXT = 17,
	GRAY12EXT = 18,
	GRAY10EXT = 19,
	GRAY8EXT = 20,
	TEXTEXT = 21
}
Colormode;

typedef enum Signal_State
{
	SS_UNKNOWN = 0,
	SS_BRIGHTER = 1,
	SS_DARKER = 2,
	SS_EQUAL = 3
}
Signal_State;

typedef struct Calibrator
{
	/* Calibration Data */
	SANE_Bool is_prepared;
	int *k_white;
	int *k_dark;
	/* Working Buffer */
	double *white_line;
	double *dark_line;
	int *white_buffer;
	/* Necessary Parameters */
	int k_white_level;
	int k_dark_level;
	int major_average;
	int minor_average;
	int filter;
	int white_needed;
	int dark_needed;
	int max_width;
	int width;
	int threshold;
	int *gamma_table;
	SANE_Byte calibrator_type;
}
Calibrator;

enum Mustek_Usb_Modes
{
	MUSTEK_USB_MODE_LINEART = 0,
	MUSTEK_USB_MODE_GRAY,
	MUSTEK_USB_MODE_COLOR
};

enum Mustek_Usb_Option
{
	OPT_NUM_OPTS = 0,

	OPT_MODE_GROUP,
	OPT_MODE,
	OPT_RESOLUTION,
	OPT_PREVIEW,

	OPT_GEOMETRY_GROUP,	/* 5 */
	OPT_TL_X,		/* top-left x */
	OPT_TL_Y,		/* top-left y */
	OPT_BR_X,		/* bottom-right x */
	OPT_BR_Y,		/* bottom-right y */

	OPT_ENHANCEMENT_GROUP,	/* 10 */
	OPT_THRESHOLD,
	OPT_CUSTOM_GAMMA,
	OPT_GAMMA_VECTOR,
	OPT_GAMMA_VECTOR_R,
	OPT_GAMMA_VECTOR_G,
	OPT_GAMMA_VECTOR_B,

	/* must come last: */
	NUM_OPTIONS
};

typedef struct Mustek_Usb_Device
{
	struct Mustek_Usb_Device *next;
	char * name;
	SANE_Device sane;
	SANE_Range dpi_range;
	SANE_Range x_range;
	SANE_Range y_range;
	/* max width & max height in 300 dpi */
	int max_width;
	int max_height;

	ma1017 *chip;		/* registers of the scanner controller chip */

	Colormode scan_mode;
	int x_dpi;
	int y_dpi;
	int x;
	int y;
	int width;
	int height;
	int bytes_per_row;
	int bpp;

	SANE_Byte *scan_buffer;
	SANE_Byte *scan_buffer_start;
	size_t scan_buffer_len;

	SANE_Byte *temp_buffer;
	SANE_Byte *temp_buffer_start;
	size_t temp_buffer_len;

	int line_switch;
	int line_offset;

	SANE_Bool is_cis_detected;

	int init_bytes_per_strip;
	int adjust_length_300;
	int adjust_length_600;
	int init_min_expose_time;
	int init_skips_per_row_300;
	int init_skips_per_row_600;
	int init_j_lines;
	int init_k_lines;
	int init_k_filter;
	int init_k_loops;
	int init_pixel_rate_lines;
	int init_pixel_rate_filts;
	int init_powerdelay_lines;
	int init_home_lines;
	int init_dark_lines;
	int init_k_level;
	SANE_Byte init_max_power_delay;
	SANE_Byte init_min_power_delay;
	SANE_Byte init_adjust_way;
	double init_green_black_factor;
	double init_blue_black_factor;
	double init_red_black_factor;
	double init_gray_black_factor;
	double init_green_factor;
	double init_blue_factor;
	double init_red_factor;
	double init_gray_factor;

	int init_red_rgb_600_pga;
	int init_green_rgb_600_pga;
	int init_blue_rgb_600_pga;
	int init_mono_600_pga;
	int init_red_rgb_300_pga;
	int init_green_rgb_300_pga;
	int init_blue_rgb_300_pga;
	int init_mono_300_pga;
	int init_expose_time;
	SANE_Byte init_red_rgb_600_power_delay;
	SANE_Byte init_green_rgb_600_power_delay;
	SANE_Byte init_blue_rgb_600_power_delay;
	SANE_Byte init_red_mono_600_power_delay;
	SANE_Byte init_green_mono_600_power_delay;
	SANE_Byte init_blue_mono_600_power_delay;
	SANE_Byte init_red_rgb_300_power_delay;
	SANE_Byte init_green_rgb_300_power_delay;
	SANE_Byte init_blue_rgb_300_power_delay;
	SANE_Byte init_red_mono_300_power_delay;
	SANE_Byte init_green_mono_300_power_delay;
	SANE_Byte init_blue_mono_300_power_delay;
	SANE_Byte init_threshold;

	SANE_Byte init_top_ref;
	SANE_Byte init_front_end;
	SANE_Byte init_red_offset;
	SANE_Byte init_green_offset;
	SANE_Byte init_blue_offset;

	int init_rgb_24_back_track;
	int init_mono_8_back_track;

	SANE_Bool is_open;
	SANE_Bool is_prepared;
	int expose_time;
	int dummy;
	int bytes_per_strip;
	SANE_Byte *image_buffer;
	SANE_Byte *red;
	SANE_Byte *green;
	SANE_Byte *blue;
	Getline_Function get_line;
	Backtrack_Function backtrack;
	SANE_Bool is_adjusted_rgb_600_power_delay;
	SANE_Bool is_adjusted_mono_600_power_delay;
	SANE_Bool is_adjusted_rgb_300_power_delay;
	SANE_Bool is_adjusted_mono_300_power_delay;
	SANE_Bool is_evaluate_pixel_rate;
	int red_rgb_600_pga;
	int green_rgb_600_pga;
	int blue_rgb_600_pga;
	int mono_600_pga;
	SANE_Byte red_rgb_600_power_delay;
	SANE_Byte green_rgb_600_power_delay;
	SANE_Byte blue_rgb_600_power_delay;
	SANE_Byte red_mono_600_power_delay;
	SANE_Byte green_mono_600_power_delay;
	SANE_Byte blue_mono_600_power_delay;
	int red_rgb_300_pga;
	int green_rgb_300_pga;
	int blue_rgb_300_pga;
	int mono_300_pga;
	SANE_Byte red_rgb_300_power_delay;
	SANE_Byte green_rgb_300_power_delay;
	SANE_Byte blue_rgb_300_power_delay;
	SANE_Byte red_mono_300_power_delay;
	SANE_Byte green_mono_300_power_delay;
	SANE_Byte blue_mono_300_power_delay;
	int pixel_rate;
	SANE_Byte threshold;
	int *gamma_table;
	int skips_per_row;

	/* CCD */
	SANE_Bool is_adjusted_mono_600_offset;
	SANE_Bool is_adjusted_mono_600_exposure;
	int mono_600_exposure;

	Calibrator *red_calibrator;
	Calibrator *green_calibrator;
	Calibrator *blue_calibrator;
	Calibrator *mono_calibrator;

	char device_name[256];

	SANE_Bool is_sensor_detected;
}
Mustek_Usb_Device;

typedef struct Mustek_Usb_Scanner
{
	/* all the state needed to define a scan request: */
	struct Mustek_Usb_Scanner *next;

	SANE_Option_Descriptor opt[NUM_OPTIONS];
	Option_Value val[NUM_OPTIONS];

	int channels;

	/* scan window in inches: top left x+y and width+height */
	double tl_x;
	double tl_y;
	double width;
	double height;
	/* scan window in dots (at current resolution): 
	   top left x+y and width+height */
	int tl_x_dots;
	int tl_y_dots;
	int width_dots;
	int height_dots;

	int bpp;

	SANE_Bool scanning;
	SANE_Parameters params;
	int read_rows;
	int red_gamma_table[256];
	int green_gamma_table[256];
	int blue_gamma_table[256];
	int gray_gamma_table[256];
	int linear_gamma_table[256];
	int *red_table;
	int *green_table;
	int *blue_table;
	int *gray_table;
	int total_bytes;
	int total_lines;
	/* scanner dependent/low-level state: */
	Mustek_Usb_Device *hw;
}
Mustek_Usb_Scanner;


/* ------------------- calibration function declarations ------------------ */


static SANE_Status
usb_high_cal_init(Calibrator * cal, SANE_Byte type, int target_white,
		  int target_dark);

static SANE_Status usb_high_cal_exit(Calibrator * cal);

static SANE_Status
usb_high_cal_embed_gamma(Calibrator * cal, int * gamma_table);

static SANE_Status
usb_high_cal_prepare(Calibrator * cal, int max_width);

static SANE_Status
usb_high_cal_setup(Calibrator * cal, int major_average,
		   int minor_average, int filter,
		   int width, int * white_needed,
		   int * dark_needed);

static SANE_Status
usb_high_cal_evaluate_white(Calibrator * cal, double factor);

static SANE_Status
usb_high_cal_evaluate_dark(Calibrator * cal, double factor);

static SANE_Status usb_high_cal_evaluate_calibrator(Calibrator * cal);

static SANE_Status
usb_high_cal_fill_in_white(Calibrator * cal, int major,
			   int minor, void *white_pattern);

static SANE_Status
usb_high_cal_fill_in_dark(Calibrator * cal, int major,
			  int minor, void *dark_pattern);

static SANE_Status
usb_high_cal_calibrate(Calibrator * cal, void *src, void *target);

static SANE_Status
usb_high_cal_i8o8_fill_in_white(Calibrator * cal, int major,
				int minor, void *white_pattern);

static SANE_Status
usb_high_cal_i8o8_fill_in_dark(Calibrator * cal, int major,
			       int minor, void *dark_pattern);

static SANE_Status
usb_high_cal_i8o8_mono_calibrate(Calibrator * cal, void *src, void *target);

static SANE_Status
usb_high_cal_i8o8_rgb_calibrate(Calibrator * cal, void *src, void *target);

static SANE_Status
usb_high_cal_i4o1_fill_in_white(Calibrator * cal, int major,
				int minor, void *white_pattern);

static SANE_Status
usb_high_cal_i4o1_fill_in_dark(Calibrator * cal, int major,
			       int minor, void *dark_pattern);

static SANE_Status
usb_high_cal_i4o1_calibrate(Calibrator * cal, void *src, void *target);

/* -------------------- scanning function declarations -------------------- */

static SANE_Status usb_high_scan_init(Mustek_Usb_Device * dev);

static SANE_Status usb_high_scan_exit(Mustek_Usb_Device * dev);

static SANE_Status usb_high_scan_prepare(Mustek_Usb_Device * dev);

static SANE_Status usb_high_scan_clearup(Mustek_Usb_Device * dev);

static SANE_Status
usb_high_scan_turn_power(Mustek_Usb_Device * dev, SANE_Bool is_on);

static SANE_Status usb_high_scan_back_home(Mustek_Usb_Device * dev);

static SANE_Status
usb_high_scan_set_threshold(Mustek_Usb_Device * dev, SANE_Byte threshold);

static SANE_Status
usb_high_scan_embed_gamma(Mustek_Usb_Device * dev, int * gamma_table);

static SANE_Status usb_high_scan_reset(Mustek_Usb_Device * dev);

static SANE_Status
usb_high_scan_suggest_parameters(Mustek_Usb_Device * dev, int dpi,
				 int x, int y, int width,
				 int height, Colormode color_mode);
static SANE_Status usb_high_scan_detect_sensor(Mustek_Usb_Device * dev);

static SANE_Status
usb_high_scan_setup_scan(Mustek_Usb_Device * dev, Colormode color_mode,
			 int x_dpi, int y_dpi,
			 SANE_Bool is_invert, int x, int y,
			 int width);

static SANE_Status
usb_high_scan_get_rows(Mustek_Usb_Device * dev, SANE_Byte * block,
		       int rows, SANE_Bool is_order_invert);

static SANE_Status usb_high_scan_stop_scan(Mustek_Usb_Device * dev);

static SANE_Status
usb_high_scan_step_forward(Mustek_Usb_Device * dev, int step_count);

static SANE_Status
usb_high_scan_safe_forward(Mustek_Usb_Device * dev, int step_count);

static SANE_Status
usb_high_scan_init_asic(Mustek_Usb_Device * dev, Sensor_Type sensor);

static SANE_Status usb_high_scan_wait_carriage_home(Mustek_Usb_Device * dev);

static SANE_Status
usb_high_scan_hardware_calibration(Mustek_Usb_Device * dev);

static SANE_Status usb_high_scan_line_calibration(Mustek_Usb_Device * dev);

static SANE_Status usb_high_scan_prepare_scan(Mustek_Usb_Device * dev);

static int
usb_high_scan_calculate_max_rgb_600_expose(Mustek_Usb_Device * dev,
					   SANE_Byte * ideal_red_pd,
					   SANE_Byte * ideal_green_pd,
					   SANE_Byte * ideal_blue_pd);

static int
usb_high_scan_calculate_max_mono_600_expose(Mustek_Usb_Device * dev,
					    SANE_Byte * ideal_red_pd,
					    SANE_Byte * ideal_green_pd,
					    SANE_Byte * ideal_blue_pd);

static SANE_Status
usb_high_scan_prepare_rgb_signal_600_dpi(Mustek_Usb_Device * dev);

static SANE_Status
usb_high_scan_prepare_mono_signal_600_dpi(Mustek_Usb_Device * dev);

static int
usb_high_scan_calculate_max_rgb_300_expose(Mustek_Usb_Device * dev,
					   SANE_Byte * ideal_red_pd,
					   SANE_Byte * ideal_green_pd,
					   SANE_Byte * ideal_blue_pd);

static int
usb_high_scan_calculate_max_mono_300_expose(Mustek_Usb_Device * dev,
					    SANE_Byte * ideal_red_pd,
					    SANE_Byte * ideal_green_pd,
					    SANE_Byte * ideal_blue_pd);

static SANE_Status
usb_high_scan_prepare_rgb_signal_300_dpi(Mustek_Usb_Device * dev);

static SANE_Status
usb_high_scan_prepare_mono_signal_300_dpi(Mustek_Usb_Device * dev);

static SANE_Status
usb_high_scan_evaluate_max_level(Mustek_Usb_Device * dev,
				 int sample_lines,
				 int sample_length,
				 SANE_Byte * ret_max_level);

static SANE_Status
usb_high_scan_bssc_power_delay(Mustek_Usb_Device * dev,
			       Powerdelay_Function set_power_delay,
			       Signal_State * signal_state,
			       SANE_Byte * target, SANE_Byte max,
			       SANE_Byte min, SANE_Byte threshold,
			       int length);

static SANE_Status
usb_high_scan_adjust_rgb_600_power_delay(Mustek_Usb_Device * dev);

static SANE_Status
usb_high_scan_adjust_mono_600_power_delay(Mustek_Usb_Device * dev);

static SANE_Status
usb_high_scan_adjust_mono_600_exposure(Mustek_Usb_Device * dev);

#if 0
/* CCD */
static SANE_Status
usb_high_scan_adjust_mono_600_offset(Mustek_Usb_Device * dev);

static SANE_Status usb_high_scan_adjust_mono_600_pga(Mustek_Usb_Device * dev);

static SANE_Status
usb_high_scan_adjust_mono_600_skips_per_row(Mustek_Usb_Device * dev);
#endif

static SANE_Status
usb_high_scan_adjust_rgb_300_power_delay(Mustek_Usb_Device * dev);

static SANE_Status
usb_high_scan_adjust_mono_300_power_delay(Mustek_Usb_Device * dev);

static SANE_Status usb_high_scan_evaluate_pixel_rate(Mustek_Usb_Device * dev);

static SANE_Status usb_high_scan_calibration_rgb_24(Mustek_Usb_Device * dev);

static SANE_Status usb_high_scan_calibration_mono_8(Mustek_Usb_Device * dev);

static SANE_Status usb_high_scan_prepare_rgb_24(Mustek_Usb_Device * dev);

static SANE_Status usb_high_scan_prepare_mono_8(Mustek_Usb_Device * dev);

static SANE_Status
usb_high_scan_get_rgb_24_bit_line(Mustek_Usb_Device * dev,
				  SANE_Byte * line,
				  SANE_Bool is_order_invert);

static SANE_Status
usb_high_scan_get_mono_8_bit_line(Mustek_Usb_Device * dev,
				  SANE_Byte * line,
				  SANE_Bool is_order_invert);

static SANE_Status usb_high_scan_backtrack_rgb_24(Mustek_Usb_Device * dev);

static SANE_Status usb_high_scan_backtrack_mono_8(Mustek_Usb_Device * dev);

#endif /* mustek_usb_high_h */
