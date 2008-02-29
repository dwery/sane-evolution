
#ifndef MUSTEK_PP_DECL_H
#define MUSTEK_PP_DECL_H
/* debug driver, version 0.11-devel, author Jochen Eisinger */
static SANE_Status debug_drv_init(int options, SANE_String_Const port,
				  SANE_String_Const name,
				  SANE_Attach_Callback attach);
static void debug_drv_capabilities(int info, SANE_String * model,
				   SANE_String * vendor, SANE_String * type,
				   int * maxres, int * minres,
				   int * maxhsize, int * maxvsize,
				   int * caps);
static SANE_Status debug_drv_open(SANE_String port, int caps,
				  int * fd);
static void debug_drv_setup(SANE_Handle hndl);
static SANE_Status debug_drv_config(SANE_Handle hndl,
				    SANE_String_Const optname,
				    SANE_String_Const optval);
static void debug_drv_close(SANE_Handle hndl);
static SANE_Status debug_drv_start(SANE_Handle hndl);
static void debug_drv_read(SANE_Handle hndl, SANE_Byte * buffer);
static void debug_drv_stop(SANE_Handle hndl);


/* CIS drivers for 600CP, 1200CP, and 1200CP+
   Version 0.13-beta, author Eddy De Greef */

static SANE_Status cis600_drv_init(int options,
				   SANE_String_Const port,
				   SANE_String_Const name,
				   SANE_Attach_Callback attach);
static SANE_Status cis1200_drv_init(int options,
				    SANE_String_Const port,
				    SANE_String_Const name,
				    SANE_Attach_Callback attach);
static SANE_Status cis1200p_drv_init(int options,
				     SANE_String_Const port,
				     SANE_String_Const name,
				     SANE_Attach_Callback attach);
static void cis_drv_capabilities(int info,
				 SANE_String * model,
				 SANE_String * vendor,
				 SANE_String * type,
				 int * maxres,
				 int * minres,
				 int * maxhsize,
				 int * maxvsize, int * caps);
static SANE_Status cis_drv_open(SANE_String port, int caps,
				int * fd);
static void cis_drv_setup(SANE_Handle hndl);
static SANE_Status cis_drv_config(SANE_Handle hndl,
				  SANE_String_Const optname,
				  SANE_String_Const optval);
static void cis_drv_close(SANE_Handle hndl);
static SANE_Status cis_drv_start(SANE_Handle hndl);
static void cis_drv_read(SANE_Handle hndl, SANE_Byte * buffer);
static void cis_drv_stop(SANE_Handle hndl);

/* CCD drivers for 300 dpi models
   Version 0.11-devel, author Jochen Eisinger */

static SANE_Status ccd300_init(int options,
			       SANE_String_Const port,
			       SANE_String_Const name,
			       SANE_Attach_Callback attach);
static void ccd300_capabilities(int info,
				SANE_String * model,
				SANE_String * vendor,
				SANE_String * type,
				int * maxres,
				int * minres,
				int * maxhsize,
				int * maxvsize, int * caps);
static SANE_Status ccd300_open(SANE_String port, int caps,
			       int * fd);
static void ccd300_setup(SANE_Handle hndl);
static SANE_Status ccd300_config(SANE_Handle hndl,
				 SANE_String_Const optname,
				 SANE_String_Const optval);
static void ccd300_close(SANE_Handle hndl);
static SANE_Status ccd300_start(SANE_Handle hndl);
static void ccd300_read(SANE_Handle hndl, SANE_Byte * buffer);
static void ccd300_stop(SANE_Handle hndl);

#endif
