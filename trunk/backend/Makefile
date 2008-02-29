SHELL = /bin/sh


srcdir = .
top_srcdir = ..
top_builddir = ..

PACKAGE = sane-backends
VERSION = 1.1.0-svn
package_version = sane-backends 1.1.0-svn
distdir = $(top_srcdir)/$(PACKAGE)-$(VERSION)

prefix = /usr/local
exec_prefix = ${prefix}
bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datarootdir = ${prefix}/share
datadir = ${datarootdir}
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
locksanedir = ${prefix}/var/lock/sane
libdir = ${exec_prefix}/lib
libsanedir = $(libdir)/sane
infodir = ${datarootdir}/info
mandir = ${datarootdir}/man
includedir = ${prefix}/include
oldincludedir = /usr/include
configdir = ${sysconfdir}/sane.d
BEOS_ADDONDIR = 

V_MAJOR = 1
V_MINOR = 1
V_REV = 0
DLL_PRELOAD = 
DLL_PRELOAD_EXTRAS = $(foreach be,$(DLL_PRELOAD),$($(addprefix EXTRA_,$(be))))

MKDIR = $(top_srcdir)/mkinstalldirs
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_LOCKPATH = 
LOCKPATH_GROUP = uucp

RANLIB = ranlib
LN_S = ln -s

CC = gcc
INCLUDES = -I. -I$(srcdir) -I$(top_builddir)/include -I$(top_srcdir)/include
CPPFLAGS =  -D_REENTRANT -I/usr/include/gphoto2 -I/usr/include/libexif   -DPATH_SANE_CONFIG_DIR=$(configdir) 	  -DPATH_SANE_DATA_DIR=$(datadir) 	  -DPATH_SANE_LOCK_DIR=$(locksanedir) 	  -DV_MAJOR=1 -DV_MINOR=1
CFLAGS = -g -O2 -W -Wall -Wcast-align -Wcast-qual -Wmissing-declarations -Wmissing-prototypes -Wpointer-arith -Wreturn-type -Wstrict-prototypes -pedantic -ansi
LDFLAGS =  
BACKENDLIBS = -lusb -lpthread -lm  -ljpeg -ltiff -lieee1284  -lgphoto2 -lgphoto2_port -lexif -lm -lusb -ldl
DEFS = -DHAVE_CONFIG_H
DYNAMIC_FLAG=-module
USE_LINKS=yes

LIBTOOL = ../libtool
MCOMP	= --mode=compile
MLINK	= --mode=link
MINST	= --mode=install

COMPILE = $(CC) -c $(CFLAGS) $(DEFS) $(INCLUDES) $(CPPFLAGS)

DISTCLEAN_FILES = *~ .*~ *.log *.bak *.old *.orig *.out *.rej "\#"* ".\#"*

FIRMWARE_DIRS = artec_eplus48u gt68xx snapscan epjitsu



PRELOADABLE_BACKENDS = abaton agfafocus apple artec artec_eplus48u as6e avision bh 	  canon canon630u cardscan coolscan coolscan2 coolscan3 dc25 dmc 	  epjitsu epson epson2 fujitsu genesys gt68xx 	  hp hp3500 hp3900 hp4200 hp5400 hp5590 hpljm1005 hs2p 	  ibm leo lexmark 	  ma1509 matsushita microtek microtek2 mustek mustek_usb 	  nec niash pie pixma plustek ricoh 	  s9036 sceptre sharp sm3600 sm3840 snapscan sp15c st400 stv680 	  tamarack teco1 teco2 teco3 test u12 umax umax_pp umax1220u plustek_pp dc210 dc240 canon_pp hpsj5s mustek_pp dell1600n_net gphoto2 qcam v4l net mustek_usb2

ALL_BACKENDS = $(PRELOADABLE_BACKENDS) dll

LIBS = $(addprefix libsane-,$(addsuffix .la,$(ALL_BACKENDS)))
CONFIGS = $(addsuffix .conf,$(ALL_BACKENDS)) saned.conf

EXTRA = sane_strstatus.lo ../sanei/sanei_init_debug.lo ../sanei/sanei_config.lo

# With libtool-1.0, we have to mention each library object explicitly... ;-(
ifneq ( ,)
LIBLIB_FUNCS = $(basename  )
else
LIBLIB_FUNCS =
endif

LIBOBJS = $(addprefix ../lib/,$(addsuffix .lo,$(LIBLIB_FUNCS)))

DISTFILES = Makefile.in saned.conf.in sane_strstatus.c stubs.c \
  abaton.c abaton.conf.in abaton.h \
  agfafocus.c agfafocus.conf.in agfafocus.h \
  apple.c apple.conf.in apple.h \
  artec.c artec.conf.in artec.h \
  artec_eplus48u.c artec_eplus48u.h artec_eplus48u.conf.in \
  as6e.c as6e.h \
  avision.c avision.conf.in avision.h \
  bh.c bh.conf.in bh.h \
  canon.c canon.conf.in canon.h canon-sane.c canon-scsi.c \
  canon630u.c canon630u-common.c canon630u.conf.in \
  canon_pp.conf.in canon_pp.h canon_pp.c canon_pp-dev.c \
  canon_pp-dev.h canon_pp-io.c canon_pp-io.h \
  cardscan.c cardscan.conf.in cardscan.h \
  coolscan.c coolscan.conf.in coolscan.h coolscan-scsidef.h \
  coolscan2.c coolscan2.conf.in \
  coolscan3.c coolscan3.conf.in \
  dc210.c dc210.conf.in dc210.h \
  dc240.c dc240.conf.in dc240.h \
  dc25.c dc25.conf.in dc25.h \
  dell1600n_net.c dell1600n_net.conf.in \
  dll.aliases dll.c dll.conf.in \
  dmc.c dmc.conf.in dmc.h \
  epjitsu.c epjitsu.conf.in epjitsu.h epjitsu-cmd.h \
  epson.c epson_scsi.c epson_usb.c epson.conf.in epson.h epson_scsi.h \
  epson_usb.h \
  epson2_net.c epson2_net.h epson2.c epson2.h epson2_scsi.c epson2_scsi.h \
  epson2-io.c epson2-io.h epson2-commands.c epson2-commands.h\
  epson2.conf.in\
  fujitsu.c fujitsu.conf.in fujitsu.h fujitsu-scsi.h \
  genesys.c genesys.h genesys_gl646.c genesys_low.h \
  genesys.conf.in genesys_devices.c genesys_gl841.c \
  genesys_conv.c genesys_conv_hlp.c \
  gphoto2.c gphoto2.conf.in gphoto2.h \
  gt68xx.c gt68xx.h gt68xx_high.c gt68xx_high.h gt68xx_mid.c gt68xx_mid.h \
  gt68xx_gt6801.c gt68xx_gt6801.h gt68xx_gt6816.c gt68xx_gt6816.h \
  gt68xx_low.c gt68xx_low.h gt68xx_devices.c gt68xx_generic.c \
  gt68xx_generic.h gt68xx_shm_channel.c gt68xx_shm_channel.h gt68xx.conf.in \
  hp-accessor.c hp-accessor.h hp.c hp.conf.in hp-device.c hp-device.h hp.h \
  hp-handle.c hp-handle.h hp-hpmem.c hp-option.c \
  hp-option.h hp.README hp-scl.c hp-scl.h hp-scsi.h hp.TODO \
  hp3500.c \
  hp3900.c hp3900.conf.in hp3900_config.c hp3900_debug.c hp3900_rts8822.c \
  hp3900_sane.c hp3900_types.c hp3900_usb.c \
  hp4200.c  hp4200.conf.in  hp4200.h  hp4200_lm9830.c  hp4200_lm9830.h \
  hp5400.c hp5400.h hp5400.conf.in hp5400_debug.c hp5400_debug.h \
  hp5400_internal.c hp5400_internal.h hp5400_xfer.h hp5400_sane.c \
  hp5400_sanei.c hp5400_sanei.h \
  hp5590.c hp5590_cmds.c hp5590_low.c hp5590_cmds.h hp5590_low.h \
  hpljm1005.c \
  hpsj5s.c hpsj5s.conf.in hpsj5s.h \
  hs2p.c hs2p.conf.in hs2p-scsi.c hs2p.h hs2p-scsi.h hs2p-saneopts.h \
  ibm.c ibm.conf.in ibm.h ibm-scsi.c \
  leo.c leo.h leo.conf.in \
  lexmark.c lexmark_low.c lexmark_models.c lexmark_sensors.c lexmark.h \
  lexmark.conf.in \
  lm9830.h \
  ma1509.c ma1509.conf.in ma1509.h \
  matsushita.c matsushita.conf.in matsushita.h \
  microtek.c microtek.conf.in microtek.h \
  microtek2.c microtek2.conf.in microtek2.h \
  mustek.c mustek.conf.in mustek.h \
  mustek_pp.c mustek_pp.conf.in mustek_pp.h mustek_pp_cis.c mustek_pp_cis.h \
  mustek_pp_decl.h mustek_pp_drivers.h mustek_pp_null.c mustek_pp_ccd300.c \
  mustek_pp_ccd300.h mustek_scsi_pp.c mustek_scsi_pp.h \
  mustek_usb.c mustek_usb.conf.in mustek_usb.h mustek_usb_high.c \
  mustek_usb_high.h mustek_usb_low.c mustek_usb_low.h mustek_usb_mid.c \
  mustek_usb_mid.h \
  mustek_usb2.c mustek_usb2.h mustek_usb2_asic.c mustek_usb2_asic.h \
  mustek_usb2_high.c mustek_usb2_high.h mustek_usb2_reflective.c \
  mustek_usb2_transparent.c \
  nec.c nec.conf.in nec.h \
  net.c net.conf.in net.h \
  niash.c niash_core.c niash_core.h niash_xfer.c niash_xfer.h \
  pie.c pie.conf.in pie-scsidef.h \
  pint.c pint.h \
  pixma.c pixma.h pixma_common.c pixma_common.h pixma_mp150.c pixma_mp730.c \
  pixma_mp750.c pixma_sane_options.c pixma_sane_options.h pixma_io.h \
  pixma_io_sanei.c pixma_rename.h \
  plustek.c plustek.conf.in plustek-usbdevs.c plustek.h plustek-usb.c \
  plustek-usb.h plustek-usbhw.c plustek-usbimg.c plustek-usbio.c \
  plustek-usbmap.c plustek-usbscan.c plustek-usbshading.c plustek-usbcalfile.c \
  plustek-usbcal.c \
  plustek-pp_dac.c plustek-pp_dbg.h plustek-pp_detect.c plustek-pp_genericio.c \
  plustek-pp_hwdefs.h plustek-pp_image.c plustek-pp_io.c plustek-pp_map.c \
  plustek-pp_misc.c plustek-pp_models.c plustek-pp_motor.c plustek-pp_p12.c \
  plustek-pp_p12ccd.c plustek-pp_p48xx.c plustek-pp_p9636.c \
  plustek-pp_procfs.c plustek-pp_procs.h plustek-pp_ptdrv.c plustek-pp_scale.c \
  plustek-pp_scan.h plustek-pp_scandata.h plustek-pp_sysdep.h plustek-pp_tpa.c \
  plustek-pp_types.h plustek_pp.c plustek-pp_wrapper.c plustek_pp.conf.in \
  plustek-pp.h \
  pnm.c \
  qcam.c qcam.conf.in qcam.h \
  ricoh.c ricoh.conf.in ricoh.h ricoh-scsi.c \
  s9036.c s9036.conf.in s9036.h \
  sceptre.c sceptre.conf.in sceptre.h \
  sharp.c sharp.conf.in sharp.h \
  sm3600.c sm3600-color.c sm3600-gray.c sm3600.h sm3600-homerun.c \
  sm3600-scanmtek.c sm3600-scantool.h sm3600-scanusb.c sm3600-scanutil.c \
  sm3840.conf.in sm3840.c sm3840_lib.c sm3840_params.h sm3840_scan.c sm3840.h \
  sm3840_lib.h \
  snapscan.c snapscan-data.c snapscan.conf.in snapscan.h snapscan-scsi.c \
  snapscan-sources.c snapscan-mutex.c snapscan-sources.h snapscan-usb.c \
  snapscan-usb.h snapscan-options.c \
  sp15c.c sp15c.conf.in sp15c.h sp15c-scsi.h \
  st400.c st400.conf.in st400.h \
  stv680.c stv680.conf.in stv680.h \
  tamarack.c tamarack.conf.in tamarack.h \
  teco1.c teco1.conf.in teco1.h \
  teco2.c teco2.conf.in teco2.h \
  teco3.c teco3.conf.in teco3.h \
  test.c test.conf.in test.h test-picture.c \
  u12.c u12.h u12-scanner.h u12-hwdef.h u12.conf.in u12-shading.c u12-tpa.c \
  u12-ccd.c u12-hw.c u12-if.c u12-image.c u12-io.c u12-map.c u12-motor.c \
  umax.c umax.conf.in umax.h umax-scanner.c umax-scanner.h umax-scsidef.h \
  umax-uc1200s.c umax-uc1200se.c umax-uc1260.c umax-uc630.c umax-uc840.c \
  umax-ug630.c umax-ug80.c umax-usb.c \
  umax_pp.c umax_pp.conf.in umax_pp.h umax_pp_low.c umax_pp_low.h \
  umax_pp_mid.c umax_pp_mid.h \
  umax1220u.c umax1220u-common.c umax1220u.conf.in \
  v4l.c v4l.conf.in v4l-frequencies.h v4l.h

.PHONY: all clean depend dist distclean install uninstall

libsane-%.la: %.lo %-s.lo $(EXTRA) $(LIBOBJS)
	@$(LIBTOOL) $(MLINK) $(CC) -export-dynamic -o $@ $($*_LIBS) \
	$(LDFLAGS) $(BACKENDLIBS) $^  -rpath $(libsanedir) \
	-version-number $(V_MAJOR):$(V_MINOR):$(V_REV) $(DYNAMIC_FLAG)

%-s.lo:	%-s.c
	@$(LIBTOOL) $(MCOMP) $(COMPILE) -DSTUBS -DBACKEND_NAME=$* $<

%.lo:	%.c
	@$(LIBTOOL) $(MCOMP) $(COMPILE) -DBACKEND_NAME=$* \
		-DLIBDIR=$(libsanedir) $<

%-s.c:	$(srcdir)/stubs.c
	rm -f $@
	$(LN_S) $(srcdir)/stubs.c $@

# Don't delete any intermediate files.
.PRECIOUS: %-s.c %-s.lo %.lo dll-preload.c

all:	$(LIBS) libsane.la becfg

install: $(INSTALL_LOCKPATH) install-be install-libsane install-becfg

install-be:
	$(MKDIR) $(DESTDIR)$(libdir) $(DESTDIR)$(libsanedir) $(DESTDIR)$(configdir)
	@# Install all backends in $(prefix)/lib/sane/
	@list="$(LIBS)"; for be in $$list; do \
	  echo installing $${be} in $(DESTDIR)$(libsanedir)/$${be}...; \
	  $(LIBTOOL) $(MINST) $(INSTALL_PROGRAM) $${be} \
              $(DESTDIR)$(libsanedir)/$${be} >/dev/null || exit 1; \
	done
	@$(LIBTOOL) $(MINST) --finish $(DESTDIR)$(libsanedir) >/dev/null
	@# Remove libsane.* links in lib/sane/ as these links to libsane-v4l.so
	@# cause misdetection of scanners.
	rm -f $(DESTDIR)$(libsanedir)/libsane.*
	@# Create library links manually. Actually this is libtool's job but it doesn't
	@# seem to work on some platforms. 
	@# Assume the dll name without any versions is last
	@if test "$(USE_LINKS)" = "yes" ; then  \
	  dllend=`../tools/libtool-get-dll-ext libsane-dll.la`; \
	  list="$(ALL_BACKENDS)"; cd $(DESTDIR)$(libsanedir) && for be in $$list; do \
	    file=libsane-$${be}.$$dllend.$(V_MAJOR); \
	    lib=`grep dlname= libsane-$${be}.la | cut -f2 -d"'"`; \
	    if test ! -f $${file} -a -n "$${lib}"; then \
	      $(LN_S) $${lib} $${file}; \
	    fi; \
	  done; \
	fi

install-be-beos:
	$(MKDIR) $(DESTDIR)$(libdir) $(DESTDIR)$(libsanedir) $(DESTDIR)$(configdir) $(DESTDIR)$(BEOS_ADDONDIR)
	@list="$(ALL_BACKENDS)"; for be in $$list; do \
	  echo installing $${be} in $(BEOS_ADDONDIR)/$${be}...; \
	  cp -p .libs/libsane-$${be}.so $(DESTDIR)$(BEOS_ADDONDIR)/$${be} || exit 1; \
	done

install-libsane:
	@echo installing libsane.la in $(DESTDIR)$(libdir)/libsane.la...
	@$(LIBTOOL) $(MINST) $(INSTALL_PROGRAM) libsane.la \
          $(DESTDIR)$(libdir)/libsane.la >/dev/null
	@$(LIBTOOL) $(MINST) --finish $(DESTDIR)$(libdir)

install-becfg:
	@list="$(CONFIGS)"; for cfg in $$list; do \
	  if test ! -r $${cfg}; then continue; fi; \
	  if test -f $(DESTDIR)$(configdir)/$${cfg}; then \
	    echo NOT overwriting $${cfg} in $(configdir)...; \
	  else \
	    echo installing $${cfg} in $(configdir)/$${cfg}...; \
	    $(INSTALL_DATA) $${cfg} $(DESTDIR)$(configdir)/$${cfg} \
              || exit 1; \
	  fi; \
	done
	for dir in $(FIRMWARE_DIRS) ; do \
	   $(MKDIR) $(DESTDIR)$(datadir)/sane/$${dir} ; \
	 done

install-lockpath:
	$(MKDIR) -m 775 -g $(LOCKPATH_GROUP) $(DESTDIR)$(locksanedir)

uninstall:
	rm -rf $(libsanedir) $(configdir) $(locksanedir)
	rm -f $(libdir)/libsane.*
	-for dir in $(FIRMWARE_DIRS) ; do \
	   rmdir $(datadir)/sane/$${dir} ; \
	 done

dll.lo: dll-preload.c

dll-preload.c:
	rm -f $@
	list="$(DLL_PRELOAD)"; for be in $$list; do \
	  echo "PRELOAD_DECL($$be)" >> $@; \
	done
	echo "static struct backend preloaded_backends[] = {" >> $@
	sep=""; \
	list="$(DLL_PRELOAD)"; \
	if test -z "$${list}"; then \
	  echo { 0, 0, 0, 0, 0, 0, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }} >> $@; \
	else \
	  for be in $$list; do \
	    echo "$${sep}PRELOAD_DEFN($$be)" >> $@; \
	    sep=","; \
	  done; \
	fi
	echo "};" >> $@

libsane.la: dll.lo dll-s.lo $(EXTRA) $(addsuffix .lo,$(DLL_PRELOAD)) $(LIBOBJS)
	@$(LIBTOOL) $(MLINK) $(CC) -o $@ $(LDFLAGS) $(BACKENDLIBS)  $^ \
		$(addsuffix .lo,$(DLL_PRELOAD_EXTRAS))  \
		-rpath $(libdir) -version-number $(V_MAJOR):$(V_MINOR):$(V_REV)

# Generate .conf files for all existing .conf.in files
becfg: $(patsubst %.conf.in,%.conf,$(wildcard *.conf.in)) 
%.conf: %.conf.in
	@echo Generating $@ from $^
	@sed -e 's|@DATADIR@|$(datadir)|g' \
	     -e 's|@CONFIGDIR@|$(configdir)|g' \
	     -e 's|@DOCDIR@|$(docdir)|g' \
	     -e 's|@LIBDIR@|$(libdir)/sane|g' \
	     -e 's|@BINDIR@|$(bindir)|g' \
	     -e 's|@SBINDIR@|$(sbindir)|g' \
	     -e 's|@PACKAGEVERSION@|$(package_version)|g' $? > $@



# additional dependencies

EXTRA_canon_pp = canon_pp-io canon_pp-dev
EXTRA_genesys = genesys_gl646 genesys_gl841
EXTRA_hp = hp-accessor hp-device hp-handle hp-hpmem hp-option hp-scl
EXTRA_umax_pp = umax_pp_low umax_pp_mid
EXTRA_epson = epson_scsi epson_usb
EXTRA_epson2 = epson2_scsi epson_usb epson2_net epson2-io epson2-commands
EXTRA_lexmark = lexmark_low
EXTRA_pixma = pixma_io_sanei pixma_common pixma_mp150 pixma_mp730 pixma_mp750

# When preloading dll, we need to add in all preloaded objects:
libsane-dll.la: $(addsuffix .lo,$(DLL_PRELOAD))
libsane-dll.la: $(addsuffix .lo,$(DLL_PRELOAD_EXTRAS))

# We must not build SANE backend libraries that contain unresolved references
# to any of the sanei routines.  These explicit dependencies take care of
# this:

libsane-abaton.la: ../sanei/sanei_config2.lo
libsane-abaton.la: ../sanei/sanei_constrain_value.lo
libsane-abaton.la: ../sanei/sanei_scsi.lo
libsane-agfafocus.la: ../sanei/sanei_config2.lo
libsane-agfafocus.la: ../sanei/sanei_constrain_value.lo
libsane-agfafocus.la: ../sanei/sanei_scsi.lo
libsane-agfafocus.la: ../sanei/sanei_thread.lo
libsane-apple.la: ../sanei/sanei_config2.lo
libsane-apple.la: ../sanei/sanei_constrain_value.lo
libsane-apple.la: ../sanei/sanei_scsi.lo
libsane-artec.la: ../sanei/sanei_config2.lo
libsane-artec.la: ../sanei/sanei_constrain_value.lo
libsane-artec.la: ../sanei/sanei_scsi.lo
libsane-artec_eplus48u.la: ../sanei/sanei_constrain_value.lo
libsane-artec_eplus48u.la: ../sanei/sanei_usb.lo
libsane-artec_eplus48u.la: ../sanei/sanei_thread.lo
libsane-as6e.la: ../sanei/sanei_constrain_value.lo
libsane-avision.la: ../sanei/sanei_config2.lo
libsane-avision.la: ../sanei/sanei_constrain_value.lo
libsane-avision.la: ../sanei/sanei_scsi.lo
libsane-avision.la: ../sanei/sanei_usb.lo
libsane-avision.la: ../sanei/sanei_thread.lo
libsane-bh.la: ../sanei/sanei_config2.lo
libsane-bh.la: ../sanei/sanei_constrain_value.lo
libsane-bh.la: ../sanei/sanei_scsi.lo
libsane-canon.la: ../sanei/sanei_config2.lo
libsane-canon.la: ../sanei/sanei_constrain_value.lo
libsane-canon.la: ../sanei/sanei_scsi.lo
libsane-canon630u.la: ../sanei/sanei_constrain_value.lo
libsane-canon630u.la: ../sanei/sanei_usb.lo
libsane-canon_pp.la: $(addsuffix .lo,$(EXTRA_canon_pp))
libsane-cardscan.la: ../sanei/sanei_constrain_value.lo
libsane-cardscan.la: ../sanei/sanei_usb.lo
libsane-coolscan.la: ../sanei/sanei_config2.lo
libsane-coolscan.la: ../sanei/sanei_constrain_value.lo
libsane-coolscan.la: ../sanei/sanei_scsi.lo
libsane-coolscan.la: ../sanei/sanei_thread.lo
libsane-coolscan2.la: ../sanei/sanei_config2.lo
libsane-coolscan2.la: ../sanei/sanei_constrain_value.lo
libsane-coolscan2.la: ../sanei/sanei_scsi.lo
libsane-coolscan2.la: ../sanei/sanei_usb.lo
libsane-coolscan3.la: ../sanei/sanei_config2.lo
libsane-coolscan3.la: ../sanei/sanei_constrain_value.lo
libsane-coolscan3.la: ../sanei/sanei_scsi.lo
libsane-coolscan3.la: ../sanei/sanei_usb.lo
libsane-dc25.la: ../sanei/sanei_constrain_value.lo
libsane-dc210.la: ../sanei/sanei_constrain_value.lo  ../sanei/sanei_jpeg.lo
libsane-dc240.la: ../sanei/sanei_constrain_value.lo  ../sanei/sanei_jpeg.lo
libsane-dmc.la: ../sanei/sanei_config2.lo
libsane-dmc.la: ../sanei/sanei_constrain_value.lo
libsane-dmc.la: ../sanei/sanei_scsi.lo
libsane-epjitsu.la: ../sanei/sanei_constrain_value.lo
libsane-epjitsu.la: ../sanei/sanei_usb.lo
libsane-epson.la: $(addsuffix .lo,$(EXTRA_epson))
libsane-epson.la: ../sanei/sanei_config2.lo
libsane-epson.la: ../sanei/sanei_constrain_value.lo
libsane-epson.la: ../sanei/sanei_scsi.lo
libsane-epson.la: ../sanei/sanei_usb.lo
libsane-epson.la: ../sanei/sanei_pio.lo
libsane-epson2.la: $(addsuffix .lo,$(EXTRA_epson2))
libsane-epson2.la: ../sanei/sanei_config2.lo
libsane-epson2.la: ../sanei/sanei_constrain_value.lo
libsane-epson2.la: ../sanei/sanei_scsi.lo
libsane-epson2.la: ../sanei/sanei_usb.lo
libsane-epson2.la: ../sanei/sanei_pio.lo
libsane-epson2.la: ../sanei/sanei_tcp.lo
libsane-epson2.la: ../sanei/sanei_udp.lo
libsane-fujitsu.la: ../sanei/sanei_config2.lo
libsane-fujitsu.la: ../sanei/sanei_constrain_value.lo
libsane-fujitsu.la: ../sanei/sanei_scsi.lo
libsane-fujitsu.la: ../sanei/sanei_usb.lo
libsane-genesys.la: ../sanei/sanei_constrain_value.lo
libsane-genesys.la: ../sanei/sanei_usb.lo
libsane-genesys.la: $(addsuffix .lo,$(EXTRA_genesys))
libsane-gphoto2.la: ../sanei/sanei_constrain_value.lo  ../sanei/sanei_jpeg.lo
libsane-gt68xx.la: ../sanei/sanei_constrain_value.lo
libsane-gt68xx.la: ../sanei/sanei_usb.lo
libsane-hp.la: ../sanei/sanei_config2.lo
libsane-hp.la: ../sanei/sanei_constrain_value.lo
libsane-hp.la: ../sanei/sanei_scsi.lo
libsane-hp.la: ../sanei/sanei_usb.lo
libsane-hp.la: $(addsuffix .lo,$(EXTRA_hp))
libsane-hp.la: ../sanei/sanei_pio.lo
libsane-hp.la: ../sanei/sanei_thread.lo
libsane-hp3500.la: ../sanei/sanei_usb.lo
libsane-hp3500.la: ../sanei/sanei_thread.lo
libsane-hp3500.la: ../sanei/sanei_constrain_value.lo
libsane-hp3900.la: ../sanei/sanei_usb.lo
libsane-hp4200.la: ../sanei/sanei_constrain_value.lo
libsane-hp4200.la: ../sanei/sanei_usb.lo
libsane-hp4200.la: ../sanei/sanei_pv8630.lo
libsane-hp5400.la: ../sanei/sanei_usb.lo
libsane-hp5590.la: ../sanei/sanei_usb.lo
libsane-hpljm1005.la: ../sanei/sanei_usb.lo
libsane-hpljm1005.la: ../sanei/sanei_constrain_value.lo
libsane-hs2p.la: ../sanei/sanei_scsi.lo
libsane-hs2p.la: ../sanei/sanei_config2.lo
libsane-hs2p.la: ../sanei/sanei_constrain_value.lo
libsane-ibm.la: ../sanei/sanei_scsi.lo
libsane-ibm.la: ../sanei/sanei_config2.lo
libsane-ibm.la: ../sanei/sanei_constrain_value.lo
libsane-leo.la: ../sanei/sanei_config2.lo
libsane-leo.la: ../sanei/sanei_constrain_value.lo
libsane-leo.la: ../sanei/sanei_scsi.lo
libsane-lexmark.la: $(addsuffix .lo,$(EXTRA_lexmark))
libsane-lexmark.la: ../sanei/sanei_constrain_value.lo
libsane-lexmark.la: ../sanei/sanei_usb.lo
libsane-ma1509.la: ../sanei/sanei_constrain_value.lo
libsane-ma1509.la: ../sanei/sanei_usb.lo
libsane-matsushita.la: ../sanei/sanei_config2.lo
libsane-matsushita.la: ../sanei/sanei_constrain_value.lo
libsane-matsushita.la: ../sanei/sanei_scsi.lo
libsane-microtek.la: ../sanei/sanei_config2.lo
libsane-microtek.la: ../sanei/sanei_constrain_value.lo
libsane-microtek.la: ../sanei/sanei_scsi.lo
libsane-microtek2.la: ../sanei/sanei_config2.lo
libsane-microtek2.la: ../sanei/sanei_constrain_value.lo
libsane-microtek2.la: ../sanei/sanei_scsi.lo
libsane-microtek2.la: ../sanei/sanei_thread.lo
libsane-mustek.la: ../sanei/sanei_config2.lo
libsane-mustek.la: ../sanei/sanei_constrain_value.lo
libsane-mustek.la: ../sanei/sanei_scsi.lo
libsane-mustek.la: ../sanei/sanei_ab306.lo
libsane-mustek.la: ../sanei/sanei_thread.lo
libsane-mustek.la: ../sanei/sanei_pa4s2.lo
libsane-mustek_pp.la: ../sanei/sanei_constrain_value.lo
libsane-mustek_pp.la: ../sanei/sanei_pa4s2.lo
libsane-mustek_usb.la: ../sanei/sanei_constrain_value.lo
libsane-mustek_usb.la: ../sanei/sanei_usb.lo
libsane-mustek_usb2.la: ../sanei/sanei_usb.lo
libsane-mustek_usb2.la: ../sanei/sanei_constrain_value.lo
libsane-nec.la: ../sanei/sanei_config2.lo
libsane-nec.la: ../sanei/sanei_constrain_value.lo
libsane-nec.la: ../sanei/sanei_scsi.lo
libsane-net.la: ../sanei/sanei_codec_bin.lo
libsane-net.la: ../sanei/sanei_net.lo
libsane-net.la: ../sanei/sanei_wire.lo
libsane-niash.la: ../sanei/sanei_constrain_value.lo
libsane-niash.la: ../sanei/sanei_usb.lo
libsane-pie.la: ../sanei/sanei_config2.lo
libsane-pie.la: ../sanei/sanei_constrain_value.lo
libsane-pie.la: ../sanei/sanei_scsi.lo
libsane-pie.la: ../sanei/sanei_thread.lo
libsane-pint.la: ../sanei/sanei_constrain_value.lo
libsane-pixma.la: ../sanei/sanei_usb.lo
libsane-pixma.la: ../sanei/sanei_thread.lo
libsane-pixma.la: $(addsuffix .lo,$(EXTRA_pixma))
libsane-plustek.la: ../sanei/sanei_constrain_value.lo
libsane-plustek.la: ../sanei/sanei_usb.lo
libsane-plustek.la: ../sanei/sanei_lm983x.lo
libsane-plustek.la: ../sanei/sanei_thread.lo
libsane-plustek.la: ../sanei/sanei_access.lo
libsane-plustek_pp.la: ../sanei/sanei_constrain_value.lo
libsane-plustek_pp.la: ../sanei/sanei_thread.lo
libsane-plustek_pp.la: ../sanei/sanei_pp.lo
libsane-pnm.la: ../sanei/sanei_constrain_value.lo
libsane-qcam.la: ../sanei/sanei_constrain_value.lo
libsane-ricoh.la: ../sanei/sanei_config2.lo
libsane-ricoh.la: ../sanei/sanei_constrain_value.lo
libsane-ricoh.la: ../sanei/sanei_scsi.lo
libsane-s9036.la: ../sanei/sanei_config2.lo
libsane-s9036.la: ../sanei/sanei_constrain_value.lo
libsane-s9036.la: ../sanei/sanei_scsi.lo
libsane-sceptre.la: ../sanei/sanei_constrain_value.lo
libsane-sceptre.la: ../sanei/sanei_config2.lo
libsane-sceptre.la: ../sanei/sanei_scsi.lo
libsane-sharp.la: ../sanei/sanei_config2.lo
libsane-sharp.la: ../sanei/sanei_constrain_value.lo
libsane-sharp.la: ../sanei/sanei_scsi.lo
libsane-sm3600.la: ../sanei/sanei_constrain_value.lo
libsane-sm3600.la: ../sanei/sanei_usb.lo
libsane-sm3840.la: ../sanei/sanei_config2.lo
libsane-sm3840.la: ../sanei/sanei_constrain_value.lo
libsane-sm3840.la: ../sanei/sanei_usb.lo
libsane-sm3840.la: ../sanei/sanei_scsi.lo
libsane-snapscan.la: ../sanei/sanei_config2.lo
libsane-snapscan.la: ../sanei/sanei_constrain_value.lo
libsane-snapscan.la: ../sanei/sanei_scsi.lo
libsane-snapscan.la: ../sanei/sanei_usb.lo
libsane-snapscan.la: ../sanei/sanei_thread.lo
libsane-sp15c.la: ../sanei/sanei_config2.lo
libsane-sp15c.la: ../sanei/sanei_constrain_value.lo
libsane-sp15c.la: ../sanei/sanei_scsi.lo
libsane-sp15c.la: ../sanei/sanei_thread.lo
libsane-st400.la: ../sanei/sanei_config2.lo
libsane-st400.la: ../sanei/sanei_constrain_value.lo
libsane-st400.la: ../sanei/sanei_scsi.lo
libsane-stv680.la: ../sanei/sanei_constrain_value.lo
libsane-stv680.la: ../sanei/sanei_usb.lo
libsane-tamarack.la: ../sanei/sanei_config2.lo
libsane-tamarack.la: ../sanei/sanei_constrain_value.lo
libsane-tamarack.la: ../sanei/sanei_scsi.lo
libsane-tamarack.la: ../sanei/sanei_thread.lo
libsane-test.la: ../sanei/sanei_constrain_value.lo
libsane-test.la: ../sanei/sanei_thread.lo
libsane-teco1.la: ../sanei/sanei_config2.lo
libsane-teco1.la: ../sanei/sanei_constrain_value.lo
libsane-teco1.la: ../sanei/sanei_scsi.lo
libsane-teco2.la: ../sanei/sanei_config2.lo
libsane-teco2.la: ../sanei/sanei_constrain_value.lo
libsane-teco2.la: ../sanei/sanei_scsi.lo
libsane-teco3.la: ../sanei/sanei_config2.lo
libsane-teco3.la: ../sanei/sanei_constrain_value.lo
libsane-teco3.la: ../sanei/sanei_scsi.lo
libsane-u12.la: ../sanei/sanei_constrain_value.lo
libsane-u12.la: ../sanei/sanei_usb.lo
libsane-u12.la: ../sanei/sanei_thread.lo
libsane-umax.la: ../sanei/sanei_config2.lo
libsane-umax.la: ../sanei/sanei_constrain_value.lo
libsane-umax.la: ../sanei/sanei_scsi.lo
libsane-umax.la: ../sanei/sanei_usb.lo
libsane-umax.la: ../sanei/sanei_pv8630.lo
libsane-umax.la: ../sanei/sanei_thread.lo
libsane-umax_pp.la: $(addsuffix .lo,$(EXTRA_umax_pp))
libsane-umax_pp.la: ../sanei/sanei_constrain_value.lo
libsane-umax1220u.la: ../sanei/sanei_constrain_value.lo
libsane-umax1220u.la: ../sanei/sanei_usb.lo
libsane-umax1220u.la: ../sanei/sanei_pv8630.lo
libsane-v4l.la: ../sanei/sanei_constrain_value.lo

ifneq ($(DLL_PRELOAD),)
# need to make dll dependent on all sanei files:
libsane-dll.la libsane.la: ../sanei/sanei_config.lo
libsane-dll.la libsane.la: ../sanei/sanei_config2.lo
libsane-dll.la libsane.la: ../sanei/sanei_codec_bin.lo
libsane-dll.la libsane.la: ../sanei/sanei_constrain_value.lo
libsane-dll.la libsane.la: ../sanei/sanei_net.lo
libsane-dll.la libsane.la: ../sanei/sanei_scsi.lo
libsane-dll.la libsane.la: ../sanei/sanei_wire.lo
libsane-dll.la libsane.la: ../sanei/sanei_ab306.lo
libsane-dll.la libsane.la: ../sanei/sanei_pio.lo
libsane-dll.la libsane.la: ../sanei/sanei_pa4s2.lo
libsane-dll.la libsane.la: ../sanei/sanei_pp.lo
libsane-dll.la libsane.la: ../sanei/sanei_usb.lo
libsane-dll.la libsane.la: ../sanei/sanei_pv8630.lo
libsane-dll.la libsane.la: ../sanei/sanei_lm983x.lo
libsane-dll.la libsane.la: ../sanei/sanei_access.lo
libsane-dll.la libsane.la: ../sanei/sanei_thread.lo
ifneq (sanei_jpeg.o,)
libsane-dll.la libsane.la: ../sanei/sanei_jpeg.lo
endif
endif


depend:
	makedepend $(INCLUDES) *.c 2>/dev/null
	makedepend -a -o.lo $(INCLUDES) *.c 2>/dev/null

clean:
	rm -f *.lo *.o *.la libsane.la dll-preload.c *.conf
	find . -type l -name \*-s.c | xargs rm -f
	rm -rf .libs

distclean: clean
	rm -f $(DISTCLEAN_FILES)
	rm -f Makefile libsane.so

dist: $(DISTFILES)
	for file in $(DISTFILES); do \
	  ln $$file $(distdir)/backend 2> /dev/null \
	    || cp -p $$file $(distdir)/backend ; \
	done
# DO NOT DELETE

abaton.o: ../include/sane/config.h /usr/include/ctype.h
abaton.o: /usr/include/features.h /usr/include/sys/cdefs.h
abaton.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
abaton.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
abaton.o: /usr/include/bits/typesizes.h /usr/include/endian.h
abaton.o: /usr/include/bits/endian.h /usr/include/xlocale.h
abaton.o: /usr/include/errno.h /usr/include/bits/errno.h
abaton.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
abaton.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
abaton.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
abaton.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
abaton.o: /usr/include/time.h /usr/include/sys/select.h
abaton.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
abaton.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
abaton.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
abaton.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
abaton.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
abaton.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
abaton.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
abaton.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
abaton.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
abaton.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
abaton.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
abaton.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
abaton.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
abaton.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
abaton.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
abaton.o: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
abaton.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
abaton.o: /usr/include/bits/confname.h ../include/getopt.h
abaton.o: /usr/include/sys/time.h /usr/include/sys/wait.h
abaton.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
abaton.o: ../include/sane/sane.h ../include/sane/sanei.h
abaton.o: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
abaton.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
abaton.o: ../include/sane/sanei_config.h abaton.h
abaton-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
abaton-s.o: ../include/sane/sanei.h ../include/sane/sane.h
abaton-s.o: /usr/include/fcntl.h /usr/include/features.h
abaton-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
abaton-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
abaton-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
abaton-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
abaton-s.o: /usr/include/time.h /usr/include/endian.h
abaton-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
abaton-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
abaton-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
abaton-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
abaton-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
abaton-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
abaton-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
abaton-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
abaton-s.o: /usr/include/bits/stdio_lim.h
agfafocus.o: ../include/sane/config.h /usr/include/signal.h
agfafocus.o: /usr/include/features.h /usr/include/sys/cdefs.h
agfafocus.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
agfafocus.o: /usr/include/gnu/stubs-32.h /usr/include/bits/sigset.h
agfafocus.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
agfafocus.o: /usr/include/bits/signum.h /usr/include/time.h
agfafocus.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
agfafocus.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
agfafocus.o: /usr/include/sys/ucontext.h /usr/include/bits/pthreadtypes.h
agfafocus.o: /usr/include/bits/sigthread.h /usr/include/errno.h
agfafocus.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
agfafocus.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
agfafocus.o: /usr/include/asm-generic/errno.h
agfafocus.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
agfafocus.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
agfafocus.o: /usr/include/endian.h /usr/include/bits/endian.h
agfafocus.o: /usr/include/sys/select.h /usr/include/bits/select.h
agfafocus.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
agfafocus.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
agfafocus.o: /usr/include/bits/stat.h /usr/include/stdlib.h
agfafocus.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
agfafocus.o: /usr/include/xlocale.h /usr/include/alloca.h
agfafocus.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
agfafocus.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
agfafocus.o: ../include/getopt.h /usr/include/string.h ../include/sane/sane.h
agfafocus.o: ../include/sane/sanei.h ../include/sane/sanei_config.h
agfafocus.o: /usr/include/stdio.h /usr/include/libio.h
agfafocus.o: /usr/include/_G_config.h /usr/include/wchar.h
agfafocus.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
agfafocus.o: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
agfafocus.o: ../include/sane/sanei_thread.h ../include/sane/config.h
agfafocus.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
agfafocus.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
agfafocus.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
agfafocus.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
agfafocus.o: agfafocus.h
agfafocus-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
agfafocus-s.o: ../include/sane/sanei.h ../include/sane/sane.h
agfafocus-s.o: /usr/include/fcntl.h /usr/include/features.h
agfafocus-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
agfafocus-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
agfafocus-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
agfafocus-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
agfafocus-s.o: /usr/include/time.h /usr/include/endian.h
agfafocus-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
agfafocus-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
agfafocus-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
agfafocus-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
agfafocus-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
agfafocus-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
agfafocus-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
agfafocus-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
agfafocus-s.o: /usr/include/bits/stdio_lim.h
apple.o: ../include/sane/config.h /usr/include/ctype.h
apple.o: /usr/include/features.h /usr/include/sys/cdefs.h
apple.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
apple.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
apple.o: /usr/include/bits/typesizes.h /usr/include/endian.h
apple.o: /usr/include/bits/endian.h /usr/include/xlocale.h
apple.o: /usr/include/errno.h /usr/include/bits/errno.h
apple.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
apple.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
apple.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
apple.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
apple.o: /usr/include/time.h /usr/include/sys/select.h
apple.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
apple.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
apple.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
apple.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
apple.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
apple.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
apple.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
apple.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
apple.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
apple.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
apple.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
apple.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
apple.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
apple.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
apple.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
apple.o: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
apple.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
apple.o: /usr/include/bits/confname.h ../include/getopt.h
apple.o: /usr/include/sys/time.h /usr/include/sys/wait.h
apple.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
apple.o: ../include/sane/sane.h ../include/sane/sanei.h
apple.o: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
apple.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
apple.o: ../include/sane/sanei_config.h apple.h
apple-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
apple-s.o: ../include/sane/sanei.h ../include/sane/sane.h
apple-s.o: /usr/include/fcntl.h /usr/include/features.h
apple-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
apple-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
apple-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
apple-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
apple-s.o: /usr/include/time.h /usr/include/endian.h
apple-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
apple-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
apple-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
apple-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
apple-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
apple-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
apple-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
apple-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
apple-s.o: /usr/include/bits/stdio_lim.h
artec.o: ../include/sane/config.h /usr/include/ctype.h
artec.o: /usr/include/features.h /usr/include/sys/cdefs.h
artec.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
artec.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
artec.o: /usr/include/bits/typesizes.h /usr/include/endian.h
artec.o: /usr/include/bits/endian.h /usr/include/xlocale.h
artec.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
artec.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
artec.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
artec.o: /usr/include/bits/stdio_lim.h /usr/include/stdlib.h
artec.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
artec.o: /usr/include/sys/types.h /usr/include/time.h
artec.o: /usr/include/sys/select.h /usr/include/bits/select.h
artec.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
artec.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
artec.o: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
artec.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
artec.o: /usr/include/bits/confname.h ../include/getopt.h
artec.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
artec.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
artec.o: /usr/include/bits/uio.h ../include/sane/sane.h
artec.o: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
artec.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
artec.o: ../include/sane/sanei.h ../include/sane/sanei_config.h
artec.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
artec.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h ./artec.h
artec_eplus48u.o: ../include/sane/config.h /usr/include/errno.h
artec_eplus48u.o: /usr/include/features.h /usr/include/sys/cdefs.h
artec_eplus48u.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
artec_eplus48u.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
artec_eplus48u.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
artec_eplus48u.o: /usr/include/asm-i386/errno.h
artec_eplus48u.o: /usr/include/asm-generic/errno.h
artec_eplus48u.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
artec_eplus48u.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
artec_eplus48u.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
artec_eplus48u.o: /usr/include/time.h /usr/include/endian.h
artec_eplus48u.o: /usr/include/bits/endian.h /usr/include/sys/select.h
artec_eplus48u.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
artec_eplus48u.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
artec_eplus48u.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
artec_eplus48u.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
artec_eplus48u.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
artec_eplus48u.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
artec_eplus48u.o: /usr/include/bits/posix2_lim.h
artec_eplus48u.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
artec_eplus48u.o: /usr/include/signal.h /usr/include/bits/signum.h
artec_eplus48u.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
artec_eplus48u.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
artec_eplus48u.o: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
artec_eplus48u.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
artec_eplus48u.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
artec_eplus48u.o: /usr/include/alloca.h /usr/include/string.h
artec_eplus48u.o: /usr/include/ctype.h /usr/include/unistd.h
artec_eplus48u.o: /usr/include/bits/posix_opt.h
artec_eplus48u.o: /usr/include/bits/environments.h
artec_eplus48u.o: /usr/include/bits/confname.h ../include/getopt.h
artec_eplus48u.o: /usr/include/math.h /usr/include/bits/huge_val.h
artec_eplus48u.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
artec_eplus48u.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
artec_eplus48u.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
artec_eplus48u.o: /usr/include/sys/time.h /usr/include/sys/ioctl.h
artec_eplus48u.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
artec_eplus48u.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
artec_eplus48u.o: /usr/include/asm-i386/ioctl.h
artec_eplus48u.o: /usr/include/asm-generic/ioctl.h
artec_eplus48u.o: /usr/include/bits/ioctl-types.h
artec_eplus48u.o: /usr/include/sys/ttydefaults.h ../include/sane/sane.h
artec_eplus48u.o: ../include/sane/sanei.h ../include/sane/sane.h
artec_eplus48u.o: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
artec_eplus48u.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
artec_eplus48u.o: ../include/sane/sanei_config.h /usr/include/stdio.h
artec_eplus48u.o: /usr/include/libio.h /usr/include/_G_config.h
artec_eplus48u.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
artec_eplus48u.o: artec_eplus48u.h /usr/include/sys/ipc.h
artec_eplus48u.o: /usr/include/bits/ipctypes.h /usr/include/bits/ipc.h
artec_eplus48u.o: ../include/sane/sanei_usb.h ../include/sane/sanei_thread.h
artec_eplus48u-s.o: ../include/sane/sanei_backend.h
artec_eplus48u-s.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
artec_eplus48u-s.o: ../include/sane/sane.h /usr/include/fcntl.h
artec_eplus48u-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
artec_eplus48u-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
artec_eplus48u-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
artec_eplus48u-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
artec_eplus48u-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
artec_eplus48u-s.o: /usr/include/endian.h /usr/include/bits/endian.h
artec_eplus48u-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
artec_eplus48u-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
artec_eplus48u-s.o: /usr/include/sys/sysmacros.h
artec_eplus48u-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
artec_eplus48u-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
artec_eplus48u-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
artec_eplus48u-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
artec_eplus48u-s.o: /usr/include/bits/posix2_lim.h
artec_eplus48u-s.o: /usr/include/bits/xopen_lim.h
artec_eplus48u-s.o: /usr/include/bits/stdio_lim.h
artec-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
artec-s.o: ../include/sane/sanei.h ../include/sane/sane.h
artec-s.o: /usr/include/fcntl.h /usr/include/features.h
artec-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
artec-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
artec-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
artec-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
artec-s.o: /usr/include/time.h /usr/include/endian.h
artec-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
artec-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
artec-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
artec-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
artec-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
artec-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
artec-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
artec-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
artec-s.o: /usr/include/bits/stdio_lim.h
as6e.o: ../include/sane/config.h /usr/include/string.h
as6e.o: /usr/include/features.h /usr/include/sys/cdefs.h
as6e.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
as6e.o: /usr/include/gnu/stubs-32.h /usr/include/xlocale.h
as6e.o: /usr/include/stdio.h /usr/include/bits/types.h
as6e.o: /usr/include/bits/typesizes.h /usr/include/libio.h
as6e.o: /usr/include/_G_config.h /usr/include/wchar.h
as6e.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
as6e.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
as6e.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
as6e.o: /usr/include/bits/endian.h /usr/include/sys/types.h
as6e.o: /usr/include/time.h /usr/include/sys/select.h
as6e.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
as6e.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
as6e.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
as6e.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
as6e.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
as6e.o: ../include/getopt.h /usr/include/ctype.h /usr/include/limits.h
as6e.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
as6e.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
as6e.o: /usr/include/bits/xopen_lim.h /usr/include/signal.h
as6e.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
as6e.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
as6e.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
as6e.o: /usr/include/bits/sigthread.h /usr/include/sys/stat.h
as6e.o: /usr/include/bits/stat.h ../include/sane/sane.h
as6e.o: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
as6e.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
as6e.o: ../include/sane/sane.h /usr/include/fcntl.h /usr/include/bits/fcntl.h
as6e.o: /usr/include/bits/uio.h ../include/sane/sanei_config.h as6e.h
as6e-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
as6e-s.o: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
as6e-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
as6e-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
as6e-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
as6e-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
as6e-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
as6e-s.o: /usr/include/endian.h /usr/include/bits/endian.h
as6e-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
as6e-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
as6e-s.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
as6e-s.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
as6e-s.o: /usr/include/bits/stat.h /usr/include/limits.h
as6e-s.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
as6e-s.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
as6e-s.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
avision.o: ../include/sane/config.h /usr/include/errno.h
avision.o: /usr/include/features.h /usr/include/sys/cdefs.h
avision.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
avision.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
avision.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
avision.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
avision.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
avision.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
avision.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
avision.o: /usr/include/time.h /usr/include/endian.h
avision.o: /usr/include/bits/endian.h /usr/include/sys/select.h
avision.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
avision.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
avision.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
avision.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
avision.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
avision.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
avision.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
avision.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
avision.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
avision.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
avision.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
avision.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
avision.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
avision.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
avision.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
avision.o: /usr/include/xlocale.h /usr/include/alloca.h /usr/include/string.h
avision.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
avision.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
avision.o: ../include/getopt.h /usr/include/sys/time.h /usr/include/math.h
avision.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
avision.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
avision.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
avision.o: /usr/include/bits/mathcalls.h ../include/sane/sane.h
avision.o: ../include/sane/sanei.h ../include/sane/saneopts.h
avision.o: ../include/sane/sanei_thread.h ../include/sane/config.h
avision.o: ../include/sane/sanei_scsi.h ../include/sane/sanei_usb.h
avision.o: ../include/sane/sane.h ../include/sane/sanei_config.h
avision.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
avision.o: ./avision.h /usr/include/stdint.h /usr/include/bits/wchar.h
avision-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
avision-s.o: ../include/sane/sanei.h ../include/sane/sane.h
avision-s.o: /usr/include/fcntl.h /usr/include/features.h
avision-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
avision-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
avision-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
avision-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
avision-s.o: /usr/include/time.h /usr/include/endian.h
avision-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
avision-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
avision-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
avision-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
avision-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
avision-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
avision-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
avision-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
avision-s.o: /usr/include/bits/stdio_lim.h
bh.o: ../include/sane/config.h /usr/include/limits.h /usr/include/features.h
bh.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
bh.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
bh.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
bh.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
bh.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
bh.o: /usr/include/errno.h /usr/include/bits/errno.h
bh.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
bh.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
bh.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
bh.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
bh.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
bh.o: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
bh.o: /usr/include/sys/select.h /usr/include/bits/select.h
bh.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
bh.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
bh.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
bh.o: /usr/include/bits/stat.h /usr/include/ctype.h /usr/include/xlocale.h
bh.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
bh.o: /usr/include/bits/waitstatus.h /usr/include/alloca.h
bh.o: /usr/include/string.h /usr/include/stdio.h /usr/include/libio.h
bh.o: /usr/include/_G_config.h /usr/include/wchar.h
bh.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
bh.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
bh.o: /usr/include/bits/confname.h ../include/getopt.h ../include/sane/sane.h
bh.o: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
bh.o: ../include/sane/sanei_config.h ../include/sane/sanei_backend.h
bh.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h bh.h
bh-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
bh-s.o: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
bh-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
bh-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
bh-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
bh-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
bh-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
bh-s.o: /usr/include/endian.h /usr/include/bits/endian.h
bh-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
bh-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
bh-s.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
bh-s.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
bh-s.o: /usr/include/bits/stat.h /usr/include/limits.h
bh-s.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
bh-s.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
bh-s.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
canon630u.o: ../include/sane/config.h /usr/include/stdlib.h
canon630u.o: /usr/include/features.h /usr/include/sys/cdefs.h
canon630u.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
canon630u.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
canon630u.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
canon630u.o: /usr/include/bits/endian.h /usr/include/xlocale.h
canon630u.o: /usr/include/sys/types.h /usr/include/bits/types.h
canon630u.o: /usr/include/bits/typesizes.h /usr/include/time.h
canon630u.o: /usr/include/sys/select.h /usr/include/bits/select.h
canon630u.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
canon630u.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
canon630u.o: /usr/include/alloca.h /usr/include/string.h /usr/include/stdio.h
canon630u.o: /usr/include/libio.h /usr/include/_G_config.h
canon630u.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
canon630u.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
canon630u.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
canon630u.o: /usr/include/bits/confname.h ../include/getopt.h
canon630u.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
canon630u.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
canon630u.o: /usr/include/bits/stat.h /usr/include/sys/ioctl.h
canon630u.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
canon630u.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
canon630u.o: /usr/include/asm-i386/ioctl.h /usr/include/asm-generic/ioctl.h
canon630u.o: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
canon630u.o: ../include/sane/sane.h ../include/sane/sanei.h
canon630u.o: ../include/sane/sane.h ../include/sane/saneopts.h
canon630u.o: ../include/sane/sanei_config.h ../include/sane/sanei_usb.h
canon630u.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
canon630u.o: ../include/sane/sanei.h /usr/include/limits.h
canon630u.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
canon630u.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
canon630u.o: /usr/include/bits/xopen_lim.h canon630u-common.c
canon630u.o: /usr/include/errno.h /usr/include/bits/errno.h
canon630u.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
canon630u.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
canon630u.o: /usr/include/asm-generic/errno-base.h /usr/include/math.h
canon630u.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
canon630u.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
canon630u.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
canon630u.o: /usr/include/bits/mathcalls.h lm9830.h
canon630u-common.o: /usr/include/errno.h /usr/include/features.h
canon630u-common.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
canon630u-common.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
canon630u-common.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
canon630u-common.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
canon630u-common.o: /usr/include/asm-generic/errno.h
canon630u-common.o: /usr/include/asm-generic/errno-base.h
canon630u-common.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
canon630u-common.o: /usr/include/sys/types.h /usr/include/bits/types.h
canon630u-common.o: /usr/include/bits/typesizes.h /usr/include/time.h
canon630u-common.o: /usr/include/endian.h /usr/include/bits/endian.h
canon630u-common.o: /usr/include/sys/select.h /usr/include/bits/select.h
canon630u-common.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
canon630u-common.o: /usr/include/sys/sysmacros.h
canon630u-common.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
canon630u-common.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
canon630u-common.o: /usr/include/stdio.h /usr/include/libio.h
canon630u-common.o: /usr/include/_G_config.h /usr/include/wchar.h
canon630u-common.o: /usr/include/bits/stdio_lim.h
canon630u-common.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
canon630u-common.o: /usr/include/bits/waitflags.h
canon630u-common.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
canon630u-common.o: /usr/include/alloca.h /usr/include/string.h
canon630u-common.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
canon630u-common.o: /usr/include/bits/environments.h
canon630u-common.o: /usr/include/bits/confname.h ../include/getopt.h
canon630u-common.o: /usr/include/math.h /usr/include/bits/huge_val.h
canon630u-common.o: /usr/include/bits/huge_valf.h
canon630u-common.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
canon630u-common.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
canon630u-common.o: /usr/include/bits/mathcalls.h lm9830.h
canon630u-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
canon630u-s.o: ../include/sane/sanei.h ../include/sane/sane.h
canon630u-s.o: /usr/include/fcntl.h /usr/include/features.h
canon630u-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
canon630u-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
canon630u-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
canon630u-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
canon630u-s.o: /usr/include/time.h /usr/include/endian.h
canon630u-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
canon630u-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
canon630u-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
canon630u-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
canon630u-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
canon630u-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
canon630u-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
canon630u-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
canon630u-s.o: /usr/include/bits/stdio_lim.h
canon.o: ../include/sane/config.h /usr/include/limits.h
canon.o: /usr/include/features.h /usr/include/sys/cdefs.h
canon.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
canon.o: /usr/include/gnu/stubs-32.h /usr/include/bits/posix1_lim.h
canon.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
canon.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
canon.o: /usr/include/bits/stdio_lim.h /usr/include/stdlib.h
canon.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
canon.o: /usr/include/endian.h /usr/include/bits/endian.h
canon.o: /usr/include/xlocale.h /usr/include/sys/types.h
canon.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
canon.o: /usr/include/time.h /usr/include/sys/select.h
canon.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
canon.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
canon.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
canon.o: /usr/include/string.h /usr/include/math.h
canon.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
canon.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
canon.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
canon.o: /usr/include/bits/mathcalls.h /usr/include/unistd.h
canon.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
canon.o: /usr/include/bits/confname.h ../include/getopt.h
canon.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
canon.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
canon.o: /usr/include/bits/stat.h /usr/include/errno.h
canon.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
canon.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
canon.o: /usr/include/asm-generic/errno.h
canon.o: /usr/include/asm-generic/errno-base.h ../include/sane/sane.h
canon.o: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
canon.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
canon.o: ../include/sane/sanei.h ../include/sane/sanei_config.h
canon.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
canon.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h ./canon.h
canon.o: canon-scsi.c canon-sane.c
canon_pp.o: ../include/sane/config.h /usr/include/string.h
canon_pp.o: /usr/include/features.h /usr/include/sys/cdefs.h
canon_pp.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
canon_pp.o: /usr/include/gnu/stubs-32.h /usr/include/xlocale.h
canon_pp.o: /usr/include/math.h /usr/include/bits/huge_val.h
canon_pp.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
canon_pp.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
canon_pp.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
canon_pp.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
canon_pp.o: /usr/include/bits/environments.h /usr/include/bits/types.h
canon_pp.o: /usr/include/bits/typesizes.h /usr/include/bits/confname.h
canon_pp.o: ../include/getopt.h /usr/include/sys/stat.h /usr/include/time.h
canon_pp.o: /usr/include/bits/stat.h /usr/include/sys/types.h
canon_pp.o: /usr/include/endian.h /usr/include/bits/endian.h
canon_pp.o: /usr/include/sys/select.h /usr/include/bits/select.h
canon_pp.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
canon_pp.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
canon_pp.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
canon_pp.o: /usr/include/bits/waitstatus.h /usr/include/alloca.h
canon_pp.o: /usr/include/errno.h /usr/include/bits/errno.h
canon_pp.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
canon_pp.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
canon_pp.o: /usr/include/asm-generic/errno-base.h /usr/include/ieee1284.h
canon_pp.o: /usr/include/sys/time.h ../include/sane/sane.h
canon_pp.o: ../include/sane/saneopts.h canon_pp-dev.h canon_pp-io.h
canon_pp.o: canon_pp.h ../include/sane/sanei_debug.h ../include/sane/sanei.h
canon_pp.o: ../include/sane/sane.h ../include/sane/sanei_config.h
canon_pp.o: /usr/include/stdio.h /usr/include/libio.h
canon_pp.o: /usr/include/_G_config.h /usr/include/wchar.h
canon_pp.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
canon_pp.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
canon_pp.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
canon_pp.o: /usr/include/bits/uio.h /usr/include/limits.h
canon_pp.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
canon_pp.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
canon_pp.o: /usr/include/bits/xopen_lim.h
canon_pp-dev.o: ../include/sane/config.h /usr/include/sys/time.h
canon_pp-dev.o: /usr/include/features.h /usr/include/sys/cdefs.h
canon_pp-dev.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
canon_pp-dev.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
canon_pp-dev.o: /usr/include/bits/typesizes.h /usr/include/time.h
canon_pp-dev.o: /usr/include/bits/time.h /usr/include/sys/select.h
canon_pp-dev.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
canon_pp-dev.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
canon_pp-dev.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
canon_pp-dev.o: ../include/getopt.h /usr/include/errno.h
canon_pp-dev.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
canon_pp-dev.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
canon_pp-dev.o: /usr/include/asm-generic/errno.h
canon_pp-dev.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
canon_pp-dev.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
canon_pp-dev.o: /usr/include/endian.h /usr/include/bits/endian.h
canon_pp-dev.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
canon_pp-dev.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
canon_pp-dev.o: /usr/include/bits/stat.h /usr/include/string.h
canon_pp-dev.o: /usr/include/xlocale.h /usr/include/stdlib.h
canon_pp-dev.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
canon_pp-dev.o: /usr/include/alloca.h /usr/include/ieee1284.h canon_pp-io.h
canon_pp-dev.o: canon_pp-dev.h canon_pp.h ../include/sane/sanei_debug.h
canon_pp-dev.o: ../include/sane/sanei.h ../include/sane/sane.h
canon_pp-dev.o: ../include/sane/sanei_config.h /usr/include/stdio.h
canon_pp-dev.o: /usr/include/libio.h /usr/include/_G_config.h
canon_pp-dev.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
canon_pp-dev.o: /usr/include/bits/sys_errlist.h
canon_pp-dev.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
canon_pp-dev.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
canon_pp-dev.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
canon_pp-dev.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
canon_pp-io.o: ../include/sane/config.h /usr/include/sys/time.h
canon_pp-io.o: /usr/include/features.h /usr/include/sys/cdefs.h
canon_pp-io.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
canon_pp-io.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
canon_pp-io.o: /usr/include/bits/typesizes.h /usr/include/time.h
canon_pp-io.o: /usr/include/bits/time.h /usr/include/sys/select.h
canon_pp-io.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
canon_pp-io.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
canon_pp-io.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
canon_pp-io.o: ../include/getopt.h /usr/include/ieee1284.h
canon_pp-io.o: /usr/include/sys/types.h /usr/include/endian.h
canon_pp-io.o: /usr/include/bits/endian.h /usr/include/sys/sysmacros.h
canon_pp-io.o: /usr/include/bits/pthreadtypes.h canon_pp-io.h canon_pp-dev.h
canon_pp-io.o: canon_pp.h ../include/sane/sanei_debug.h
canon_pp-io.o: ../include/sane/sanei.h ../include/sane/sane.h
canon_pp-io.o: ../include/sane/sanei_config.h /usr/include/stdio.h
canon_pp-io.o: /usr/include/libio.h /usr/include/_G_config.h
canon_pp-io.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
canon_pp-io.o: /usr/include/bits/sys_errlist.h
canon_pp-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
canon_pp-s.o: ../include/sane/sanei.h ../include/sane/sane.h
canon_pp-s.o: /usr/include/fcntl.h /usr/include/features.h
canon_pp-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
canon_pp-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
canon_pp-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
canon_pp-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
canon_pp-s.o: /usr/include/time.h /usr/include/endian.h
canon_pp-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
canon_pp-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
canon_pp-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
canon_pp-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
canon_pp-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
canon_pp-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
canon_pp-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
canon_pp-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
canon_pp-s.o: /usr/include/bits/stdio_lim.h
canon-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
canon-s.o: ../include/sane/sanei.h ../include/sane/sane.h
canon-s.o: /usr/include/fcntl.h /usr/include/features.h
canon-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
canon-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
canon-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
canon-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
canon-s.o: /usr/include/time.h /usr/include/endian.h
canon-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
canon-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
canon-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
canon-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
canon-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
canon-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
canon-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
canon-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
canon-s.o: /usr/include/bits/stdio_lim.h
cardscan.o: ../include/sane/config.h /usr/include/errno.h
cardscan.o: /usr/include/features.h /usr/include/sys/cdefs.h
cardscan.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
cardscan.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
cardscan.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
cardscan.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
cardscan.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
cardscan.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
cardscan.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
cardscan.o: /usr/include/time.h /usr/include/endian.h
cardscan.o: /usr/include/bits/endian.h /usr/include/sys/select.h
cardscan.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
cardscan.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
cardscan.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
cardscan.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
cardscan.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
cardscan.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
cardscan.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
cardscan.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
cardscan.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
cardscan.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
cardscan.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
cardscan.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
cardscan.o: /usr/include/libio.h /usr/include/_G_config.h
cardscan.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
cardscan.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
cardscan.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
cardscan.o: /usr/include/alloca.h /usr/include/string.h /usr/include/ctype.h
cardscan.o: /usr/include/math.h /usr/include/bits/huge_val.h
cardscan.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
cardscan.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
cardscan.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
cardscan.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
cardscan.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
cardscan.o: ../include/getopt.h ../include/sane/sanei_backend.h
cardscan.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
cardscan.o: ../include/sane/sane.h ../include/sane/sanei_usb.h
cardscan.o: ../include/sane/config.h ../include/sane/sane.h
cardscan.o: ../include/sane/saneopts.h ../include/sane/sanei_config.h
cardscan.o: cardscan.h
cardscan-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
cardscan-s.o: ../include/sane/sanei.h ../include/sane/sane.h
cardscan-s.o: /usr/include/fcntl.h /usr/include/features.h
cardscan-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
cardscan-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
cardscan-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
cardscan-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
cardscan-s.o: /usr/include/time.h /usr/include/endian.h
cardscan-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
cardscan-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
cardscan-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
cardscan-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
cardscan-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
cardscan-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
cardscan-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
cardscan-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
cardscan-s.o: /usr/include/bits/stdio_lim.h
coolscan2.o: ../include/sane/config.h ../include/lalloca.h
coolscan2.o: /usr/include/math.h /usr/include/features.h
coolscan2.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
coolscan2.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
coolscan2.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
coolscan2.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
coolscan2.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
coolscan2.o: /usr/include/bits/mathcalls.h /usr/include/stdio.h
coolscan2.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
coolscan2.o: /usr/include/libio.h /usr/include/_G_config.h
coolscan2.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
coolscan2.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
coolscan2.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
coolscan2.o: /usr/include/endian.h /usr/include/bits/endian.h
coolscan2.o: /usr/include/xlocale.h /usr/include/sys/types.h
coolscan2.o: /usr/include/time.h /usr/include/sys/select.h
coolscan2.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
coolscan2.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
coolscan2.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
coolscan2.o: /usr/include/string.h /usr/include/ctype.h /usr/include/unistd.h
coolscan2.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
coolscan2.o: /usr/include/bits/confname.h ../include/getopt.h
coolscan2.o: ../include/sane/sane.h ../include/sane/sanei.h
coolscan2.o: ../include/sane/sane.h ../include/sane/saneopts.h
coolscan2.o: ../include/sane/sanei_scsi.h ../include/sane/sanei_usb.h
coolscan2.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
coolscan2.o: ../include/sane/sanei_config.h ../include/sane/sanei_backend.h
coolscan2.o: ../include/sane/sanei_debug.h /usr/include/fcntl.h
coolscan2.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
coolscan2.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
coolscan2.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
coolscan2.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
coolscan2.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
coolscan2-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
coolscan2-s.o: ../include/sane/sanei.h ../include/sane/sane.h
coolscan2-s.o: /usr/include/fcntl.h /usr/include/features.h
coolscan2-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
coolscan2-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
coolscan2-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
coolscan2-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
coolscan2-s.o: /usr/include/time.h /usr/include/endian.h
coolscan2-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
coolscan2-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
coolscan2-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
coolscan2-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
coolscan2-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
coolscan2-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
coolscan2-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
coolscan2-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
coolscan2-s.o: /usr/include/bits/stdio_lim.h
coolscan3.o: ../include/sane/config.h /usr/include/math.h
coolscan3.o: /usr/include/features.h /usr/include/sys/cdefs.h
coolscan3.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
coolscan3.o: /usr/include/gnu/stubs-32.h /usr/include/bits/huge_val.h
coolscan3.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
coolscan3.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
coolscan3.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
coolscan3.o: /usr/include/stdio.h /usr/include/bits/types.h
coolscan3.o: /usr/include/bits/typesizes.h /usr/include/libio.h
coolscan3.o: /usr/include/_G_config.h /usr/include/wchar.h
coolscan3.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
coolscan3.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
coolscan3.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
coolscan3.o: /usr/include/bits/endian.h /usr/include/xlocale.h
coolscan3.o: /usr/include/sys/types.h /usr/include/time.h
coolscan3.o: /usr/include/sys/select.h /usr/include/bits/select.h
coolscan3.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
coolscan3.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
coolscan3.o: /usr/include/alloca.h /usr/include/string.h /usr/include/ctype.h
coolscan3.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
coolscan3.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
coolscan3.o: ../include/getopt.h ../include/sane/sane.h
coolscan3.o: ../include/sane/sanei.h ../include/sane/saneopts.h
coolscan3.o: ../include/sane/sanei_scsi.h ../include/sane/sanei_usb.h
coolscan3.o: ../include/sane/config.h ../include/sane/sane.h
coolscan3.o: ../include/sane/sanei_debug.h ../include/sane/sanei_config.h
coolscan3.o: ../include/sane/sanei_backend.h /usr/include/fcntl.h
coolscan3.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
coolscan3.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
coolscan3.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
coolscan3.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
coolscan3.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
coolscan3-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
coolscan3-s.o: ../include/sane/sanei.h ../include/sane/sane.h
coolscan3-s.o: /usr/include/fcntl.h /usr/include/features.h
coolscan3-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
coolscan3-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
coolscan3-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
coolscan3-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
coolscan3-s.o: /usr/include/time.h /usr/include/endian.h
coolscan3-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
coolscan3-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
coolscan3-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
coolscan3-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
coolscan3-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
coolscan3-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
coolscan3-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
coolscan3-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
coolscan3-s.o: /usr/include/bits/stdio_lim.h
coolscan.o: ../include/sane/config.h ../include/lalloca.h
coolscan.o: /usr/include/errno.h /usr/include/features.h
coolscan.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
coolscan.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
coolscan.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
coolscan.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
coolscan.o: /usr/include/asm-generic/errno.h
coolscan.o: /usr/include/asm-generic/errno-base.h /usr/include/math.h
coolscan.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
coolscan.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
coolscan.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
coolscan.o: /usr/include/bits/mathcalls.h /usr/include/fcntl.h
coolscan.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
coolscan.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
coolscan.o: /usr/include/time.h /usr/include/endian.h
coolscan.o: /usr/include/bits/endian.h /usr/include/sys/select.h
coolscan.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
coolscan.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
coolscan.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
coolscan.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
coolscan.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
coolscan.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
coolscan.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
coolscan.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
coolscan.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
coolscan.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
coolscan.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
coolscan.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
coolscan.o: /usr/include/libio.h /usr/include/_G_config.h
coolscan.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
coolscan.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
coolscan.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
coolscan.o: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
coolscan.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
coolscan.o: /usr/include/bits/confname.h ../include/getopt.h
coolscan.o: ../include/sane/sane.h ../include/sane/sanei.h
coolscan.o: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
coolscan.o: ../include/sane/sanei_debug.h ../include/sane/sanei_thread.h
coolscan.o: ../include/sane/config.h ../include/sane/sanei_config.h
coolscan.o: ../include/sane/sanei_backend.h coolscan.h coolscan-scsidef.h
coolscan-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
coolscan-s.o: ../include/sane/sanei.h ../include/sane/sane.h
coolscan-s.o: /usr/include/fcntl.h /usr/include/features.h
coolscan-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
coolscan-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
coolscan-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
coolscan-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
coolscan-s.o: /usr/include/time.h /usr/include/endian.h
coolscan-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
coolscan-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
coolscan-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
coolscan-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
coolscan-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
coolscan-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
coolscan-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
coolscan-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
coolscan-s.o: /usr/include/bits/stdio_lim.h
dc210.o: ../include/sane/config.h /usr/include/stdlib.h
dc210.o: /usr/include/features.h /usr/include/sys/cdefs.h
dc210.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
dc210.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
dc210.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
dc210.o: /usr/include/bits/endian.h /usr/include/xlocale.h
dc210.o: /usr/include/sys/types.h /usr/include/bits/types.h
dc210.o: /usr/include/bits/typesizes.h /usr/include/time.h
dc210.o: /usr/include/sys/select.h /usr/include/bits/select.h
dc210.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
dc210.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
dc210.o: /usr/include/alloca.h /usr/include/string.h /usr/include/stdio.h
dc210.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
dc210.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
dc210.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
dc210.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
dc210.o: ../include/getopt.h /usr/include/fcntl.h /usr/include/bits/fcntl.h
dc210.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
dc210.o: /usr/include/bits/stat.h /usr/include/limits.h
dc210.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
dc210.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
dc210.o: /usr/include/bits/xopen_lim.h ../include/sane/sanei_jpeg.h
dc210.o: ../include/sane/sanei_jinclude.h /usr/include/jconfig.h
dc210.o: /usr/include/jpeglib.h /usr/include/jmorecfg.h /usr/include/jerror.h
dc210.o: ../include/sane/sanei_cderror.h /usr/include/sys/ioctl.h
dc210.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
dc210.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
dc210.o: /usr/include/asm-i386/ioctl.h /usr/include/asm-generic/ioctl.h
dc210.o: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
dc210.o: ../include/sane/sane.h ../include/sane/sanei.h
dc210.o: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
dc210.o: ../include/sane/sanei_debug.h dc210.h /usr/include/termios.h
dc210.o: /usr/include/bits/termios.h /usr/include/sys/time.h
dc210-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
dc210-s.o: ../include/sane/sanei.h ../include/sane/sane.h
dc210-s.o: /usr/include/fcntl.h /usr/include/features.h
dc210-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
dc210-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
dc210-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
dc210-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
dc210-s.o: /usr/include/time.h /usr/include/endian.h
dc210-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
dc210-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
dc210-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
dc210-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
dc210-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
dc210-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
dc210-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
dc210-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
dc210-s.o: /usr/include/bits/stdio_lim.h
dc240.o: ../include/sane/config.h /usr/include/stdlib.h
dc240.o: /usr/include/features.h /usr/include/sys/cdefs.h
dc240.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
dc240.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
dc240.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
dc240.o: /usr/include/bits/endian.h /usr/include/xlocale.h
dc240.o: /usr/include/sys/types.h /usr/include/bits/types.h
dc240.o: /usr/include/bits/typesizes.h /usr/include/time.h
dc240.o: /usr/include/sys/select.h /usr/include/bits/select.h
dc240.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
dc240.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
dc240.o: /usr/include/alloca.h /usr/include/string.h /usr/include/stdio.h
dc240.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
dc240.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
dc240.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
dc240.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
dc240.o: ../include/getopt.h /usr/include/fcntl.h /usr/include/bits/fcntl.h
dc240.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
dc240.o: /usr/include/bits/stat.h /usr/include/limits.h
dc240.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
dc240.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
dc240.o: /usr/include/bits/xopen_lim.h ../include/sane/sanei_jpeg.h
dc240.o: ../include/sane/sanei_jinclude.h /usr/include/jconfig.h
dc240.o: /usr/include/jpeglib.h /usr/include/jmorecfg.h /usr/include/jerror.h
dc240.o: ../include/sane/sanei_cderror.h /usr/include/sys/ioctl.h
dc240.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
dc240.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
dc240.o: /usr/include/asm-i386/ioctl.h /usr/include/asm-generic/ioctl.h
dc240.o: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
dc240.o: ../include/sane/sane.h ../include/sane/sanei.h
dc240.o: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
dc240.o: ../include/sane/sanei_debug.h dc240.h /usr/include/termios.h
dc240.o: /usr/include/bits/termios.h /usr/include/sys/time.h
dc240-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
dc240-s.o: ../include/sane/sanei.h ../include/sane/sane.h
dc240-s.o: /usr/include/fcntl.h /usr/include/features.h
dc240-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
dc240-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
dc240-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
dc240-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
dc240-s.o: /usr/include/time.h /usr/include/endian.h
dc240-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
dc240-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
dc240-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
dc240-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
dc240-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
dc240-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
dc240-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
dc240-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
dc240-s.o: /usr/include/bits/stdio_lim.h
dc25.o: ../include/sane/config.h /usr/include/stdlib.h
dc25.o: /usr/include/features.h /usr/include/sys/cdefs.h
dc25.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
dc25.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
dc25.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
dc25.o: /usr/include/bits/endian.h /usr/include/xlocale.h
dc25.o: /usr/include/sys/types.h /usr/include/bits/types.h
dc25.o: /usr/include/bits/typesizes.h /usr/include/time.h
dc25.o: /usr/include/sys/select.h /usr/include/bits/select.h
dc25.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
dc25.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
dc25.o: /usr/include/alloca.h /usr/include/string.h /usr/include/stdio.h
dc25.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
dc25.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
dc25.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
dc25.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
dc25.o: ../include/getopt.h /usr/include/fcntl.h /usr/include/bits/fcntl.h
dc25.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
dc25.o: /usr/include/bits/stat.h /usr/include/limits.h
dc25.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
dc25.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
dc25.o: /usr/include/bits/xopen_lim.h ../include/sane/sane.h
dc25.o: ../include/sane/sanei.h ../include/sane/saneopts.h
dc25.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h dc25.h
dc25.o: /usr/include/termios.h /usr/include/bits/termios.h
dc25.o: /usr/include/sys/ttydefaults.h /usr/include/math.h
dc25.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
dc25.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
dc25.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
dc25.o: /usr/include/bits/mathcalls.h
dc25-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
dc25-s.o: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
dc25-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
dc25-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
dc25-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
dc25-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
dc25-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
dc25-s.o: /usr/include/endian.h /usr/include/bits/endian.h
dc25-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
dc25-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
dc25-s.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
dc25-s.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
dc25-s.o: /usr/include/bits/stat.h /usr/include/limits.h
dc25-s.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
dc25-s.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
dc25-s.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
dell1600n_net.o: ../include/sane/config.h ../include/sane/sane.h
dell1600n_net.o: ../include/sane/sanei.h ../include/sane/sane.h
dell1600n_net.o: ../include/sane/sanei_backend.h
dell1600n_net.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
dell1600n_net.o: /usr/include/fcntl.h /usr/include/features.h
dell1600n_net.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
dell1600n_net.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
dell1600n_net.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
dell1600n_net.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
dell1600n_net.o: /usr/include/time.h /usr/include/endian.h
dell1600n_net.o: /usr/include/bits/endian.h /usr/include/sys/select.h
dell1600n_net.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
dell1600n_net.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
dell1600n_net.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
dell1600n_net.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
dell1600n_net.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
dell1600n_net.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
dell1600n_net.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
dell1600n_net.o: /usr/include/bits/stdio_lim.h ../include/sane/sanei_config.h
dell1600n_net.o: /usr/include/stdio.h /usr/include/libio.h
dell1600n_net.o: /usr/include/_G_config.h /usr/include/wchar.h
dell1600n_net.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
dell1600n_net.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
dell1600n_net.o: /usr/include/xlocale.h /usr/include/alloca.h
dell1600n_net.o: /usr/include/string.h /usr/include/math.h
dell1600n_net.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
dell1600n_net.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
dell1600n_net.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
dell1600n_net.o: /usr/include/bits/mathcalls.h /usr/include/unistd.h
dell1600n_net.o: /usr/include/bits/posix_opt.h
dell1600n_net.o: /usr/include/bits/environments.h
dell1600n_net.o: /usr/include/bits/confname.h ../include/getopt.h
dell1600n_net.o: /usr/include/sys/socket.h /usr/include/sys/uio.h
dell1600n_net.o: /usr/include/bits/socket.h /usr/include/bits/sockaddr.h
dell1600n_net.o: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
dell1600n_net.o: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
dell1600n_net.o: /usr/include/sys/time.h /usr/include/netinet/in.h
dell1600n_net.o: /usr/include/stdint.h /usr/include/bits/wchar.h
dell1600n_net.o: /usr/include/bits/in.h /usr/include/bits/byteswap.h
dell1600n_net.o: /usr/include/netdb.h /usr/include/rpc/netdb.h
dell1600n_net.o: /usr/include/bits/siginfo.h /usr/include/bits/netdb.h
dell1600n_net.o: /usr/include/jpeglib.h /usr/include/jmorecfg.h
dell1600n_net.o: /usr/include/tiffio.h /usr/include/tiff.h
dell1600n_net.o: /usr/include/tiffconf.h /usr/include/tiffvers.h
dell1600n_net-s.o: ../include/sane/sanei_backend.h
dell1600n_net-s.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
dell1600n_net-s.o: ../include/sane/sane.h /usr/include/fcntl.h
dell1600n_net-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
dell1600n_net-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
dell1600n_net-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
dell1600n_net-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
dell1600n_net-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
dell1600n_net-s.o: /usr/include/endian.h /usr/include/bits/endian.h
dell1600n_net-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
dell1600n_net-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
dell1600n_net-s.o: /usr/include/sys/sysmacros.h
dell1600n_net-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
dell1600n_net-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
dell1600n_net-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
dell1600n_net-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
dell1600n_net-s.o: /usr/include/bits/posix2_lim.h
dell1600n_net-s.o: /usr/include/bits/xopen_lim.h
dell1600n_net-s.o: /usr/include/bits/stdio_lim.h
dll.o: ../include/sane/config.h ../include/lalloca.h /usr/include/errno.h
dll.o: /usr/include/features.h /usr/include/sys/cdefs.h
dll.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
dll.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
dll.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
dll.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
dll.o: /usr/include/asm-generic/errno-base.h /usr/include/limits.h
dll.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
dll.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
dll.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
dll.o: /usr/include/stdio.h /usr/include/bits/types.h
dll.o: /usr/include/bits/typesizes.h /usr/include/libio.h
dll.o: /usr/include/_G_config.h /usr/include/wchar.h
dll.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
dll.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
dll.o: /usr/include/endian.h /usr/include/bits/endian.h
dll.o: /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h
dll.o: /usr/include/sys/select.h /usr/include/bits/select.h
dll.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
dll.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
dll.o: /usr/include/alloca.h /usr/include/string.h /usr/include/dlfcn.h
dll.o: /usr/include/bits/dlfcn.h ../include/sane/sane.h
dll.o: ../include/sane/sanei.h ../include/sane/sanei_backend.h
dll.o: ../include/sane/sanei_debug.h /usr/include/fcntl.h
dll.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
dll.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
dll.o: ../include/sane/sanei_config.h dll-preload.c
dll-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
dll-s.o: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
dll-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
dll-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
dll-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
dll-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
dll-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
dll-s.o: /usr/include/endian.h /usr/include/bits/endian.h
dll-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
dll-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
dll-s.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
dll-s.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
dll-s.o: /usr/include/bits/stat.h /usr/include/limits.h
dll-s.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
dll-s.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
dll-s.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
dmc.o: ../include/sane/config.h /usr/include/limits.h /usr/include/features.h
dmc.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
dmc.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
dmc.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
dmc.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
dmc.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
dmc.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
dmc.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
dmc.o: /usr/include/bits/endian.h /usr/include/xlocale.h
dmc.o: /usr/include/sys/types.h /usr/include/bits/types.h
dmc.o: /usr/include/bits/typesizes.h /usr/include/time.h
dmc.o: /usr/include/sys/select.h /usr/include/bits/select.h
dmc.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
dmc.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
dmc.o: /usr/include/alloca.h /usr/include/string.h ../include/sane/sane.h
dmc.o: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
dmc.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
dmc.o: ../include/sane/sanei.h /usr/include/fcntl.h /usr/include/bits/fcntl.h
dmc.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
dmc.o: /usr/include/bits/stat.h ../include/sane/sanei_config.h
dmc.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
dmc.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h dmc.h
dmc-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
dmc-s.o: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
dmc-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
dmc-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
dmc-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
dmc-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
dmc-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
dmc-s.o: /usr/include/endian.h /usr/include/bits/endian.h
dmc-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
dmc-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
dmc-s.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
dmc-s.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
dmc-s.o: /usr/include/bits/stat.h /usr/include/limits.h
dmc-s.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
dmc-s.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
dmc-s.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
epjitsu.o: ../include/sane/config.h /usr/include/errno.h
epjitsu.o: /usr/include/features.h /usr/include/sys/cdefs.h
epjitsu.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
epjitsu.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
epjitsu.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
epjitsu.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
epjitsu.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
epjitsu.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
epjitsu.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
epjitsu.o: /usr/include/time.h /usr/include/endian.h
epjitsu.o: /usr/include/bits/endian.h /usr/include/sys/select.h
epjitsu.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
epjitsu.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
epjitsu.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
epjitsu.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
epjitsu.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
epjitsu.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
epjitsu.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
epjitsu.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
epjitsu.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
epjitsu.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
epjitsu.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
epjitsu.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
epjitsu.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
epjitsu.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
epjitsu.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
epjitsu.o: /usr/include/xlocale.h /usr/include/alloca.h /usr/include/string.h
epjitsu.o: /usr/include/ctype.h /usr/include/math.h
epjitsu.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
epjitsu.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
epjitsu.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
epjitsu.o: /usr/include/bits/mathcalls.h /usr/include/unistd.h
epjitsu.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
epjitsu.o: /usr/include/bits/confname.h ../include/getopt.h
epjitsu.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
epjitsu.o: ../include/sane/sanei.h ../include/sane/sane.h
epjitsu.o: ../include/sane/sanei_usb.h ../include/sane/config.h
epjitsu.o: ../include/sane/sane.h ../include/sane/saneopts.h
epjitsu.o: ../include/sane/sanei_config.h epjitsu.h epjitsu-cmd.h
epjitsu-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
epjitsu-s.o: ../include/sane/sanei.h ../include/sane/sane.h
epjitsu-s.o: /usr/include/fcntl.h /usr/include/features.h
epjitsu-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
epjitsu-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
epjitsu-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
epjitsu-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
epjitsu-s.o: /usr/include/time.h /usr/include/endian.h
epjitsu-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
epjitsu-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
epjitsu-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
epjitsu-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
epjitsu-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
epjitsu-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
epjitsu-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
epjitsu-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
epjitsu-s.o: /usr/include/bits/stdio_lim.h
epson2.o: ../include/sane/config.h epson2.h /usr/include/sys/ioctl.h
epson2.o: /usr/include/features.h /usr/include/sys/cdefs.h
epson2.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
epson2.o: /usr/include/gnu/stubs-32.h /usr/include/bits/ioctls.h
epson2.o: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
epson2.o: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
epson2.o: /usr/include/asm-generic/ioctl.h /usr/include/bits/ioctl-types.h
epson2.o: /usr/include/sys/ttydefaults.h /usr/include/sys/types.h
epson2.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
epson2.o: /usr/include/time.h /usr/include/endian.h
epson2.o: /usr/include/bits/endian.h /usr/include/sys/select.h
epson2.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
epson2.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
epson2.o: /usr/include/bits/pthreadtypes.h ../include/sane/sane.h
epson2.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
epson2.o: ../include/sane/sanei.h /usr/include/fcntl.h
epson2.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
epson2.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
epson2.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
epson2.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
epson2.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
epson2.o: /usr/include/bits/stdio_lim.h /usr/include/stdio.h
epson2.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
epson2.o: /usr/include/bits/sys_errlist.h /usr/include/string.h
epson2.o: /usr/include/xlocale.h /usr/include/stdlib.h
epson2.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
epson2.o: /usr/include/alloca.h /usr/include/ctype.h /usr/include/unistd.h
epson2.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
epson2.o: /usr/include/bits/confname.h ../include/getopt.h
epson2.o: /usr/include/errno.h /usr/include/bits/errno.h
epson2.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
epson2.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
epson2.o: /usr/include/asm-generic/errno-base.h /usr/include/sys/time.h
epson2.o: ../include/byteorder.h /usr/include/arpa/inet.h
epson2.o: /usr/include/netinet/in.h /usr/include/stdint.h
epson2.o: /usr/include/bits/wchar.h /usr/include/sys/socket.h
epson2.o: /usr/include/sys/uio.h /usr/include/bits/socket.h
epson2.o: /usr/include/bits/sockaddr.h /usr/include/asm/socket.h
epson2.o: /usr/include/asm-i386/socket.h /usr/include/asm/sockios.h
epson2.o: /usr/include/asm-i386/sockios.h /usr/include/bits/in.h
epson2.o: /usr/include/bits/byteswap.h /usr/include/byteswap.h
epson2.o: ../include/_stdint.h ../include/sane/saneopts.h
epson2.o: ../include/sane/sanei_scsi.h ../include/sane/sanei_usb.h
epson2.o: ../include/sane/config.h ../include/sane/sane.h
epson2.o: ../include/sane/sanei_pio.h ../include/sane/sanei_tcp.h
epson2.o: /usr/include/netdb.h /usr/include/rpc/netdb.h
epson2.o: /usr/include/bits/siginfo.h /usr/include/bits/netdb.h
epson2.o: ../include/sane/sanei_udp.h ../include/sane/sanei_config.h
epson2.o: epson2-io.h epson2-commands.h epson2_scsi.h epson_usb.h
epson2.o: epson2_net.h
epson2-commands.o: ../include/sane/config.h /usr/include/stdio.h
epson2-commands.o: /usr/include/features.h /usr/include/sys/cdefs.h
epson2-commands.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
epson2-commands.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
epson2-commands.o: /usr/include/bits/typesizes.h /usr/include/libio.h
epson2-commands.o: /usr/include/_G_config.h /usr/include/wchar.h
epson2-commands.o: /usr/include/bits/stdio_lim.h
epson2-commands.o: /usr/include/bits/sys_errlist.h /usr/include/string.h
epson2-commands.o: /usr/include/xlocale.h /usr/include/stdlib.h
epson2-commands.o: /usr/include/bits/waitflags.h
epson2-commands.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
epson2-commands.o: /usr/include/bits/endian.h /usr/include/sys/types.h
epson2-commands.o: /usr/include/time.h /usr/include/sys/select.h
epson2-commands.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
epson2-commands.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
epson2-commands.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
epson2-commands.o: ../include/byteorder.h /usr/include/arpa/inet.h
epson2-commands.o: /usr/include/netinet/in.h /usr/include/stdint.h
epson2-commands.o: /usr/include/bits/wchar.h /usr/include/sys/socket.h
epson2-commands.o: /usr/include/sys/uio.h /usr/include/bits/uio.h
epson2-commands.o: /usr/include/bits/socket.h /usr/include/limits.h
epson2-commands.o: /usr/include/bits/posix1_lim.h
epson2-commands.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
epson2-commands.o: /usr/include/bits/posix2_lim.h
epson2-commands.o: /usr/include/bits/xopen_lim.h /usr/include/bits/sockaddr.h
epson2-commands.o: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
epson2-commands.o: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
epson2-commands.o: /usr/include/bits/in.h /usr/include/bits/byteswap.h
epson2-commands.o: /usr/include/byteswap.h ../include/_stdint.h epson2.h
epson2-commands.o: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
epson2-commands.o: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
epson2-commands.o: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
epson2-commands.o: /usr/include/asm-generic/ioctl.h
epson2-commands.o: /usr/include/bits/ioctl-types.h
epson2-commands.o: /usr/include/sys/ttydefaults.h ../include/sane/sane.h
epson2-commands.o: ../include/sane/sanei_backend.h
epson2-commands.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
epson2-commands.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
epson2-commands.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
epson2-commands.o: epson2-io.h epson2-commands.h
epson2-io.o: ../include/sane/config.h /usr/include/string.h
epson2-io.o: /usr/include/features.h /usr/include/sys/cdefs.h
epson2-io.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
epson2-io.o: /usr/include/gnu/stubs-32.h /usr/include/xlocale.h
epson2-io.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
epson2-io.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
epson2-io.o: /usr/include/bits/endian.h /usr/include/sys/types.h
epson2-io.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
epson2-io.o: /usr/include/time.h /usr/include/sys/select.h
epson2-io.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
epson2-io.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
epson2-io.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
epson2-io.o: /usr/include/ctype.h ../include/byteorder.h
epson2-io.o: /usr/include/arpa/inet.h /usr/include/netinet/in.h
epson2-io.o: /usr/include/stdint.h /usr/include/bits/wchar.h
epson2-io.o: /usr/include/sys/socket.h /usr/include/sys/uio.h
epson2-io.o: /usr/include/bits/uio.h /usr/include/bits/socket.h
epson2-io.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
epson2-io.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
epson2-io.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
epson2-io.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sockaddr.h
epson2-io.o: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
epson2-io.o: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
epson2-io.o: /usr/include/bits/in.h /usr/include/bits/byteswap.h
epson2-io.o: /usr/include/byteswap.h ../include/_stdint.h epson2.h
epson2-io.o: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
epson2-io.o: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
epson2-io.o: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
epson2-io.o: /usr/include/asm-generic/ioctl.h /usr/include/bits/ioctl-types.h
epson2-io.o: /usr/include/sys/ttydefaults.h ../include/sane/sane.h
epson2-io.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
epson2-io.o: ../include/sane/sanei.h /usr/include/fcntl.h
epson2-io.o: /usr/include/bits/fcntl.h /usr/include/sys/stat.h
epson2-io.o: /usr/include/bits/stat.h epson2-io.h
epson2-io.o: ../include/sane/sanei_scsi.h ../include/sane/sanei_usb.h
epson2-io.o: ../include/sane/config.h ../include/sane/sane.h
epson2-io.o: ../include/sane/sanei_pio.h ../include/sane/sanei_tcp.h
epson2-io.o: /usr/include/netdb.h /usr/include/rpc/netdb.h
epson2-io.o: /usr/include/bits/siginfo.h /usr/include/bits/netdb.h
epson2-io.o: epson2_scsi.h epson_usb.h epson2_net.h
epson2_net.o: ../include/sane/config.h ../include/sane/sane.h
epson2_net.o: ../include/sane/saneopts.h ../include/sane/sanei_tcp.h
epson2_net.o: /usr/include/netinet/in.h /usr/include/features.h
epson2_net.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
epson2_net.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
epson2_net.o: /usr/include/stdint.h /usr/include/bits/wchar.h
epson2_net.o: /usr/include/sys/socket.h /usr/include/sys/uio.h
epson2_net.o: /usr/include/sys/types.h /usr/include/bits/types.h
epson2_net.o: /usr/include/bits/typesizes.h /usr/include/time.h
epson2_net.o: /usr/include/endian.h /usr/include/bits/endian.h
epson2_net.o: /usr/include/sys/select.h /usr/include/bits/select.h
epson2_net.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
epson2_net.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
epson2_net.o: /usr/include/bits/uio.h /usr/include/bits/socket.h
epson2_net.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
epson2_net.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
epson2_net.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
epson2_net.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sockaddr.h
epson2_net.o: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
epson2_net.o: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
epson2_net.o: /usr/include/bits/in.h /usr/include/bits/byteswap.h
epson2_net.o: /usr/include/netdb.h /usr/include/rpc/netdb.h
epson2_net.o: /usr/include/bits/siginfo.h /usr/include/bits/netdb.h
epson2_net.o: ../include/sane/sanei_config.h /usr/include/stdio.h
epson2_net.o: /usr/include/libio.h /usr/include/_G_config.h
epson2_net.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
epson2_net.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
epson2_net.o: ../include/sane/sanei.h /usr/include/fcntl.h
epson2_net.o: /usr/include/bits/fcntl.h /usr/include/sys/stat.h
epson2_net.o: /usr/include/bits/stat.h epson2.h /usr/include/sys/ioctl.h
epson2_net.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
epson2_net.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
epson2_net.o: /usr/include/asm-i386/ioctl.h /usr/include/asm-generic/ioctl.h
epson2_net.o: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
epson2_net.o: epson2_net.h ../include/byteorder.h /usr/include/arpa/inet.h
epson2_net.o: /usr/include/byteswap.h ../include/_stdint.h
epson2_net.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
epson2_net.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
epson2_net.o: /usr/include/alloca.h /usr/include/string.h
epson2-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
epson2-s.o: ../include/sane/sanei.h ../include/sane/sane.h
epson2-s.o: /usr/include/fcntl.h /usr/include/features.h
epson2-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
epson2-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
epson2-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
epson2-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
epson2-s.o: /usr/include/time.h /usr/include/endian.h
epson2-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
epson2-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
epson2-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
epson2-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
epson2-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
epson2-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
epson2-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
epson2-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
epson2-s.o: /usr/include/bits/stdio_lim.h
epson2_scsi.o: ../include/sane/config.h ../include/sane/sanei_debug.h
epson2_scsi.o: ../include/sane/sanei.h ../include/sane/sane.h
epson2_scsi.o: ../include/sane/sanei_scsi.h /usr/include/sys/types.h
epson2_scsi.o: /usr/include/features.h /usr/include/sys/cdefs.h
epson2_scsi.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
epson2_scsi.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
epson2_scsi.o: /usr/include/bits/typesizes.h /usr/include/time.h
epson2_scsi.o: /usr/include/endian.h /usr/include/bits/endian.h
epson2_scsi.o: /usr/include/sys/select.h /usr/include/bits/select.h
epson2_scsi.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
epson2_scsi.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
epson2_scsi.o: epson2_scsi.h /usr/include/stdlib.h
epson2_scsi.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
epson2_scsi.o: /usr/include/xlocale.h /usr/include/alloca.h
epson2_scsi.o: /usr/include/string.h /usr/include/stdio.h
epson2_scsi.o: /usr/include/libio.h /usr/include/_G_config.h
epson2_scsi.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
epson2_scsi.o: /usr/include/bits/sys_errlist.h
epson.o: ../include/sane/config.h ../include/lalloca.h /usr/include/limits.h
epson.o: /usr/include/features.h /usr/include/sys/cdefs.h
epson.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
epson.o: /usr/include/gnu/stubs-32.h /usr/include/bits/posix1_lim.h
epson.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
epson.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
epson.o: /usr/include/bits/stdio_lim.h /usr/include/stdio.h
epson.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
epson.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
epson.o: /usr/include/bits/sys_errlist.h /usr/include/string.h
epson.o: /usr/include/xlocale.h /usr/include/stdlib.h
epson.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
epson.o: /usr/include/endian.h /usr/include/bits/endian.h
epson.o: /usr/include/sys/types.h /usr/include/time.h
epson.o: /usr/include/sys/select.h /usr/include/bits/select.h
epson.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
epson.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
epson.o: /usr/include/alloca.h /usr/include/ctype.h /usr/include/fcntl.h
epson.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
epson.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
epson.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
epson.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
epson.o: ../include/getopt.h /usr/include/errno.h /usr/include/bits/errno.h
epson.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
epson.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
epson.o: /usr/include/asm-generic/errno-base.h ../include/sane/sane.h
epson.o: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
epson.o: ../include/sane/sanei_usb.h ../include/sane/config.h
epson.o: ../include/sane/sane.h ../include/sane/sanei_pio.h
epson.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
epson.o: ../include/sane/sanei.h ../include/sane/sanei_config.h epson.h
epson.o: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
epson.o: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
epson.o: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
epson.o: /usr/include/asm-generic/ioctl.h /usr/include/bits/ioctl-types.h
epson.o: /usr/include/sys/ttydefaults.h epson_scsi.h epson_usb.h
epson-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
epson-s.o: ../include/sane/sanei.h ../include/sane/sane.h
epson-s.o: /usr/include/fcntl.h /usr/include/features.h
epson-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
epson-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
epson-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
epson-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
epson-s.o: /usr/include/time.h /usr/include/endian.h
epson-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
epson-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
epson-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
epson-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
epson-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
epson-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
epson-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
epson-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
epson-s.o: /usr/include/bits/stdio_lim.h
epson_scsi.o: ../include/sane/config.h ../include/sane/sanei_debug.h
epson_scsi.o: ../include/sane/sanei.h ../include/sane/sane.h
epson_scsi.o: ../include/sane/sanei_scsi.h /usr/include/sys/types.h
epson_scsi.o: /usr/include/features.h /usr/include/sys/cdefs.h
epson_scsi.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
epson_scsi.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
epson_scsi.o: /usr/include/bits/typesizes.h /usr/include/time.h
epson_scsi.o: /usr/include/endian.h /usr/include/bits/endian.h
epson_scsi.o: /usr/include/sys/select.h /usr/include/bits/select.h
epson_scsi.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
epson_scsi.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
epson_scsi.o: epson_scsi.h ../include/lalloca.h /usr/include/stdlib.h
epson_scsi.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
epson_scsi.o: /usr/include/xlocale.h /usr/include/alloca.h
epson_scsi.o: /usr/include/string.h /usr/include/stdio.h /usr/include/libio.h
epson_scsi.o: /usr/include/_G_config.h /usr/include/wchar.h
epson_scsi.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
epson_usb.o: /usr/include/sys/types.h /usr/include/features.h
epson_usb.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
epson_usb.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
epson_usb.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
epson_usb.o: /usr/include/time.h /usr/include/endian.h
epson_usb.o: /usr/include/bits/endian.h /usr/include/sys/select.h
epson_usb.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
epson_usb.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
epson_usb.o: /usr/include/bits/pthreadtypes.h ../include/sane/sanei_usb.h
epson_usb.o: ../include/sane/config.h ../include/sane/sane.h
epson_usb.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
epson_usb.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
epson_usb.o: /usr/include/alloca.h epson_usb.h
fujitsu.o: ../include/sane/config.h /usr/include/errno.h
fujitsu.o: /usr/include/features.h /usr/include/sys/cdefs.h
fujitsu.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
fujitsu.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
fujitsu.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
fujitsu.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
fujitsu.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
fujitsu.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
fujitsu.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
fujitsu.o: /usr/include/time.h /usr/include/endian.h
fujitsu.o: /usr/include/bits/endian.h /usr/include/sys/select.h
fujitsu.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
fujitsu.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
fujitsu.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
fujitsu.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
fujitsu.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
fujitsu.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
fujitsu.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
fujitsu.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
fujitsu.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
fujitsu.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
fujitsu.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
fujitsu.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
fujitsu.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
fujitsu.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
fujitsu.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
fujitsu.o: /usr/include/xlocale.h /usr/include/alloca.h /usr/include/string.h
fujitsu.o: /usr/include/ctype.h /usr/include/math.h
fujitsu.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
fujitsu.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
fujitsu.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
fujitsu.o: /usr/include/bits/mathcalls.h /usr/include/unistd.h
fujitsu.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
fujitsu.o: /usr/include/bits/confname.h ../include/getopt.h
fujitsu.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
fujitsu.o: ../include/sane/sanei.h ../include/sane/sane.h
fujitsu.o: ../include/sane/sanei_scsi.h ../include/sane/sanei_usb.h
fujitsu.o: ../include/sane/config.h ../include/sane/sane.h
fujitsu.o: ../include/sane/saneopts.h ../include/sane/sanei_config.h
fujitsu.o: fujitsu-scsi.h fujitsu.h
fujitsu-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
fujitsu-s.o: ../include/sane/sanei.h ../include/sane/sane.h
fujitsu-s.o: /usr/include/fcntl.h /usr/include/features.h
fujitsu-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
fujitsu-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
fujitsu-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
fujitsu-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
fujitsu-s.o: /usr/include/time.h /usr/include/endian.h
fujitsu-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
fujitsu-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
fujitsu-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
fujitsu-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
fujitsu-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
fujitsu-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
fujitsu-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
fujitsu-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
fujitsu-s.o: /usr/include/bits/stdio_lim.h
genesys.o: ../include/sane/config.h /usr/include/errno.h
genesys.o: /usr/include/features.h /usr/include/sys/cdefs.h
genesys.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
genesys.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
genesys.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
genesys.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
genesys.o: /usr/include/asm-generic/errno-base.h /usr/include/string.h
genesys.o: /usr/include/xlocale.h /usr/include/stdlib.h
genesys.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
genesys.o: /usr/include/endian.h /usr/include/bits/endian.h
genesys.o: /usr/include/sys/types.h /usr/include/bits/types.h
genesys.o: /usr/include/bits/typesizes.h /usr/include/time.h
genesys.o: /usr/include/sys/select.h /usr/include/bits/select.h
genesys.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
genesys.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
genesys.o: /usr/include/alloca.h /usr/include/unistd.h
genesys.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
genesys.o: /usr/include/bits/confname.h ../include/getopt.h
genesys.o: /usr/include/math.h /usr/include/bits/huge_val.h
genesys.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
genesys.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
genesys.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
genesys.o: ../include/sane/sane.h ../include/sane/sanei.h
genesys.o: ../include/sane/sane.h ../include/sane/saneopts.h
genesys.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
genesys.o: ../include/sane/sanei.h /usr/include/fcntl.h
genesys.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
genesys.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
genesys.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
genesys.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
genesys.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
genesys.o: /usr/include/bits/stdio_lim.h ../include/sane/sanei_usb.h
genesys.o: ../include/sane/sanei_config.h /usr/include/stdio.h
genesys.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
genesys.o: /usr/include/bits/sys_errlist.h genesys.h genesys_low.h
genesys.o: genesys_devices.c genesys_conv.c genesys_conv_hlp.c
genesys_conv.o: genesys_conv_hlp.c
genesys_gl646.o: ../include/sane/config.h /usr/include/errno.h
genesys_gl646.o: /usr/include/features.h /usr/include/sys/cdefs.h
genesys_gl646.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
genesys_gl646.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
genesys_gl646.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
genesys_gl646.o: /usr/include/asm-i386/errno.h
genesys_gl646.o: /usr/include/asm-generic/errno.h
genesys_gl646.o: /usr/include/asm-generic/errno-base.h /usr/include/string.h
genesys_gl646.o: /usr/include/xlocale.h /usr/include/stdlib.h
genesys_gl646.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
genesys_gl646.o: /usr/include/endian.h /usr/include/bits/endian.h
genesys_gl646.o: /usr/include/sys/types.h /usr/include/bits/types.h
genesys_gl646.o: /usr/include/bits/typesizes.h /usr/include/time.h
genesys_gl646.o: /usr/include/sys/select.h /usr/include/bits/select.h
genesys_gl646.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
genesys_gl646.o: /usr/include/sys/sysmacros.h
genesys_gl646.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
genesys_gl646.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
genesys_gl646.o: /usr/include/bits/environments.h
genesys_gl646.o: /usr/include/bits/confname.h ../include/getopt.h
genesys_gl646.o: /usr/include/math.h /usr/include/bits/huge_val.h
genesys_gl646.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
genesys_gl646.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
genesys_gl646.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
genesys_gl646.o: /usr/include/sys/time.h ../include/sane/sane.h
genesys_gl646.o: ../include/sane/sanei.h ../include/sane/sane.h
genesys_gl646.o: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
genesys_gl646.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
genesys_gl646.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
genesys_gl646.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
genesys_gl646.o: /usr/include/bits/stat.h /usr/include/limits.h
genesys_gl646.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
genesys_gl646.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
genesys_gl646.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
genesys_gl646.o: ../include/sane/sanei_config.h /usr/include/stdio.h
genesys_gl646.o: /usr/include/libio.h /usr/include/_G_config.h
genesys_gl646.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
genesys_gl646.o: ../include/sane/sanei_usb.h genesys.h genesys_low.h
genesys_gl841.o: ../include/sane/config.h /usr/include/math.h
genesys_gl841.o: /usr/include/features.h /usr/include/sys/cdefs.h
genesys_gl841.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
genesys_gl841.o: /usr/include/gnu/stubs-32.h /usr/include/bits/huge_val.h
genesys_gl841.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
genesys_gl841.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
genesys_gl841.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
genesys_gl841.o: /usr/include/stdio.h /usr/include/bits/types.h
genesys_gl841.o: /usr/include/bits/typesizes.h /usr/include/libio.h
genesys_gl841.o: /usr/include/_G_config.h /usr/include/wchar.h
genesys_gl841.o: /usr/include/bits/stdio_lim.h
genesys_gl841.o: /usr/include/bits/sys_errlist.h /usr/include/string.h
genesys_gl841.o: /usr/include/xlocale.h /usr/include/errno.h
genesys_gl841.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
genesys_gl841.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
genesys_gl841.o: /usr/include/asm-generic/errno.h
genesys_gl841.o: /usr/include/asm-generic/errno-base.h /usr/include/unistd.h
genesys_gl841.o: /usr/include/bits/posix_opt.h
genesys_gl841.o: /usr/include/bits/environments.h
genesys_gl841.o: /usr/include/bits/confname.h ../include/getopt.h
genesys_gl841.o: ../include/sane/sane.h ../include/sane/sanei.h
genesys_gl841.o: ../include/sane/sane.h ../include/sane/saneopts.h
genesys_gl841.o: ../include/sane/sanei_backend.h
genesys_gl841.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
genesys_gl841.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
genesys_gl841.o: /usr/include/sys/types.h /usr/include/time.h
genesys_gl841.o: /usr/include/endian.h /usr/include/bits/endian.h
genesys_gl841.o: /usr/include/sys/select.h /usr/include/bits/select.h
genesys_gl841.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
genesys_gl841.o: /usr/include/sys/sysmacros.h
genesys_gl841.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
genesys_gl841.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
genesys_gl841.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
genesys_gl841.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
genesys_gl841.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
genesys_gl841.o: ../include/sane/sanei_config.h ../include/sane/sanei_usb.h
genesys_gl841.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
genesys_gl841.o: /usr/include/bits/waitstatus.h /usr/include/alloca.h
genesys_gl841.o: genesys.h genesys_low.h
genesys-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
genesys-s.o: ../include/sane/sanei.h ../include/sane/sane.h
genesys-s.o: /usr/include/fcntl.h /usr/include/features.h
genesys-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
genesys-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
genesys-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
genesys-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
genesys-s.o: /usr/include/time.h /usr/include/endian.h
genesys-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
genesys-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
genesys-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
genesys-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
genesys-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
genesys-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
genesys-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
genesys-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
genesys-s.o: /usr/include/bits/stdio_lim.h
gphoto2.o: ../include/sane/config.h /usr/include/stdlib.h
gphoto2.o: /usr/include/features.h /usr/include/sys/cdefs.h
gphoto2.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
gphoto2.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
gphoto2.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
gphoto2.o: /usr/include/bits/endian.h /usr/include/xlocale.h
gphoto2.o: /usr/include/sys/types.h /usr/include/bits/types.h
gphoto2.o: /usr/include/bits/typesizes.h /usr/include/time.h
gphoto2.o: /usr/include/sys/select.h /usr/include/bits/select.h
gphoto2.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
gphoto2.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
gphoto2.o: /usr/include/alloca.h /usr/include/string.h /usr/include/stdio.h
gphoto2.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
gphoto2.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
gphoto2.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
gphoto2.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
gphoto2.o: ../include/getopt.h /usr/include/fcntl.h /usr/include/bits/fcntl.h
gphoto2.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
gphoto2.o: /usr/include/bits/stat.h /usr/include/limits.h
gphoto2.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
gphoto2.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
gphoto2.o: /usr/include/bits/xopen_lim.h ../include/sane/sanei_jpeg.h
gphoto2.o: ../include/sane/sanei_jinclude.h /usr/include/jconfig.h
gphoto2.o: /usr/include/jpeglib.h /usr/include/jmorecfg.h
gphoto2.o: /usr/include/jerror.h ../include/sane/sanei_cderror.h
gphoto2.o: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
gphoto2.o: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
gphoto2.o: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
gphoto2.o: /usr/include/asm-generic/ioctl.h /usr/include/bits/ioctl-types.h
gphoto2.o: /usr/include/sys/ttydefaults.h ../include/sane/sane.h
gphoto2.o: ../include/sane/sanei.h ../include/sane/saneopts.h
gphoto2.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
gphoto2.o: gphoto2.h /usr/include/termios.h /usr/include/bits/termios.h
gphoto2.o: /usr/include/sys/time.h
gphoto2-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
gphoto2-s.o: ../include/sane/sanei.h ../include/sane/sane.h
gphoto2-s.o: /usr/include/fcntl.h /usr/include/features.h
gphoto2-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
gphoto2-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
gphoto2-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
gphoto2-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
gphoto2-s.o: /usr/include/time.h /usr/include/endian.h
gphoto2-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
gphoto2-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
gphoto2-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
gphoto2-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
gphoto2-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
gphoto2-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
gphoto2-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
gphoto2-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
gphoto2-s.o: /usr/include/bits/stdio_lim.h
gt68xx.o: ../include/sane/config.h /usr/include/ctype.h
gt68xx.o: /usr/include/features.h /usr/include/sys/cdefs.h
gt68xx.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
gt68xx.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
gt68xx.o: /usr/include/bits/typesizes.h /usr/include/endian.h
gt68xx.o: /usr/include/bits/endian.h /usr/include/xlocale.h
gt68xx.o: /usr/include/errno.h /usr/include/bits/errno.h
gt68xx.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
gt68xx.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
gt68xx.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
gt68xx.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
gt68xx.o: /usr/include/time.h /usr/include/sys/select.h
gt68xx.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
gt68xx.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
gt68xx.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
gt68xx.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
gt68xx.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
gt68xx.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
gt68xx.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
gt68xx.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
gt68xx.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
gt68xx.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
gt68xx.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
gt68xx.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
gt68xx.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
gt68xx.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
gt68xx.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
gt68xx.o: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
gt68xx.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
gt68xx.o: /usr/include/bits/confname.h ../include/getopt.h
gt68xx.o: /usr/include/sys/time.h /usr/include/math.h
gt68xx.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
gt68xx.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
gt68xx.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
gt68xx.o: /usr/include/bits/mathcalls.h /usr/include/dirent.h
gt68xx.o: /usr/include/bits/dirent.h ../include/sane/sane.h
gt68xx.o: ../include/sane/sanei.h ../include/sane/sane.h
gt68xx.o: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
gt68xx.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
gt68xx.o: ../include/sane/sanei_config.h gt68xx.h gt68xx_high.h gt68xx_mid.h
gt68xx.o: gt68xx_low.h gt68xx_shm_channel.h gt68xx_high.c gt68xx_mid.c
gt68xx.o: gt68xx_low.c ../include/sane/sanei_debug.h
gt68xx.o: ../include/sane/sanei_usb.h /usr/include/sys/wait.h
gt68xx.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
gt68xx.o: gt68xx_shm_channel.c /usr/include/sys/ipc.h
gt68xx.o: /usr/include/bits/ipctypes.h /usr/include/bits/ipc.h
gt68xx.o: /usr/include/sys/shm.h /usr/include/bits/shm.h gt68xx_devices.c
gt68xx.o: gt68xx_generic.c gt68xx_generic.h gt68xx_gt6801.c gt68xx_gt6801.h
gt68xx.o: gt68xx_gt6816.c gt68xx_gt6816.h
gt68xx_devices.o: gt68xx_low.h ../include/sane/sane.h
gt68xx_devices.o: /usr/include/sys/types.h /usr/include/features.h
gt68xx_devices.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
gt68xx_devices.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
gt68xx_devices.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
gt68xx_devices.o: /usr/include/time.h /usr/include/endian.h
gt68xx_devices.o: /usr/include/bits/endian.h /usr/include/sys/select.h
gt68xx_devices.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
gt68xx_devices.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
gt68xx_devices.o: /usr/include/bits/pthreadtypes.h gt68xx_shm_channel.h
gt68xx_devices.o: gt68xx_generic.c gt68xx_generic.h gt68xx_gt6801.c
gt68xx_devices.o: gt68xx_gt6801.h gt68xx_gt6816.c gt68xx_gt6816.h
gt68xx_generic.o: gt68xx_generic.h gt68xx_low.h ../include/sane/sane.h
gt68xx_generic.o: /usr/include/sys/types.h /usr/include/features.h
gt68xx_generic.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
gt68xx_generic.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
gt68xx_generic.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
gt68xx_generic.o: /usr/include/time.h /usr/include/endian.h
gt68xx_generic.o: /usr/include/bits/endian.h /usr/include/sys/select.h
gt68xx_generic.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
gt68xx_generic.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
gt68xx_generic.o: /usr/include/bits/pthreadtypes.h gt68xx_shm_channel.h
gt68xx_gt6801.o: gt68xx_gt6801.h
gt68xx_gt6816.o: gt68xx_gt6816.h
gt68xx_high.o: gt68xx_high.h gt68xx_mid.h gt68xx_low.h ../include/sane/sane.h
gt68xx_high.o: /usr/include/sys/types.h /usr/include/features.h
gt68xx_high.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
gt68xx_high.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
gt68xx_high.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
gt68xx_high.o: /usr/include/time.h /usr/include/endian.h
gt68xx_high.o: /usr/include/bits/endian.h /usr/include/sys/select.h
gt68xx_high.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
gt68xx_high.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
gt68xx_high.o: /usr/include/bits/pthreadtypes.h gt68xx_shm_channel.h
gt68xx_high.o: gt68xx_mid.c gt68xx_low.c ../include/sane/sanei_debug.h
gt68xx_high.o: ../include/sane/sanei.h ../include/sane/sane.h
gt68xx_high.o: ../include/sane/sanei_usb.h ../include/sane/config.h
gt68xx_high.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
gt68xx_high.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
gt68xx_high.o: /usr/include/alloca.h /usr/include/string.h
gt68xx_high.o: /usr/include/sys/wait.h /usr/include/signal.h
gt68xx_high.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
gt68xx_high.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
gt68xx_high.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
gt68xx_high.o: /usr/include/bits/sigthread.h /usr/include/sys/resource.h
gt68xx_high.o: /usr/include/bits/resource.h /usr/include/unistd.h
gt68xx_high.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
gt68xx_high.o: /usr/include/bits/confname.h ../include/getopt.h
gt68xx_high.o: gt68xx_shm_channel.c /usr/include/sys/ipc.h
gt68xx_high.o: /usr/include/bits/ipctypes.h /usr/include/bits/ipc.h
gt68xx_high.o: /usr/include/sys/shm.h /usr/include/bits/shm.h
gt68xx_high.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
gt68xx_high.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
gt68xx_high.o: /usr/include/bits/stat.h /usr/include/errno.h
gt68xx_high.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
gt68xx_high.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
gt68xx_high.o: /usr/include/asm-generic/errno.h
gt68xx_high.o: /usr/include/asm-generic/errno-base.h /usr/include/math.h
gt68xx_high.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
gt68xx_high.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
gt68xx_high.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
gt68xx_high.o: /usr/include/bits/mathcalls.h
gt68xx_low.o: gt68xx_low.h ../include/sane/sane.h /usr/include/sys/types.h
gt68xx_low.o: /usr/include/features.h /usr/include/sys/cdefs.h
gt68xx_low.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
gt68xx_low.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
gt68xx_low.o: /usr/include/bits/typesizes.h /usr/include/time.h
gt68xx_low.o: /usr/include/endian.h /usr/include/bits/endian.h
gt68xx_low.o: /usr/include/sys/select.h /usr/include/bits/select.h
gt68xx_low.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
gt68xx_low.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
gt68xx_low.o: gt68xx_shm_channel.h ../include/sane/sanei_debug.h
gt68xx_low.o: ../include/sane/sanei.h ../include/sane/sane.h
gt68xx_low.o: ../include/sane/sanei_usb.h ../include/sane/config.h
gt68xx_low.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
gt68xx_low.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
gt68xx_low.o: /usr/include/alloca.h /usr/include/string.h
gt68xx_mid.o: gt68xx_mid.h gt68xx_low.h ../include/sane/sane.h
gt68xx_mid.o: /usr/include/sys/types.h /usr/include/features.h
gt68xx_mid.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
gt68xx_mid.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
gt68xx_mid.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
gt68xx_mid.o: /usr/include/time.h /usr/include/endian.h
gt68xx_mid.o: /usr/include/bits/endian.h /usr/include/sys/select.h
gt68xx_mid.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
gt68xx_mid.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
gt68xx_mid.o: /usr/include/bits/pthreadtypes.h gt68xx_shm_channel.h
gt68xx_mid.o: gt68xx_low.c ../include/sane/sanei_debug.h
gt68xx_mid.o: ../include/sane/sanei.h ../include/sane/sane.h
gt68xx_mid.o: ../include/sane/sanei_usb.h ../include/sane/config.h
gt68xx_mid.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
gt68xx_mid.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
gt68xx_mid.o: /usr/include/alloca.h /usr/include/string.h
gt68xx_mid.o: /usr/include/sys/wait.h /usr/include/signal.h
gt68xx_mid.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
gt68xx_mid.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
gt68xx_mid.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
gt68xx_mid.o: /usr/include/bits/sigthread.h /usr/include/sys/resource.h
gt68xx_mid.o: /usr/include/bits/resource.h /usr/include/unistd.h
gt68xx_mid.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
gt68xx_mid.o: /usr/include/bits/confname.h ../include/getopt.h
gt68xx_mid.o: gt68xx_shm_channel.c /usr/include/sys/ipc.h
gt68xx_mid.o: /usr/include/bits/ipctypes.h /usr/include/bits/ipc.h
gt68xx_mid.o: /usr/include/sys/shm.h /usr/include/bits/shm.h
gt68xx_mid.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
gt68xx_mid.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
gt68xx_mid.o: /usr/include/bits/stat.h /usr/include/errno.h
gt68xx_mid.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
gt68xx_mid.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
gt68xx_mid.o: /usr/include/asm-generic/errno.h
gt68xx_mid.o: /usr/include/asm-generic/errno-base.h
gt68xx-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
gt68xx-s.o: ../include/sane/sanei.h ../include/sane/sane.h
gt68xx-s.o: /usr/include/fcntl.h /usr/include/features.h
gt68xx-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
gt68xx-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
gt68xx-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
gt68xx-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
gt68xx-s.o: /usr/include/time.h /usr/include/endian.h
gt68xx-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
gt68xx-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
gt68xx-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
gt68xx-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
gt68xx-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
gt68xx-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
gt68xx-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
gt68xx-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
gt68xx-s.o: /usr/include/bits/stdio_lim.h
gt68xx_shm_channel.o: gt68xx_shm_channel.h ../include/sane/sane.h
gt68xx_shm_channel.o: /usr/include/sys/types.h /usr/include/features.h
gt68xx_shm_channel.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
gt68xx_shm_channel.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
gt68xx_shm_channel.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
gt68xx_shm_channel.o: /usr/include/time.h /usr/include/endian.h
gt68xx_shm_channel.o: /usr/include/bits/endian.h /usr/include/sys/select.h
gt68xx_shm_channel.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
gt68xx_shm_channel.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
gt68xx_shm_channel.o: /usr/include/bits/pthreadtypes.h /usr/include/sys/ipc.h
gt68xx_shm_channel.o: /usr/include/bits/ipctypes.h /usr/include/bits/ipc.h
gt68xx_shm_channel.o: /usr/include/sys/shm.h /usr/include/bits/shm.h
gt68xx_shm_channel.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
gt68xx_shm_channel.o: /usr/include/bits/environments.h
gt68xx_shm_channel.o: /usr/include/bits/confname.h ../include/getopt.h
gt68xx_shm_channel.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
gt68xx_shm_channel.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
gt68xx_shm_channel.o: /usr/include/bits/stat.h /usr/include/errno.h
gt68xx_shm_channel.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
gt68xx_shm_channel.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
gt68xx_shm_channel.o: /usr/include/asm-generic/errno.h
gt68xx_shm_channel.o: /usr/include/asm-generic/errno-base.h
hp3500.o: ../include/sane/config.h /usr/include/errno.h
hp3500.o: /usr/include/features.h /usr/include/sys/cdefs.h
hp3500.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp3500.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
hp3500.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
hp3500.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
hp3500.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
hp3500.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hp3500.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp3500.o: /usr/include/time.h /usr/include/endian.h
hp3500.o: /usr/include/bits/endian.h /usr/include/sys/select.h
hp3500.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp3500.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp3500.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hp3500.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
hp3500.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp3500.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp3500.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp3500.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
hp3500.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
hp3500.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
hp3500.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
hp3500.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
hp3500.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
hp3500.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
hp3500.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
hp3500.o: /usr/include/xlocale.h /usr/include/alloca.h /usr/include/string.h
hp3500.o: /usr/include/ctype.h /usr/include/unistd.h
hp3500.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
hp3500.o: /usr/include/bits/confname.h ../include/getopt.h
hp3500.o: ../include/sane/sane.h ../include/sane/sanei_usb.h
hp3500.o: ../include/sane/config.h ../include/sane/sane.h
hp3500.o: ../include/sane/saneopts.h ../include/sane/sanei_config.h
hp3500.o: ../include/sane/sanei_thread.h ../include/sane/sanei_backend.h
hp3500.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
hp3500-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hp3500-s.o: ../include/sane/sanei.h ../include/sane/sane.h
hp3500-s.o: /usr/include/fcntl.h /usr/include/features.h
hp3500-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp3500-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp3500-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hp3500-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp3500-s.o: /usr/include/time.h /usr/include/endian.h
hp3500-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
hp3500-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp3500-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp3500-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hp3500-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
hp3500-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp3500-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp3500-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp3500-s.o: /usr/include/bits/stdio_lim.h
hp3900.o: hp3900_sane.c ../include/sane/config.h ../include/sane/sane.h
hp3900.o: ../include/sane/sanei.h ../include/sane/sane.h
hp3900.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hp3900.o: ../include/sane/sanei.h /usr/include/fcntl.h
hp3900.o: /usr/include/features.h /usr/include/sys/cdefs.h
hp3900.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp3900.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
hp3900.o: /usr/include/sys/types.h /usr/include/bits/types.h
hp3900.o: /usr/include/bits/typesizes.h /usr/include/time.h
hp3900.o: /usr/include/endian.h /usr/include/bits/endian.h
hp3900.o: /usr/include/sys/select.h /usr/include/bits/select.h
hp3900.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp3900.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp3900.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
hp3900.o: /usr/include/bits/stat.h /usr/include/limits.h
hp3900.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
hp3900.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
hp3900.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
hp3900.o: ../include/sane/sanei_config.h /usr/include/stdio.h
hp3900.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
hp3900.o: /usr/include/bits/sys_errlist.h ../include/sane/saneopts.h
hp3900.o: ../include/sane/sanei_usb.h /usr/include/stdlib.h
hp3900.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
hp3900.o: /usr/include/xlocale.h /usr/include/alloca.h
hp3900.o: ../include/sane/sanei_debug.h hp3900_rts8822.c
hp3900.o: /usr/include/string.h /usr/include/math.h
hp3900.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
hp3900.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
hp3900.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
hp3900.o: /usr/include/bits/mathcalls.h /usr/include/ctype.h
hp3900.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
hp3900.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
hp3900.o: ../include/getopt.h hp3900_types.c hp3900_debug.c
hp3900.o: /usr/include/tiffio.h /usr/include/tiff.h /usr/include/tiffconf.h
hp3900.o: /usr/include/tiffvers.h hp3900_config.c hp3900_usb.c
hp3900_rts8822.o: /usr/include/stdio.h /usr/include/features.h
hp3900_rts8822.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp3900_rts8822.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp3900_rts8822.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp3900_rts8822.o: /usr/include/libio.h /usr/include/_G_config.h
hp3900_rts8822.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
hp3900_rts8822.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
hp3900_rts8822.o: /usr/include/bits/waitflags.h
hp3900_rts8822.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
hp3900_rts8822.o: /usr/include/bits/endian.h /usr/include/xlocale.h
hp3900_rts8822.o: /usr/include/sys/types.h /usr/include/time.h
hp3900_rts8822.o: /usr/include/sys/select.h /usr/include/bits/select.h
hp3900_rts8822.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp3900_rts8822.o: /usr/include/sys/sysmacros.h
hp3900_rts8822.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
hp3900_rts8822.o: /usr/include/string.h /usr/include/math.h
hp3900_rts8822.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
hp3900_rts8822.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
hp3900_rts8822.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
hp3900_rts8822.o: /usr/include/bits/mathcalls.h /usr/include/ctype.h
hp3900_rts8822.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
hp3900_rts8822.o: /usr/include/bits/environments.h
hp3900_rts8822.o: /usr/include/bits/confname.h ../include/getopt.h
hp3900_rts8822.o: hp3900_types.c hp3900_debug.c /usr/include/tiffio.h
hp3900_rts8822.o: /usr/include/tiff.h /usr/include/tiffconf.h
hp3900_rts8822.o: /usr/include/tiffvers.h hp3900_config.c hp3900_usb.c
hp3900_sane.o: ../include/sane/config.h ../include/sane/sane.h
hp3900_sane.o: ../include/sane/sanei.h ../include/sane/sane.h
hp3900_sane.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hp3900_sane.o: ../include/sane/sanei.h /usr/include/fcntl.h
hp3900_sane.o: /usr/include/features.h /usr/include/sys/cdefs.h
hp3900_sane.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp3900_sane.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
hp3900_sane.o: /usr/include/sys/types.h /usr/include/bits/types.h
hp3900_sane.o: /usr/include/bits/typesizes.h /usr/include/time.h
hp3900_sane.o: /usr/include/endian.h /usr/include/bits/endian.h
hp3900_sane.o: /usr/include/sys/select.h /usr/include/bits/select.h
hp3900_sane.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp3900_sane.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp3900_sane.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
hp3900_sane.o: /usr/include/bits/stat.h /usr/include/limits.h
hp3900_sane.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
hp3900_sane.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
hp3900_sane.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
hp3900_sane.o: ../include/sane/sanei_config.h /usr/include/stdio.h
hp3900_sane.o: /usr/include/libio.h /usr/include/_G_config.h
hp3900_sane.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
hp3900_sane.o: ../include/sane/saneopts.h ../include/sane/sanei_usb.h
hp3900_sane.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
hp3900_sane.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
hp3900_sane.o: /usr/include/alloca.h ../include/sane/sanei_debug.h
hp3900_sane.o: hp3900_rts8822.c /usr/include/string.h /usr/include/math.h
hp3900_sane.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
hp3900_sane.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
hp3900_sane.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
hp3900_sane.o: /usr/include/bits/mathcalls.h /usr/include/ctype.h
hp3900_sane.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
hp3900_sane.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
hp3900_sane.o: ../include/getopt.h hp3900_types.c hp3900_debug.c
hp3900_sane.o: /usr/include/tiffio.h /usr/include/tiff.h
hp3900_sane.o: /usr/include/tiffconf.h /usr/include/tiffvers.h
hp3900_sane.o: hp3900_config.c hp3900_usb.c
hp3900-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hp3900-s.o: ../include/sane/sanei.h ../include/sane/sane.h
hp3900-s.o: /usr/include/fcntl.h /usr/include/features.h
hp3900-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp3900-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp3900-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hp3900-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp3900-s.o: /usr/include/time.h /usr/include/endian.h
hp3900-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
hp3900-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp3900-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp3900-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hp3900-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
hp3900-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp3900-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp3900-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp3900-s.o: /usr/include/bits/stdio_lim.h
hp4200.o: ../include/sane/config.h /usr/include/sys/ioctl.h
hp4200.o: /usr/include/features.h /usr/include/sys/cdefs.h
hp4200.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp4200.o: /usr/include/gnu/stubs-32.h /usr/include/bits/ioctls.h
hp4200.o: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
hp4200.o: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
hp4200.o: /usr/include/asm-generic/ioctl.h /usr/include/bits/ioctl-types.h
hp4200.o: /usr/include/sys/ttydefaults.h /usr/include/stdio.h
hp4200.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp4200.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
hp4200.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
hp4200.o: /usr/include/sys/types.h /usr/include/time.h /usr/include/endian.h
hp4200.o: /usr/include/bits/endian.h /usr/include/sys/select.h
hp4200.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp4200.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp4200.o: /usr/include/bits/pthreadtypes.h /usr/include/sys/stat.h
hp4200.o: /usr/include/bits/stat.h /usr/include/fcntl.h
hp4200.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
hp4200.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
hp4200.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
hp4200.o: ../include/getopt.h /usr/include/string.h /usr/include/xlocale.h
hp4200.o: /usr/include/math.h /usr/include/bits/huge_val.h
hp4200.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
hp4200.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
hp4200.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
hp4200.o: /usr/include/sys/time.h /usr/include/stdlib.h
hp4200.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
hp4200.o: /usr/include/alloca.h /usr/include/ctype.h /usr/include/assert.h
hp4200.o: ../include/sane/sane.h ../include/sane/sanei.h
hp4200.o: ../include/sane/sane.h ../include/sane/sanei_debug.h
hp4200.o: ../include/sane/sanei.h ../include/sane/sanei_config.h
hp4200.o: ../include/sane/sanei_usb.h ../include/sane/sanei_pv8630.h
hp4200.o: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
hp4200.o: ../include/sane/sanei_debug.h /usr/include/limits.h
hp4200.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
hp4200.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
hp4200.o: /usr/include/bits/xopen_lim.h hp4200.h hp4200_lm9830.c
hp4200.o: hp4200_lm9830.h
hp4200_lm9830.o: hp4200_lm9830.h
hp4200-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hp4200-s.o: ../include/sane/sanei.h ../include/sane/sane.h
hp4200-s.o: /usr/include/fcntl.h /usr/include/features.h
hp4200-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp4200-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp4200-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hp4200-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp4200-s.o: /usr/include/time.h /usr/include/endian.h
hp4200-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
hp4200-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp4200-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp4200-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hp4200-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
hp4200-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp4200-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp4200-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp4200-s.o: /usr/include/bits/stdio_lim.h
hp5400.o: ../include/sane/config.h hp5400_debug.h
hp5400.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
hp5400.o: ../include/sane/sane.h hp5400.h /usr/include/unistd.h
hp5400.o: /usr/include/features.h /usr/include/sys/cdefs.h
hp5400.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp5400.o: /usr/include/gnu/stubs-32.h /usr/include/bits/posix_opt.h
hp5400.o: /usr/include/bits/environments.h /usr/include/bits/types.h
hp5400.o: /usr/include/bits/typesizes.h /usr/include/bits/confname.h
hp5400.o: ../include/getopt.h hp5400_xfer.h /usr/include/stdio.h
hp5400.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
hp5400.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
hp5400.o: ../include/sane/sane.h ../include/sane/sanei.h
hp5400.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hp5400.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
hp5400.o: /usr/include/sys/types.h /usr/include/time.h /usr/include/endian.h
hp5400.o: /usr/include/bits/endian.h /usr/include/sys/select.h
hp5400.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp5400.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp5400.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hp5400.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
hp5400.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp5400.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp5400.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp5400.o: ../include/sane/sanei_config.h ../include/sane/saneopts.h
hp5400.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
hp5400.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
hp5400.o: /usr/include/alloca.h /usr/include/string.h hp5400_debug.c
hp5400.o: hp5400_internal.c /usr/include/assert.h /usr/include/errno.h
hp5400.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
hp5400.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
hp5400.o: /usr/include/asm-generic/errno.h
hp5400.o: /usr/include/asm-generic/errno-base.h /usr/include/math.h
hp5400.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
hp5400.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
hp5400.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
hp5400.o: /usr/include/bits/mathcalls.h /usr/include/netinet/in.h
hp5400.o: /usr/include/stdint.h /usr/include/bits/wchar.h
hp5400.o: /usr/include/sys/socket.h /usr/include/sys/uio.h
hp5400.o: /usr/include/bits/socket.h /usr/include/bits/sockaddr.h
hp5400.o: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
hp5400.o: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
hp5400.o: /usr/include/bits/in.h /usr/include/bits/byteswap.h
hp5400.o: hp5400_internal.h hp5400_sane.c ../include/sane/sanei_usb.h
hp5400.o: hp5400_sanei.c
hp5400_debug.o: hp5400_debug.h ../include/sane/sanei_debug.h
hp5400_debug.o: ../include/sane/sanei.h ../include/sane/sane.h
hp5400_internal.o: /usr/include/stdio.h /usr/include/features.h
hp5400_internal.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp5400_internal.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp5400_internal.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp5400_internal.o: /usr/include/libio.h /usr/include/_G_config.h
hp5400_internal.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
hp5400_internal.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
hp5400_internal.o: /usr/include/bits/waitflags.h
hp5400_internal.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
hp5400_internal.o: /usr/include/bits/endian.h /usr/include/xlocale.h
hp5400_internal.o: /usr/include/sys/types.h /usr/include/time.h
hp5400_internal.o: /usr/include/sys/select.h /usr/include/bits/select.h
hp5400_internal.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp5400_internal.o: /usr/include/sys/sysmacros.h
hp5400_internal.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
hp5400_internal.o: /usr/include/assert.h /usr/include/errno.h
hp5400_internal.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
hp5400_internal.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
hp5400_internal.o: /usr/include/asm-generic/errno.h
hp5400_internal.o: /usr/include/asm-generic/errno-base.h
hp5400_internal.o: /usr/include/string.h /usr/include/unistd.h
hp5400_internal.o: /usr/include/bits/posix_opt.h
hp5400_internal.o: /usr/include/bits/environments.h
hp5400_internal.o: /usr/include/bits/confname.h ../include/getopt.h
hp5400_internal.o: /usr/include/math.h /usr/include/bits/huge_val.h
hp5400_internal.o: /usr/include/bits/huge_valf.h
hp5400_internal.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
hp5400_internal.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
hp5400_internal.o: /usr/include/bits/mathcalls.h /usr/include/netinet/in.h
hp5400_internal.o: /usr/include/stdint.h /usr/include/bits/wchar.h
hp5400_internal.o: /usr/include/sys/socket.h /usr/include/sys/uio.h
hp5400_internal.o: /usr/include/bits/uio.h /usr/include/bits/socket.h
hp5400_internal.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp5400_internal.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp5400_internal.o: /usr/include/bits/posix2_lim.h
hp5400_internal.o: /usr/include/bits/xopen_lim.h /usr/include/bits/sockaddr.h
hp5400_internal.o: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
hp5400_internal.o: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
hp5400_internal.o: /usr/include/bits/in.h /usr/include/bits/byteswap.h
hp5400_internal.o: hp5400.h hp5400_xfer.h hp5400_internal.h hp5400_debug.h
hp5400_internal.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
hp5400_internal.o: ../include/sane/sane.h
hp5400_sane.o: ../include/sane/config.h hp5400_debug.h
hp5400_sane.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
hp5400_sane.o: ../include/sane/sane.h ../include/sane/sane.h
hp5400_sane.o: ../include/sane/sanei.h ../include/sane/sanei_backend.h
hp5400_sane.o: ../include/sane/sanei_debug.h /usr/include/fcntl.h
hp5400_sane.o: /usr/include/features.h /usr/include/sys/cdefs.h
hp5400_sane.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp5400_sane.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
hp5400_sane.o: /usr/include/sys/types.h /usr/include/bits/types.h
hp5400_sane.o: /usr/include/bits/typesizes.h /usr/include/time.h
hp5400_sane.o: /usr/include/endian.h /usr/include/bits/endian.h
hp5400_sane.o: /usr/include/sys/select.h /usr/include/bits/select.h
hp5400_sane.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp5400_sane.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp5400_sane.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
hp5400_sane.o: /usr/include/bits/stat.h /usr/include/limits.h
hp5400_sane.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
hp5400_sane.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
hp5400_sane.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
hp5400_sane.o: ../include/sane/sanei_config.h /usr/include/stdio.h
hp5400_sane.o: /usr/include/libio.h /usr/include/_G_config.h
hp5400_sane.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
hp5400_sane.o: ../include/sane/saneopts.h ../include/sane/sanei_usb.h
hp5400_sane.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
hp5400_sane.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
hp5400_sane.o: /usr/include/alloca.h /usr/include/string.h
hp5400_sane.o: /usr/include/errno.h /usr/include/bits/errno.h
hp5400_sane.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
hp5400_sane.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
hp5400_sane.o: /usr/include/asm-generic/errno-base.h hp5400.h
hp5400_sane.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
hp5400_sane.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
hp5400_sane.o: ../include/getopt.h hp5400_xfer.h
hp5400_sanei.o: hp5400_xfer.h /usr/include/stdio.h /usr/include/features.h
hp5400_sanei.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp5400_sanei.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp5400_sanei.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp5400_sanei.o: /usr/include/libio.h /usr/include/_G_config.h
hp5400_sanei.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
hp5400_sanei.o: /usr/include/bits/sys_errlist.h hp5400_debug.h
hp5400_sanei.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
hp5400_sanei.o: ../include/sane/sane.h ../include/sane/sanei_usb.h
hp5400_sanei.o: ../include/sane/config.h ../include/sane/sane.h
hp5400_sanei.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
hp5400_sanei.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
hp5400_sanei.o: /usr/include/bits/endian.h /usr/include/xlocale.h
hp5400_sanei.o: /usr/include/sys/types.h /usr/include/time.h
hp5400_sanei.o: /usr/include/sys/select.h /usr/include/bits/select.h
hp5400_sanei.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp5400_sanei.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp5400_sanei.o: /usr/include/alloca.h
hp5400-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hp5400-s.o: ../include/sane/sanei.h ../include/sane/sane.h
hp5400-s.o: /usr/include/fcntl.h /usr/include/features.h
hp5400-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp5400-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp5400-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hp5400-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp5400-s.o: /usr/include/time.h /usr/include/endian.h
hp5400-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
hp5400-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp5400-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp5400-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hp5400-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
hp5400-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp5400-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp5400-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp5400-s.o: /usr/include/bits/stdio_lim.h
hp5590.o: ../include/sane/config.h /usr/include/stdio.h
hp5590.o: /usr/include/features.h /usr/include/sys/cdefs.h
hp5590.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp5590.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
hp5590.o: /usr/include/bits/typesizes.h /usr/include/libio.h
hp5590.o: /usr/include/_G_config.h /usr/include/wchar.h
hp5590.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
hp5590.o: /usr/include/string.h /usr/include/xlocale.h /usr/include/unistd.h
hp5590.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
hp5590.o: /usr/include/bits/confname.h ../include/getopt.h
hp5590.o: ../include/sane/sane.h ../include/sane/sanei_backend.h
hp5590.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
hp5590.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
hp5590.o: /usr/include/sys/types.h /usr/include/time.h /usr/include/endian.h
hp5590.o: /usr/include/bits/endian.h /usr/include/sys/select.h
hp5590.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp5590.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp5590.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hp5590.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
hp5590.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp5590.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp5590.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp5590.o: ../include/sane/sanei_usb.h ../include/sane/config.h
hp5590.o: ../include/sane/sane.h /usr/include/stdlib.h
hp5590.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
hp5590.o: /usr/include/alloca.h ../include/sane/saneopts.h hp5590_cmds.c
hp5590.o: /usr/include/netinet/in.h /usr/include/stdint.h
hp5590.o: /usr/include/bits/wchar.h /usr/include/sys/socket.h
hp5590.o: /usr/include/sys/uio.h /usr/include/bits/socket.h
hp5590.o: /usr/include/bits/sockaddr.h /usr/include/asm/socket.h
hp5590.o: /usr/include/asm-i386/socket.h /usr/include/asm/sockios.h
hp5590.o: /usr/include/asm-i386/sockios.h /usr/include/bits/in.h
hp5590.o: /usr/include/bits/byteswap.h /usr/include/errno.h
hp5590.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
hp5590.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
hp5590.o: /usr/include/asm-generic/errno.h
hp5590.o: /usr/include/asm-generic/errno-base.h hp5590_low.h hp5590_cmds.h
hp5590.o: hp5590_low.c
hp5590_cmds.o: ../include/sane/config.h /usr/include/unistd.h
hp5590_cmds.o: /usr/include/features.h /usr/include/sys/cdefs.h
hp5590_cmds.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp5590_cmds.o: /usr/include/gnu/stubs-32.h /usr/include/bits/posix_opt.h
hp5590_cmds.o: /usr/include/bits/environments.h /usr/include/bits/types.h
hp5590_cmds.o: /usr/include/bits/typesizes.h /usr/include/bits/confname.h
hp5590_cmds.o: ../include/getopt.h /usr/include/netinet/in.h
hp5590_cmds.o: /usr/include/stdint.h /usr/include/bits/wchar.h
hp5590_cmds.o: /usr/include/sys/socket.h /usr/include/sys/uio.h
hp5590_cmds.o: /usr/include/sys/types.h /usr/include/time.h
hp5590_cmds.o: /usr/include/endian.h /usr/include/bits/endian.h
hp5590_cmds.o: /usr/include/sys/select.h /usr/include/bits/select.h
hp5590_cmds.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp5590_cmds.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp5590_cmds.o: /usr/include/bits/uio.h /usr/include/bits/socket.h
hp5590_cmds.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp5590_cmds.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp5590_cmds.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp5590_cmds.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sockaddr.h
hp5590_cmds.o: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
hp5590_cmds.o: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
hp5590_cmds.o: /usr/include/bits/in.h /usr/include/bits/byteswap.h
hp5590_cmds.o: /usr/include/errno.h /usr/include/bits/errno.h
hp5590_cmds.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
hp5590_cmds.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
hp5590_cmds.o: /usr/include/asm-generic/errno-base.h /usr/include/string.h
hp5590_cmds.o: /usr/include/xlocale.h ../include/sane/sanei_debug.h
hp5590_cmds.o: ../include/sane/sanei.h ../include/sane/sane.h hp5590_low.h
hp5590_cmds.o: hp5590_cmds.h
hp5590_low.o: ../include/sane/config.h /usr/include/stdio.h
hp5590_low.o: /usr/include/features.h /usr/include/sys/cdefs.h
hp5590_low.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp5590_low.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
hp5590_low.o: /usr/include/bits/typesizes.h /usr/include/libio.h
hp5590_low.o: /usr/include/_G_config.h /usr/include/wchar.h
hp5590_low.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
hp5590_low.o: /usr/include/string.h /usr/include/xlocale.h
hp5590_low.o: /usr/include/errno.h /usr/include/bits/errno.h
hp5590_low.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
hp5590_low.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
hp5590_low.o: /usr/include/asm-generic/errno-base.h /usr/include/netinet/in.h
hp5590_low.o: /usr/include/stdint.h /usr/include/bits/wchar.h
hp5590_low.o: /usr/include/sys/socket.h /usr/include/sys/uio.h
hp5590_low.o: /usr/include/sys/types.h /usr/include/time.h
hp5590_low.o: /usr/include/endian.h /usr/include/bits/endian.h
hp5590_low.o: /usr/include/sys/select.h /usr/include/bits/select.h
hp5590_low.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp5590_low.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp5590_low.o: /usr/include/bits/uio.h /usr/include/bits/socket.h
hp5590_low.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp5590_low.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp5590_low.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp5590_low.o: /usr/include/bits/sockaddr.h /usr/include/asm/socket.h
hp5590_low.o: /usr/include/asm-i386/socket.h /usr/include/asm/sockios.h
hp5590_low.o: /usr/include/asm-i386/sockios.h /usr/include/bits/in.h
hp5590_low.o: /usr/include/bits/byteswap.h ../include/sane/sanei_debug.h
hp5590_low.o: ../include/sane/sanei.h ../include/sane/sane.h
hp5590_low.o: ../include/sane/sanei_usb.h ../include/sane/config.h
hp5590_low.o: ../include/sane/sane.h /usr/include/stdlib.h
hp5590_low.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
hp5590_low.o: /usr/include/alloca.h hp5590_low.h
hp5590-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hp5590-s.o: ../include/sane/sanei.h ../include/sane/sane.h
hp5590-s.o: /usr/include/fcntl.h /usr/include/features.h
hp5590-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp5590-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp5590-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hp5590-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp5590-s.o: /usr/include/time.h /usr/include/endian.h
hp5590-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
hp5590-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp5590-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp5590-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hp5590-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
hp5590-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp5590-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp5590-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp5590-s.o: /usr/include/bits/stdio_lim.h
hp-accessor.o: ../include/sane/config.h ../include/lassert.h
hp-accessor.o: /usr/include/assert.h /usr/include/features.h
hp-accessor.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp-accessor.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp-accessor.o: /usr/include/string.h /usr/include/xlocale.h
hp-accessor.o: /usr/include/sys/types.h /usr/include/bits/types.h
hp-accessor.o: /usr/include/bits/typesizes.h /usr/include/time.h
hp-accessor.o: /usr/include/endian.h /usr/include/bits/endian.h
hp-accessor.o: /usr/include/sys/select.h /usr/include/bits/select.h
hp-accessor.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp-accessor.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp-accessor.o: hp.h /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp-accessor.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp-accessor.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp-accessor.o: /usr/include/bits/stdio_lim.h ../include/sane/sane.h
hp-accessor.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
hp-accessor.o: hp-option.h hp-accessor.h hp-device.h
hp.o: ../include/sane/config.h hp.h /usr/include/limits.h
hp.o: /usr/include/features.h /usr/include/sys/cdefs.h
hp.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp.o: /usr/include/gnu/stubs-32.h /usr/include/bits/posix1_lim.h
hp.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp.o: /usr/include/bits/stdio_lim.h /usr/include/sys/types.h
hp.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp.o: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
hp.o: /usr/include/sys/select.h /usr/include/bits/select.h
hp.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp.o: ../include/sane/sane.h ../include/sane/sanei_debug.h
hp.o: ../include/sane/sanei.h /usr/include/string.h /usr/include/xlocale.h
hp.o: ../include/sane/sanei_config.h /usr/include/stdio.h
hp.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
hp.o: /usr/include/bits/sys_errlist.h ../include/sane/sanei_backend.h
hp.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h /usr/include/bits/uio.h
hp.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
hp.o: ../include/sane/sanei_usb.h ../include/sane/config.h
hp.o: ../include/sane/sane.h /usr/include/stdlib.h
hp.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
hp.o: /usr/include/alloca.h ../include/sane/sanei_thread.h hp-device.h
hp.o: hp-handle.h /usr/include/ctype.h
hp-device.o: ../include/sane/config.h /usr/include/stdlib.h
hp-device.o: /usr/include/features.h /usr/include/sys/cdefs.h
hp-device.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp-device.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
hp-device.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
hp-device.o: /usr/include/bits/endian.h /usr/include/xlocale.h
hp-device.o: /usr/include/sys/types.h /usr/include/bits/types.h
hp-device.o: /usr/include/bits/typesizes.h /usr/include/time.h
hp-device.o: /usr/include/sys/select.h /usr/include/bits/select.h
hp-device.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp-device.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp-device.o: /usr/include/alloca.h /usr/include/string.h ../include/lassert.h
hp-device.o: /usr/include/assert.h hp-device.h hp.h /usr/include/limits.h
hp-device.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
hp-device.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
hp-device.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
hp-device.o: ../include/sane/sane.h ../include/sane/sanei_debug.h
hp-device.o: ../include/sane/sanei.h hp-accessor.h hp-option.h hp-scsi.h
hp-device.o: hp-scl.h
hp-handle.o: ../include/sane/config.h /usr/include/unistd.h
hp-handle.o: /usr/include/features.h /usr/include/sys/cdefs.h
hp-handle.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp-handle.o: /usr/include/gnu/stubs-32.h /usr/include/bits/posix_opt.h
hp-handle.o: /usr/include/bits/environments.h /usr/include/bits/types.h
hp-handle.o: /usr/include/bits/typesizes.h /usr/include/bits/confname.h
hp-handle.o: ../include/getopt.h /usr/include/string.h /usr/include/xlocale.h
hp-handle.o: /usr/include/signal.h /usr/include/bits/sigset.h
hp-handle.o: /usr/include/bits/signum.h /usr/include/time.h
hp-handle.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
hp-handle.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
hp-handle.o: /usr/include/sys/ucontext.h /usr/include/bits/pthreadtypes.h
hp-handle.o: /usr/include/bits/sigthread.h ../include/lassert.h
hp-handle.o: /usr/include/assert.h /usr/include/errno.h
hp-handle.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
hp-handle.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
hp-handle.o: /usr/include/asm-generic/errno.h
hp-handle.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
hp-handle.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hp-handle.o: /usr/include/endian.h /usr/include/bits/endian.h
hp-handle.o: /usr/include/sys/select.h /usr/include/bits/select.h
hp-handle.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp-handle.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
hp-handle.o: /usr/include/bits/stat.h /usr/include/sys/wait.h
hp-handle.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
hp-handle.o: hp-handle.h hp.h /usr/include/limits.h
hp-handle.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
hp-handle.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
hp-handle.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
hp-handle.o: ../include/sane/sane.h ../include/sane/sanei_debug.h
hp-handle.o: ../include/sane/sanei.h ../include/sane/sanei_backend.h
hp-handle.o: ../include/sane/sanei_thread.h ../include/sane/config.h
hp-handle.o: hp-device.h hp-option.h hp-accessor.h hp-scsi.h hp-scl.h
hp-hpmem.o: ../include/sane/config.h /usr/include/stdlib.h
hp-hpmem.o: /usr/include/features.h /usr/include/sys/cdefs.h
hp-hpmem.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp-hpmem.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
hp-hpmem.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
hp-hpmem.o: /usr/include/bits/endian.h /usr/include/xlocale.h
hp-hpmem.o: /usr/include/sys/types.h /usr/include/bits/types.h
hp-hpmem.o: /usr/include/bits/typesizes.h /usr/include/time.h
hp-hpmem.o: /usr/include/sys/select.h /usr/include/bits/select.h
hp-hpmem.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp-hpmem.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp-hpmem.o: /usr/include/alloca.h /usr/include/string.h ../include/lassert.h
hp-hpmem.o: /usr/include/assert.h hp.h /usr/include/limits.h
hp-hpmem.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
hp-hpmem.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
hp-hpmem.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
hp-hpmem.o: ../include/sane/sane.h ../include/sane/sanei_debug.h
hp-hpmem.o: ../include/sane/sanei.h
hpljm1005.o: ../include/sane/config.h /usr/include/math.h
hpljm1005.o: /usr/include/features.h /usr/include/sys/cdefs.h
hpljm1005.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hpljm1005.o: /usr/include/gnu/stubs-32.h /usr/include/bits/huge_val.h
hpljm1005.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
hpljm1005.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
hpljm1005.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
hpljm1005.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hpljm1005.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hpljm1005.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hpljm1005.o: /usr/include/bits/stdio_lim.h /usr/include/stdio.h
hpljm1005.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hpljm1005.o: /usr/include/libio.h /usr/include/_G_config.h
hpljm1005.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
hpljm1005.o: /usr/include/string.h /usr/include/xlocale.h
hpljm1005.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
hpljm1005.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
hpljm1005.o: /usr/include/bits/endian.h /usr/include/sys/types.h
hpljm1005.o: /usr/include/time.h /usr/include/sys/select.h
hpljm1005.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
hpljm1005.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hpljm1005.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
hpljm1005.o: /usr/include/ctype.h /usr/include/fcntl.h
hpljm1005.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
hpljm1005.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
hpljm1005.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
hpljm1005.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
hpljm1005.o: ../include/getopt.h /usr/include/errno.h
hpljm1005.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
hpljm1005.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
hpljm1005.o: /usr/include/asm-generic/errno.h
hpljm1005.o: /usr/include/asm-generic/errno-base.h /usr/include/stdint.h
hpljm1005.o: /usr/include/bits/wchar.h /usr/include/netinet/in.h
hpljm1005.o: /usr/include/sys/socket.h /usr/include/sys/uio.h
hpljm1005.o: /usr/include/bits/socket.h /usr/include/bits/sockaddr.h
hpljm1005.o: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
hpljm1005.o: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
hpljm1005.o: /usr/include/bits/in.h /usr/include/bits/byteswap.h
hpljm1005.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hpljm1005.o: ../include/sane/sanei.h ../include/sane/sane.h
hpljm1005.o: ../include/sane/sanei_usb.h ../include/sane/sane.h
hpljm1005.o: ../include/sane/saneopts.h
hpljm1005-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hpljm1005-s.o: ../include/sane/sanei.h ../include/sane/sane.h
hpljm1005-s.o: /usr/include/fcntl.h /usr/include/features.h
hpljm1005-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hpljm1005-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hpljm1005-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hpljm1005-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hpljm1005-s.o: /usr/include/time.h /usr/include/endian.h
hpljm1005-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
hpljm1005-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
hpljm1005-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hpljm1005-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hpljm1005-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
hpljm1005-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hpljm1005-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hpljm1005-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hpljm1005-s.o: /usr/include/bits/stdio_lim.h
hp-option.o: ../include/sane/config.h ../include/lalloca.h
hp-option.o: /usr/include/stdio.h /usr/include/features.h
hp-option.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp-option.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp-option.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp-option.o: /usr/include/libio.h /usr/include/_G_config.h
hp-option.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
hp-option.o: /usr/include/bits/sys_errlist.h /usr/include/string.h
hp-option.o: /usr/include/xlocale.h ../include/lassert.h
hp-option.o: /usr/include/assert.h /usr/include/pwd.h
hp-option.o: /usr/include/sys/types.h /usr/include/time.h
hp-option.o: /usr/include/endian.h /usr/include/bits/endian.h
hp-option.o: /usr/include/sys/select.h /usr/include/bits/select.h
hp-option.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp-option.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp-option.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
hp-option.o: /usr/include/bits/waitstatus.h /usr/include/alloca.h
hp-option.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
hp-option.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
hp-option.o: ../include/getopt.h /usr/include/math.h
hp-option.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
hp-option.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
hp-option.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
hp-option.o: /usr/include/bits/mathcalls.h ../include/sane/saneopts.h
hp-option.o: ../include/sane/sanei.h ../include/sane/sane.h hp.h
hp-option.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp-option.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp-option.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp-option.o: ../include/sane/sanei_debug.h hp-option.h hp-accessor.h
hp-option.o: hp-scsi.h hp-scl.h hp-device.h
hp-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hp-s.o: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
hp-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
hp-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
hp-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
hp-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
hp-s.o: /usr/include/endian.h /usr/include/bits/endian.h
hp-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
hp-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp-s.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp-s.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
hp-s.o: /usr/include/bits/stat.h /usr/include/limits.h
hp-s.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
hp-s.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
hp-s.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
hp-scl.o: ../include/sane/config.h ../include/lalloca.h /usr/include/unistd.h
hp-scl.o: /usr/include/features.h /usr/include/sys/cdefs.h
hp-scl.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp-scl.o: /usr/include/gnu/stubs-32.h /usr/include/bits/posix_opt.h
hp-scl.o: /usr/include/bits/environments.h /usr/include/bits/types.h
hp-scl.o: /usr/include/bits/typesizes.h /usr/include/bits/confname.h
hp-scl.o: ../include/getopt.h /usr/include/stdlib.h
hp-scl.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
hp-scl.o: /usr/include/endian.h /usr/include/bits/endian.h
hp-scl.o: /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h
hp-scl.o: /usr/include/sys/select.h /usr/include/bits/select.h
hp-scl.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp-scl.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp-scl.o: /usr/include/alloca.h /usr/include/ctype.h /usr/include/stdio.h
hp-scl.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
hp-scl.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
hp-scl.o: /usr/include/string.h /usr/include/errno.h
hp-scl.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
hp-scl.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
hp-scl.o: /usr/include/asm-generic/errno.h
hp-scl.o: /usr/include/asm-generic/errno-base.h ../include/lassert.h
hp-scl.o: /usr/include/assert.h /usr/include/signal.h
hp-scl.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
hp-scl.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
hp-scl.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
hp-scl.o: /usr/include/bits/sigthread.h /usr/include/sys/stat.h
hp-scl.o: /usr/include/bits/stat.h /usr/include/fcntl.h
hp-scl.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
hp-scl.o: ../include/sane/sanei_scsi.h ../include/sane/sane.h
hp-scl.o: ../include/sane/sanei_usb.h ../include/sane/config.h
hp-scl.o: ../include/sane/sane.h ../include/sane/sanei_pio.h hp.h
hp-scl.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp-scl.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp-scl.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp-scl.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
hp-scl.o: ../include/sane/sanei_backend.h hp-option.h hp-scsi.h hp-scl.h
hp-scl.o: hp-device.h
hpsj5s.o: ../include/sane/config.h ../include/sane/sane.h
hpsj5s.o: ../include/sane/sanei.h ../include/sane/sane.h
hpsj5s.o: ../include/sane/saneopts.h ../include/sane/sanei_config.h
hpsj5s.o: /usr/include/stdio.h /usr/include/features.h
hpsj5s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hpsj5s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hpsj5s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hpsj5s.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
hpsj5s.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
hpsj5s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hpsj5s.o: ../include/sane/sanei.h /usr/include/fcntl.h
hpsj5s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hpsj5s.o: /usr/include/time.h /usr/include/endian.h
hpsj5s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
hpsj5s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
hpsj5s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hpsj5s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hpsj5s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
hpsj5s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hpsj5s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hpsj5s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hpsj5s.o: hpsj5s.h /usr/include/ieee1284.h /usr/include/sys/time.h
hpsj5s.o: /usr/include/string.h /usr/include/xlocale.h /usr/include/stdlib.h
hpsj5s.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
hpsj5s.o: /usr/include/alloca.h /usr/include/unistd.h
hpsj5s.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
hpsj5s.o: /usr/include/bits/confname.h ../include/getopt.h
hpsj5s-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hpsj5s-s.o: ../include/sane/sanei.h ../include/sane/sane.h
hpsj5s-s.o: /usr/include/fcntl.h /usr/include/features.h
hpsj5s-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hpsj5s-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hpsj5s-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hpsj5s-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hpsj5s-s.o: /usr/include/time.h /usr/include/endian.h
hpsj5s-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
hpsj5s-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
hpsj5s-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hpsj5s-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hpsj5s-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
hpsj5s-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hpsj5s-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hpsj5s-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hpsj5s-s.o: /usr/include/bits/stdio_lim.h
hs2p.o: ../include/sane/config.h /usr/include/limits.h
hs2p.o: /usr/include/features.h /usr/include/sys/cdefs.h
hs2p.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hs2p.o: /usr/include/gnu/stubs-32.h /usr/include/bits/posix1_lim.h
hs2p.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hs2p.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hs2p.o: /usr/include/bits/stdio_lim.h /usr/include/stdlib.h
hs2p.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
hs2p.o: /usr/include/endian.h /usr/include/bits/endian.h
hs2p.o: /usr/include/xlocale.h /usr/include/sys/types.h
hs2p.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hs2p.o: /usr/include/time.h /usr/include/sys/select.h
hs2p.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
hs2p.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hs2p.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
hs2p.o: /usr/include/string.h /usr/include/sys/time.h /usr/include/errno.h
hs2p.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
hs2p.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
hs2p.o: /usr/include/asm-generic/errno.h
hs2p.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
hs2p.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
hs2p.o: /usr/include/sys/stat.h /usr/include/bits/stat.h /usr/include/ctype.h
hs2p.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
hs2p.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
hs2p.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
hs2p.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
hs2p.o: ../include/getopt.h ../include/sane/sane.h ../include/sane/saneopts.h
hs2p.o: ../include/sane/sanei_scsi.h ../include/sane/sane.h
hs2p.o: ../include/sane/sanei_config.h ../include/sane/sanei_thread.h
hs2p.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hs2p.o: ../include/sane/sanei.h hs2p-scsi.c hs2p.h ../include/sane/config.h
hs2p.o: hs2p-scsi.h hs2p-saneopts.h
hs2p-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hs2p-s.o: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
hs2p-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
hs2p-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hs2p-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
hs2p-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
hs2p-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
hs2p-s.o: /usr/include/endian.h /usr/include/bits/endian.h
hs2p-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
hs2p-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
hs2p-s.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hs2p-s.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
hs2p-s.o: /usr/include/bits/stat.h /usr/include/limits.h
hs2p-s.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
hs2p-s.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
hs2p-s.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
hs2p-scsi.o: /usr/include/time.h /usr/include/bits/types.h
hs2p-scsi.o: /usr/include/features.h /usr/include/sys/cdefs.h
hs2p-scsi.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hs2p-scsi.o: /usr/include/gnu/stubs-32.h /usr/include/bits/typesizes.h hs2p.h
hs2p-scsi.o: /usr/include/sys/types.h /usr/include/endian.h
hs2p-scsi.o: /usr/include/bits/endian.h /usr/include/sys/select.h
hs2p-scsi.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
hs2p-scsi.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hs2p-scsi.o: /usr/include/bits/pthreadtypes.h ../include/sane/config.h
hs2p-scsi.o: hs2p-scsi.h ../include/sane/sane.h ../include/sane/saneopts.h
hs2p-scsi.o: ../include/sane/sanei_scsi.h ../include/sane/sane.h
hs2p-scsi.o: ../include/sane/sanei_config.h /usr/include/stdio.h
hs2p-scsi.o: /usr/include/libio.h /usr/include/_G_config.h
hs2p-scsi.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
hs2p-scsi.o: /usr/include/bits/sys_errlist.h ../include/sane/sanei_thread.h
hs2p-scsi.o: ../include/sane/config.h hs2p-saneopts.h
ibm.o: ../include/sane/config.h /usr/include/limits.h /usr/include/features.h
ibm.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
ibm.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
ibm.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
ibm.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
ibm.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
ibm.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
ibm.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
ibm.o: /usr/include/bits/endian.h /usr/include/xlocale.h
ibm.o: /usr/include/sys/types.h /usr/include/bits/types.h
ibm.o: /usr/include/bits/typesizes.h /usr/include/time.h
ibm.o: /usr/include/sys/select.h /usr/include/bits/select.h
ibm.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
ibm.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
ibm.o: /usr/include/alloca.h /usr/include/string.h /usr/include/sys/time.h
ibm.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
ibm.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
ibm.o: ../include/getopt.h /usr/include/ctype.h ../include/sane/sane.h
ibm.o: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
ibm.o: ../include/sane/sane.h ../include/sane/sanei_backend.h
ibm.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
ibm.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h /usr/include/bits/uio.h
ibm.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
ibm.o: ../include/sane/sanei_config.h /usr/include/stdio.h
ibm.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
ibm.o: /usr/include/bits/sys_errlist.h ibm.h ../include/sane/config.h
ibm.o: ibm-scsi.c
ibm-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
ibm-s.o: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
ibm-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
ibm-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
ibm-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
ibm-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
ibm-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
ibm-s.o: /usr/include/endian.h /usr/include/bits/endian.h
ibm-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
ibm-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
ibm-s.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
ibm-s.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
ibm-s.o: /usr/include/bits/stat.h /usr/include/limits.h
ibm-s.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
ibm-s.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
ibm-s.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
ibm-scsi.o: /usr/include/time.h /usr/include/bits/types.h
ibm-scsi.o: /usr/include/features.h /usr/include/sys/cdefs.h
ibm-scsi.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
ibm-scsi.o: /usr/include/gnu/stubs-32.h /usr/include/bits/typesizes.h
leo.o: ../include/sane/config.h /usr/include/errno.h /usr/include/features.h
leo.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
leo.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
leo.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
leo.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
leo.o: /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h
leo.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
leo.o: /usr/include/sys/types.h /usr/include/bits/types.h
leo.o: /usr/include/bits/typesizes.h /usr/include/time.h
leo.o: /usr/include/endian.h /usr/include/bits/endian.h
leo.o: /usr/include/sys/select.h /usr/include/bits/select.h
leo.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
leo.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
leo.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
leo.o: /usr/include/bits/stat.h /usr/include/limits.h
leo.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
leo.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
leo.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
leo.o: /usr/include/signal.h /usr/include/bits/signum.h
leo.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
leo.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
leo.o: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
leo.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
leo.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
leo.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
leo.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
leo.o: /usr/include/alloca.h /usr/include/string.h /usr/include/sys/wait.h
leo.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
leo.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
leo.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
leo.o: ../include/getopt.h ../include/sane/sane.h ../include/sane/sanei.h
leo.o: ../include/sane/sane.h ../include/sane/saneopts.h
leo.o: ../include/sane/sanei_scsi.h ../include/sane/sanei_debug.h
leo.o: ../include/sane/sanei.h ../include/sane/sanei_backend.h
leo.o: ../include/sane/sanei_debug.h ../include/sane/sanei_config.h
leo.o: ../include/lassert.h /usr/include/assert.h leo.h
leo-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
leo-s.o: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
leo-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
leo-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
leo-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
leo-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
leo-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
leo-s.o: /usr/include/endian.h /usr/include/bits/endian.h
leo-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
leo-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
leo-s.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
leo-s.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
leo-s.o: /usr/include/bits/stat.h /usr/include/limits.h
leo-s.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
leo-s.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
leo-s.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
lexmark.o: ../include/sane/config.h /usr/include/errno.h
lexmark.o: /usr/include/features.h /usr/include/sys/cdefs.h
lexmark.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
lexmark.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
lexmark.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
lexmark.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
lexmark.o: /usr/include/asm-generic/errno-base.h /usr/include/signal.h
lexmark.o: /usr/include/bits/sigset.h /usr/include/bits/types.h
lexmark.o: /usr/include/bits/typesizes.h /usr/include/bits/signum.h
lexmark.o: /usr/include/time.h /usr/include/bits/siginfo.h
lexmark.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
lexmark.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
lexmark.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/sigthread.h
lexmark.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
lexmark.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
lexmark.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
lexmark.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
lexmark.o: /usr/include/endian.h /usr/include/bits/endian.h
lexmark.o: /usr/include/xlocale.h /usr/include/sys/types.h
lexmark.o: /usr/include/sys/select.h /usr/include/bits/select.h
lexmark.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
lexmark.o: /usr/include/alloca.h /usr/include/string.h
lexmark.o: /usr/include/sys/wait.h /usr/include/sys/resource.h
lexmark.o: /usr/include/bits/resource.h /usr/include/unistd.h
lexmark.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
lexmark.o: /usr/include/bits/confname.h ../include/getopt.h
lexmark.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
lexmark.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
lexmark.o: /usr/include/bits/stat.h /usr/include/ctype.h
lexmark.o: /usr/include/sys/time.h ../include/sane/sane.h
lexmark.o: ../include/sane/sanei.h ../include/sane/sane.h
lexmark.o: ../include/sane/saneopts.h ../include/sane/sanei_config.h
lexmark.o: ../include/sane/sanei_usb.h lexmark.h
lexmark.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
lexmark.o: ../include/sane/sanei.h /usr/include/limits.h
lexmark.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
lexmark.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
lexmark.o: /usr/include/bits/xopen_lim.h
lexmark_low.o: ../include/sane/config.h /usr/include/stdio.h
lexmark_low.o: /usr/include/features.h /usr/include/sys/cdefs.h
lexmark_low.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
lexmark_low.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
lexmark_low.o: /usr/include/bits/typesizes.h /usr/include/libio.h
lexmark_low.o: /usr/include/_G_config.h /usr/include/wchar.h
lexmark_low.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
lexmark_low.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
lexmark_low.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
lexmark_low.o: /usr/include/bits/endian.h /usr/include/xlocale.h
lexmark_low.o: /usr/include/sys/types.h /usr/include/time.h
lexmark_low.o: /usr/include/sys/select.h /usr/include/bits/select.h
lexmark_low.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
lexmark_low.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
lexmark_low.o: /usr/include/alloca.h /usr/include/string.h
lexmark_low.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
lexmark_low.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
lexmark_low.o: ../include/getopt.h /usr/include/math.h
lexmark_low.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
lexmark_low.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
lexmark_low.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
lexmark_low.o: /usr/include/bits/mathcalls.h ../include/sane/sane.h
lexmark_low.o: ../include/sane/sanei.h ../include/sane/sane.h
lexmark_low.o: ../include/sane/saneopts.h ../include/sane/sanei_usb.h
lexmark_low.o: lexmark.h ../include/sane/sanei_backend.h
lexmark_low.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
lexmark_low.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
lexmark_low.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
lexmark_low.o: /usr/include/bits/stat.h /usr/include/limits.h
lexmark_low.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
lexmark_low.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
lexmark_low.o: /usr/include/bits/xopen_lim.h lexmark_sensors.c
lexmark_low.o: lexmark_models.c
lexmark-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
lexmark-s.o: ../include/sane/sanei.h ../include/sane/sane.h
lexmark-s.o: /usr/include/fcntl.h /usr/include/features.h
lexmark-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
lexmark-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
lexmark-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
lexmark-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
lexmark-s.o: /usr/include/time.h /usr/include/endian.h
lexmark-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
lexmark-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
lexmark-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
lexmark-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
lexmark-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
lexmark-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
lexmark-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
lexmark-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
lexmark-s.o: /usr/include/bits/stdio_lim.h
ma1509.o: ../include/sane/config.h /usr/include/ctype.h
ma1509.o: /usr/include/features.h /usr/include/sys/cdefs.h
ma1509.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
ma1509.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
ma1509.o: /usr/include/bits/typesizes.h /usr/include/endian.h
ma1509.o: /usr/include/bits/endian.h /usr/include/xlocale.h
ma1509.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
ma1509.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
ma1509.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
ma1509.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
ma1509.o: /usr/include/sys/types.h /usr/include/time.h
ma1509.o: /usr/include/sys/select.h /usr/include/bits/select.h
ma1509.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
ma1509.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
ma1509.o: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
ma1509.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
ma1509.o: /usr/include/bits/confname.h ../include/getopt.h
ma1509.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
ma1509.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
ma1509.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
ma1509.o: /usr/include/sys/time.h /usr/include/errno.h
ma1509.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
ma1509.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
ma1509.o: /usr/include/asm-generic/errno.h
ma1509.o: /usr/include/asm-generic/errno-base.h ../include/sane/sane.h
ma1509.o: ../include/sane/sanei.h ../include/sane/sane.h
ma1509.o: ../include/sane/saneopts.h ../include/sane/sanei_usb.h
ma1509.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
ma1509.o: ../include/sane/sanei.h /usr/include/fcntl.h
ma1509.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
ma1509.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
ma1509.o: ../include/sane/sanei_config.h ma1509.h
ma1509-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
ma1509-s.o: ../include/sane/sanei.h ../include/sane/sane.h
ma1509-s.o: /usr/include/fcntl.h /usr/include/features.h
ma1509-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
ma1509-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
ma1509-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
ma1509-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
ma1509-s.o: /usr/include/time.h /usr/include/endian.h
ma1509-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
ma1509-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
ma1509-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
ma1509-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
ma1509-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
ma1509-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
ma1509-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
ma1509-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
ma1509-s.o: /usr/include/bits/stdio_lim.h
matsushita.o: ../include/sane/config.h /usr/include/errno.h
matsushita.o: /usr/include/features.h /usr/include/sys/cdefs.h
matsushita.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
matsushita.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
matsushita.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
matsushita.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
matsushita.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
matsushita.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
matsushita.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
matsushita.o: /usr/include/time.h /usr/include/endian.h
matsushita.o: /usr/include/bits/endian.h /usr/include/sys/select.h
matsushita.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
matsushita.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
matsushita.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
matsushita.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
matsushita.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
matsushita.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
matsushita.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
matsushita.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
matsushita.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
matsushita.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
matsushita.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
matsushita.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
matsushita.o: /usr/include/libio.h /usr/include/_G_config.h
matsushita.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
matsushita.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
matsushita.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
matsushita.o: /usr/include/alloca.h /usr/include/string.h
matsushita.o: /usr/include/sys/wait.h /usr/include/sys/resource.h
matsushita.o: /usr/include/bits/resource.h /usr/include/unistd.h
matsushita.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
matsushita.o: /usr/include/bits/confname.h ../include/getopt.h
matsushita.o: ../include/sane/sane.h ../include/sane/sanei.h
matsushita.o: ../include/sane/sane.h ../include/sane/saneopts.h
matsushita.o: ../include/sane/sanei_scsi.h ../include/sane/sanei_debug.h
matsushita.o: ../include/sane/sanei.h ../include/sane/sanei_backend.h
matsushita.o: ../include/sane/sanei_debug.h ../include/sane/sanei_config.h
matsushita.o: ../include/lassert.h /usr/include/assert.h matsushita.h
matsushita-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
matsushita-s.o: ../include/sane/sanei.h ../include/sane/sane.h
matsushita-s.o: /usr/include/fcntl.h /usr/include/features.h
matsushita-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
matsushita-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
matsushita-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
matsushita-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
matsushita-s.o: /usr/include/time.h /usr/include/endian.h
matsushita-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
matsushita-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
matsushita-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
matsushita-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
matsushita-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
matsushita-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
matsushita-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
matsushita-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
matsushita-s.o: /usr/include/bits/stdio_lim.h
microtek2.o: ../include/sane/config.h ../include/lalloca.h
microtek2.o: /usr/include/stdio.h /usr/include/features.h
microtek2.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
microtek2.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
microtek2.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
microtek2.o: /usr/include/libio.h /usr/include/_G_config.h
microtek2.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
microtek2.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
microtek2.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
microtek2.o: /usr/include/endian.h /usr/include/bits/endian.h
microtek2.o: /usr/include/xlocale.h /usr/include/sys/types.h
microtek2.o: /usr/include/time.h /usr/include/sys/select.h
microtek2.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
microtek2.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
microtek2.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
microtek2.o: /usr/include/string.h /usr/include/unistd.h
microtek2.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
microtek2.o: /usr/include/bits/confname.h ../include/getopt.h
microtek2.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
microtek2.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
microtek2.o: /usr/include/bits/stat.h /usr/include/ctype.h
microtek2.o: /usr/include/signal.h /usr/include/bits/signum.h
microtek2.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
microtek2.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
microtek2.o: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
microtek2.o: /usr/include/errno.h /usr/include/bits/errno.h
microtek2.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
microtek2.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
microtek2.o: /usr/include/asm-generic/errno-base.h /usr/include/math.h
microtek2.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
microtek2.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
microtek2.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
microtek2.o: /usr/include/bits/mathcalls.h ../include/sane/sane.h
microtek2.o: ../include/sane/sanei.h ../include/sane/sane.h
microtek2.o: ../include/sane/sanei_config.h ../include/sane/sanei_scsi.h
microtek2.o: ../include/sane/saneopts.h ../include/sane/sanei_thread.h
microtek2.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
microtek2.o: ../include/sane/sanei.h /usr/include/limits.h
microtek2.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
microtek2.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
microtek2.o: /usr/include/bits/xopen_lim.h microtek2.h
microtek2-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
microtek2-s.o: ../include/sane/sanei.h ../include/sane/sane.h
microtek2-s.o: /usr/include/fcntl.h /usr/include/features.h
microtek2-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
microtek2-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
microtek2-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
microtek2-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
microtek2-s.o: /usr/include/time.h /usr/include/endian.h
microtek2-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
microtek2-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
microtek2-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
microtek2-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
microtek2-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
microtek2-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
microtek2-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
microtek2-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
microtek2-s.o: /usr/include/bits/stdio_lim.h
microtek.o: ../include/sane/config.h /usr/include/stdlib.h
microtek.o: /usr/include/features.h /usr/include/sys/cdefs.h
microtek.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
microtek.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
microtek.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
microtek.o: /usr/include/bits/endian.h /usr/include/xlocale.h
microtek.o: /usr/include/sys/types.h /usr/include/bits/types.h
microtek.o: /usr/include/bits/typesizes.h /usr/include/time.h
microtek.o: /usr/include/sys/select.h /usr/include/bits/select.h
microtek.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
microtek.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
microtek.o: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
microtek.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
microtek.o: /usr/include/bits/confname.h ../include/getopt.h
microtek.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
microtek.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
microtek.o: /usr/include/bits/stat.h /usr/include/math.h
microtek.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
microtek.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
microtek.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
microtek.o: /usr/include/bits/mathcalls.h ../include/sane/sane.h
microtek.o: ../include/sane/sanei.h ../include/sane/sanei_config.h
microtek.o: /usr/include/stdio.h /usr/include/libio.h
microtek.o: /usr/include/_G_config.h /usr/include/wchar.h
microtek.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
microtek.o: ../include/sane/sanei_scsi.h ../include/sane/saneopts.h
microtek.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
microtek.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
microtek.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
microtek.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
microtek.o: microtek.h
microtek-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
microtek-s.o: ../include/sane/sanei.h ../include/sane/sane.h
microtek-s.o: /usr/include/fcntl.h /usr/include/features.h
microtek-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
microtek-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
microtek-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
microtek-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
microtek-s.o: /usr/include/time.h /usr/include/endian.h
microtek-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
microtek-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
microtek-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
microtek-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
microtek-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
microtek-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
microtek-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
microtek-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
microtek-s.o: /usr/include/bits/stdio_lim.h
mustek.o: ../include/sane/config.h /usr/include/ctype.h
mustek.o: /usr/include/features.h /usr/include/sys/cdefs.h
mustek.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
mustek.o: /usr/include/bits/typesizes.h /usr/include/endian.h
mustek.o: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek.o: /usr/include/errno.h /usr/include/bits/errno.h
mustek.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
mustek.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
mustek.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
mustek.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
mustek.o: /usr/include/time.h /usr/include/sys/select.h
mustek.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
mustek.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
mustek.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
mustek.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
mustek.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
mustek.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
mustek.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
mustek.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
mustek.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
mustek.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
mustek.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
mustek.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
mustek.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
mustek.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
mustek.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
mustek.o: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
mustek.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
mustek.o: /usr/include/bits/confname.h ../include/getopt.h
mustek.o: /usr/include/sys/time.h ../include/sane/sane.h
mustek.o: ../include/sane/sanei.h ../include/sane/sane.h
mustek.o: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
mustek.o: ../include/sane/sanei_ab306.h ../include/sane/sanei_thread.h
mustek.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
mustek.o: ../include/sane/sanei.h ../include/sane/sanei_config.h mustek.h
mustek.o: mustek_scsi_pp.h mustek_scsi_pp.c /usr/include/sys/wait.h
mustek.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
mustek.o: ../include/sane/sanei_debug.h ../include/sane/sanei_pa4s2.h
mustek_pp.o: ../include/sane/config.h /usr/include/stdlib.h
mustek_pp.o: /usr/include/features.h /usr/include/sys/cdefs.h
mustek_pp.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek_pp.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
mustek_pp.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
mustek_pp.o: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek_pp.o: /usr/include/sys/types.h /usr/include/bits/types.h
mustek_pp.o: /usr/include/bits/typesizes.h /usr/include/time.h
mustek_pp.o: /usr/include/sys/select.h /usr/include/bits/select.h
mustek_pp.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
mustek_pp.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
mustek_pp.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
mustek_pp.o: /usr/include/_G_config.h /usr/include/wchar.h
mustek_pp.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
mustek_pp.o: /usr/include/ctype.h /usr/include/errno.h
mustek_pp.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
mustek_pp.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
mustek_pp.o: /usr/include/asm-generic/errno.h
mustek_pp.o: /usr/include/asm-generic/errno-base.h /usr/include/limits.h
mustek_pp.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
mustek_pp.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
mustek_pp.o: /usr/include/bits/xopen_lim.h /usr/include/signal.h
mustek_pp.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
mustek_pp.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
mustek_pp.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
mustek_pp.o: /usr/include/bits/sigthread.h /usr/include/string.h
mustek_pp.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
mustek_pp.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
mustek_pp.o: ../include/getopt.h /usr/include/math.h
mustek_pp.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
mustek_pp.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
mustek_pp.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
mustek_pp.o: /usr/include/bits/mathcalls.h /usr/include/fcntl.h
mustek_pp.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
mustek_pp.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
mustek_pp.o: /usr/include/sys/time.h /usr/include/sys/wait.h
mustek_pp.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
mustek_pp.o: ../include/sane/sane.h ../include/sane/sanei.h
mustek_pp.o: ../include/sane/sane.h ../include/sane/saneopts.h
mustek_pp.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
mustek_pp.o: ../include/sane/sanei.h ../include/sane/sanei_config.h
mustek_pp.o: ../include/sane/sanei_pa4s2.h mustek_pp.h
mustek_pp.o: ../include/sane/sanei_debug.h mustek_pp_drivers.h
mustek_pp.o: mustek_pp_decl.h mustek_pp_null.c mustek_pp_cis.h
mustek_pp.o: mustek_pp_cis.c /usr/include/assert.h mustek_pp_ccd300.h
mustek_pp.o: mustek_pp_ccd300.c
mustek_pp_ccd300.o: mustek_pp_ccd300.h
mustek_pp_cis.o: ../include/sane/config.h /usr/include/assert.h
mustek_pp_cis.o: /usr/include/features.h /usr/include/sys/cdefs.h
mustek_pp_cis.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek_pp_cis.o: /usr/include/gnu/stubs-32.h /usr/include/string.h
mustek_pp_cis.o: /usr/include/xlocale.h /usr/include/stdlib.h
mustek_pp_cis.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
mustek_pp_cis.o: /usr/include/endian.h /usr/include/bits/endian.h
mustek_pp_cis.o: /usr/include/sys/types.h /usr/include/bits/types.h
mustek_pp_cis.o: /usr/include/bits/typesizes.h /usr/include/time.h
mustek_pp_cis.o: /usr/include/sys/select.h /usr/include/bits/select.h
mustek_pp_cis.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
mustek_pp_cis.o: /usr/include/sys/sysmacros.h
mustek_pp_cis.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
mustek_pp_cis.o: /usr/include/stdio.h /usr/include/libio.h
mustek_pp_cis.o: /usr/include/_G_config.h /usr/include/wchar.h
mustek_pp_cis.o: /usr/include/bits/stdio_lim.h
mustek_pp_cis.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
mustek_pp_cis.o: /usr/include/bits/posix_opt.h
mustek_pp_cis.o: /usr/include/bits/environments.h
mustek_pp_cis.o: /usr/include/bits/confname.h ../include/getopt.h
mustek_pp_cis.o: /usr/include/math.h /usr/include/bits/huge_val.h
mustek_pp_cis.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
mustek_pp_cis.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
mustek_pp_cis.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
mustek_pp_cis.o: ../include/sane/sane.h ../include/sane/sanei_pa4s2.h
mustek_pp_cis.o: ../include/sane/sane.h mustek_pp.h /usr/include/sys/time.h
mustek_pp_cis.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
mustek_pp_cis.o: mustek_pp_decl.h mustek_pp_cis.h
mustek_pp_null.o: ../include/sane/config.h /usr/include/stdlib.h
mustek_pp_null.o: /usr/include/features.h /usr/include/sys/cdefs.h
mustek_pp_null.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek_pp_null.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
mustek_pp_null.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
mustek_pp_null.o: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek_pp_null.o: /usr/include/sys/types.h /usr/include/bits/types.h
mustek_pp_null.o: /usr/include/bits/typesizes.h /usr/include/time.h
mustek_pp_null.o: /usr/include/sys/select.h /usr/include/bits/select.h
mustek_pp_null.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
mustek_pp_null.o: /usr/include/sys/sysmacros.h
mustek_pp_null.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
mustek_pp_null.o: /usr/include/ctype.h /usr/include/stdio.h
mustek_pp_null.o: /usr/include/libio.h /usr/include/_G_config.h
mustek_pp_null.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
mustek_pp_null.o: /usr/include/bits/sys_errlist.h /usr/include/string.h
mustek_pp_null.o: mustek_pp.h /usr/include/sys/time.h
mustek_pp_null.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
mustek_pp_null.o: ../include/sane/sane.h mustek_pp_decl.h
mustek_pp_null.o: ../include/sane/sane.h ../include/sane/sanei.h
mustek_pp-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
mustek_pp-s.o: ../include/sane/sanei.h ../include/sane/sane.h
mustek_pp-s.o: /usr/include/fcntl.h /usr/include/features.h
mustek_pp-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
mustek_pp-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
mustek_pp-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
mustek_pp-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
mustek_pp-s.o: /usr/include/time.h /usr/include/endian.h
mustek_pp-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
mustek_pp-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
mustek_pp-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
mustek_pp-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
mustek_pp-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
mustek_pp-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
mustek_pp-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
mustek_pp-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
mustek_pp-s.o: /usr/include/bits/stdio_lim.h
mustek-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
mustek-s.o: ../include/sane/sanei.h ../include/sane/sane.h
mustek-s.o: /usr/include/fcntl.h /usr/include/features.h
mustek-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
mustek-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
mustek-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
mustek-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
mustek-s.o: /usr/include/time.h /usr/include/endian.h
mustek-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
mustek-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
mustek-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
mustek-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
mustek-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
mustek-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
mustek-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
mustek-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
mustek-s.o: /usr/include/bits/stdio_lim.h
mustek_scsi_pp.o: ../include/sane/config.h /usr/include/ctype.h
mustek_scsi_pp.o: /usr/include/features.h /usr/include/sys/cdefs.h
mustek_scsi_pp.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek_scsi_pp.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
mustek_scsi_pp.o: /usr/include/bits/typesizes.h /usr/include/endian.h
mustek_scsi_pp.o: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek_scsi_pp.o: /usr/include/errno.h /usr/include/bits/errno.h
mustek_scsi_pp.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
mustek_scsi_pp.o: /usr/include/asm-i386/errno.h
mustek_scsi_pp.o: /usr/include/asm-generic/errno.h
mustek_scsi_pp.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
mustek_scsi_pp.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
mustek_scsi_pp.o: /usr/include/time.h /usr/include/sys/select.h
mustek_scsi_pp.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
mustek_scsi_pp.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
mustek_scsi_pp.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
mustek_scsi_pp.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
mustek_scsi_pp.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
mustek_scsi_pp.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
mustek_scsi_pp.o: /usr/include/bits/posix2_lim.h
mustek_scsi_pp.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
mustek_scsi_pp.o: /usr/include/signal.h /usr/include/bits/signum.h
mustek_scsi_pp.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
mustek_scsi_pp.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
mustek_scsi_pp.o: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
mustek_scsi_pp.o: /usr/include/stdio.h /usr/include/libio.h
mustek_scsi_pp.o: /usr/include/_G_config.h /usr/include/wchar.h
mustek_scsi_pp.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
mustek_scsi_pp.o: /usr/include/bits/waitflags.h
mustek_scsi_pp.o: /usr/include/bits/waitstatus.h /usr/include/alloca.h
mustek_scsi_pp.o: /usr/include/string.h /usr/include/unistd.h
mustek_scsi_pp.o: /usr/include/bits/posix_opt.h
mustek_scsi_pp.o: /usr/include/bits/environments.h
mustek_scsi_pp.o: /usr/include/bits/confname.h ../include/getopt.h
mustek_scsi_pp.o: /usr/include/sys/time.h /usr/include/sys/wait.h
mustek_scsi_pp.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
mustek_scsi_pp.o: ../include/sane/sane.h ../include/sane/sanei.h
mustek_scsi_pp.o: ../include/sane/sane.h ../include/sane/saneopts.h
mustek_scsi_pp.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
mustek_scsi_pp.o: ../include/sane/sanei_pa4s2.h
mustek_usb2_asic.o: mustek_usb2_asic.h ../include/sane/sanei_usb.h
mustek_usb2_asic.o: ../include/sane/config.h ../include/sane/sane.h
mustek_usb2_asic.o: /usr/include/stdlib.h /usr/include/features.h
mustek_usb2_asic.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
mustek_usb2_asic.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
mustek_usb2_asic.o: /usr/include/bits/waitflags.h
mustek_usb2_asic.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
mustek_usb2_asic.o: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek_usb2_asic.o: /usr/include/sys/types.h /usr/include/bits/types.h
mustek_usb2_asic.o: /usr/include/bits/typesizes.h /usr/include/time.h
mustek_usb2_asic.o: /usr/include/sys/select.h /usr/include/bits/select.h
mustek_usb2_asic.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
mustek_usb2_asic.o: /usr/include/sys/sysmacros.h
mustek_usb2_asic.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
mustek_usb2.o: ../include/sane/config.h /usr/include/ctype.h
mustek_usb2.o: /usr/include/features.h /usr/include/sys/cdefs.h
mustek_usb2.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek_usb2.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
mustek_usb2.o: /usr/include/bits/typesizes.h /usr/include/endian.h
mustek_usb2.o: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek_usb2.o: /usr/include/errno.h /usr/include/bits/errno.h
mustek_usb2.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
mustek_usb2.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
mustek_usb2.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
mustek_usb2.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
mustek_usb2.o: /usr/include/time.h /usr/include/sys/select.h
mustek_usb2.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
mustek_usb2.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
mustek_usb2.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
mustek_usb2.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
mustek_usb2.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
mustek_usb2.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
mustek_usb2.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
mustek_usb2.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
mustek_usb2.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
mustek_usb2.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
mustek_usb2.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
mustek_usb2.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
mustek_usb2.o: /usr/include/libio.h /usr/include/_G_config.h
mustek_usb2.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
mustek_usb2.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
mustek_usb2.o: /usr/include/bits/waitstatus.h /usr/include/alloca.h
mustek_usb2.o: /usr/include/string.h /usr/include/unistd.h
mustek_usb2.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
mustek_usb2.o: /usr/include/bits/confname.h ../include/getopt.h
mustek_usb2.o: /usr/include/math.h /usr/include/bits/huge_val.h
mustek_usb2.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
mustek_usb2.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
mustek_usb2.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
mustek_usb2.o: /usr/include/sys/time.h /usr/include/sys/wait.h
mustek_usb2.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
mustek_usb2.o: ../include/sane/sane.h ../include/sane/sanei.h
mustek_usb2.o: ../include/sane/sane.h ../include/sane/saneopts.h
mustek_usb2.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
mustek_usb2.o: ../include/sane/sanei.h mustek_usb2_high.c
mustek_usb2.o: /usr/include/pthread.h /usr/include/sched.h
mustek_usb2.o: /usr/include/bits/sched.h /usr/include/bits/setjmp.h
mustek_usb2.o: mustek_usb2_asic.c mustek_usb2_asic.h
mustek_usb2.o: ../include/sane/sanei_usb.h mustek_usb2_high.h
mustek_usb2.o: mustek_usb2_reflective.c mustek_usb2_transparent.c
mustek_usb2.o: mustek_usb2.h
mustek_usb2_high.o: /usr/include/pthread.h /usr/include/features.h
mustek_usb2_high.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
mustek_usb2_high.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
mustek_usb2_high.o: /usr/include/endian.h /usr/include/bits/endian.h
mustek_usb2_high.o: /usr/include/sched.h /usr/include/bits/types.h
mustek_usb2_high.o: /usr/include/bits/typesizes.h /usr/include/time.h
mustek_usb2_high.o: /usr/include/bits/sched.h /usr/include/signal.h
mustek_usb2_high.o: /usr/include/bits/sigset.h /usr/include/bits/signum.h
mustek_usb2_high.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
mustek_usb2_high.o: /usr/include/bits/sigcontext.h
mustek_usb2_high.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
mustek_usb2_high.o: /usr/include/bits/pthreadtypes.h
mustek_usb2_high.o: /usr/include/bits/sigthread.h /usr/include/bits/setjmp.h
mustek_usb2_high.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
mustek_usb2_high.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
mustek_usb2_high.o: /usr/include/sys/types.h /usr/include/sys/select.h
mustek_usb2_high.o: /usr/include/bits/select.h /usr/include/bits/time.h
mustek_usb2_high.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
mustek_usb2_high.o: mustek_usb2_asic.c mustek_usb2_asic.h
mustek_usb2_high.o: ../include/sane/sanei_usb.h ../include/sane/config.h
mustek_usb2_high.o: ../include/sane/sane.h mustek_usb2_high.h
mustek_usb2_high.o: mustek_usb2_reflective.c mustek_usb2_transparent.c
mustek_usb2-s.o: ../include/sane/sanei_backend.h
mustek_usb2-s.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
mustek_usb2-s.o: ../include/sane/sane.h /usr/include/fcntl.h
mustek_usb2-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
mustek_usb2-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek_usb2-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
mustek_usb2-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
mustek_usb2-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
mustek_usb2-s.o: /usr/include/endian.h /usr/include/bits/endian.h
mustek_usb2-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
mustek_usb2-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
mustek_usb2-s.o: /usr/include/sys/sysmacros.h
mustek_usb2-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
mustek_usb2-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
mustek_usb2-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
mustek_usb2-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
mustek_usb2-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
mustek_usb2-s.o: /usr/include/bits/stdio_lim.h
mustek_usb.o: ../include/sane/config.h /usr/include/ctype.h
mustek_usb.o: /usr/include/features.h /usr/include/sys/cdefs.h
mustek_usb.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek_usb.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
mustek_usb.o: /usr/include/bits/typesizes.h /usr/include/endian.h
mustek_usb.o: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek_usb.o: /usr/include/errno.h /usr/include/bits/errno.h
mustek_usb.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
mustek_usb.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
mustek_usb.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
mustek_usb.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
mustek_usb.o: /usr/include/time.h /usr/include/sys/select.h
mustek_usb.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
mustek_usb.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
mustek_usb.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
mustek_usb.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
mustek_usb.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
mustek_usb.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
mustek_usb.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
mustek_usb.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
mustek_usb.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
mustek_usb.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
mustek_usb.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
mustek_usb.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
mustek_usb.o: /usr/include/libio.h /usr/include/_G_config.h
mustek_usb.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
mustek_usb.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
mustek_usb.o: /usr/include/bits/waitstatus.h /usr/include/alloca.h
mustek_usb.o: /usr/include/string.h /usr/include/unistd.h
mustek_usb.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
mustek_usb.o: /usr/include/bits/confname.h ../include/getopt.h
mustek_usb.o: /usr/include/sys/time.h /usr/include/sys/wait.h
mustek_usb.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
mustek_usb.o: ../include/sane/sane.h ../include/sane/sanei.h
mustek_usb.o: ../include/sane/sane.h ../include/sane/saneopts.h
mustek_usb.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
mustek_usb.o: ../include/sane/sanei.h ../include/sane/sanei_config.h
mustek_usb.o: ../include/sane/sanei_usb.h mustek_usb.h mustek_usb_high.h
mustek_usb.o: mustek_usb_mid.h mustek_usb_low.h mustek_usb_high.c
mustek_usb.o: mustek_usb_mid.c mustek_usb_low.c
mustek_usb_high.o: mustek_usb_high.h mustek_usb_mid.h mustek_usb_low.h
mustek_usb_high.o: ../include/sane/sane.h mustek_usb_mid.c mustek_usb_low.c
mustek_usb_high.o: /usr/include/unistd.h /usr/include/features.h
mustek_usb_high.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
mustek_usb_high.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
mustek_usb_high.o: /usr/include/bits/posix_opt.h
mustek_usb_high.o: /usr/include/bits/environments.h /usr/include/bits/types.h
mustek_usb_high.o: /usr/include/bits/typesizes.h /usr/include/bits/confname.h
mustek_usb_high.o: ../include/getopt.h ../include/sane/sanei_usb.h
mustek_usb_high.o: ../include/sane/config.h /usr/include/stdlib.h
mustek_usb_high.o: /usr/include/bits/waitflags.h
mustek_usb_high.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
mustek_usb_high.o: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek_usb_high.o: /usr/include/sys/types.h /usr/include/time.h
mustek_usb_high.o: /usr/include/sys/select.h /usr/include/bits/select.h
mustek_usb_high.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
mustek_usb_high.o: /usr/include/sys/sysmacros.h
mustek_usb_high.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
mustek_usb_low.o: /usr/include/unistd.h /usr/include/features.h
mustek_usb_low.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
mustek_usb_low.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
mustek_usb_low.o: /usr/include/bits/posix_opt.h
mustek_usb_low.o: /usr/include/bits/environments.h /usr/include/bits/types.h
mustek_usb_low.o: /usr/include/bits/typesizes.h /usr/include/bits/confname.h
mustek_usb_low.o: ../include/getopt.h ../include/sane/sane.h
mustek_usb_low.o: ../include/sane/sanei_usb.h ../include/sane/config.h
mustek_usb_low.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
mustek_usb_low.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
mustek_usb_low.o: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek_usb_low.o: /usr/include/sys/types.h /usr/include/time.h
mustek_usb_low.o: /usr/include/sys/select.h /usr/include/bits/select.h
mustek_usb_low.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
mustek_usb_low.o: /usr/include/sys/sysmacros.h
mustek_usb_low.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
mustek_usb_low.o: mustek_usb_low.h
mustek_usb_mid.o: mustek_usb_mid.h mustek_usb_low.h ../include/sane/sane.h
mustek_usb_mid.o: mustek_usb_low.c /usr/include/unistd.h
mustek_usb_mid.o: /usr/include/features.h /usr/include/sys/cdefs.h
mustek_usb_mid.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek_usb_mid.o: /usr/include/gnu/stubs-32.h /usr/include/bits/posix_opt.h
mustek_usb_mid.o: /usr/include/bits/environments.h /usr/include/bits/types.h
mustek_usb_mid.o: /usr/include/bits/typesizes.h /usr/include/bits/confname.h
mustek_usb_mid.o: ../include/getopt.h ../include/sane/sanei_usb.h
mustek_usb_mid.o: ../include/sane/config.h /usr/include/stdlib.h
mustek_usb_mid.o: /usr/include/bits/waitflags.h
mustek_usb_mid.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
mustek_usb_mid.o: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek_usb_mid.o: /usr/include/sys/types.h /usr/include/time.h
mustek_usb_mid.o: /usr/include/sys/select.h /usr/include/bits/select.h
mustek_usb_mid.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
mustek_usb_mid.o: /usr/include/sys/sysmacros.h
mustek_usb_mid.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
mustek_usb-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
mustek_usb-s.o: ../include/sane/sanei.h ../include/sane/sane.h
mustek_usb-s.o: /usr/include/fcntl.h /usr/include/features.h
mustek_usb-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
mustek_usb-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
mustek_usb-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
mustek_usb-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
mustek_usb-s.o: /usr/include/time.h /usr/include/endian.h
mustek_usb-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
mustek_usb-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
mustek_usb-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
mustek_usb-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
mustek_usb-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
mustek_usb-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
mustek_usb-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
mustek_usb-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
mustek_usb-s.o: /usr/include/bits/stdio_lim.h
nec.o: ../include/sane/config.h /usr/include/limits.h /usr/include/features.h
nec.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
nec.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
nec.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
nec.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
nec.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
nec.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
nec.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
nec.o: /usr/include/bits/endian.h /usr/include/xlocale.h
nec.o: /usr/include/sys/types.h /usr/include/bits/types.h
nec.o: /usr/include/bits/typesizes.h /usr/include/time.h
nec.o: /usr/include/sys/select.h /usr/include/bits/select.h
nec.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
nec.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
nec.o: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
nec.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
nec.o: /usr/include/bits/confname.h ../include/getopt.h /usr/include/errno.h
nec.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
nec.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
nec.o: /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h
nec.o: /usr/include/math.h /usr/include/bits/huge_val.h
nec.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
nec.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
nec.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
nec.o: ../include/sane/sane.h ../include/sane/saneopts.h
nec.o: ../include/sane/sanei_scsi.h ../include/sane/sanei_backend.h
nec.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
nec.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h /usr/include/bits/uio.h
nec.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
nec.o: ../include/sane/sanei_config.h /usr/include/stdio.h
nec.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
nec.o: /usr/include/bits/sys_errlist.h nec.h
nec-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
nec-s.o: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
nec-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
nec-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
nec-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
nec-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
nec-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
nec-s.o: /usr/include/endian.h /usr/include/bits/endian.h
nec-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
nec-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
nec-s.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
nec-s.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
nec-s.o: /usr/include/bits/stat.h /usr/include/limits.h
nec-s.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
nec-s.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
nec-s.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
net.o: ../include/sane/config.h ../include/lalloca.h /usr/include/errno.h
net.o: /usr/include/features.h /usr/include/sys/cdefs.h
net.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
net.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
net.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
net.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
net.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
net.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
net.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
net.o: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
net.o: /usr/include/sys/select.h /usr/include/bits/select.h
net.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
net.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
net.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
net.o: /usr/include/bits/stat.h /usr/include/limits.h
net.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
net.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
net.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
net.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
net.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
net.o: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
net.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
net.o: /usr/include/bits/confname.h ../include/getopt.h
net.o: /usr/include/sys/time.h /usr/include/netinet/in.h
net.o: /usr/include/stdint.h /usr/include/bits/wchar.h
net.o: /usr/include/sys/socket.h /usr/include/sys/uio.h
net.o: /usr/include/bits/socket.h /usr/include/bits/sockaddr.h
net.o: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
net.o: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
net.o: /usr/include/bits/in.h /usr/include/bits/byteswap.h
net.o: /usr/include/netdb.h /usr/include/rpc/netdb.h
net.o: /usr/include/bits/siginfo.h /usr/include/bits/netdb.h
net.o: ../include/sane/sane.h ../include/sane/sanei.h ../include/sane/sane.h
net.o: ../include/sane/sanei_net.h ../include/sane/sanei_wire.h
net.o: ../include/sane/sanei_codec_bin.h net.h ../include/sane/sanei_wire.h
net.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
net.o: ../include/sane/sanei.h ../include/sane/sanei_config.h
net.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
net.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
net-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
net-s.o: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
net-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
net-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
net-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
net-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
net-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
net-s.o: /usr/include/endian.h /usr/include/bits/endian.h
net-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
net-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
net-s.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
net-s.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
net-s.o: /usr/include/bits/stat.h /usr/include/limits.h
net-s.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
net-s.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
net-s.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
niash.o: ../include/sane/config.h ../include/sane/sane.h
niash.o: ../include/sane/sanei.h ../include/sane/sane.h
niash.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
niash.o: ../include/sane/sanei.h /usr/include/fcntl.h /usr/include/features.h
niash.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
niash.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
niash.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
niash.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
niash.o: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
niash.o: /usr/include/sys/select.h /usr/include/bits/select.h
niash.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
niash.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
niash.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
niash.o: /usr/include/bits/stat.h /usr/include/limits.h
niash.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
niash.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
niash.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
niash.o: ../include/sane/sanei_config.h /usr/include/stdio.h
niash.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
niash.o: /usr/include/bits/sys_errlist.h ../include/sane/saneopts.h
niash.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
niash.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
niash.o: /usr/include/alloca.h /usr/include/string.h /usr/include/sys/time.h
niash.o: /usr/include/sys/wait.h /usr/include/signal.h
niash.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
niash.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
niash.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
niash.o: /usr/include/bits/sigthread.h /usr/include/sys/resource.h
niash.o: /usr/include/bits/resource.h niash_core.c /usr/include/unistd.h
niash.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
niash.o: /usr/include/bits/confname.h ../include/getopt.h /usr/include/math.h
niash.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
niash.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
niash.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
niash.o: /usr/include/bits/mathcalls.h niash_xfer.h niash_core.h niash_xfer.c
niash.o: /usr/include/errno.h /usr/include/bits/errno.h
niash.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
niash.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
niash.o: /usr/include/asm-generic/errno-base.h ../include/sane/sanei_usb.h
niash_core.o: /usr/include/stdio.h /usr/include/features.h
niash_core.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
niash_core.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
niash_core.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
niash_core.o: /usr/include/libio.h /usr/include/_G_config.h
niash_core.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
niash_core.o: /usr/include/bits/sys_errlist.h /usr/include/string.h
niash_core.o: /usr/include/xlocale.h /usr/include/unistd.h
niash_core.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
niash_core.o: /usr/include/bits/confname.h ../include/getopt.h
niash_core.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
niash_core.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
niash_core.o: /usr/include/bits/endian.h /usr/include/sys/types.h
niash_core.o: /usr/include/time.h /usr/include/sys/select.h
niash_core.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
niash_core.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
niash_core.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
niash_core.o: /usr/include/math.h /usr/include/bits/huge_val.h
niash_core.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
niash_core.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
niash_core.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
niash_core.o: niash_xfer.h niash_core.h
niash-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
niash-s.o: ../include/sane/sanei.h ../include/sane/sane.h
niash-s.o: /usr/include/fcntl.h /usr/include/features.h
niash-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
niash-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
niash-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
niash-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
niash-s.o: /usr/include/time.h /usr/include/endian.h
niash-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
niash-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
niash-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
niash-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
niash-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
niash-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
niash-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
niash-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
niash-s.o: /usr/include/bits/stdio_lim.h
niash_xfer.o: /usr/include/stdio.h /usr/include/features.h
niash_xfer.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
niash_xfer.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
niash_xfer.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
niash_xfer.o: /usr/include/libio.h /usr/include/_G_config.h
niash_xfer.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
niash_xfer.o: /usr/include/bits/sys_errlist.h /usr/include/errno.h
niash_xfer.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
niash_xfer.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
niash_xfer.o: /usr/include/asm-generic/errno.h
niash_xfer.o: /usr/include/asm-generic/errno-base.h /usr/include/string.h
niash_xfer.o: /usr/include/xlocale.h niash_xfer.h ../include/sane/sanei_usb.h
niash_xfer.o: ../include/sane/config.h ../include/sane/sane.h
niash_xfer.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
niash_xfer.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
niash_xfer.o: /usr/include/bits/endian.h /usr/include/sys/types.h
niash_xfer.o: /usr/include/time.h /usr/include/sys/select.h
niash_xfer.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
niash_xfer.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
niash_xfer.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
pie.o: ../include/sane/config.h /usr/include/errno.h /usr/include/features.h
pie.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
pie.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
pie.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
pie.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
pie.o: /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h
pie.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
pie.o: /usr/include/sys/types.h /usr/include/bits/types.h
pie.o: /usr/include/bits/typesizes.h /usr/include/time.h
pie.o: /usr/include/endian.h /usr/include/bits/endian.h
pie.o: /usr/include/sys/select.h /usr/include/bits/select.h
pie.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
pie.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
pie.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
pie.o: /usr/include/bits/stat.h /usr/include/limits.h
pie.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
pie.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
pie.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
pie.o: /usr/include/signal.h /usr/include/bits/signum.h
pie.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
pie.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
pie.o: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
pie.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
pie.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
pie.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
pie.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
pie.o: /usr/include/alloca.h /usr/include/string.h /usr/include/sys/wait.h
pie.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
pie.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
pie.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
pie.o: ../include/getopt.h ../include/sane/sane.h ../include/sane/sanei.h
pie.o: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
pie.o: ../include/sane/sanei_debug.h ../include/sane/sanei_backend.h
pie.o: ../include/sane/sanei_config.h ../include/sane/sanei_thread.h
pie.o: ../include/sane/config.h pie-scsidef.h
pie-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
pie-s.o: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
pie-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
pie-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
pie-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
pie-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
pie-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
pie-s.o: /usr/include/endian.h /usr/include/bits/endian.h
pie-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
pie-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
pie-s.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
pie-s.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
pie-s.o: /usr/include/bits/stat.h /usr/include/limits.h
pie-s.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
pie-s.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
pie-s.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
pint.o: ../include/sane/config.h /usr/include/limits.h
pint.o: /usr/include/features.h /usr/include/sys/cdefs.h
pint.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
pint.o: /usr/include/gnu/stubs-32.h /usr/include/bits/posix1_lim.h
pint.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
pint.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
pint.o: /usr/include/bits/stdio_lim.h /usr/include/stdlib.h
pint.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
pint.o: /usr/include/endian.h /usr/include/bits/endian.h
pint.o: /usr/include/xlocale.h /usr/include/sys/types.h
pint.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
pint.o: /usr/include/time.h /usr/include/sys/select.h
pint.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
pint.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
pint.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
pint.o: /usr/include/string.h ../include/sane/sane.h
pint.o: ../include/sane/saneopts.h /usr/include/unistd.h
pint.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
pint.o: /usr/include/bits/confname.h ../include/getopt.h /usr/include/fcntl.h
pint.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
pint.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
pint.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
pint.o: ../include/sane/sanei.h ../include/sane/sanei_config.h
pint.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
pint.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h pint.h
pint.o: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
pint.o: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
pint.o: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
pint.o: /usr/include/asm-generic/ioctl.h /usr/include/bits/ioctl-types.h
pint.o: /usr/include/sys/ttydefaults.h
pixma.o: ../include/sane/config.h /usr/include/errno.h
pixma.o: /usr/include/features.h /usr/include/sys/cdefs.h
pixma.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
pixma.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
pixma.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
pixma.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
pixma.o: /usr/include/asm-generic/errno-base.h /usr/include/string.h
pixma.o: /usr/include/xlocale.h /usr/include/stdlib.h
pixma.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
pixma.o: /usr/include/endian.h /usr/include/bits/endian.h
pixma.o: /usr/include/sys/types.h /usr/include/bits/types.h
pixma.o: /usr/include/bits/typesizes.h /usr/include/time.h
pixma.o: /usr/include/sys/select.h /usr/include/bits/select.h
pixma.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
pixma.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
pixma.o: /usr/include/alloca.h /usr/include/signal.h
pixma.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
pixma.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
pixma.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
pixma.o: /usr/include/bits/sigthread.h /usr/include/unistd.h
pixma.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
pixma.o: /usr/include/bits/confname.h ../include/getopt.h
pixma.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
pixma.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
pixma.o: /usr/include/bits/stat.h pixma_rename.h pixma.h
pixma.o: /usr/include/stdint.h /usr/include/bits/wchar.h
pixma.o: ../include/sane/sane.h ../include/sane/sanei.h
pixma.o: ../include/sane/sane.h ../include/sane/saneopts.h
pixma.o: ../include/sane/sanei_thread.h ../include/sane/sanei_backend.h
pixma.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
pixma.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
pixma.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
pixma.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
pixma.o: /usr/include/bits/stdio_lim.h pixma_sane_options.h
pixma.o: pixma_sane_options.c
pixma_common.o: ../include/sane/config.h /usr/include/stdio.h
pixma_common.o: /usr/include/features.h /usr/include/sys/cdefs.h
pixma_common.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
pixma_common.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
pixma_common.o: /usr/include/bits/typesizes.h /usr/include/libio.h
pixma_common.o: /usr/include/_G_config.h /usr/include/wchar.h
pixma_common.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
pixma_common.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
pixma_common.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
pixma_common.o: /usr/include/bits/endian.h /usr/include/xlocale.h
pixma_common.o: /usr/include/sys/types.h /usr/include/time.h
pixma_common.o: /usr/include/sys/select.h /usr/include/bits/select.h
pixma_common.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
pixma_common.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
pixma_common.o: /usr/include/alloca.h /usr/include/string.h
pixma_common.o: /usr/include/math.h /usr/include/bits/huge_val.h
pixma_common.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
pixma_common.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
pixma_common.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
pixma_common.o: /usr/include/sys/time.h /usr/include/unistd.h
pixma_common.o: /usr/include/bits/posix_opt.h
pixma_common.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
pixma_common.o: ../include/getopt.h pixma_rename.h pixma_common.h pixma.h
pixma_common.o: /usr/include/stdint.h /usr/include/bits/wchar.h
pixma_common.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
pixma_common.o: ../include/sane/sane.h pixma_io.h
pixma_io_sanei.o: ../include/sane/config.h /usr/include/string.h
pixma_io_sanei.o: /usr/include/features.h /usr/include/sys/cdefs.h
pixma_io_sanei.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
pixma_io_sanei.o: /usr/include/gnu/stubs-32.h /usr/include/xlocale.h
pixma_io_sanei.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
pixma_io_sanei.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
pixma_io_sanei.o: /usr/include/bits/endian.h /usr/include/sys/types.h
pixma_io_sanei.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
pixma_io_sanei.o: /usr/include/time.h /usr/include/sys/select.h
pixma_io_sanei.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
pixma_io_sanei.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
pixma_io_sanei.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
pixma_io_sanei.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
pixma_io_sanei.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
pixma_io_sanei.o: /usr/include/bits/posix2_lim.h
pixma_io_sanei.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
pixma_io_sanei.o: pixma_rename.h pixma_common.h pixma.h /usr/include/stdint.h
pixma_io_sanei.o: /usr/include/bits/wchar.h ../include/sane/sanei_debug.h
pixma_io_sanei.o: ../include/sane/sanei.h ../include/sane/sane.h pixma_io.h
pixma_io_sanei.o: ../include/sane/sanei_usb.h ../include/sane/sane.h
pixma_mp150.o: ../include/sane/config.h /usr/include/stdio.h
pixma_mp150.o: /usr/include/features.h /usr/include/sys/cdefs.h
pixma_mp150.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
pixma_mp150.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
pixma_mp150.o: /usr/include/bits/typesizes.h /usr/include/libio.h
pixma_mp150.o: /usr/include/_G_config.h /usr/include/wchar.h
pixma_mp150.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
pixma_mp150.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
pixma_mp150.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
pixma_mp150.o: /usr/include/bits/endian.h /usr/include/xlocale.h
pixma_mp150.o: /usr/include/sys/types.h /usr/include/time.h
pixma_mp150.o: /usr/include/sys/select.h /usr/include/bits/select.h
pixma_mp150.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
pixma_mp150.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
pixma_mp150.o: /usr/include/alloca.h /usr/include/string.h pixma_rename.h
pixma_mp150.o: pixma_common.h pixma.h /usr/include/stdint.h
pixma_mp150.o: /usr/include/bits/wchar.h ../include/sane/sanei_debug.h
pixma_mp150.o: ../include/sane/sanei.h ../include/sane/sane.h pixma_io.h
pixma_mp730.o: ../include/sane/config.h /usr/include/stdio.h
pixma_mp730.o: /usr/include/features.h /usr/include/sys/cdefs.h
pixma_mp730.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
pixma_mp730.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
pixma_mp730.o: /usr/include/bits/typesizes.h /usr/include/libio.h
pixma_mp730.o: /usr/include/_G_config.h /usr/include/wchar.h
pixma_mp730.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
pixma_mp730.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
pixma_mp730.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
pixma_mp730.o: /usr/include/bits/endian.h /usr/include/xlocale.h
pixma_mp730.o: /usr/include/sys/types.h /usr/include/time.h
pixma_mp730.o: /usr/include/sys/select.h /usr/include/bits/select.h
pixma_mp730.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
pixma_mp730.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
pixma_mp730.o: /usr/include/alloca.h /usr/include/string.h pixma_rename.h
pixma_mp730.o: pixma_common.h pixma.h /usr/include/stdint.h
pixma_mp730.o: /usr/include/bits/wchar.h ../include/sane/sanei_debug.h
pixma_mp730.o: ../include/sane/sanei.h ../include/sane/sane.h pixma_io.h
pixma_mp750.o: ../include/sane/config.h /usr/include/stdlib.h
pixma_mp750.o: /usr/include/features.h /usr/include/sys/cdefs.h
pixma_mp750.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
pixma_mp750.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
pixma_mp750.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
pixma_mp750.o: /usr/include/bits/endian.h /usr/include/xlocale.h
pixma_mp750.o: /usr/include/sys/types.h /usr/include/bits/types.h
pixma_mp750.o: /usr/include/bits/typesizes.h /usr/include/time.h
pixma_mp750.o: /usr/include/sys/select.h /usr/include/bits/select.h
pixma_mp750.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
pixma_mp750.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
pixma_mp750.o: /usr/include/alloca.h /usr/include/string.h pixma_rename.h
pixma_mp750.o: pixma_common.h pixma.h /usr/include/stdint.h
pixma_mp750.o: /usr/include/bits/wchar.h ../include/sane/sanei_debug.h
pixma_mp750.o: ../include/sane/sanei.h ../include/sane/sane.h pixma_io.h
pixma-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
pixma-s.o: ../include/sane/sanei.h ../include/sane/sane.h
pixma-s.o: /usr/include/fcntl.h /usr/include/features.h
pixma-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
pixma-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
pixma-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
pixma-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
pixma-s.o: /usr/include/time.h /usr/include/endian.h
pixma-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
pixma-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
pixma-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
pixma-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
pixma-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
pixma-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
pixma-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
pixma-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
pixma-s.o: /usr/include/bits/stdio_lim.h
plustek.o: ../include/sane/config.h ../include/lalloca.h /usr/include/errno.h
plustek.o: /usr/include/features.h /usr/include/sys/cdefs.h
plustek.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
plustek.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
plustek.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
plustek.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
plustek.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
plustek.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
plustek.o: /usr/include/time.h /usr/include/endian.h
plustek.o: /usr/include/bits/endian.h /usr/include/sys/select.h
plustek.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
plustek.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
plustek.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
plustek.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
plustek.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
plustek.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
plustek.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
plustek.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
plustek.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
plustek.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
plustek.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek.o: /usr/include/bits/sigthread.h /usr/include/stdlib.h
plustek.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
plustek.o: /usr/include/xlocale.h /usr/include/alloca.h /usr/include/string.h
plustek.o: /usr/include/ctype.h /usr/include/unistd.h
plustek.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
plustek.o: /usr/include/bits/confname.h ../include/getopt.h
plustek.o: /usr/include/math.h /usr/include/bits/huge_val.h
plustek.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
plustek.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
plustek.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
plustek.o: /usr/include/sys/time.h /usr/include/sys/ioctl.h
plustek.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek.o: /usr/include/asm-i386/ioctl.h /usr/include/asm-generic/ioctl.h
plustek.o: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
plustek.o: ../include/sane/sane.h ../include/sane/sanei.h
plustek.o: ../include/sane/sane.h ../include/sane/saneopts.h
plustek.o: ../include/sane/sanei_access.h ../include/sane/sanei_backend.h
plustek.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
plustek.o: ../include/sane/sanei_config.h /usr/include/stdio.h
plustek.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
plustek.o: /usr/include/bits/sys_errlist.h ../include/sane/sanei_thread.h
plustek.o: plustek-usb.h plustek.h plustek-usbio.c
plustek.o: ../include/sane/sanei_usb.h ../include/sane/sanei_lm983x.h
plustek.o: plustek-usbdevs.c plustek-usbhw.c plustek-usbmap.c
plustek.o: plustek-usbscan.c plustek-usbimg.c plustek-usbcalfile.c
plustek.o: plustek-usbshading.c plustek-usbcal.c plustek-usb.c
plustek_pp.o: ../include/sane/config.h ../include/lalloca.h
plustek_pp.o: /usr/include/errno.h /usr/include/features.h
plustek_pp.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
plustek_pp.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
plustek_pp.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
plustek_pp.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
plustek_pp.o: /usr/include/asm-generic/errno.h
plustek_pp.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
plustek_pp.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
plustek_pp.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
plustek_pp.o: /usr/include/time.h /usr/include/endian.h
plustek_pp.o: /usr/include/bits/endian.h /usr/include/sys/select.h
plustek_pp.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
plustek_pp.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
plustek_pp.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
plustek_pp.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
plustek_pp.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
plustek_pp.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
plustek_pp.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
plustek_pp.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
plustek_pp.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
plustek_pp.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
plustek_pp.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek_pp.o: /usr/include/bits/sigthread.h /usr/include/stdlib.h
plustek_pp.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
plustek_pp.o: /usr/include/xlocale.h /usr/include/alloca.h
plustek_pp.o: /usr/include/string.h /usr/include/ctype.h
plustek_pp.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
plustek_pp.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
plustek_pp.o: ../include/getopt.h /usr/include/math.h
plustek_pp.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
plustek_pp.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
plustek_pp.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
plustek_pp.o: /usr/include/bits/mathcalls.h /usr/include/sys/time.h
plustek_pp.o: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
plustek_pp.o: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
plustek_pp.o: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
plustek_pp.o: /usr/include/asm-generic/ioctl.h
plustek_pp.o: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
plustek_pp.o: ../include/sane/sane.h ../include/sane/sanei.h
plustek_pp.o: ../include/sane/sane.h ../include/sane/saneopts.h
plustek_pp.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
plustek_pp.o: ../include/sane/sanei.h ../include/sane/sanei_config.h
plustek_pp.o: /usr/include/stdio.h /usr/include/libio.h
plustek_pp.o: /usr/include/_G_config.h /usr/include/wchar.h
plustek_pp.o: /usr/include/bits/sys_errlist.h ../include/sane/sanei_thread.h
plustek_pp.o: ../include/sane/sanei_pp.h plustek-pp.h plustek-pp_io.c
plustek_pp.o: plustek-pp_scan.h /usr/include/sys/signal.h
plustek_pp.o: /usr/include/sys/io.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek_pp.o: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek_pp.o: /usr/include/assert.h plustek-pp_dac.c plustek-pp_detect.c
plustek_pp.o: plustek-pp_genericio.c plustek-pp_image.c plustek-pp_map.c
plustek_pp.o: plustek-pp_misc.c plustek-pp_models.c plustek-pp_motor.c
plustek_pp.o: plustek-pp_p12.c plustek-pp_p12ccd.c plustek-pp_p48xx.c
plustek_pp.o: plustek-pp_p9636.c plustek-pp_procfs.c plustek-pp_scale.c
plustek_pp.o: plustek-pp_tpa.c plustek-pp_ptdrv.c plustek-pp_wrapper.c
plustek-pp_dac.o: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_dac.o: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_dac.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_dac.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-pp_dac.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_dac.o: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_dac.o: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_dac.o: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_dac.o: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_dac.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_dac.o: /usr/include/sys/sysmacros.h
plustek-pp_dac.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_dac.o: /usr/include/string.h /usr/include/stdio.h
plustek-pp_dac.o: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_dac.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_dac.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_dac.o: /usr/include/bits/posix_opt.h
plustek-pp_dac.o: /usr/include/bits/environments.h
plustek-pp_dac.o: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_dac.o: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_dac.o: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_dac.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
plustek-pp_dac.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
plustek-pp_dac.o: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
plustek-pp_dac.o: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
plustek-pp_dac.o: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
plustek-pp_dac.o: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
plustek-pp_dac.o: /usr/include/asm-generic/ioctl.h
plustek-pp_dac.o: /usr/include/bits/ioctl-types.h
plustek-pp_dac.o: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_dac.o: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_dac.o: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek-pp_dac.o: /usr/include/assert.h
plustek-pp_detect.o: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_detect.o: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_detect.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_detect.o: /usr/include/gnu/stubs-32.h
plustek-pp_detect.o: /usr/include/bits/waitflags.h
plustek-pp_detect.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_detect.o: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_detect.o: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_detect.o: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_detect.o: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_detect.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_detect.o: /usr/include/sys/sysmacros.h
plustek-pp_detect.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_detect.o: /usr/include/string.h /usr/include/stdio.h
plustek-pp_detect.o: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_detect.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_detect.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_detect.o: /usr/include/bits/posix_opt.h
plustek-pp_detect.o: /usr/include/bits/environments.h
plustek-pp_detect.o: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_detect.o: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_detect.o: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_detect.o: /usr/include/bits/siginfo.h
plustek-pp_detect.o: /usr/include/bits/sigaction.h
plustek-pp_detect.o: /usr/include/bits/sigcontext.h
plustek-pp_detect.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_detect.o: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_detect.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_detect.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_detect.o: /usr/include/asm-i386/ioctl.h
plustek-pp_detect.o: /usr/include/asm-generic/ioctl.h
plustek-pp_detect.o: /usr/include/bits/ioctl-types.h
plustek-pp_detect.o: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_detect.o: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_detect.o: plustek-pp_scandata.h plustek-pp_procs.h
plustek-pp_detect.o: plustek-pp_dbg.h /usr/include/assert.h
plustek-pp_genericio.o: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_genericio.o: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_genericio.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_genericio.o: /usr/include/gnu/stubs-32.h
plustek-pp_genericio.o: /usr/include/bits/waitflags.h
plustek-pp_genericio.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_genericio.o: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_genericio.o: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_genericio.o: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_genericio.o: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_genericio.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_genericio.o: /usr/include/sys/sysmacros.h
plustek-pp_genericio.o: /usr/include/bits/pthreadtypes.h
plustek-pp_genericio.o: /usr/include/alloca.h /usr/include/string.h
plustek-pp_genericio.o: /usr/include/stdio.h /usr/include/libio.h
plustek-pp_genericio.o: /usr/include/_G_config.h /usr/include/wchar.h
plustek-pp_genericio.o: /usr/include/bits/stdio_lim.h
plustek-pp_genericio.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_genericio.o: /usr/include/bits/posix_opt.h
plustek-pp_genericio.o: /usr/include/bits/environments.h
plustek-pp_genericio.o: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_genericio.o: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_genericio.o: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_genericio.o: /usr/include/bits/siginfo.h
plustek-pp_genericio.o: /usr/include/bits/sigaction.h
plustek-pp_genericio.o: /usr/include/bits/sigcontext.h
plustek-pp_genericio.o: /usr/include/bits/sigstack.h
plustek-pp_genericio.o: /usr/include/sys/ucontext.h
plustek-pp_genericio.o: /usr/include/bits/sigthread.h
plustek-pp_genericio.o: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
plustek-pp_genericio.o: /usr/include/asm/ioctls.h
plustek-pp_genericio.o: /usr/include/asm-i386/ioctls.h
plustek-pp_genericio.o: /usr/include/asm/ioctl.h
plustek-pp_genericio.o: /usr/include/asm-i386/ioctl.h
plustek-pp_genericio.o: /usr/include/asm-generic/ioctl.h
plustek-pp_genericio.o: /usr/include/bits/ioctl-types.h
plustek-pp_genericio.o: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_genericio.o: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_genericio.o: plustek-pp_scandata.h plustek-pp_procs.h
plustek-pp_genericio.o: plustek-pp_dbg.h /usr/include/assert.h
plustek-pp_image.o: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_image.o: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_image.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_image.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-pp_image.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_image.o: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_image.o: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_image.o: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_image.o: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_image.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_image.o: /usr/include/sys/sysmacros.h
plustek-pp_image.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_image.o: /usr/include/string.h /usr/include/stdio.h
plustek-pp_image.o: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_image.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_image.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_image.o: /usr/include/bits/posix_opt.h
plustek-pp_image.o: /usr/include/bits/environments.h
plustek-pp_image.o: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_image.o: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_image.o: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_image.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
plustek-pp_image.o: /usr/include/bits/sigcontext.h
plustek-pp_image.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_image.o: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_image.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_image.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_image.o: /usr/include/asm-i386/ioctl.h
plustek-pp_image.o: /usr/include/asm-generic/ioctl.h
plustek-pp_image.o: /usr/include/bits/ioctl-types.h
plustek-pp_image.o: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_image.o: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_image.o: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek-pp_image.o: /usr/include/assert.h
plustek-pp_io.o: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_io.o: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_io.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_io.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-pp_io.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_io.o: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_io.o: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_io.o: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_io.o: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_io.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_io.o: /usr/include/sys/sysmacros.h
plustek-pp_io.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_io.o: /usr/include/string.h /usr/include/stdio.h
plustek-pp_io.o: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_io.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_io.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_io.o: /usr/include/bits/posix_opt.h
plustek-pp_io.o: /usr/include/bits/environments.h
plustek-pp_io.o: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_io.o: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_io.o: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_io.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
plustek-pp_io.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
plustek-pp_io.o: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
plustek-pp_io.o: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
plustek-pp_io.o: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
plustek-pp_io.o: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
plustek-pp_io.o: /usr/include/asm-generic/ioctl.h
plustek-pp_io.o: /usr/include/bits/ioctl-types.h
plustek-pp_io.o: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_io.o: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_io.o: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek-pp_io.o: /usr/include/assert.h
plustek-pp_map.o: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_map.o: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_map.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_map.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-pp_map.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_map.o: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_map.o: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_map.o: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_map.o: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_map.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_map.o: /usr/include/sys/sysmacros.h
plustek-pp_map.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_map.o: /usr/include/string.h /usr/include/stdio.h
plustek-pp_map.o: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_map.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_map.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_map.o: /usr/include/bits/posix_opt.h
plustek-pp_map.o: /usr/include/bits/environments.h
plustek-pp_map.o: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_map.o: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_map.o: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_map.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
plustek-pp_map.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
plustek-pp_map.o: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
plustek-pp_map.o: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
plustek-pp_map.o: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
plustek-pp_map.o: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
plustek-pp_map.o: /usr/include/asm-generic/ioctl.h
plustek-pp_map.o: /usr/include/bits/ioctl-types.h
plustek-pp_map.o: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_map.o: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_map.o: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek-pp_map.o: /usr/include/assert.h
plustek-pp_misc.o: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_misc.o: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_misc.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_misc.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-pp_misc.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_misc.o: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_misc.o: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_misc.o: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_misc.o: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_misc.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_misc.o: /usr/include/sys/sysmacros.h
plustek-pp_misc.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_misc.o: /usr/include/string.h /usr/include/stdio.h
plustek-pp_misc.o: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_misc.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_misc.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_misc.o: /usr/include/bits/posix_opt.h
plustek-pp_misc.o: /usr/include/bits/environments.h
plustek-pp_misc.o: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_misc.o: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_misc.o: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_misc.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
plustek-pp_misc.o: /usr/include/bits/sigcontext.h
plustek-pp_misc.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_misc.o: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_misc.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_misc.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_misc.o: /usr/include/asm-i386/ioctl.h
plustek-pp_misc.o: /usr/include/asm-generic/ioctl.h
plustek-pp_misc.o: /usr/include/bits/ioctl-types.h
plustek-pp_misc.o: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_misc.o: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_misc.o: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek-pp_misc.o: /usr/include/assert.h
plustek-pp_models.o: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_models.o: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_models.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_models.o: /usr/include/gnu/stubs-32.h
plustek-pp_models.o: /usr/include/bits/waitflags.h
plustek-pp_models.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_models.o: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_models.o: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_models.o: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_models.o: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_models.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_models.o: /usr/include/sys/sysmacros.h
plustek-pp_models.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_models.o: /usr/include/string.h /usr/include/stdio.h
plustek-pp_models.o: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_models.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_models.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_models.o: /usr/include/bits/posix_opt.h
plustek-pp_models.o: /usr/include/bits/environments.h
plustek-pp_models.o: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_models.o: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_models.o: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_models.o: /usr/include/bits/siginfo.h
plustek-pp_models.o: /usr/include/bits/sigaction.h
plustek-pp_models.o: /usr/include/bits/sigcontext.h
plustek-pp_models.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_models.o: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_models.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_models.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_models.o: /usr/include/asm-i386/ioctl.h
plustek-pp_models.o: /usr/include/asm-generic/ioctl.h
plustek-pp_models.o: /usr/include/bits/ioctl-types.h
plustek-pp_models.o: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_models.o: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_models.o: plustek-pp_scandata.h plustek-pp_procs.h
plustek-pp_models.o: plustek-pp_dbg.h /usr/include/assert.h
plustek-pp_motor.o: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_motor.o: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_motor.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_motor.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-pp_motor.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_motor.o: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_motor.o: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_motor.o: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_motor.o: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_motor.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_motor.o: /usr/include/sys/sysmacros.h
plustek-pp_motor.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_motor.o: /usr/include/string.h /usr/include/stdio.h
plustek-pp_motor.o: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_motor.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_motor.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_motor.o: /usr/include/bits/posix_opt.h
plustek-pp_motor.o: /usr/include/bits/environments.h
plustek-pp_motor.o: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_motor.o: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_motor.o: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_motor.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
plustek-pp_motor.o: /usr/include/bits/sigcontext.h
plustek-pp_motor.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_motor.o: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_motor.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_motor.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_motor.o: /usr/include/asm-i386/ioctl.h
plustek-pp_motor.o: /usr/include/asm-generic/ioctl.h
plustek-pp_motor.o: /usr/include/bits/ioctl-types.h
plustek-pp_motor.o: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_motor.o: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_motor.o: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek-pp_motor.o: /usr/include/assert.h
plustek-pp_p12.o: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_p12.o: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_p12.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_p12.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-pp_p12.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_p12.o: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_p12.o: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_p12.o: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_p12.o: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_p12.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_p12.o: /usr/include/sys/sysmacros.h
plustek-pp_p12.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_p12.o: /usr/include/string.h /usr/include/stdio.h
plustek-pp_p12.o: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_p12.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_p12.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_p12.o: /usr/include/bits/posix_opt.h
plustek-pp_p12.o: /usr/include/bits/environments.h
plustek-pp_p12.o: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_p12.o: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_p12.o: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_p12.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
plustek-pp_p12.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
plustek-pp_p12.o: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
plustek-pp_p12.o: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
plustek-pp_p12.o: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
plustek-pp_p12.o: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
plustek-pp_p12.o: /usr/include/asm-generic/ioctl.h
plustek-pp_p12.o: /usr/include/bits/ioctl-types.h
plustek-pp_p12.o: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_p12.o: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_p12.o: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek-pp_p12.o: /usr/include/assert.h
plustek-pp_p12ccd.o: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_p12ccd.o: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_p12ccd.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_p12ccd.o: /usr/include/gnu/stubs-32.h
plustek-pp_p12ccd.o: /usr/include/bits/waitflags.h
plustek-pp_p12ccd.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_p12ccd.o: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_p12ccd.o: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_p12ccd.o: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_p12ccd.o: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_p12ccd.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_p12ccd.o: /usr/include/sys/sysmacros.h
plustek-pp_p12ccd.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_p12ccd.o: /usr/include/string.h /usr/include/stdio.h
plustek-pp_p12ccd.o: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_p12ccd.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_p12ccd.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_p12ccd.o: /usr/include/bits/posix_opt.h
plustek-pp_p12ccd.o: /usr/include/bits/environments.h
plustek-pp_p12ccd.o: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_p12ccd.o: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_p12ccd.o: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_p12ccd.o: /usr/include/bits/siginfo.h
plustek-pp_p12ccd.o: /usr/include/bits/sigaction.h
plustek-pp_p12ccd.o: /usr/include/bits/sigcontext.h
plustek-pp_p12ccd.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_p12ccd.o: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_p12ccd.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_p12ccd.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_p12ccd.o: /usr/include/asm-i386/ioctl.h
plustek-pp_p12ccd.o: /usr/include/asm-generic/ioctl.h
plustek-pp_p12ccd.o: /usr/include/bits/ioctl-types.h
plustek-pp_p12ccd.o: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_p12ccd.o: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_p12ccd.o: plustek-pp_scandata.h plustek-pp_procs.h
plustek-pp_p12ccd.o: plustek-pp_dbg.h /usr/include/assert.h
plustek-pp_p48xx.o: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_p48xx.o: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_p48xx.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_p48xx.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-pp_p48xx.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_p48xx.o: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_p48xx.o: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_p48xx.o: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_p48xx.o: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_p48xx.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_p48xx.o: /usr/include/sys/sysmacros.h
plustek-pp_p48xx.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_p48xx.o: /usr/include/string.h /usr/include/stdio.h
plustek-pp_p48xx.o: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_p48xx.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_p48xx.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_p48xx.o: /usr/include/bits/posix_opt.h
plustek-pp_p48xx.o: /usr/include/bits/environments.h
plustek-pp_p48xx.o: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_p48xx.o: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_p48xx.o: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_p48xx.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
plustek-pp_p48xx.o: /usr/include/bits/sigcontext.h
plustek-pp_p48xx.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_p48xx.o: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_p48xx.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_p48xx.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_p48xx.o: /usr/include/asm-i386/ioctl.h
plustek-pp_p48xx.o: /usr/include/asm-generic/ioctl.h
plustek-pp_p48xx.o: /usr/include/bits/ioctl-types.h
plustek-pp_p48xx.o: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_p48xx.o: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_p48xx.o: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek-pp_p48xx.o: /usr/include/assert.h
plustek-pp_p9636.o: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_p9636.o: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_p9636.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_p9636.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-pp_p9636.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_p9636.o: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_p9636.o: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_p9636.o: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_p9636.o: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_p9636.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_p9636.o: /usr/include/sys/sysmacros.h
plustek-pp_p9636.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_p9636.o: /usr/include/string.h /usr/include/stdio.h
plustek-pp_p9636.o: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_p9636.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_p9636.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_p9636.o: /usr/include/bits/posix_opt.h
plustek-pp_p9636.o: /usr/include/bits/environments.h
plustek-pp_p9636.o: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_p9636.o: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_p9636.o: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_p9636.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
plustek-pp_p9636.o: /usr/include/bits/sigcontext.h
plustek-pp_p9636.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_p9636.o: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_p9636.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_p9636.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_p9636.o: /usr/include/asm-i386/ioctl.h
plustek-pp_p9636.o: /usr/include/asm-generic/ioctl.h
plustek-pp_p9636.o: /usr/include/bits/ioctl-types.h
plustek-pp_p9636.o: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_p9636.o: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_p9636.o: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek-pp_p9636.o: /usr/include/assert.h
plustek-pp_ptdrv.o: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_ptdrv.o: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_ptdrv.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_ptdrv.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-pp_ptdrv.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_ptdrv.o: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_ptdrv.o: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_ptdrv.o: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_ptdrv.o: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_ptdrv.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_ptdrv.o: /usr/include/sys/sysmacros.h
plustek-pp_ptdrv.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_ptdrv.o: /usr/include/string.h /usr/include/stdio.h
plustek-pp_ptdrv.o: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_ptdrv.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_ptdrv.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_ptdrv.o: /usr/include/bits/posix_opt.h
plustek-pp_ptdrv.o: /usr/include/bits/environments.h
plustek-pp_ptdrv.o: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_ptdrv.o: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_ptdrv.o: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_ptdrv.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
plustek-pp_ptdrv.o: /usr/include/bits/sigcontext.h
plustek-pp_ptdrv.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_ptdrv.o: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_ptdrv.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_ptdrv.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_ptdrv.o: /usr/include/asm-i386/ioctl.h
plustek-pp_ptdrv.o: /usr/include/asm-generic/ioctl.h
plustek-pp_ptdrv.o: /usr/include/bits/ioctl-types.h
plustek-pp_ptdrv.o: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_ptdrv.o: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_ptdrv.o: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek-pp_ptdrv.o: /usr/include/assert.h
plustek_pp-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
plustek_pp-s.o: ../include/sane/sanei.h ../include/sane/sane.h
plustek_pp-s.o: /usr/include/fcntl.h /usr/include/features.h
plustek_pp-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
plustek_pp-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
plustek_pp-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
plustek_pp-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
plustek_pp-s.o: /usr/include/time.h /usr/include/endian.h
plustek_pp-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
plustek_pp-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
plustek_pp-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
plustek_pp-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
plustek_pp-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
plustek_pp-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
plustek_pp-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
plustek_pp-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
plustek_pp-s.o: /usr/include/bits/stdio_lim.h
plustek-pp_scale.o: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_scale.o: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_scale.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_scale.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-pp_scale.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_scale.o: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_scale.o: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_scale.o: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_scale.o: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_scale.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_scale.o: /usr/include/sys/sysmacros.h
plustek-pp_scale.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_scale.o: /usr/include/string.h /usr/include/stdio.h
plustek-pp_scale.o: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_scale.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_scale.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_scale.o: /usr/include/bits/posix_opt.h
plustek-pp_scale.o: /usr/include/bits/environments.h
plustek-pp_scale.o: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_scale.o: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_scale.o: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_scale.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
plustek-pp_scale.o: /usr/include/bits/sigcontext.h
plustek-pp_scale.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_scale.o: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_scale.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_scale.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_scale.o: /usr/include/asm-i386/ioctl.h
plustek-pp_scale.o: /usr/include/asm-generic/ioctl.h
plustek-pp_scale.o: /usr/include/bits/ioctl-types.h
plustek-pp_scale.o: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_scale.o: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_scale.o: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek-pp_scale.o: /usr/include/assert.h
plustek-pp_tpa.o: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_tpa.o: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_tpa.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_tpa.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-pp_tpa.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_tpa.o: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_tpa.o: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_tpa.o: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_tpa.o: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_tpa.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_tpa.o: /usr/include/sys/sysmacros.h
plustek-pp_tpa.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_tpa.o: /usr/include/string.h /usr/include/stdio.h
plustek-pp_tpa.o: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_tpa.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_tpa.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_tpa.o: /usr/include/bits/posix_opt.h
plustek-pp_tpa.o: /usr/include/bits/environments.h
plustek-pp_tpa.o: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_tpa.o: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_tpa.o: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_tpa.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
plustek-pp_tpa.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
plustek-pp_tpa.o: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
plustek-pp_tpa.o: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
plustek-pp_tpa.o: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
plustek-pp_tpa.o: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
plustek-pp_tpa.o: /usr/include/asm-generic/ioctl.h
plustek-pp_tpa.o: /usr/include/bits/ioctl-types.h
plustek-pp_tpa.o: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_tpa.o: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_tpa.o: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek-pp_tpa.o: /usr/include/assert.h
plustek-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
plustek-s.o: ../include/sane/sanei.h ../include/sane/sane.h
plustek-s.o: /usr/include/fcntl.h /usr/include/features.h
plustek-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
plustek-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
plustek-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
plustek-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
plustek-s.o: /usr/include/time.h /usr/include/endian.h
plustek-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
plustek-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
plustek-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
plustek-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
plustek-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
plustek-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
plustek-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
plustek-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
plustek-s.o: /usr/include/bits/stdio_lim.h
plustek-usbdevs.o: plustek-usb.h
plustek-usbio.o: ../include/sane/sanei_usb.h ../include/sane/config.h
plustek-usbio.o: ../include/sane/sane.h /usr/include/stdlib.h
plustek-usbio.o: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-usbio.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-usbio.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-usbio.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-usbio.o: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-usbio.o: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-usbio.o: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-usbio.o: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-usbio.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-usbio.o: /usr/include/sys/sysmacros.h
plustek-usbio.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-usbio.o: ../include/sane/sanei_lm983x.h
pnm.o: ../include/sane/config.h /usr/include/stdlib.h /usr/include/features.h
pnm.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
pnm.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
pnm.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
pnm.o: /usr/include/endian.h /usr/include/bits/endian.h
pnm.o: /usr/include/xlocale.h /usr/include/sys/types.h
pnm.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
pnm.o: /usr/include/time.h /usr/include/sys/select.h
pnm.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
pnm.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
pnm.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
pnm.o: /usr/include/string.h /usr/include/stdio.h /usr/include/libio.h
pnm.o: /usr/include/_G_config.h /usr/include/wchar.h
pnm.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
pnm.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
pnm.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
pnm.o: ../include/getopt.h /usr/include/fcntl.h /usr/include/bits/fcntl.h
pnm.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
pnm.o: /usr/include/bits/stat.h /usr/include/errno.h
pnm.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
pnm.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
pnm.o: /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h
pnm.o: ../include/sane/sane.h ../include/sane/sanei.h ../include/sane/sane.h
pnm.o: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
pnm.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
pnm.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
pnm.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
pnm.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
qcam.o: ../include/sane/config.h ../include/lalloca.h /usr/include/assert.h
qcam.o: /usr/include/features.h /usr/include/sys/cdefs.h
qcam.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
qcam.o: /usr/include/gnu/stubs-32.h /usr/include/ctype.h
qcam.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
qcam.o: /usr/include/endian.h /usr/include/bits/endian.h
qcam.o: /usr/include/xlocale.h /usr/include/errno.h /usr/include/bits/errno.h
qcam.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
qcam.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
qcam.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
qcam.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
qcam.o: /usr/include/time.h /usr/include/sys/select.h
qcam.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
qcam.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
qcam.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
qcam.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
qcam.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
qcam.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
qcam.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
qcam.o: /usr/include/bits/stdio_lim.h /usr/include/math.h
qcam.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
qcam.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
qcam.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
qcam.o: /usr/include/bits/mathcalls.h /usr/include/setjmp.h
qcam.o: /usr/include/bits/setjmp.h /usr/include/signal.h
qcam.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
qcam.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
qcam.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
qcam.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
qcam.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
qcam.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
qcam.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
qcam.o: /usr/include/alloca.h /usr/include/string.h /usr/include/sys/wait.h
qcam.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
qcam.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
qcam.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
qcam.o: ../include/getopt.h ../include/sane/sane.h ../include/sane/sanei.h
qcam.o: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
qcam.o: ../include/sane/sanei_debug.h ../include/sane/sanei_config.h qcam.h
qcam.o: /usr/include/sys/io.h
qcam-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
qcam-s.o: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
qcam-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
qcam-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
qcam-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
qcam-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
qcam-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
qcam-s.o: /usr/include/endian.h /usr/include/bits/endian.h
qcam-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
qcam-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
qcam-s.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
qcam-s.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
qcam-s.o: /usr/include/bits/stat.h /usr/include/limits.h
qcam-s.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
qcam-s.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
qcam-s.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
ricoh.o: ../include/sane/config.h /usr/include/limits.h
ricoh.o: /usr/include/features.h /usr/include/sys/cdefs.h
ricoh.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
ricoh.o: /usr/include/gnu/stubs-32.h /usr/include/bits/posix1_lim.h
ricoh.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
ricoh.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
ricoh.o: /usr/include/bits/stdio_lim.h /usr/include/stdlib.h
ricoh.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
ricoh.o: /usr/include/endian.h /usr/include/bits/endian.h
ricoh.o: /usr/include/xlocale.h /usr/include/sys/types.h
ricoh.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
ricoh.o: /usr/include/time.h /usr/include/sys/select.h
ricoh.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
ricoh.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
ricoh.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
ricoh.o: /usr/include/string.h /usr/include/sys/time.h /usr/include/unistd.h
ricoh.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
ricoh.o: /usr/include/bits/confname.h ../include/getopt.h
ricoh.o: /usr/include/ctype.h ../include/sane/sane.h
ricoh.o: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
ricoh.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
ricoh.o: ../include/sane/sanei.h /usr/include/fcntl.h
ricoh.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
ricoh.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
ricoh.o: ../include/sane/sanei_config.h /usr/include/stdio.h
ricoh.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
ricoh.o: /usr/include/bits/sys_errlist.h ricoh.h ricoh-scsi.c
ricoh-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
ricoh-s.o: ../include/sane/sanei.h ../include/sane/sane.h
ricoh-s.o: /usr/include/fcntl.h /usr/include/features.h
ricoh-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
ricoh-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
ricoh-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
ricoh-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
ricoh-s.o: /usr/include/time.h /usr/include/endian.h
ricoh-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
ricoh-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
ricoh-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
ricoh-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
ricoh-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
ricoh-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
ricoh-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
ricoh-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
ricoh-s.o: /usr/include/bits/stdio_lim.h
s9036.o: ../include/sane/config.h /usr/include/stdlib.h
s9036.o: /usr/include/features.h /usr/include/sys/cdefs.h
s9036.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
s9036.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
s9036.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
s9036.o: /usr/include/bits/endian.h /usr/include/xlocale.h
s9036.o: /usr/include/sys/types.h /usr/include/bits/types.h
s9036.o: /usr/include/bits/typesizes.h /usr/include/time.h
s9036.o: /usr/include/sys/select.h /usr/include/bits/select.h
s9036.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
s9036.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
s9036.o: /usr/include/alloca.h /usr/include/unistd.h
s9036.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
s9036.o: /usr/include/bits/confname.h ../include/getopt.h
s9036.o: /usr/include/string.h ../include/sane/sane.h ../include/sane/sanei.h
s9036.o: ../include/sane/sanei_config.h /usr/include/stdio.h
s9036.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
s9036.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
s9036.o: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h s9036.h
s9036.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
s9036.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
s9036.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
s9036.o: /usr/include/bits/stat.h /usr/include/limits.h
s9036.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
s9036.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
s9036.o: /usr/include/bits/xopen_lim.h
s9036-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
s9036-s.o: ../include/sane/sanei.h ../include/sane/sane.h
s9036-s.o: /usr/include/fcntl.h /usr/include/features.h
s9036-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
s9036-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
s9036-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
s9036-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
s9036-s.o: /usr/include/time.h /usr/include/endian.h
s9036-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
s9036-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
s9036-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
s9036-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
s9036-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
s9036-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
s9036-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
s9036-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
s9036-s.o: /usr/include/bits/stdio_lim.h
sane_strstatus.o: /usr/include/stdio.h /usr/include/features.h
sane_strstatus.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sane_strstatus.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sane_strstatus.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sane_strstatus.o: /usr/include/libio.h /usr/include/_G_config.h
sane_strstatus.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
sane_strstatus.o: /usr/include/bits/sys_errlist.h ../include/sane/sane.h
sceptre.o: ../include/sane/config.h /usr/include/errno.h
sceptre.o: /usr/include/features.h /usr/include/sys/cdefs.h
sceptre.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sceptre.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
sceptre.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
sceptre.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
sceptre.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
sceptre.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
sceptre.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sceptre.o: /usr/include/time.h /usr/include/endian.h
sceptre.o: /usr/include/bits/endian.h /usr/include/sys/select.h
sceptre.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sceptre.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sceptre.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
sceptre.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
sceptre.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sceptre.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sceptre.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sceptre.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
sceptre.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
sceptre.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
sceptre.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
sceptre.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
sceptre.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
sceptre.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
sceptre.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
sceptre.o: /usr/include/xlocale.h /usr/include/alloca.h /usr/include/string.h
sceptre.o: /usr/include/sys/wait.h /usr/include/sys/resource.h
sceptre.o: /usr/include/bits/resource.h /usr/include/unistd.h
sceptre.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
sceptre.o: /usr/include/bits/confname.h ../include/getopt.h
sceptre.o: ../include/sane/sane.h ../include/sane/sanei.h
sceptre.o: ../include/sane/sane.h ../include/sane/saneopts.h
sceptre.o: ../include/sane/sanei_scsi.h ../include/sane/sanei_debug.h
sceptre.o: ../include/sane/sanei.h ../include/sane/sanei_backend.h
sceptre.o: ../include/sane/sanei_debug.h ../include/sane/sanei_config.h
sceptre.o: ../include/lassert.h /usr/include/assert.h sceptre.h
sceptre-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
sceptre-s.o: ../include/sane/sanei.h ../include/sane/sane.h
sceptre-s.o: /usr/include/fcntl.h /usr/include/features.h
sceptre-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sceptre-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sceptre-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
sceptre-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sceptre-s.o: /usr/include/time.h /usr/include/endian.h
sceptre-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
sceptre-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sceptre-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sceptre-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
sceptre-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
sceptre-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sceptre-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sceptre-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sceptre-s.o: /usr/include/bits/stdio_lim.h
sharp.o: ../include/sane/config.h /usr/include/limits.h
sharp.o: /usr/include/features.h /usr/include/sys/cdefs.h
sharp.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sharp.o: /usr/include/gnu/stubs-32.h /usr/include/bits/posix1_lim.h
sharp.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sharp.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sharp.o: /usr/include/bits/stdio_lim.h /usr/include/stdlib.h
sharp.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
sharp.o: /usr/include/endian.h /usr/include/bits/endian.h
sharp.o: /usr/include/xlocale.h /usr/include/sys/types.h
sharp.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sharp.o: /usr/include/time.h /usr/include/sys/select.h
sharp.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sharp.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sharp.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
sharp.o: /usr/include/string.h /usr/include/unistd.h
sharp.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
sharp.o: /usr/include/bits/confname.h ../include/getopt.h
sharp.o: /usr/include/errno.h /usr/include/bits/errno.h
sharp.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
sharp.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
sharp.o: /usr/include/asm-generic/errno-base.h /usr/include/math.h
sharp.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
sharp.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
sharp.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
sharp.o: /usr/include/bits/mathcalls.h ../include/sane/sane.h
sharp.o: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
sharp.o: /usr/include/signal.h /usr/include/bits/signum.h
sharp.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
sharp.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
sharp.o: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
sharp.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
sharp.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
sharp.o: /usr/include/bits/stat.h /usr/include/sys/wait.h
sharp.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
sharp.o: /usr/include/sys/ipc.h /usr/include/bits/ipctypes.h
sharp.o: /usr/include/bits/ipc.h /usr/include/sys/shm.h
sharp.o: /usr/include/bits/shm.h ../include/sane/sanei_backend.h
sharp.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h ./sharp.h
sharp.o: ../include/sane/sanei_config.h /usr/include/stdio.h
sharp.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
sharp.o: /usr/include/bits/sys_errlist.h
sharp-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
sharp-s.o: ../include/sane/sanei.h ../include/sane/sane.h
sharp-s.o: /usr/include/fcntl.h /usr/include/features.h
sharp-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sharp-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sharp-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
sharp-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sharp-s.o: /usr/include/time.h /usr/include/endian.h
sharp-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
sharp-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sharp-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sharp-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
sharp-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
sharp-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sharp-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sharp-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sharp-s.o: /usr/include/bits/stdio_lim.h
sm3600.o: ../include/sane/config.h /usr/include/stdlib.h
sm3600.o: /usr/include/features.h /usr/include/sys/cdefs.h
sm3600.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sm3600.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
sm3600.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
sm3600.o: /usr/include/bits/endian.h /usr/include/xlocale.h
sm3600.o: /usr/include/sys/types.h /usr/include/bits/types.h
sm3600.o: /usr/include/bits/typesizes.h /usr/include/time.h
sm3600.o: /usr/include/sys/select.h /usr/include/bits/select.h
sm3600.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
sm3600.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
sm3600.o: /usr/include/alloca.h /usr/include/string.h /usr/include/errno.h
sm3600.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
sm3600.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
sm3600.o: /usr/include/asm-generic/errno.h
sm3600.o: /usr/include/asm-generic/errno-base.h ../include/sane/sane.h
sm3600.o: ../include/sane/sanei.h ../include/sane/sane.h
sm3600.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
sm3600.o: ../include/sane/sanei.h /usr/include/fcntl.h
sm3600.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
sm3600.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
sm3600.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sm3600.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sm3600.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sm3600.o: /usr/include/bits/stdio_lim.h ../include/sane/sanei_config.h
sm3600.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
sm3600.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
sm3600.o: ../include/sane/saneopts.h ../include/sane/sanei_usb.h sm3600.h
sm3600.o: sm3600-scanutil.c /usr/include/unistd.h
sm3600.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
sm3600.o: /usr/include/bits/confname.h ../include/getopt.h sm3600-scantool.h
sm3600.o: sm3600-scanusb.c sm3600-scanmtek.c sm3600-homerun.c
sm3600.o: /usr/include/math.h /usr/include/bits/huge_val.h
sm3600.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
sm3600.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
sm3600.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
sm3600.o: sm3600-gray.c sm3600-color.c
sm3600-color.o: sm3600-scantool.h
sm3600-gray.o: sm3600-scantool.h
sm3600-homerun.o: sm3600-scantool.h /usr/include/math.h
sm3600-homerun.o: /usr/include/features.h /usr/include/sys/cdefs.h
sm3600-homerun.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sm3600-homerun.o: /usr/include/gnu/stubs-32.h /usr/include/bits/huge_val.h
sm3600-homerun.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
sm3600-homerun.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
sm3600-homerun.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
sm3600-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
sm3600-s.o: ../include/sane/sanei.h ../include/sane/sane.h
sm3600-s.o: /usr/include/fcntl.h /usr/include/features.h
sm3600-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sm3600-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sm3600-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
sm3600-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sm3600-s.o: /usr/include/time.h /usr/include/endian.h
sm3600-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
sm3600-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sm3600-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sm3600-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
sm3600-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
sm3600-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sm3600-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sm3600-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sm3600-s.o: /usr/include/bits/stdio_lim.h
sm3600-scanmtek.o: sm3600-scantool.h
sm3600-scanusb.o: sm3600-scantool.h
sm3600-scanutil.o: /usr/include/unistd.h /usr/include/features.h
sm3600-scanutil.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sm3600-scanutil.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sm3600-scanutil.o: /usr/include/bits/posix_opt.h
sm3600-scanutil.o: /usr/include/bits/environments.h /usr/include/bits/types.h
sm3600-scanutil.o: /usr/include/bits/typesizes.h /usr/include/bits/confname.h
sm3600-scanutil.o: ../include/getopt.h sm3600-scantool.h
sm3840.o: ../include/sane/config.h /usr/include/string.h
sm3840.o: /usr/include/features.h /usr/include/sys/cdefs.h
sm3840.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sm3840.o: /usr/include/gnu/stubs-32.h /usr/include/xlocale.h
sm3840.o: /usr/include/stdio.h /usr/include/bits/types.h
sm3840.o: /usr/include/bits/typesizes.h /usr/include/libio.h
sm3840.o: /usr/include/_G_config.h /usr/include/wchar.h
sm3840.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
sm3840.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sm3840.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
sm3840.o: /usr/include/bits/endian.h /usr/include/sys/types.h
sm3840.o: /usr/include/time.h /usr/include/sys/select.h
sm3840.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sm3840.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sm3840.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
sm3840.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
sm3840.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
sm3840.o: ../include/getopt.h /usr/include/ctype.h /usr/include/limits.h
sm3840.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
sm3840.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
sm3840.o: /usr/include/bits/xopen_lim.h /usr/include/signal.h
sm3840.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
sm3840.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
sm3840.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
sm3840.o: /usr/include/bits/sigthread.h /usr/include/sys/stat.h
sm3840.o: /usr/include/bits/stat.h ../include/sane/sane.h
sm3840.o: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
sm3840.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
sm3840.o: ../include/sane/sane.h /usr/include/fcntl.h
sm3840.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
sm3840.o: ../include/sane/sanei_usb.h ../include/sane/sanei_config.h sm3840.h
sm3840.o: sm3840_params.h sm3840_scan.c sm3840_lib.h sm3840_lib.c
sm3840.o: /usr/include/math.h /usr/include/bits/huge_val.h
sm3840.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
sm3840.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
sm3840.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
sm3840_lib.o: /usr/include/stdio.h /usr/include/features.h
sm3840_lib.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sm3840_lib.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sm3840_lib.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sm3840_lib.o: /usr/include/libio.h /usr/include/_G_config.h
sm3840_lib.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
sm3840_lib.o: /usr/include/bits/sys_errlist.h /usr/include/math.h
sm3840_lib.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
sm3840_lib.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
sm3840_lib.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
sm3840_lib.o: /usr/include/bits/mathcalls.h sm3840_lib.h
sm3840_lib.o: ../include/sane/sanei_usb.h ../include/sane/config.h
sm3840_lib.o: ../include/sane/sane.h /usr/include/stdlib.h
sm3840_lib.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
sm3840_lib.o: /usr/include/endian.h /usr/include/bits/endian.h
sm3840_lib.o: /usr/include/xlocale.h /usr/include/sys/types.h
sm3840_lib.o: /usr/include/time.h /usr/include/sys/select.h
sm3840_lib.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sm3840_lib.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sm3840_lib.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
sm3840_lib.o: sm3840_params.h
sm3840-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
sm3840-s.o: ../include/sane/sanei.h ../include/sane/sane.h
sm3840-s.o: /usr/include/fcntl.h /usr/include/features.h
sm3840-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sm3840-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sm3840-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
sm3840-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sm3840-s.o: /usr/include/time.h /usr/include/endian.h
sm3840-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
sm3840-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sm3840-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sm3840-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
sm3840-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
sm3840-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sm3840-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sm3840-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sm3840-s.o: /usr/include/bits/stdio_lim.h
sm3840_scan.o: /usr/include/stdio.h /usr/include/features.h
sm3840_scan.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sm3840_scan.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sm3840_scan.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sm3840_scan.o: /usr/include/libio.h /usr/include/_G_config.h
sm3840_scan.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
sm3840_scan.o: /usr/include/bits/sys_errlist.h sm3840_lib.h
sm3840_scan.o: ../include/sane/sanei_usb.h ../include/sane/config.h
sm3840_scan.o: ../include/sane/sane.h /usr/include/stdlib.h
sm3840_scan.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
sm3840_scan.o: /usr/include/endian.h /usr/include/bits/endian.h
sm3840_scan.o: /usr/include/xlocale.h /usr/include/sys/types.h
sm3840_scan.o: /usr/include/time.h /usr/include/sys/select.h
sm3840_scan.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sm3840_scan.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sm3840_scan.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
sm3840_scan.o: sm3840_params.h sm3840_lib.c /usr/include/math.h
sm3840_scan.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
sm3840_scan.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
sm3840_scan.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
sm3840_scan.o: /usr/include/bits/mathcalls.h
snapscan.o: ../include/sane/config.h /usr/include/errno.h
snapscan.o: /usr/include/features.h /usr/include/sys/cdefs.h
snapscan.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
snapscan.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
snapscan.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
snapscan.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
snapscan.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
snapscan.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
snapscan.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
snapscan.o: /usr/include/time.h /usr/include/endian.h
snapscan.o: /usr/include/bits/endian.h /usr/include/sys/select.h
snapscan.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
snapscan.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
snapscan.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
snapscan.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
snapscan.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
snapscan.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
snapscan.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
snapscan.o: /usr/include/bits/stdio_lim.h /usr/include/math.h
snapscan.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
snapscan.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
snapscan.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
snapscan.o: /usr/include/bits/mathcalls.h /usr/include/signal.h
snapscan.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
snapscan.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
snapscan.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
snapscan.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
snapscan.o: /usr/include/libio.h /usr/include/_G_config.h
snapscan.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
snapscan.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
snapscan.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
snapscan.o: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
snapscan.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
snapscan.o: /usr/include/bits/confname.h ../include/getopt.h
snapscan.o: /usr/include/sys/time.h /usr/include/sys/wait.h
snapscan.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
snapscan.o: ../include/sane/sane.h ../include/sane/sanei.h
snapscan.o: ../include/sane/sane.h ../include/sane/sanei_scsi.h
snapscan.o: ../include/sane/sanei_usb.h ../include/sane/sanei_thread.h
snapscan.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
snapscan.o: ../include/sane/sanei.h ../include/sane/saneopts.h snapscan.h
snapscan.o: ./snapscan-sources.h ../include/sane/sanei_config.h
snapscan.o: snapscan-scsi.c snapscan-usb.h snapscan-data.c snapscan-sources.c
snapscan.o: snapscan-usb.c snapscan-mutex.c /usr/include/sys/ipc.h
snapscan.o: /usr/include/bits/ipctypes.h /usr/include/bits/ipc.h
snapscan.o: /usr/include/sys/sem.h /usr/include/bits/sem.h
snapscan.o: /usr/include/sys/shm.h /usr/include/bits/shm.h snapscan-options.c
snapscan-mutex.o: /usr/include/sys/ipc.h /usr/include/features.h
snapscan-mutex.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
snapscan-mutex.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
snapscan-mutex.o: /usr/include/bits/ipctypes.h /usr/include/bits/types.h
snapscan-mutex.o: /usr/include/bits/typesizes.h /usr/include/bits/ipc.h
snapscan-mutex.o: /usr/include/sys/sem.h /usr/include/bits/sem.h
snapscan-mutex.o: /usr/include/sys/types.h /usr/include/time.h
snapscan-mutex.o: /usr/include/endian.h /usr/include/bits/endian.h
snapscan-mutex.o: /usr/include/sys/select.h /usr/include/bits/select.h
snapscan-mutex.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
snapscan-mutex.o: /usr/include/sys/sysmacros.h
snapscan-mutex.o: /usr/include/bits/pthreadtypes.h
snapscan-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
snapscan-s.o: ../include/sane/sanei.h ../include/sane/sane.h
snapscan-s.o: /usr/include/fcntl.h /usr/include/features.h
snapscan-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
snapscan-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
snapscan-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
snapscan-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
snapscan-s.o: /usr/include/time.h /usr/include/endian.h
snapscan-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
snapscan-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
snapscan-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
snapscan-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
snapscan-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
snapscan-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
snapscan-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
snapscan-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
snapscan-s.o: /usr/include/bits/stdio_lim.h
snapscan-scsi.o: snapscan-usb.h snapscan-data.c
snapscan-usb.o: snapscan-usb.h snapscan-mutex.c /usr/include/sys/ipc.h
snapscan-usb.o: /usr/include/features.h /usr/include/sys/cdefs.h
snapscan-usb.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
snapscan-usb.o: /usr/include/gnu/stubs-32.h /usr/include/bits/ipctypes.h
snapscan-usb.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
snapscan-usb.o: /usr/include/bits/ipc.h /usr/include/sys/sem.h
snapscan-usb.o: /usr/include/bits/sem.h /usr/include/sys/types.h
snapscan-usb.o: /usr/include/time.h /usr/include/endian.h
snapscan-usb.o: /usr/include/bits/endian.h /usr/include/sys/select.h
snapscan-usb.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
snapscan-usb.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
snapscan-usb.o: /usr/include/bits/pthreadtypes.h /usr/include/sys/shm.h
snapscan-usb.o: /usr/include/bits/shm.h
sp15c.o: ../include/sane/config.h /usr/include/errno.h
sp15c.o: /usr/include/features.h /usr/include/sys/cdefs.h
sp15c.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sp15c.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
sp15c.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
sp15c.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
sp15c.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
sp15c.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
sp15c.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sp15c.o: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
sp15c.o: /usr/include/sys/select.h /usr/include/bits/select.h
sp15c.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
sp15c.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
sp15c.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
sp15c.o: /usr/include/bits/stat.h /usr/include/limits.h
sp15c.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
sp15c.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
sp15c.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
sp15c.o: /usr/include/signal.h /usr/include/bits/signum.h
sp15c.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
sp15c.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
sp15c.o: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
sp15c.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
sp15c.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
sp15c.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sp15c.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
sp15c.o: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
sp15c.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
sp15c.o: /usr/include/bits/confname.h ../include/getopt.h
sp15c.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
sp15c.o: ../include/sane/sanei.h ../include/sane/sane.h
sp15c.o: ../include/sane/sanei_scsi.h ../include/sane/saneopts.h
sp15c.o: ../include/sane/sanei_config.h ../include/sane/sanei_thread.h
sp15c.o: ../include/sane/config.h sp15c-scsi.h sp15c.h
sp15c-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
sp15c-s.o: ../include/sane/sanei.h ../include/sane/sane.h
sp15c-s.o: /usr/include/fcntl.h /usr/include/features.h
sp15c-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sp15c-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sp15c-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
sp15c-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sp15c-s.o: /usr/include/time.h /usr/include/endian.h
sp15c-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
sp15c-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sp15c-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sp15c-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
sp15c-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
sp15c-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sp15c-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sp15c-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sp15c-s.o: /usr/include/bits/stdio_lim.h
st400.o: ../include/sane/config.h /usr/include/sys/types.h
st400.o: /usr/include/features.h /usr/include/sys/cdefs.h
st400.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
st400.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
st400.o: /usr/include/bits/typesizes.h /usr/include/time.h
st400.o: /usr/include/endian.h /usr/include/bits/endian.h
st400.o: /usr/include/sys/select.h /usr/include/bits/select.h
st400.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
st400.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
st400.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
st400.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
st400.o: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
st400.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
st400.o: /usr/include/bits/confname.h ../include/getopt.h
st400.o: /usr/include/ctype.h ../include/sane/sane.h ../include/sane/sanei.h
st400.o: ../include/sane/sanei_config.h /usr/include/stdio.h
st400.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
st400.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
st400.o: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
st400.o: ../include/sane/sanei_debug.h ../include/sane/sanei_backend.h
st400.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
st400.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
st400.o: /usr/include/bits/stat.h /usr/include/limits.h
st400.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
st400.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
st400.o: /usr/include/bits/xopen_lim.h st400.h
st400-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
st400-s.o: ../include/sane/sanei.h ../include/sane/sane.h
st400-s.o: /usr/include/fcntl.h /usr/include/features.h
st400-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
st400-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
st400-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
st400-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
st400-s.o: /usr/include/time.h /usr/include/endian.h
st400-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
st400-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
st400-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
st400-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
st400-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
st400-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
st400-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
st400-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
st400-s.o: /usr/include/bits/stdio_lim.h
stubs.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
stubs.o: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
stubs.o: /usr/include/features.h /usr/include/sys/cdefs.h
stubs.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
stubs.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
stubs.o: /usr/include/sys/types.h /usr/include/bits/types.h
stubs.o: /usr/include/bits/typesizes.h /usr/include/time.h
stubs.o: /usr/include/endian.h /usr/include/bits/endian.h
stubs.o: /usr/include/sys/select.h /usr/include/bits/select.h
stubs.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
stubs.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
stubs.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
stubs.o: /usr/include/bits/stat.h /usr/include/limits.h
stubs.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
stubs.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
stubs.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
stv680.o: ../include/sane/config.h /usr/include/errno.h
stv680.o: /usr/include/features.h /usr/include/sys/cdefs.h
stv680.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
stv680.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
stv680.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
stv680.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
stv680.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
stv680.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
stv680.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
stv680.o: /usr/include/time.h /usr/include/endian.h
stv680.o: /usr/include/bits/endian.h /usr/include/sys/select.h
stv680.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
stv680.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
stv680.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
stv680.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
stv680.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
stv680.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
stv680.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
stv680.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
stv680.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
stv680.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
stv680.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
stv680.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
stv680.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
stv680.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
stv680.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
stv680.o: /usr/include/xlocale.h /usr/include/alloca.h /usr/include/string.h
stv680.o: /usr/include/sys/wait.h /usr/include/sys/resource.h
stv680.o: /usr/include/bits/resource.h /usr/include/unistd.h
stv680.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
stv680.o: /usr/include/bits/confname.h ../include/getopt.h
stv680.o: ../include/sane/sane.h ../include/sane/sanei.h
stv680.o: ../include/sane/sane.h ../include/sane/saneopts.h
stv680.o: ../include/sane/sanei_usb.h ../include/sane/sanei_debug.h
stv680.o: ../include/sane/sanei.h ../include/sane/sanei_backend.h
stv680.o: ../include/sane/sanei_debug.h ../include/sane/sanei_config.h
stv680.o: ../include/lassert.h /usr/include/assert.h ../include/font_6x11.h
stv680.o: stv680.h
stv680-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
stv680-s.o: ../include/sane/sanei.h ../include/sane/sane.h
stv680-s.o: /usr/include/fcntl.h /usr/include/features.h
stv680-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
stv680-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
stv680-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
stv680-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
stv680-s.o: /usr/include/time.h /usr/include/endian.h
stv680-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
stv680-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
stv680-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
stv680-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
stv680-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
stv680-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
stv680-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
stv680-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
stv680-s.o: /usr/include/bits/stdio_lim.h
tamarack.o: ../include/sane/config.h /usr/include/errno.h
tamarack.o: /usr/include/features.h /usr/include/sys/cdefs.h
tamarack.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
tamarack.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
tamarack.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
tamarack.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
tamarack.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
tamarack.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
tamarack.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
tamarack.o: /usr/include/time.h /usr/include/endian.h
tamarack.o: /usr/include/bits/endian.h /usr/include/sys/select.h
tamarack.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
tamarack.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
tamarack.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
tamarack.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
tamarack.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
tamarack.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
tamarack.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
tamarack.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
tamarack.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
tamarack.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
tamarack.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
tamarack.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
tamarack.o: /usr/include/libio.h /usr/include/_G_config.h
tamarack.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
tamarack.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
tamarack.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
tamarack.o: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
tamarack.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
tamarack.o: /usr/include/bits/confname.h ../include/getopt.h
tamarack.o: /usr/include/sys/time.h ../include/sane/sane.h
tamarack.o: ../include/sane/sanei.h ../include/sane/saneopts.h
tamarack.o: ../include/sane/sanei_scsi.h ../include/sane/sanei_thread.h
tamarack.o: ../include/sane/config.h ../include/sane/sanei_config.h
tamarack.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
tamarack.o: tamarack.h
tamarack-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
tamarack-s.o: ../include/sane/sanei.h ../include/sane/sane.h
tamarack-s.o: /usr/include/fcntl.h /usr/include/features.h
tamarack-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
tamarack-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
tamarack-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
tamarack-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
tamarack-s.o: /usr/include/time.h /usr/include/endian.h
tamarack-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
tamarack-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
tamarack-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
tamarack-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
tamarack-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
tamarack-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
tamarack-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
tamarack-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
tamarack-s.o: /usr/include/bits/stdio_lim.h
teco1.o: ../include/sane/config.h /usr/include/errno.h
teco1.o: /usr/include/features.h /usr/include/sys/cdefs.h
teco1.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
teco1.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
teco1.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
teco1.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
teco1.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
teco1.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
teco1.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
teco1.o: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
teco1.o: /usr/include/sys/select.h /usr/include/bits/select.h
teco1.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
teco1.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
teco1.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
teco1.o: /usr/include/bits/stat.h /usr/include/limits.h
teco1.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
teco1.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
teco1.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
teco1.o: /usr/include/signal.h /usr/include/bits/signum.h
teco1.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
teco1.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
teco1.o: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
teco1.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
teco1.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
teco1.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
teco1.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
teco1.o: /usr/include/alloca.h /usr/include/string.h /usr/include/sys/wait.h
teco1.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
teco1.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
teco1.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
teco1.o: ../include/getopt.h ../include/sane/sane.h ../include/sane/sanei.h
teco1.o: ../include/sane/sane.h ../include/sane/saneopts.h
teco1.o: ../include/sane/sanei_scsi.h ../include/sane/sanei_debug.h
teco1.o: ../include/sane/sanei.h ../include/sane/sanei_backend.h
teco1.o: ../include/sane/sanei_debug.h ../include/sane/sanei_config.h
teco1.o: ../include/lassert.h /usr/include/assert.h teco1.h
teco1-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
teco1-s.o: ../include/sane/sanei.h ../include/sane/sane.h
teco1-s.o: /usr/include/fcntl.h /usr/include/features.h
teco1-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
teco1-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
teco1-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
teco1-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
teco1-s.o: /usr/include/time.h /usr/include/endian.h
teco1-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
teco1-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
teco1-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
teco1-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
teco1-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
teco1-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
teco1-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
teco1-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
teco1-s.o: /usr/include/bits/stdio_lim.h
teco2.o: ../include/sane/config.h /usr/include/errno.h
teco2.o: /usr/include/features.h /usr/include/sys/cdefs.h
teco2.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
teco2.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
teco2.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
teco2.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
teco2.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
teco2.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
teco2.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
teco2.o: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
teco2.o: /usr/include/sys/select.h /usr/include/bits/select.h
teco2.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
teco2.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
teco2.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
teco2.o: /usr/include/bits/stat.h /usr/include/limits.h
teco2.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
teco2.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
teco2.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
teco2.o: /usr/include/signal.h /usr/include/bits/signum.h
teco2.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
teco2.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
teco2.o: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
teco2.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
teco2.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
teco2.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
teco2.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
teco2.o: /usr/include/alloca.h /usr/include/string.h /usr/include/sys/wait.h
teco2.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
teco2.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
teco2.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
teco2.o: ../include/getopt.h ../include/sane/sane.h ../include/sane/sanei.h
teco2.o: ../include/sane/sane.h ../include/sane/saneopts.h
teco2.o: ../include/sane/sanei_scsi.h ../include/sane/sanei_debug.h
teco2.o: ../include/sane/sanei.h ../include/sane/sanei_backend.h
teco2.o: ../include/sane/sanei_debug.h ../include/sane/sanei_config.h
teco2.o: ../include/lassert.h /usr/include/assert.h teco2.h
teco2-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
teco2-s.o: ../include/sane/sanei.h ../include/sane/sane.h
teco2-s.o: /usr/include/fcntl.h /usr/include/features.h
teco2-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
teco2-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
teco2-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
teco2-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
teco2-s.o: /usr/include/time.h /usr/include/endian.h
teco2-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
teco2-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
teco2-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
teco2-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
teco2-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
teco2-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
teco2-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
teco2-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
teco2-s.o: /usr/include/bits/stdio_lim.h
teco3.o: ../include/sane/config.h /usr/include/errno.h
teco3.o: /usr/include/features.h /usr/include/sys/cdefs.h
teco3.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
teco3.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
teco3.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
teco3.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
teco3.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
teco3.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
teco3.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
teco3.o: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
teco3.o: /usr/include/sys/select.h /usr/include/bits/select.h
teco3.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
teco3.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
teco3.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
teco3.o: /usr/include/bits/stat.h /usr/include/limits.h
teco3.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
teco3.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
teco3.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
teco3.o: /usr/include/signal.h /usr/include/bits/signum.h
teco3.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
teco3.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
teco3.o: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
teco3.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
teco3.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
teco3.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
teco3.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
teco3.o: /usr/include/alloca.h /usr/include/string.h /usr/include/sys/wait.h
teco3.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
teco3.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
teco3.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
teco3.o: ../include/getopt.h ../include/sane/sane.h ../include/sane/sanei.h
teco3.o: ../include/sane/sane.h ../include/sane/saneopts.h
teco3.o: ../include/sane/sanei_scsi.h ../include/sane/sanei_debug.h
teco3.o: ../include/sane/sanei.h ../include/sane/sanei_backend.h
teco3.o: ../include/sane/sanei_debug.h ../include/sane/sanei_config.h
teco3.o: ../include/lassert.h /usr/include/assert.h teco3.h
teco3-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
teco3-s.o: ../include/sane/sanei.h ../include/sane/sane.h
teco3-s.o: /usr/include/fcntl.h /usr/include/features.h
teco3-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
teco3-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
teco3-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
teco3-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
teco3-s.o: /usr/include/time.h /usr/include/endian.h
teco3-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
teco3-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
teco3-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
teco3-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
teco3-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
teco3-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
teco3-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
teco3-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
teco3-s.o: /usr/include/bits/stdio_lim.h
test.o: ../include/sane/config.h /usr/include/errno.h /usr/include/features.h
test.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
test.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
test.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
test.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
test.o: /usr/include/asm-generic/errno.h
test.o: /usr/include/asm-generic/errno-base.h /usr/include/signal.h
test.o: /usr/include/bits/sigset.h /usr/include/bits/types.h
test.o: /usr/include/bits/typesizes.h /usr/include/bits/signum.h
test.o: /usr/include/time.h /usr/include/bits/siginfo.h
test.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
test.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
test.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/sigthread.h
test.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
test.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
test.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
test.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
test.o: /usr/include/endian.h /usr/include/bits/endian.h
test.o: /usr/include/xlocale.h /usr/include/sys/types.h
test.o: /usr/include/sys/select.h /usr/include/bits/select.h
test.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
test.o: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
test.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
test.o: /usr/include/bits/confname.h ../include/getopt.h /usr/include/fcntl.h
test.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
test.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
test.o: ../include/sane/sane.h ../include/sane/sanei.h ../include/sane/sane.h
test.o: ../include/sane/saneopts.h ../include/sane/sanei_config.h
test.o: ../include/sane/sanei_thread.h ../include/sane/sanei_backend.h
test.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
test.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
test.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
test.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h test.h
test.o: test-picture.c
test-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
test-s.o: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
test-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
test-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
test-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
test-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
test-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
test-s.o: /usr/include/endian.h /usr/include/bits/endian.h
test-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
test-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
test-s.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
test-s.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
test-s.o: /usr/include/bits/stat.h /usr/include/limits.h
test-s.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
test-s.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
test-s.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
u12.o: ../include/sane/config.h ../include/lalloca.h /usr/include/errno.h
u12.o: /usr/include/features.h /usr/include/sys/cdefs.h
u12.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
u12.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
u12.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
u12.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
u12.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
u12.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
u12.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
u12.o: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
u12.o: /usr/include/sys/select.h /usr/include/bits/select.h
u12.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
u12.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
u12.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
u12.o: /usr/include/bits/stat.h /usr/include/limits.h
u12.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
u12.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
u12.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
u12.o: /usr/include/signal.h /usr/include/bits/signum.h
u12.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
u12.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
u12.o: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
u12.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
u12.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
u12.o: /usr/include/alloca.h /usr/include/string.h /usr/include/ctype.h
u12.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
u12.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
u12.o: ../include/getopt.h /usr/include/math.h /usr/include/bits/huge_val.h
u12.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
u12.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
u12.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
u12.o: /usr/include/sys/time.h /usr/include/sys/ioctl.h
u12.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
u12.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
u12.o: /usr/include/asm-i386/ioctl.h /usr/include/asm-generic/ioctl.h
u12.o: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
u12.o: ../include/sane/sane.h ../include/sane/sanei.h ../include/sane/sane.h
u12.o: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
u12.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
u12.o: ../include/sane/sanei_config.h /usr/include/stdio.h
u12.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
u12.o: /usr/include/bits/sys_errlist.h ../include/sane/sanei_thread.h
u12.o: ../include/sane/sanei_usb.h u12-scanner.h u12-hwdef.h u12.h u12-io.c
u12.o: u12-ccd.c u12-hw.c u12-motor.c u12-image.c u12-map.c u12-shading.c
u12.o: u12-tpa.c u12-if.c
u12-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
u12-s.o: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
u12-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
u12-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
u12-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
u12-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
u12-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
u12-s.o: /usr/include/endian.h /usr/include/bits/endian.h
u12-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
u12-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
u12-s.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
u12-s.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
u12-s.o: /usr/include/bits/stat.h /usr/include/limits.h
u12-s.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
u12-s.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
u12-s.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
umax1220u.o: ../include/sane/config.h /usr/include/stdlib.h
umax1220u.o: /usr/include/features.h /usr/include/sys/cdefs.h
umax1220u.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
umax1220u.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
umax1220u.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
umax1220u.o: /usr/include/bits/endian.h /usr/include/xlocale.h
umax1220u.o: /usr/include/sys/types.h /usr/include/bits/types.h
umax1220u.o: /usr/include/bits/typesizes.h /usr/include/time.h
umax1220u.o: /usr/include/sys/select.h /usr/include/bits/select.h
umax1220u.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
umax1220u.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
umax1220u.o: /usr/include/alloca.h /usr/include/string.h /usr/include/stdio.h
umax1220u.o: /usr/include/libio.h /usr/include/_G_config.h
umax1220u.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
umax1220u.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
umax1220u.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
umax1220u.o: /usr/include/bits/confname.h ../include/getopt.h
umax1220u.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
umax1220u.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
umax1220u.o: /usr/include/bits/stat.h /usr/include/sys/ioctl.h
umax1220u.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
umax1220u.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
umax1220u.o: /usr/include/asm-i386/ioctl.h /usr/include/asm-generic/ioctl.h
umax1220u.o: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
umax1220u.o: ../include/sane/sane.h ../include/sane/sanei.h
umax1220u.o: ../include/sane/sane.h ../include/sane/saneopts.h
umax1220u.o: ../include/sane/sanei_config.h ../include/sane/sanei_usb.h
umax1220u.o: ../include/sane/sanei_pv8630.h ../include/sane/sanei_backend.h
umax1220u.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
umax1220u.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
umax1220u.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
umax1220u.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
umax1220u.o: umax1220u-common.c /usr/include/errno.h
umax1220u.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
umax1220u.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
umax1220u.o: /usr/include/asm-generic/errno.h
umax1220u.o: /usr/include/asm-generic/errno-base.h /usr/include/math.h
umax1220u.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
umax1220u.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
umax1220u.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
umax1220u.o: /usr/include/bits/mathcalls.h
umax1220u-common.o: /usr/include/string.h /usr/include/features.h
umax1220u-common.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
umax1220u-common.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
umax1220u-common.o: /usr/include/xlocale.h /usr/include/errno.h
umax1220u-common.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
umax1220u-common.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
umax1220u-common.o: /usr/include/asm-generic/errno.h
umax1220u-common.o: /usr/include/asm-generic/errno-base.h
umax1220u-common.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
umax1220u-common.o: /usr/include/sys/types.h /usr/include/bits/types.h
umax1220u-common.o: /usr/include/bits/typesizes.h /usr/include/time.h
umax1220u-common.o: /usr/include/endian.h /usr/include/bits/endian.h
umax1220u-common.o: /usr/include/sys/select.h /usr/include/bits/select.h
umax1220u-common.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
umax1220u-common.o: /usr/include/sys/sysmacros.h
umax1220u-common.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
umax1220u-common.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
umax1220u-common.o: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
umax1220u-common.o: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
umax1220u-common.o: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
umax1220u-common.o: /usr/include/asm-generic/ioctl.h
umax1220u-common.o: /usr/include/bits/ioctl-types.h
umax1220u-common.o: /usr/include/sys/ttydefaults.h /usr/include/math.h
umax1220u-common.o: /usr/include/bits/huge_val.h
umax1220u-common.o: /usr/include/bits/huge_valf.h
umax1220u-common.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
umax1220u-common.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
umax1220u-common.o: /usr/include/bits/mathcalls.h
umax1220u-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
umax1220u-s.o: ../include/sane/sanei.h ../include/sane/sane.h
umax1220u-s.o: /usr/include/fcntl.h /usr/include/features.h
umax1220u-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
umax1220u-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
umax1220u-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
umax1220u-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
umax1220u-s.o: /usr/include/time.h /usr/include/endian.h
umax1220u-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
umax1220u-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
umax1220u-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
umax1220u-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
umax1220u-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
umax1220u-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
umax1220u-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
umax1220u-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
umax1220u-s.o: /usr/include/bits/stdio_lim.h
umax.o: ../include/sane/config.h /usr/include/errno.h /usr/include/features.h
umax.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
umax.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
umax.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
umax.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
umax.o: /usr/include/asm-generic/errno.h
umax.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
umax.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
umax.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
umax.o: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
umax.o: /usr/include/sys/select.h /usr/include/bits/select.h
umax.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
umax.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
umax.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
umax.o: /usr/include/bits/stat.h /usr/include/limits.h
umax.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
umax.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
umax.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
umax.o: /usr/include/signal.h /usr/include/bits/signum.h
umax.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
umax.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
umax.o: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
umax.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
umax.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
umax.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
umax.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
umax.o: /usr/include/alloca.h /usr/include/string.h /usr/include/sys/wait.h
umax.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
umax.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
umax.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
umax.o: ../include/getopt.h ../include/sane/sane.h ../include/sane/sanei.h
umax.o: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
umax.o: ../include/sane/sanei_debug.h ../include/sane/sanei_backend.h
umax.o: ../include/sane/sanei_config.h ../include/sane/sanei_thread.h
umax.o: ../include/sane/config.h /usr/include/math.h
umax.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
umax.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
umax.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
umax.o: /usr/include/bits/mathcalls.h umax-scsidef.h umax.h umax-scanner.c
umax.o: umax-scanner.h umax-uc630.c umax-uc840.c umax-ug630.c umax-ug80.c
umax.o: umax-uc1200s.c umax-uc1200se.c umax-uc1260.c umax-usb.c
umax.o: ../include/sane/sanei_usb.h ../include/sane/sane.h
umax.o: ../include/sane/sanei_pv8630.h
umax_pp.o: ../include/sane/config.h /usr/include/ctype.h
umax_pp.o: /usr/include/features.h /usr/include/sys/cdefs.h
umax_pp.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
umax_pp.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
umax_pp.o: /usr/include/bits/typesizes.h /usr/include/endian.h
umax_pp.o: /usr/include/bits/endian.h /usr/include/xlocale.h
umax_pp.o: /usr/include/errno.h /usr/include/bits/errno.h
umax_pp.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
umax_pp.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
umax_pp.o: /usr/include/asm-generic/errno-base.h /usr/include/limits.h
umax_pp.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
umax_pp.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
umax_pp.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
umax_pp.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
umax_pp.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
umax_pp.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
umax_pp.o: /usr/include/bits/waitstatus.h /usr/include/sys/types.h
umax_pp.o: /usr/include/time.h /usr/include/sys/select.h
umax_pp.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
umax_pp.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
umax_pp.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
umax_pp.o: /usr/include/string.h /usr/include/unistd.h
umax_pp.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
umax_pp.o: /usr/include/bits/confname.h ../include/getopt.h
umax_pp.o: /usr/include/math.h /usr/include/bits/huge_val.h
umax_pp.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
umax_pp.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
umax_pp.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
umax_pp.o: /usr/include/sys/time.h ../include/sane/sane.h
umax_pp.o: ../include/sane/sanei.h ../include/sane/sane.h
umax_pp.o: ../include/sane/saneopts.h ../include/sane/sanei_config.h
umax_pp.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
umax_pp.o: ../include/sane/sanei.h /usr/include/fcntl.h
umax_pp.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
umax_pp.o: /usr/include/sys/stat.h /usr/include/bits/stat.h umax_pp_mid.h
umax_pp.o: /usr/include/linux/parport.h /usr/include/linux/ppdev.h
umax_pp.o: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
umax_pp.o: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
umax_pp.o: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
umax_pp.o: /usr/include/asm-generic/ioctl.h /usr/include/bits/ioctl-types.h
umax_pp.o: /usr/include/sys/ttydefaults.h umax_pp_low.h umax_pp.h
umax_pp.o: ../include/sane/sanei_debug.h
umax_pp_low.o: ../include/sane/config.h /usr/include/stdio.h
umax_pp_low.o: /usr/include/features.h /usr/include/sys/cdefs.h
umax_pp_low.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
umax_pp_low.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
umax_pp_low.o: /usr/include/bits/typesizes.h /usr/include/libio.h
umax_pp_low.o: /usr/include/_G_config.h /usr/include/wchar.h
umax_pp_low.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
umax_pp_low.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
umax_pp_low.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
umax_pp_low.o: /usr/include/bits/endian.h /usr/include/xlocale.h
umax_pp_low.o: /usr/include/sys/types.h /usr/include/time.h
umax_pp_low.o: /usr/include/sys/select.h /usr/include/bits/select.h
umax_pp_low.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
umax_pp_low.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
umax_pp_low.o: /usr/include/alloca.h /usr/include/string.h
umax_pp_low.o: /usr/include/math.h /usr/include/bits/huge_val.h
umax_pp_low.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
umax_pp_low.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
umax_pp_low.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
umax_pp_low.o: /usr/include/sys/time.h /usr/include/sys/io.h
umax_pp_low.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
umax_pp_low.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
umax_pp_low.o: ../include/getopt.h /usr/include/fcntl.h
umax_pp_low.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
umax_pp_low.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
umax_pp_low.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
umax_pp_low.o: ../include/sane/sane.h /usr/include/errno.h
umax_pp_low.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
umax_pp_low.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
umax_pp_low.o: /usr/include/asm-generic/errno.h
umax_pp_low.o: /usr/include/asm-generic/errno-base.h /usr/include/sys/ioctl.h
umax_pp_low.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
umax_pp_low.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
umax_pp_low.o: /usr/include/asm-i386/ioctl.h /usr/include/asm-generic/ioctl.h
umax_pp_low.o: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
umax_pp_low.o: /usr/include/linux/parport.h /usr/include/linux/ppdev.h
umax_pp_low.o: umax_pp_low.h
umax_pp_mid.o: ../include/sane/config.h /usr/include/stdlib.h
umax_pp_mid.o: /usr/include/features.h /usr/include/sys/cdefs.h
umax_pp_mid.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
umax_pp_mid.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
umax_pp_mid.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
umax_pp_mid.o: /usr/include/bits/endian.h /usr/include/xlocale.h
umax_pp_mid.o: /usr/include/sys/types.h /usr/include/bits/types.h
umax_pp_mid.o: /usr/include/bits/typesizes.h /usr/include/time.h
umax_pp_mid.o: /usr/include/sys/select.h /usr/include/bits/select.h
umax_pp_mid.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
umax_pp_mid.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
umax_pp_mid.o: /usr/include/alloca.h /usr/include/string.h
umax_pp_mid.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
umax_pp_mid.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
umax_pp_mid.o: ../include/getopt.h /usr/include/stdio.h /usr/include/libio.h
umax_pp_mid.o: /usr/include/_G_config.h /usr/include/wchar.h
umax_pp_mid.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
umax_pp_mid.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
umax_pp_mid.o: ../include/sane/sane.h umax_pp_mid.h
umax_pp_mid.o: /usr/include/linux/parport.h /usr/include/linux/ppdev.h
umax_pp_mid.o: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
umax_pp_mid.o: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
umax_pp_mid.o: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
umax_pp_mid.o: /usr/include/asm-generic/ioctl.h
umax_pp_mid.o: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
umax_pp_mid.o: umax_pp_low.h
umax_pp-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
umax_pp-s.o: ../include/sane/sanei.h ../include/sane/sane.h
umax_pp-s.o: /usr/include/fcntl.h /usr/include/features.h
umax_pp-s.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
umax_pp-s.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
umax_pp-s.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
umax_pp-s.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
umax_pp-s.o: /usr/include/time.h /usr/include/endian.h
umax_pp-s.o: /usr/include/bits/endian.h /usr/include/sys/select.h
umax_pp-s.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
umax_pp-s.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
umax_pp-s.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
umax_pp-s.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
umax_pp-s.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
umax_pp-s.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
umax_pp-s.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
umax_pp-s.o: /usr/include/bits/stdio_lim.h
umax-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
umax-s.o: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
umax-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
umax-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
umax-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
umax-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
umax-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
umax-s.o: /usr/include/endian.h /usr/include/bits/endian.h
umax-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
umax-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
umax-s.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
umax-s.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
umax-s.o: /usr/include/bits/stat.h /usr/include/limits.h
umax-s.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
umax-s.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
umax-s.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
umax-scanner.o: umax-scanner.h umax-uc630.c umax-uc840.c umax-ug630.c
umax-scanner.o: umax-ug80.c umax-uc1200s.c umax-uc1200se.c umax-uc1260.c
umax-uc1200s.o: umax-scanner.h
umax-uc1200se.o: umax-scanner.h
umax-uc1260.o: umax-scanner.h
umax-uc630.o: umax-scanner.h
umax-uc840.o: umax-scanner.h
umax-ug630.o: umax-scanner.h
umax-ug80.o: umax-scanner.h
umax-usb.o: ../include/sane/sanei_usb.h ../include/sane/config.h
umax-usb.o: ../include/sane/sane.h /usr/include/stdlib.h
umax-usb.o: /usr/include/features.h /usr/include/sys/cdefs.h
umax-usb.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
umax-usb.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
umax-usb.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
umax-usb.o: /usr/include/bits/endian.h /usr/include/xlocale.h
umax-usb.o: /usr/include/sys/types.h /usr/include/bits/types.h
umax-usb.o: /usr/include/bits/typesizes.h /usr/include/time.h
umax-usb.o: /usr/include/sys/select.h /usr/include/bits/select.h
umax-usb.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
umax-usb.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
umax-usb.o: /usr/include/alloca.h ../include/sane/sanei_pv8630.h
v4l.o: ../include/sane/config.h /usr/include/assert.h /usr/include/features.h
v4l.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
v4l.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
v4l.o: /usr/include/ctype.h /usr/include/bits/types.h
v4l.o: /usr/include/bits/typesizes.h /usr/include/endian.h
v4l.o: /usr/include/bits/endian.h /usr/include/xlocale.h /usr/include/errno.h
v4l.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
v4l.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
v4l.o: /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h
v4l.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
v4l.o: /usr/include/sys/types.h /usr/include/time.h /usr/include/sys/select.h
v4l.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
v4l.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
v4l.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
v4l.o: /usr/include/sys/stat.h /usr/include/bits/stat.h /usr/include/limits.h
v4l.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
v4l.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
v4l.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
v4l.o: /usr/include/math.h /usr/include/bits/huge_val.h
v4l.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
v4l.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
v4l.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
v4l.o: /usr/include/setjmp.h /usr/include/bits/setjmp.h /usr/include/signal.h
v4l.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
v4l.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
v4l.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
v4l.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
v4l.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
v4l.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
v4l.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
v4l.o: /usr/include/alloca.h /usr/include/string.h /usr/include/sys/wait.h
v4l.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
v4l.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
v4l.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
v4l.o: ../include/getopt.h /usr/include/sys/mman.h /usr/include/bits/mman.h
v4l.o: /usr/include/sys/time.h ../include/sane/sane.h ../include/sane/sanei.h
v4l.o: ../include/sane/sane.h ../include/sane/saneopts.h
v4l.o: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
v4l.o: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
v4l.o: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
v4l.o: /usr/include/asm-generic/ioctl.h /usr/include/bits/ioctl-types.h
v4l.o: /usr/include/sys/ttydefaults.h /usr/include/asm/types.h
v4l.o: /usr/include/asm-i386/types.h ../include/sane/sanei_backend.h
v4l.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
v4l.o: ../include/sane/sanei_config.h v4l.h
v4l-s.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
v4l-s.o: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
v4l-s.o: /usr/include/features.h /usr/include/sys/cdefs.h
v4l-s.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
v4l-s.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
v4l-s.o: /usr/include/sys/types.h /usr/include/bits/types.h
v4l-s.o: /usr/include/bits/typesizes.h /usr/include/time.h
v4l-s.o: /usr/include/endian.h /usr/include/bits/endian.h
v4l-s.o: /usr/include/sys/select.h /usr/include/bits/select.h
v4l-s.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
v4l-s.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
v4l-s.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
v4l-s.o: /usr/include/bits/stat.h /usr/include/limits.h
v4l-s.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
v4l-s.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
v4l-s.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h

abaton.lo: ../include/sane/config.h /usr/include/ctype.h
abaton.lo: /usr/include/features.h /usr/include/sys/cdefs.h
abaton.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
abaton.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
abaton.lo: /usr/include/bits/typesizes.h /usr/include/endian.h
abaton.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
abaton.lo: /usr/include/errno.h /usr/include/bits/errno.h
abaton.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
abaton.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
abaton.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
abaton.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
abaton.lo: /usr/include/time.h /usr/include/sys/select.h
abaton.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
abaton.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
abaton.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
abaton.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
abaton.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
abaton.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
abaton.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
abaton.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
abaton.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
abaton.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
abaton.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
abaton.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
abaton.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
abaton.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
abaton.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
abaton.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
abaton.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
abaton.lo: /usr/include/bits/confname.h ../include/getopt.h
abaton.lo: /usr/include/sys/time.h /usr/include/sys/wait.h
abaton.lo: /usr/include/sys/resource.h /usr/include/bits/resource.h
abaton.lo: ../include/sane/sane.h ../include/sane/sanei.h
abaton.lo: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
abaton.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
abaton.lo: ../include/sane/sanei_config.h abaton.h
abaton-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
abaton-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
abaton-s.lo: /usr/include/fcntl.h /usr/include/features.h
abaton-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
abaton-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
abaton-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
abaton-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
abaton-s.lo: /usr/include/time.h /usr/include/endian.h
abaton-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
abaton-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
abaton-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
abaton-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
abaton-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
abaton-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
abaton-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
abaton-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
abaton-s.lo: /usr/include/bits/stdio_lim.h
agfafocus.lo: ../include/sane/config.h /usr/include/signal.h
agfafocus.lo: /usr/include/features.h /usr/include/sys/cdefs.h
agfafocus.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
agfafocus.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/sigset.h
agfafocus.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
agfafocus.lo: /usr/include/bits/signum.h /usr/include/time.h
agfafocus.lo: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
agfafocus.lo: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
agfafocus.lo: /usr/include/sys/ucontext.h /usr/include/bits/pthreadtypes.h
agfafocus.lo: /usr/include/bits/sigthread.h /usr/include/errno.h
agfafocus.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
agfafocus.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
agfafocus.lo: /usr/include/asm-generic/errno.h
agfafocus.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
agfafocus.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
agfafocus.lo: /usr/include/endian.h /usr/include/bits/endian.h
agfafocus.lo: /usr/include/sys/select.h /usr/include/bits/select.h
agfafocus.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
agfafocus.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
agfafocus.lo: /usr/include/bits/stat.h /usr/include/stdlib.h
agfafocus.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
agfafocus.lo: /usr/include/xlocale.h /usr/include/alloca.h
agfafocus.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
agfafocus.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
agfafocus.lo: ../include/getopt.h /usr/include/string.h
agfafocus.lo: ../include/sane/sane.h ../include/sane/sanei.h
agfafocus.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
agfafocus.lo: /usr/include/libio.h /usr/include/_G_config.h
agfafocus.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
agfafocus.lo: /usr/include/bits/sys_errlist.h ../include/sane/saneopts.h
agfafocus.lo: ../include/sane/sanei_scsi.h ../include/sane/sanei_thread.h
agfafocus.lo: ../include/sane/config.h ../include/sane/sanei_backend.h
agfafocus.lo: ../include/sane/sanei_debug.h /usr/include/limits.h
agfafocus.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
agfafocus.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
agfafocus.lo: /usr/include/bits/xopen_lim.h agfafocus.h
agfafocus-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
agfafocus-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
agfafocus-s.lo: /usr/include/fcntl.h /usr/include/features.h
agfafocus-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
agfafocus-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
agfafocus-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
agfafocus-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
agfafocus-s.lo: /usr/include/time.h /usr/include/endian.h
agfafocus-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
agfafocus-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
agfafocus-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
agfafocus-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
agfafocus-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
agfafocus-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
agfafocus-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
agfafocus-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
agfafocus-s.lo: /usr/include/bits/stdio_lim.h
apple.lo: ../include/sane/config.h /usr/include/ctype.h
apple.lo: /usr/include/features.h /usr/include/sys/cdefs.h
apple.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
apple.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
apple.lo: /usr/include/bits/typesizes.h /usr/include/endian.h
apple.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
apple.lo: /usr/include/errno.h /usr/include/bits/errno.h
apple.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
apple.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
apple.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
apple.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
apple.lo: /usr/include/time.h /usr/include/sys/select.h
apple.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
apple.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
apple.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
apple.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
apple.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
apple.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
apple.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
apple.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
apple.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
apple.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
apple.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
apple.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
apple.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
apple.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
apple.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
apple.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
apple.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
apple.lo: /usr/include/bits/confname.h ../include/getopt.h
apple.lo: /usr/include/sys/time.h /usr/include/sys/wait.h
apple.lo: /usr/include/sys/resource.h /usr/include/bits/resource.h
apple.lo: ../include/sane/sane.h ../include/sane/sanei.h
apple.lo: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
apple.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
apple.lo: ../include/sane/sanei_config.h apple.h
apple-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
apple-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
apple-s.lo: /usr/include/fcntl.h /usr/include/features.h
apple-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
apple-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
apple-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
apple-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
apple-s.lo: /usr/include/time.h /usr/include/endian.h
apple-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
apple-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
apple-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
apple-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
apple-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
apple-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
apple-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
apple-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
apple-s.lo: /usr/include/bits/stdio_lim.h
artec.lo: ../include/sane/config.h /usr/include/ctype.h
artec.lo: /usr/include/features.h /usr/include/sys/cdefs.h
artec.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
artec.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
artec.lo: /usr/include/bits/typesizes.h /usr/include/endian.h
artec.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
artec.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
artec.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
artec.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
artec.lo: /usr/include/bits/stdio_lim.h /usr/include/stdlib.h
artec.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
artec.lo: /usr/include/sys/types.h /usr/include/time.h
artec.lo: /usr/include/sys/select.h /usr/include/bits/select.h
artec.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
artec.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
artec.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
artec.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
artec.lo: /usr/include/bits/confname.h ../include/getopt.h
artec.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
artec.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
artec.lo: /usr/include/bits/uio.h ../include/sane/sane.h
artec.lo: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
artec.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
artec.lo: ../include/sane/sanei.h ../include/sane/sanei_config.h
artec.lo: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
artec.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h ./artec.h
artec_eplus48u.lo: ../include/sane/config.h /usr/include/errno.h
artec_eplus48u.lo: /usr/include/features.h /usr/include/sys/cdefs.h
artec_eplus48u.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
artec_eplus48u.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
artec_eplus48u.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
artec_eplus48u.lo: /usr/include/asm-i386/errno.h
artec_eplus48u.lo: /usr/include/asm-generic/errno.h
artec_eplus48u.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
artec_eplus48u.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
artec_eplus48u.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
artec_eplus48u.lo: /usr/include/time.h /usr/include/endian.h
artec_eplus48u.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
artec_eplus48u.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
artec_eplus48u.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
artec_eplus48u.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
artec_eplus48u.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
artec_eplus48u.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
artec_eplus48u.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
artec_eplus48u.lo: /usr/include/bits/posix2_lim.h
artec_eplus48u.lo: /usr/include/bits/xopen_lim.h
artec_eplus48u.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
artec_eplus48u.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
artec_eplus48u.lo: /usr/include/bits/sigaction.h
artec_eplus48u.lo: /usr/include/bits/sigcontext.h
artec_eplus48u.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
artec_eplus48u.lo: /usr/include/bits/sigthread.h /usr/include/stdlib.h
artec_eplus48u.lo: /usr/include/bits/waitflags.h
artec_eplus48u.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
artec_eplus48u.lo: /usr/include/alloca.h /usr/include/string.h
artec_eplus48u.lo: /usr/include/ctype.h /usr/include/unistd.h
artec_eplus48u.lo: /usr/include/bits/posix_opt.h
artec_eplus48u.lo: /usr/include/bits/environments.h
artec_eplus48u.lo: /usr/include/bits/confname.h ../include/getopt.h
artec_eplus48u.lo: /usr/include/math.h /usr/include/bits/huge_val.h
artec_eplus48u.lo: /usr/include/bits/huge_valf.h
artec_eplus48u.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
artec_eplus48u.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
artec_eplus48u.lo: /usr/include/bits/mathcalls.h /usr/include/sys/time.h
artec_eplus48u.lo: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
artec_eplus48u.lo: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
artec_eplus48u.lo: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
artec_eplus48u.lo: /usr/include/asm-generic/ioctl.h
artec_eplus48u.lo: /usr/include/bits/ioctl-types.h
artec_eplus48u.lo: /usr/include/sys/ttydefaults.h ../include/sane/sane.h
artec_eplus48u.lo: ../include/sane/sanei.h ../include/sane/sane.h
artec_eplus48u.lo: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
artec_eplus48u.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
artec_eplus48u.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
artec_eplus48u.lo: /usr/include/libio.h /usr/include/_G_config.h
artec_eplus48u.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
artec_eplus48u.lo: artec_eplus48u.h /usr/include/sys/ipc.h
artec_eplus48u.lo: /usr/include/bits/ipctypes.h /usr/include/bits/ipc.h
artec_eplus48u.lo: ../include/sane/sanei_usb.h ../include/sane/sanei_thread.h
artec_eplus48u-s.lo: ../include/sane/sanei_backend.h
artec_eplus48u-s.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
artec_eplus48u-s.lo: ../include/sane/sane.h /usr/include/fcntl.h
artec_eplus48u-s.lo: /usr/include/features.h /usr/include/sys/cdefs.h
artec_eplus48u-s.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
artec_eplus48u-s.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
artec_eplus48u-s.lo: /usr/include/sys/types.h /usr/include/bits/types.h
artec_eplus48u-s.lo: /usr/include/bits/typesizes.h /usr/include/time.h
artec_eplus48u-s.lo: /usr/include/endian.h /usr/include/bits/endian.h
artec_eplus48u-s.lo: /usr/include/sys/select.h /usr/include/bits/select.h
artec_eplus48u-s.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
artec_eplus48u-s.lo: /usr/include/sys/sysmacros.h
artec_eplus48u-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
artec_eplus48u-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
artec_eplus48u-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
artec_eplus48u-s.lo: /usr/include/bits/local_lim.h
artec_eplus48u-s.lo: /usr/include/linux/limits.h
artec_eplus48u-s.lo: /usr/include/bits/posix2_lim.h
artec_eplus48u-s.lo: /usr/include/bits/xopen_lim.h
artec_eplus48u-s.lo: /usr/include/bits/stdio_lim.h
artec-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
artec-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
artec-s.lo: /usr/include/fcntl.h /usr/include/features.h
artec-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
artec-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
artec-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
artec-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
artec-s.lo: /usr/include/time.h /usr/include/endian.h
artec-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
artec-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
artec-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
artec-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
artec-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
artec-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
artec-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
artec-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
artec-s.lo: /usr/include/bits/stdio_lim.h
as6e.lo: ../include/sane/config.h /usr/include/string.h
as6e.lo: /usr/include/features.h /usr/include/sys/cdefs.h
as6e.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
as6e.lo: /usr/include/gnu/stubs-32.h /usr/include/xlocale.h
as6e.lo: /usr/include/stdio.h /usr/include/bits/types.h
as6e.lo: /usr/include/bits/typesizes.h /usr/include/libio.h
as6e.lo: /usr/include/_G_config.h /usr/include/wchar.h
as6e.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
as6e.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
as6e.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
as6e.lo: /usr/include/bits/endian.h /usr/include/sys/types.h
as6e.lo: /usr/include/time.h /usr/include/sys/select.h
as6e.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
as6e.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
as6e.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
as6e.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
as6e.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
as6e.lo: ../include/getopt.h /usr/include/ctype.h /usr/include/limits.h
as6e.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
as6e.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
as6e.lo: /usr/include/bits/xopen_lim.h /usr/include/signal.h
as6e.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
as6e.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
as6e.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
as6e.lo: /usr/include/bits/sigthread.h /usr/include/sys/stat.h
as6e.lo: /usr/include/bits/stat.h ../include/sane/sane.h
as6e.lo: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
as6e.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
as6e.lo: ../include/sane/sane.h /usr/include/fcntl.h
as6e.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
as6e.lo: ../include/sane/sanei_config.h as6e.h
as6e-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
as6e-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
as6e-s.lo: /usr/include/fcntl.h /usr/include/features.h
as6e-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
as6e-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
as6e-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
as6e-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
as6e-s.lo: /usr/include/time.h /usr/include/endian.h
as6e-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
as6e-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
as6e-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
as6e-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
as6e-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
as6e-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
as6e-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
as6e-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
as6e-s.lo: /usr/include/bits/stdio_lim.h
avision.lo: ../include/sane/config.h /usr/include/errno.h
avision.lo: /usr/include/features.h /usr/include/sys/cdefs.h
avision.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
avision.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
avision.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
avision.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
avision.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
avision.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
avision.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
avision.lo: /usr/include/time.h /usr/include/endian.h
avision.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
avision.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
avision.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
avision.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
avision.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
avision.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
avision.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
avision.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
avision.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
avision.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
avision.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
avision.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
avision.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
avision.lo: /usr/include/libio.h /usr/include/_G_config.h
avision.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
avision.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
avision.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
avision.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
avision.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
avision.lo: /usr/include/bits/confname.h ../include/getopt.h
avision.lo: /usr/include/sys/time.h /usr/include/math.h
avision.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
avision.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
avision.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
avision.lo: /usr/include/bits/mathcalls.h ../include/sane/sane.h
avision.lo: ../include/sane/sanei.h ../include/sane/saneopts.h
avision.lo: ../include/sane/sanei_thread.h ../include/sane/config.h
avision.lo: ../include/sane/sanei_scsi.h ../include/sane/sanei_usb.h
avision.lo: ../include/sane/sane.h ../include/sane/sanei_config.h
avision.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
avision.lo: ./avision.h /usr/include/stdint.h /usr/include/bits/wchar.h
avision-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
avision-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
avision-s.lo: /usr/include/fcntl.h /usr/include/features.h
avision-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
avision-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
avision-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
avision-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
avision-s.lo: /usr/include/time.h /usr/include/endian.h
avision-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
avision-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
avision-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
avision-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
avision-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
avision-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
avision-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
avision-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
avision-s.lo: /usr/include/bits/stdio_lim.h
bh.lo: ../include/sane/config.h /usr/include/limits.h /usr/include/features.h
bh.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
bh.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
bh.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
bh.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
bh.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
bh.lo: /usr/include/errno.h /usr/include/bits/errno.h
bh.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
bh.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
bh.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
bh.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
bh.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
bh.lo: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
bh.lo: /usr/include/sys/select.h /usr/include/bits/select.h
bh.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
bh.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
bh.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
bh.lo: /usr/include/bits/stat.h /usr/include/ctype.h /usr/include/xlocale.h
bh.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
bh.lo: /usr/include/bits/waitstatus.h /usr/include/alloca.h
bh.lo: /usr/include/string.h /usr/include/stdio.h /usr/include/libio.h
bh.lo: /usr/include/_G_config.h /usr/include/wchar.h
bh.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
bh.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
bh.lo: /usr/include/bits/confname.h ../include/getopt.h
bh.lo: ../include/sane/sane.h ../include/sane/saneopts.h
bh.lo: ../include/sane/sanei_scsi.h ../include/sane/sanei_config.h
bh.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
bh.lo: ../include/sane/sanei.h bh.h
bh-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
bh-s.lo: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
bh-s.lo: /usr/include/features.h /usr/include/sys/cdefs.h
bh-s.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
bh-s.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
bh-s.lo: /usr/include/sys/types.h /usr/include/bits/types.h
bh-s.lo: /usr/include/bits/typesizes.h /usr/include/time.h
bh-s.lo: /usr/include/endian.h /usr/include/bits/endian.h
bh-s.lo: /usr/include/sys/select.h /usr/include/bits/select.h
bh-s.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
bh-s.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
bh-s.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
bh-s.lo: /usr/include/bits/stat.h /usr/include/limits.h
bh-s.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
bh-s.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
bh-s.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
canon630u.lo: ../include/sane/config.h /usr/include/stdlib.h
canon630u.lo: /usr/include/features.h /usr/include/sys/cdefs.h
canon630u.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
canon630u.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
canon630u.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
canon630u.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
canon630u.lo: /usr/include/sys/types.h /usr/include/bits/types.h
canon630u.lo: /usr/include/bits/typesizes.h /usr/include/time.h
canon630u.lo: /usr/include/sys/select.h /usr/include/bits/select.h
canon630u.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
canon630u.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
canon630u.lo: /usr/include/alloca.h /usr/include/string.h
canon630u.lo: /usr/include/stdio.h /usr/include/libio.h
canon630u.lo: /usr/include/_G_config.h /usr/include/wchar.h
canon630u.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
canon630u.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
canon630u.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
canon630u.lo: ../include/getopt.h /usr/include/fcntl.h
canon630u.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
canon630u.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
canon630u.lo: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
canon630u.lo: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
canon630u.lo: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
canon630u.lo: /usr/include/asm-generic/ioctl.h
canon630u.lo: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
canon630u.lo: ../include/sane/sane.h ../include/sane/sanei.h
canon630u.lo: ../include/sane/sane.h ../include/sane/saneopts.h
canon630u.lo: ../include/sane/sanei_config.h ../include/sane/sanei_usb.h
canon630u.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
canon630u.lo: ../include/sane/sanei.h /usr/include/limits.h
canon630u.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
canon630u.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
canon630u.lo: /usr/include/bits/xopen_lim.h canon630u-common.c
canon630u.lo: /usr/include/errno.h /usr/include/bits/errno.h
canon630u.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
canon630u.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
canon630u.lo: /usr/include/asm-generic/errno-base.h /usr/include/math.h
canon630u.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
canon630u.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
canon630u.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
canon630u.lo: /usr/include/bits/mathcalls.h lm9830.h
canon630u-common.lo: /usr/include/errno.h /usr/include/features.h
canon630u-common.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
canon630u-common.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
canon630u-common.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
canon630u-common.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
canon630u-common.lo: /usr/include/asm-generic/errno.h
canon630u-common.lo: /usr/include/asm-generic/errno-base.h
canon630u-common.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
canon630u-common.lo: /usr/include/sys/types.h /usr/include/bits/types.h
canon630u-common.lo: /usr/include/bits/typesizes.h /usr/include/time.h
canon630u-common.lo: /usr/include/endian.h /usr/include/bits/endian.h
canon630u-common.lo: /usr/include/sys/select.h /usr/include/bits/select.h
canon630u-common.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
canon630u-common.lo: /usr/include/sys/sysmacros.h
canon630u-common.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
canon630u-common.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
canon630u-common.lo: /usr/include/stdio.h /usr/include/libio.h
canon630u-common.lo: /usr/include/_G_config.h /usr/include/wchar.h
canon630u-common.lo: /usr/include/bits/stdio_lim.h
canon630u-common.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
canon630u-common.lo: /usr/include/bits/waitflags.h
canon630u-common.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
canon630u-common.lo: /usr/include/alloca.h /usr/include/string.h
canon630u-common.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
canon630u-common.lo: /usr/include/bits/environments.h
canon630u-common.lo: /usr/include/bits/confname.h ../include/getopt.h
canon630u-common.lo: /usr/include/math.h /usr/include/bits/huge_val.h
canon630u-common.lo: /usr/include/bits/huge_valf.h
canon630u-common.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
canon630u-common.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
canon630u-common.lo: /usr/include/bits/mathcalls.h lm9830.h
canon630u-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
canon630u-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
canon630u-s.lo: /usr/include/fcntl.h /usr/include/features.h
canon630u-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
canon630u-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
canon630u-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
canon630u-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
canon630u-s.lo: /usr/include/time.h /usr/include/endian.h
canon630u-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
canon630u-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
canon630u-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
canon630u-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
canon630u-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
canon630u-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
canon630u-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
canon630u-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
canon630u-s.lo: /usr/include/bits/stdio_lim.h
canon.lo: ../include/sane/config.h /usr/include/limits.h
canon.lo: /usr/include/features.h /usr/include/sys/cdefs.h
canon.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
canon.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/posix1_lim.h
canon.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
canon.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
canon.lo: /usr/include/bits/stdio_lim.h /usr/include/stdlib.h
canon.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
canon.lo: /usr/include/endian.h /usr/include/bits/endian.h
canon.lo: /usr/include/xlocale.h /usr/include/sys/types.h
canon.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
canon.lo: /usr/include/time.h /usr/include/sys/select.h
canon.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
canon.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
canon.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
canon.lo: /usr/include/string.h /usr/include/math.h
canon.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
canon.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
canon.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
canon.lo: /usr/include/bits/mathcalls.h /usr/include/unistd.h
canon.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
canon.lo: /usr/include/bits/confname.h ../include/getopt.h
canon.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
canon.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
canon.lo: /usr/include/bits/stat.h /usr/include/errno.h
canon.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
canon.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
canon.lo: /usr/include/asm-generic/errno.h
canon.lo: /usr/include/asm-generic/errno-base.h ../include/sane/sane.h
canon.lo: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
canon.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
canon.lo: ../include/sane/sanei.h ../include/sane/sanei_config.h
canon.lo: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
canon.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h ./canon.h
canon.lo: canon-scsi.c canon-sane.c
canon_pp.lo: ../include/sane/config.h /usr/include/string.h
canon_pp.lo: /usr/include/features.h /usr/include/sys/cdefs.h
canon_pp.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
canon_pp.lo: /usr/include/gnu/stubs-32.h /usr/include/xlocale.h
canon_pp.lo: /usr/include/math.h /usr/include/bits/huge_val.h
canon_pp.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
canon_pp.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
canon_pp.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
canon_pp.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
canon_pp.lo: /usr/include/bits/environments.h /usr/include/bits/types.h
canon_pp.lo: /usr/include/bits/typesizes.h /usr/include/bits/confname.h
canon_pp.lo: ../include/getopt.h /usr/include/sys/stat.h /usr/include/time.h
canon_pp.lo: /usr/include/bits/stat.h /usr/include/sys/types.h
canon_pp.lo: /usr/include/endian.h /usr/include/bits/endian.h
canon_pp.lo: /usr/include/sys/select.h /usr/include/bits/select.h
canon_pp.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
canon_pp.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
canon_pp.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
canon_pp.lo: /usr/include/bits/waitstatus.h /usr/include/alloca.h
canon_pp.lo: /usr/include/errno.h /usr/include/bits/errno.h
canon_pp.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
canon_pp.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
canon_pp.lo: /usr/include/asm-generic/errno-base.h /usr/include/ieee1284.h
canon_pp.lo: /usr/include/sys/time.h ../include/sane/sane.h
canon_pp.lo: ../include/sane/saneopts.h canon_pp-dev.h canon_pp-io.h
canon_pp.lo: canon_pp.h ../include/sane/sanei_debug.h ../include/sane/sanei.h
canon_pp.lo: ../include/sane/sane.h ../include/sane/sanei_config.h
canon_pp.lo: /usr/include/stdio.h /usr/include/libio.h
canon_pp.lo: /usr/include/_G_config.h /usr/include/wchar.h
canon_pp.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
canon_pp.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
canon_pp.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
canon_pp.lo: /usr/include/bits/uio.h /usr/include/limits.h
canon_pp.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
canon_pp.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
canon_pp.lo: /usr/include/bits/xopen_lim.h
canon_pp-dev.lo: ../include/sane/config.h /usr/include/sys/time.h
canon_pp-dev.lo: /usr/include/features.h /usr/include/sys/cdefs.h
canon_pp-dev.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
canon_pp-dev.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
canon_pp-dev.lo: /usr/include/bits/typesizes.h /usr/include/time.h
canon_pp-dev.lo: /usr/include/bits/time.h /usr/include/sys/select.h
canon_pp-dev.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
canon_pp-dev.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
canon_pp-dev.lo: /usr/include/bits/environments.h
canon_pp-dev.lo: /usr/include/bits/confname.h ../include/getopt.h
canon_pp-dev.lo: /usr/include/errno.h /usr/include/bits/errno.h
canon_pp-dev.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
canon_pp-dev.lo: /usr/include/asm-i386/errno.h
canon_pp-dev.lo: /usr/include/asm-generic/errno.h
canon_pp-dev.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
canon_pp-dev.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
canon_pp-dev.lo: /usr/include/endian.h /usr/include/bits/endian.h
canon_pp-dev.lo: /usr/include/sys/sysmacros.h
canon_pp-dev.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
canon_pp-dev.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
canon_pp-dev.lo: /usr/include/string.h /usr/include/xlocale.h
canon_pp-dev.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
canon_pp-dev.lo: /usr/include/bits/waitstatus.h /usr/include/alloca.h
canon_pp-dev.lo: /usr/include/ieee1284.h canon_pp-io.h canon_pp-dev.h
canon_pp-dev.lo: canon_pp.h ../include/sane/sanei_debug.h
canon_pp-dev.lo: ../include/sane/sanei.h ../include/sane/sane.h
canon_pp-dev.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
canon_pp-dev.lo: /usr/include/libio.h /usr/include/_G_config.h
canon_pp-dev.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
canon_pp-dev.lo: /usr/include/bits/sys_errlist.h
canon_pp-dev.lo: ../include/sane/sanei_backend.h
canon_pp-dev.lo: ../include/sane/sanei_debug.h /usr/include/limits.h
canon_pp-dev.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
canon_pp-dev.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
canon_pp-dev.lo: /usr/include/bits/xopen_lim.h
canon_pp-io.lo: ../include/sane/config.h /usr/include/sys/time.h
canon_pp-io.lo: /usr/include/features.h /usr/include/sys/cdefs.h
canon_pp-io.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
canon_pp-io.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
canon_pp-io.lo: /usr/include/bits/typesizes.h /usr/include/time.h
canon_pp-io.lo: /usr/include/bits/time.h /usr/include/sys/select.h
canon_pp-io.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
canon_pp-io.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
canon_pp-io.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
canon_pp-io.lo: ../include/getopt.h /usr/include/ieee1284.h
canon_pp-io.lo: /usr/include/sys/types.h /usr/include/endian.h
canon_pp-io.lo: /usr/include/bits/endian.h /usr/include/sys/sysmacros.h
canon_pp-io.lo: /usr/include/bits/pthreadtypes.h canon_pp-io.h canon_pp-dev.h
canon_pp-io.lo: canon_pp.h ../include/sane/sanei_debug.h
canon_pp-io.lo: ../include/sane/sanei.h ../include/sane/sane.h
canon_pp-io.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
canon_pp-io.lo: /usr/include/libio.h /usr/include/_G_config.h
canon_pp-io.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
canon_pp-io.lo: /usr/include/bits/sys_errlist.h
canon_pp-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
canon_pp-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
canon_pp-s.lo: /usr/include/fcntl.h /usr/include/features.h
canon_pp-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
canon_pp-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
canon_pp-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
canon_pp-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
canon_pp-s.lo: /usr/include/time.h /usr/include/endian.h
canon_pp-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
canon_pp-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
canon_pp-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
canon_pp-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
canon_pp-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
canon_pp-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
canon_pp-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
canon_pp-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
canon_pp-s.lo: /usr/include/bits/stdio_lim.h
canon-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
canon-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
canon-s.lo: /usr/include/fcntl.h /usr/include/features.h
canon-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
canon-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
canon-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
canon-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
canon-s.lo: /usr/include/time.h /usr/include/endian.h
canon-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
canon-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
canon-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
canon-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
canon-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
canon-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
canon-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
canon-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
canon-s.lo: /usr/include/bits/stdio_lim.h
cardscan.lo: ../include/sane/config.h /usr/include/errno.h
cardscan.lo: /usr/include/features.h /usr/include/sys/cdefs.h
cardscan.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
cardscan.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
cardscan.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
cardscan.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
cardscan.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
cardscan.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
cardscan.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
cardscan.lo: /usr/include/time.h /usr/include/endian.h
cardscan.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
cardscan.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
cardscan.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
cardscan.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
cardscan.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
cardscan.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
cardscan.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
cardscan.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
cardscan.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
cardscan.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
cardscan.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
cardscan.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
cardscan.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
cardscan.lo: /usr/include/libio.h /usr/include/_G_config.h
cardscan.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
cardscan.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
cardscan.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
cardscan.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/ctype.h
cardscan.lo: /usr/include/math.h /usr/include/bits/huge_val.h
cardscan.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
cardscan.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
cardscan.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
cardscan.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
cardscan.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
cardscan.lo: ../include/getopt.h ../include/sane/sanei_backend.h
cardscan.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
cardscan.lo: ../include/sane/sane.h ../include/sane/sanei_usb.h
cardscan.lo: ../include/sane/config.h ../include/sane/sane.h
cardscan.lo: ../include/sane/saneopts.h ../include/sane/sanei_config.h
cardscan.lo: cardscan.h
cardscan-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
cardscan-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
cardscan-s.lo: /usr/include/fcntl.h /usr/include/features.h
cardscan-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
cardscan-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
cardscan-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
cardscan-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
cardscan-s.lo: /usr/include/time.h /usr/include/endian.h
cardscan-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
cardscan-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
cardscan-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
cardscan-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
cardscan-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
cardscan-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
cardscan-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
cardscan-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
cardscan-s.lo: /usr/include/bits/stdio_lim.h
coolscan2.lo: ../include/sane/config.h ../include/lalloca.h
coolscan2.lo: /usr/include/math.h /usr/include/features.h
coolscan2.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
coolscan2.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
coolscan2.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
coolscan2.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
coolscan2.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
coolscan2.lo: /usr/include/bits/mathcalls.h /usr/include/stdio.h
coolscan2.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
coolscan2.lo: /usr/include/libio.h /usr/include/_G_config.h
coolscan2.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
coolscan2.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
coolscan2.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
coolscan2.lo: /usr/include/endian.h /usr/include/bits/endian.h
coolscan2.lo: /usr/include/xlocale.h /usr/include/sys/types.h
coolscan2.lo: /usr/include/time.h /usr/include/sys/select.h
coolscan2.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
coolscan2.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
coolscan2.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
coolscan2.lo: /usr/include/string.h /usr/include/ctype.h
coolscan2.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
coolscan2.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
coolscan2.lo: ../include/getopt.h ../include/sane/sane.h
coolscan2.lo: ../include/sane/sanei.h ../include/sane/sane.h
coolscan2.lo: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
coolscan2.lo: ../include/sane/sanei_usb.h ../include/sane/sanei_debug.h
coolscan2.lo: ../include/sane/sanei.h ../include/sane/sanei_config.h
coolscan2.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
coolscan2.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
coolscan2.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
coolscan2.lo: /usr/include/bits/stat.h /usr/include/limits.h
coolscan2.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
coolscan2.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
coolscan2.lo: /usr/include/bits/xopen_lim.h
coolscan2-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
coolscan2-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
coolscan2-s.lo: /usr/include/fcntl.h /usr/include/features.h
coolscan2-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
coolscan2-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
coolscan2-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
coolscan2-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
coolscan2-s.lo: /usr/include/time.h /usr/include/endian.h
coolscan2-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
coolscan2-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
coolscan2-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
coolscan2-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
coolscan2-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
coolscan2-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
coolscan2-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
coolscan2-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
coolscan2-s.lo: /usr/include/bits/stdio_lim.h
coolscan3.lo: ../include/sane/config.h /usr/include/math.h
coolscan3.lo: /usr/include/features.h /usr/include/sys/cdefs.h
coolscan3.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
coolscan3.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/huge_val.h
coolscan3.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
coolscan3.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
coolscan3.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
coolscan3.lo: /usr/include/stdio.h /usr/include/bits/types.h
coolscan3.lo: /usr/include/bits/typesizes.h /usr/include/libio.h
coolscan3.lo: /usr/include/_G_config.h /usr/include/wchar.h
coolscan3.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
coolscan3.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
coolscan3.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
coolscan3.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
coolscan3.lo: /usr/include/sys/types.h /usr/include/time.h
coolscan3.lo: /usr/include/sys/select.h /usr/include/bits/select.h
coolscan3.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
coolscan3.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
coolscan3.lo: /usr/include/alloca.h /usr/include/string.h
coolscan3.lo: /usr/include/ctype.h /usr/include/unistd.h
coolscan3.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
coolscan3.lo: /usr/include/bits/confname.h ../include/getopt.h
coolscan3.lo: ../include/sane/sane.h ../include/sane/sanei.h
coolscan3.lo: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
coolscan3.lo: ../include/sane/sanei_usb.h ../include/sane/config.h
coolscan3.lo: ../include/sane/sane.h ../include/sane/sanei_debug.h
coolscan3.lo: ../include/sane/sanei_config.h ../include/sane/sanei_backend.h
coolscan3.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
coolscan3.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
coolscan3.lo: /usr/include/bits/stat.h /usr/include/limits.h
coolscan3.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
coolscan3.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
coolscan3.lo: /usr/include/bits/xopen_lim.h
coolscan3-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
coolscan3-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
coolscan3-s.lo: /usr/include/fcntl.h /usr/include/features.h
coolscan3-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
coolscan3-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
coolscan3-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
coolscan3-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
coolscan3-s.lo: /usr/include/time.h /usr/include/endian.h
coolscan3-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
coolscan3-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
coolscan3-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
coolscan3-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
coolscan3-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
coolscan3-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
coolscan3-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
coolscan3-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
coolscan3-s.lo: /usr/include/bits/stdio_lim.h
coolscan.lo: ../include/sane/config.h ../include/lalloca.h
coolscan.lo: /usr/include/errno.h /usr/include/features.h
coolscan.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
coolscan.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
coolscan.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
coolscan.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
coolscan.lo: /usr/include/asm-generic/errno.h
coolscan.lo: /usr/include/asm-generic/errno-base.h /usr/include/math.h
coolscan.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
coolscan.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
coolscan.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
coolscan.lo: /usr/include/bits/mathcalls.h /usr/include/fcntl.h
coolscan.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
coolscan.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
coolscan.lo: /usr/include/time.h /usr/include/endian.h
coolscan.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
coolscan.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
coolscan.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
coolscan.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
coolscan.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
coolscan.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
coolscan.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
coolscan.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
coolscan.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
coolscan.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
coolscan.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
coolscan.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
coolscan.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
coolscan.lo: /usr/include/libio.h /usr/include/_G_config.h
coolscan.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
coolscan.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
coolscan.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
coolscan.lo: /usr/include/alloca.h /usr/include/string.h
coolscan.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
coolscan.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
coolscan.lo: ../include/getopt.h ../include/sane/sane.h
coolscan.lo: ../include/sane/sanei.h ../include/sane/saneopts.h
coolscan.lo: ../include/sane/sanei_scsi.h ../include/sane/sanei_debug.h
coolscan.lo: ../include/sane/sanei_thread.h ../include/sane/config.h
coolscan.lo: ../include/sane/sanei_config.h ../include/sane/sanei_backend.h
coolscan.lo: coolscan.h coolscan-scsidef.h
coolscan-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
coolscan-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
coolscan-s.lo: /usr/include/fcntl.h /usr/include/features.h
coolscan-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
coolscan-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
coolscan-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
coolscan-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
coolscan-s.lo: /usr/include/time.h /usr/include/endian.h
coolscan-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
coolscan-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
coolscan-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
coolscan-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
coolscan-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
coolscan-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
coolscan-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
coolscan-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
coolscan-s.lo: /usr/include/bits/stdio_lim.h
dc210.lo: ../include/sane/config.h /usr/include/stdlib.h
dc210.lo: /usr/include/features.h /usr/include/sys/cdefs.h
dc210.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
dc210.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
dc210.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
dc210.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
dc210.lo: /usr/include/sys/types.h /usr/include/bits/types.h
dc210.lo: /usr/include/bits/typesizes.h /usr/include/time.h
dc210.lo: /usr/include/sys/select.h /usr/include/bits/select.h
dc210.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
dc210.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
dc210.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/stdio.h
dc210.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
dc210.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
dc210.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
dc210.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
dc210.lo: ../include/getopt.h /usr/include/fcntl.h /usr/include/bits/fcntl.h
dc210.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
dc210.lo: /usr/include/bits/stat.h /usr/include/limits.h
dc210.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
dc210.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
dc210.lo: /usr/include/bits/xopen_lim.h ../include/sane/sanei_jpeg.h
dc210.lo: ../include/sane/sanei_jinclude.h /usr/include/jconfig.h
dc210.lo: /usr/include/jpeglib.h /usr/include/jmorecfg.h
dc210.lo: /usr/include/jerror.h ../include/sane/sanei_cderror.h
dc210.lo: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
dc210.lo: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
dc210.lo: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
dc210.lo: /usr/include/asm-generic/ioctl.h /usr/include/bits/ioctl-types.h
dc210.lo: /usr/include/sys/ttydefaults.h ../include/sane/sane.h
dc210.lo: ../include/sane/sanei.h ../include/sane/saneopts.h
dc210.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
dc210.lo: dc210.h /usr/include/termios.h /usr/include/bits/termios.h
dc210.lo: /usr/include/sys/time.h
dc210-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
dc210-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
dc210-s.lo: /usr/include/fcntl.h /usr/include/features.h
dc210-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
dc210-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
dc210-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
dc210-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
dc210-s.lo: /usr/include/time.h /usr/include/endian.h
dc210-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
dc210-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
dc210-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
dc210-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
dc210-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
dc210-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
dc210-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
dc210-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
dc210-s.lo: /usr/include/bits/stdio_lim.h
dc240.lo: ../include/sane/config.h /usr/include/stdlib.h
dc240.lo: /usr/include/features.h /usr/include/sys/cdefs.h
dc240.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
dc240.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
dc240.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
dc240.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
dc240.lo: /usr/include/sys/types.h /usr/include/bits/types.h
dc240.lo: /usr/include/bits/typesizes.h /usr/include/time.h
dc240.lo: /usr/include/sys/select.h /usr/include/bits/select.h
dc240.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
dc240.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
dc240.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/stdio.h
dc240.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
dc240.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
dc240.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
dc240.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
dc240.lo: ../include/getopt.h /usr/include/fcntl.h /usr/include/bits/fcntl.h
dc240.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
dc240.lo: /usr/include/bits/stat.h /usr/include/limits.h
dc240.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
dc240.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
dc240.lo: /usr/include/bits/xopen_lim.h ../include/sane/sanei_jpeg.h
dc240.lo: ../include/sane/sanei_jinclude.h /usr/include/jconfig.h
dc240.lo: /usr/include/jpeglib.h /usr/include/jmorecfg.h
dc240.lo: /usr/include/jerror.h ../include/sane/sanei_cderror.h
dc240.lo: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
dc240.lo: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
dc240.lo: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
dc240.lo: /usr/include/asm-generic/ioctl.h /usr/include/bits/ioctl-types.h
dc240.lo: /usr/include/sys/ttydefaults.h ../include/sane/sane.h
dc240.lo: ../include/sane/sanei.h ../include/sane/saneopts.h
dc240.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
dc240.lo: dc240.h /usr/include/termios.h /usr/include/bits/termios.h
dc240.lo: /usr/include/sys/time.h
dc240-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
dc240-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
dc240-s.lo: /usr/include/fcntl.h /usr/include/features.h
dc240-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
dc240-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
dc240-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
dc240-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
dc240-s.lo: /usr/include/time.h /usr/include/endian.h
dc240-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
dc240-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
dc240-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
dc240-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
dc240-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
dc240-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
dc240-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
dc240-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
dc240-s.lo: /usr/include/bits/stdio_lim.h
dc25.lo: ../include/sane/config.h /usr/include/stdlib.h
dc25.lo: /usr/include/features.h /usr/include/sys/cdefs.h
dc25.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
dc25.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
dc25.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
dc25.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
dc25.lo: /usr/include/sys/types.h /usr/include/bits/types.h
dc25.lo: /usr/include/bits/typesizes.h /usr/include/time.h
dc25.lo: /usr/include/sys/select.h /usr/include/bits/select.h
dc25.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
dc25.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
dc25.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/stdio.h
dc25.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
dc25.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
dc25.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
dc25.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
dc25.lo: ../include/getopt.h /usr/include/fcntl.h /usr/include/bits/fcntl.h
dc25.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
dc25.lo: /usr/include/bits/stat.h /usr/include/limits.h
dc25.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
dc25.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
dc25.lo: /usr/include/bits/xopen_lim.h ../include/sane/sane.h
dc25.lo: ../include/sane/sanei.h ../include/sane/saneopts.h
dc25.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h dc25.h
dc25.lo: /usr/include/termios.h /usr/include/bits/termios.h
dc25.lo: /usr/include/sys/ttydefaults.h /usr/include/math.h
dc25.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
dc25.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
dc25.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
dc25.lo: /usr/include/bits/mathcalls.h
dc25-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
dc25-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
dc25-s.lo: /usr/include/fcntl.h /usr/include/features.h
dc25-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
dc25-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
dc25-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
dc25-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
dc25-s.lo: /usr/include/time.h /usr/include/endian.h
dc25-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
dc25-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
dc25-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
dc25-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
dc25-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
dc25-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
dc25-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
dc25-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
dc25-s.lo: /usr/include/bits/stdio_lim.h
dell1600n_net.lo: ../include/sane/config.h ../include/sane/sane.h
dell1600n_net.lo: ../include/sane/sanei.h ../include/sane/sane.h
dell1600n_net.lo: ../include/sane/sanei_backend.h
dell1600n_net.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
dell1600n_net.lo: /usr/include/fcntl.h /usr/include/features.h
dell1600n_net.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
dell1600n_net.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
dell1600n_net.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
dell1600n_net.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
dell1600n_net.lo: /usr/include/time.h /usr/include/endian.h
dell1600n_net.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
dell1600n_net.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
dell1600n_net.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
dell1600n_net.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
dell1600n_net.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
dell1600n_net.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
dell1600n_net.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
dell1600n_net.lo: /usr/include/bits/posix2_lim.h
dell1600n_net.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
dell1600n_net.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
dell1600n_net.lo: /usr/include/libio.h /usr/include/_G_config.h
dell1600n_net.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
dell1600n_net.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
dell1600n_net.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
dell1600n_net.lo: /usr/include/alloca.h /usr/include/string.h
dell1600n_net.lo: /usr/include/math.h /usr/include/bits/huge_val.h
dell1600n_net.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
dell1600n_net.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
dell1600n_net.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
dell1600n_net.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
dell1600n_net.lo: /usr/include/bits/environments.h
dell1600n_net.lo: /usr/include/bits/confname.h ../include/getopt.h
dell1600n_net.lo: /usr/include/sys/socket.h /usr/include/sys/uio.h
dell1600n_net.lo: /usr/include/bits/socket.h /usr/include/bits/sockaddr.h
dell1600n_net.lo: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
dell1600n_net.lo: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
dell1600n_net.lo: /usr/include/sys/time.h /usr/include/netinet/in.h
dell1600n_net.lo: /usr/include/stdint.h /usr/include/bits/wchar.h
dell1600n_net.lo: /usr/include/bits/in.h /usr/include/bits/byteswap.h
dell1600n_net.lo: /usr/include/netdb.h /usr/include/rpc/netdb.h
dell1600n_net.lo: /usr/include/bits/siginfo.h /usr/include/bits/netdb.h
dell1600n_net.lo: /usr/include/jpeglib.h /usr/include/jmorecfg.h
dell1600n_net.lo: /usr/include/tiffio.h /usr/include/tiff.h
dell1600n_net.lo: /usr/include/tiffconf.h /usr/include/tiffvers.h
dell1600n_net-s.lo: ../include/sane/sanei_backend.h
dell1600n_net-s.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
dell1600n_net-s.lo: ../include/sane/sane.h /usr/include/fcntl.h
dell1600n_net-s.lo: /usr/include/features.h /usr/include/sys/cdefs.h
dell1600n_net-s.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
dell1600n_net-s.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
dell1600n_net-s.lo: /usr/include/sys/types.h /usr/include/bits/types.h
dell1600n_net-s.lo: /usr/include/bits/typesizes.h /usr/include/time.h
dell1600n_net-s.lo: /usr/include/endian.h /usr/include/bits/endian.h
dell1600n_net-s.lo: /usr/include/sys/select.h /usr/include/bits/select.h
dell1600n_net-s.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
dell1600n_net-s.lo: /usr/include/sys/sysmacros.h
dell1600n_net-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
dell1600n_net-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
dell1600n_net-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
dell1600n_net-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
dell1600n_net-s.lo: /usr/include/bits/posix2_lim.h
dell1600n_net-s.lo: /usr/include/bits/xopen_lim.h
dell1600n_net-s.lo: /usr/include/bits/stdio_lim.h
dll.lo: ../include/sane/config.h ../include/lalloca.h /usr/include/errno.h
dll.lo: /usr/include/features.h /usr/include/sys/cdefs.h
dll.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
dll.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
dll.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
dll.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
dll.lo: /usr/include/asm-generic/errno-base.h /usr/include/limits.h
dll.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
dll.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
dll.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
dll.lo: /usr/include/stdio.h /usr/include/bits/types.h
dll.lo: /usr/include/bits/typesizes.h /usr/include/libio.h
dll.lo: /usr/include/_G_config.h /usr/include/wchar.h
dll.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
dll.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
dll.lo: /usr/include/endian.h /usr/include/bits/endian.h
dll.lo: /usr/include/xlocale.h /usr/include/sys/types.h /usr/include/time.h
dll.lo: /usr/include/sys/select.h /usr/include/bits/select.h
dll.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
dll.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
dll.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/dlfcn.h
dll.lo: /usr/include/bits/dlfcn.h ../include/sane/sane.h
dll.lo: ../include/sane/sanei.h ../include/sane/sanei_backend.h
dll.lo: ../include/sane/sanei_debug.h /usr/include/fcntl.h
dll.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
dll.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
dll.lo: ../include/sane/sanei_config.h dll-preload.c
dll-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
dll-s.lo: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
dll-s.lo: /usr/include/features.h /usr/include/sys/cdefs.h
dll-s.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
dll-s.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
dll-s.lo: /usr/include/sys/types.h /usr/include/bits/types.h
dll-s.lo: /usr/include/bits/typesizes.h /usr/include/time.h
dll-s.lo: /usr/include/endian.h /usr/include/bits/endian.h
dll-s.lo: /usr/include/sys/select.h /usr/include/bits/select.h
dll-s.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
dll-s.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
dll-s.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
dll-s.lo: /usr/include/bits/stat.h /usr/include/limits.h
dll-s.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
dll-s.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
dll-s.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
dmc.lo: ../include/sane/config.h /usr/include/limits.h
dmc.lo: /usr/include/features.h /usr/include/sys/cdefs.h
dmc.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
dmc.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/posix1_lim.h
dmc.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
dmc.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
dmc.lo: /usr/include/bits/stdio_lim.h /usr/include/stdlib.h
dmc.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
dmc.lo: /usr/include/endian.h /usr/include/bits/endian.h
dmc.lo: /usr/include/xlocale.h /usr/include/sys/types.h
dmc.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
dmc.lo: /usr/include/time.h /usr/include/sys/select.h
dmc.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
dmc.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
dmc.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
dmc.lo: /usr/include/string.h ../include/sane/sane.h
dmc.lo: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
dmc.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
dmc.lo: ../include/sane/sanei.h /usr/include/fcntl.h
dmc.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
dmc.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
dmc.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
dmc.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
dmc.lo: /usr/include/bits/sys_errlist.h dmc.h
dmc-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
dmc-s.lo: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
dmc-s.lo: /usr/include/features.h /usr/include/sys/cdefs.h
dmc-s.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
dmc-s.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
dmc-s.lo: /usr/include/sys/types.h /usr/include/bits/types.h
dmc-s.lo: /usr/include/bits/typesizes.h /usr/include/time.h
dmc-s.lo: /usr/include/endian.h /usr/include/bits/endian.h
dmc-s.lo: /usr/include/sys/select.h /usr/include/bits/select.h
dmc-s.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
dmc-s.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
dmc-s.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
dmc-s.lo: /usr/include/bits/stat.h /usr/include/limits.h
dmc-s.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
dmc-s.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
dmc-s.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
epjitsu.lo: ../include/sane/config.h /usr/include/errno.h
epjitsu.lo: /usr/include/features.h /usr/include/sys/cdefs.h
epjitsu.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
epjitsu.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
epjitsu.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
epjitsu.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
epjitsu.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
epjitsu.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
epjitsu.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
epjitsu.lo: /usr/include/time.h /usr/include/endian.h
epjitsu.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
epjitsu.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
epjitsu.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
epjitsu.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
epjitsu.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
epjitsu.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
epjitsu.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
epjitsu.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
epjitsu.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
epjitsu.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
epjitsu.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
epjitsu.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
epjitsu.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
epjitsu.lo: /usr/include/libio.h /usr/include/_G_config.h
epjitsu.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
epjitsu.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
epjitsu.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
epjitsu.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/ctype.h
epjitsu.lo: /usr/include/math.h /usr/include/bits/huge_val.h
epjitsu.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
epjitsu.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
epjitsu.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
epjitsu.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
epjitsu.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
epjitsu.lo: ../include/getopt.h ../include/sane/sanei_backend.h
epjitsu.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
epjitsu.lo: ../include/sane/sane.h ../include/sane/sanei_usb.h
epjitsu.lo: ../include/sane/config.h ../include/sane/sane.h
epjitsu.lo: ../include/sane/saneopts.h ../include/sane/sanei_config.h
epjitsu.lo: epjitsu.h epjitsu-cmd.h
epjitsu-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
epjitsu-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
epjitsu-s.lo: /usr/include/fcntl.h /usr/include/features.h
epjitsu-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
epjitsu-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
epjitsu-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
epjitsu-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
epjitsu-s.lo: /usr/include/time.h /usr/include/endian.h
epjitsu-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
epjitsu-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
epjitsu-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
epjitsu-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
epjitsu-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
epjitsu-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
epjitsu-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
epjitsu-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
epjitsu-s.lo: /usr/include/bits/stdio_lim.h
epson2.lo: ../include/sane/config.h epson2.h /usr/include/sys/ioctl.h
epson2.lo: /usr/include/features.h /usr/include/sys/cdefs.h
epson2.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
epson2.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/ioctls.h
epson2.lo: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
epson2.lo: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
epson2.lo: /usr/include/asm-generic/ioctl.h /usr/include/bits/ioctl-types.h
epson2.lo: /usr/include/sys/ttydefaults.h /usr/include/sys/types.h
epson2.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
epson2.lo: /usr/include/time.h /usr/include/endian.h
epson2.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
epson2.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
epson2.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
epson2.lo: /usr/include/bits/pthreadtypes.h ../include/sane/sane.h
epson2.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
epson2.lo: ../include/sane/sanei.h /usr/include/fcntl.h
epson2.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
epson2.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
epson2.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
epson2.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
epson2.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
epson2.lo: /usr/include/bits/stdio_lim.h /usr/include/stdio.h
epson2.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
epson2.lo: /usr/include/bits/sys_errlist.h /usr/include/string.h
epson2.lo: /usr/include/xlocale.h /usr/include/stdlib.h
epson2.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
epson2.lo: /usr/include/alloca.h /usr/include/ctype.h /usr/include/unistd.h
epson2.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
epson2.lo: /usr/include/bits/confname.h ../include/getopt.h
epson2.lo: /usr/include/errno.h /usr/include/bits/errno.h
epson2.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
epson2.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
epson2.lo: /usr/include/asm-generic/errno-base.h /usr/include/sys/time.h
epson2.lo: ../include/byteorder.h /usr/include/arpa/inet.h
epson2.lo: /usr/include/netinet/in.h /usr/include/stdint.h
epson2.lo: /usr/include/bits/wchar.h /usr/include/sys/socket.h
epson2.lo: /usr/include/sys/uio.h /usr/include/bits/socket.h
epson2.lo: /usr/include/bits/sockaddr.h /usr/include/asm/socket.h
epson2.lo: /usr/include/asm-i386/socket.h /usr/include/asm/sockios.h
epson2.lo: /usr/include/asm-i386/sockios.h /usr/include/bits/in.h
epson2.lo: /usr/include/bits/byteswap.h /usr/include/byteswap.h
epson2.lo: ../include/_stdint.h ../include/sane/saneopts.h
epson2.lo: ../include/sane/sanei_scsi.h ../include/sane/sanei_usb.h
epson2.lo: ../include/sane/config.h ../include/sane/sane.h
epson2.lo: ../include/sane/sanei_pio.h ../include/sane/sanei_tcp.h
epson2.lo: /usr/include/netdb.h /usr/include/rpc/netdb.h
epson2.lo: /usr/include/bits/siginfo.h /usr/include/bits/netdb.h
epson2.lo: ../include/sane/sanei_udp.h ../include/sane/sanei_config.h
epson2.lo: epson2-io.h epson2-commands.h epson2_scsi.h epson_usb.h
epson2.lo: epson2_net.h
epson2-commands.lo: ../include/sane/config.h /usr/include/stdio.h
epson2-commands.lo: /usr/include/features.h /usr/include/sys/cdefs.h
epson2-commands.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
epson2-commands.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
epson2-commands.lo: /usr/include/bits/typesizes.h /usr/include/libio.h
epson2-commands.lo: /usr/include/_G_config.h /usr/include/wchar.h
epson2-commands.lo: /usr/include/bits/stdio_lim.h
epson2-commands.lo: /usr/include/bits/sys_errlist.h /usr/include/string.h
epson2-commands.lo: /usr/include/xlocale.h /usr/include/stdlib.h
epson2-commands.lo: /usr/include/bits/waitflags.h
epson2-commands.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
epson2-commands.lo: /usr/include/bits/endian.h /usr/include/sys/types.h
epson2-commands.lo: /usr/include/time.h /usr/include/sys/select.h
epson2-commands.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
epson2-commands.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
epson2-commands.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
epson2-commands.lo: ../include/byteorder.h /usr/include/arpa/inet.h
epson2-commands.lo: /usr/include/netinet/in.h /usr/include/stdint.h
epson2-commands.lo: /usr/include/bits/wchar.h /usr/include/sys/socket.h
epson2-commands.lo: /usr/include/sys/uio.h /usr/include/bits/uio.h
epson2-commands.lo: /usr/include/bits/socket.h /usr/include/limits.h
epson2-commands.lo: /usr/include/bits/posix1_lim.h
epson2-commands.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
epson2-commands.lo: /usr/include/bits/posix2_lim.h
epson2-commands.lo: /usr/include/bits/xopen_lim.h
epson2-commands.lo: /usr/include/bits/sockaddr.h /usr/include/asm/socket.h
epson2-commands.lo: /usr/include/asm-i386/socket.h /usr/include/asm/sockios.h
epson2-commands.lo: /usr/include/asm-i386/sockios.h /usr/include/bits/in.h
epson2-commands.lo: /usr/include/bits/byteswap.h /usr/include/byteswap.h
epson2-commands.lo: ../include/_stdint.h epson2.h /usr/include/sys/ioctl.h
epson2-commands.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
epson2-commands.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
epson2-commands.lo: /usr/include/asm-i386/ioctl.h
epson2-commands.lo: /usr/include/asm-generic/ioctl.h
epson2-commands.lo: /usr/include/bits/ioctl-types.h
epson2-commands.lo: /usr/include/sys/ttydefaults.h ../include/sane/sane.h
epson2-commands.lo: ../include/sane/sanei_backend.h
epson2-commands.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
epson2-commands.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
epson2-commands.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
epson2-commands.lo: epson2-io.h epson2-commands.h
epson2-io.lo: ../include/sane/config.h /usr/include/string.h
epson2-io.lo: /usr/include/features.h /usr/include/sys/cdefs.h
epson2-io.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
epson2-io.lo: /usr/include/gnu/stubs-32.h /usr/include/xlocale.h
epson2-io.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
epson2-io.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
epson2-io.lo: /usr/include/bits/endian.h /usr/include/sys/types.h
epson2-io.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
epson2-io.lo: /usr/include/time.h /usr/include/sys/select.h
epson2-io.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
epson2-io.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
epson2-io.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
epson2-io.lo: /usr/include/ctype.h ../include/byteorder.h
epson2-io.lo: /usr/include/arpa/inet.h /usr/include/netinet/in.h
epson2-io.lo: /usr/include/stdint.h /usr/include/bits/wchar.h
epson2-io.lo: /usr/include/sys/socket.h /usr/include/sys/uio.h
epson2-io.lo: /usr/include/bits/uio.h /usr/include/bits/socket.h
epson2-io.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
epson2-io.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
epson2-io.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
epson2-io.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sockaddr.h
epson2-io.lo: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
epson2-io.lo: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
epson2-io.lo: /usr/include/bits/in.h /usr/include/bits/byteswap.h
epson2-io.lo: /usr/include/byteswap.h ../include/_stdint.h epson2.h
epson2-io.lo: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
epson2-io.lo: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
epson2-io.lo: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
epson2-io.lo: /usr/include/asm-generic/ioctl.h
epson2-io.lo: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
epson2-io.lo: ../include/sane/sane.h ../include/sane/sanei_backend.h
epson2-io.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
epson2-io.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
epson2-io.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h epson2-io.h
epson2-io.lo: ../include/sane/sanei_scsi.h ../include/sane/sanei_usb.h
epson2-io.lo: ../include/sane/config.h ../include/sane/sane.h
epson2-io.lo: ../include/sane/sanei_pio.h ../include/sane/sanei_tcp.h
epson2-io.lo: /usr/include/netdb.h /usr/include/rpc/netdb.h
epson2-io.lo: /usr/include/bits/siginfo.h /usr/include/bits/netdb.h
epson2-io.lo: epson2_scsi.h epson_usb.h epson2_net.h
epson2_net.lo: ../include/sane/config.h ../include/sane/sane.h
epson2_net.lo: ../include/sane/saneopts.h ../include/sane/sanei_tcp.h
epson2_net.lo: /usr/include/netinet/in.h /usr/include/features.h
epson2_net.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
epson2_net.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
epson2_net.lo: /usr/include/stdint.h /usr/include/bits/wchar.h
epson2_net.lo: /usr/include/sys/socket.h /usr/include/sys/uio.h
epson2_net.lo: /usr/include/sys/types.h /usr/include/bits/types.h
epson2_net.lo: /usr/include/bits/typesizes.h /usr/include/time.h
epson2_net.lo: /usr/include/endian.h /usr/include/bits/endian.h
epson2_net.lo: /usr/include/sys/select.h /usr/include/bits/select.h
epson2_net.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
epson2_net.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
epson2_net.lo: /usr/include/bits/uio.h /usr/include/bits/socket.h
epson2_net.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
epson2_net.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
epson2_net.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
epson2_net.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sockaddr.h
epson2_net.lo: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
epson2_net.lo: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
epson2_net.lo: /usr/include/bits/in.h /usr/include/bits/byteswap.h
epson2_net.lo: /usr/include/netdb.h /usr/include/rpc/netdb.h
epson2_net.lo: /usr/include/bits/siginfo.h /usr/include/bits/netdb.h
epson2_net.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
epson2_net.lo: /usr/include/libio.h /usr/include/_G_config.h
epson2_net.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
epson2_net.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
epson2_net.lo: ../include/sane/sanei.h /usr/include/fcntl.h
epson2_net.lo: /usr/include/bits/fcntl.h /usr/include/sys/stat.h
epson2_net.lo: /usr/include/bits/stat.h epson2.h /usr/include/sys/ioctl.h
epson2_net.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
epson2_net.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
epson2_net.lo: /usr/include/asm-i386/ioctl.h /usr/include/asm-generic/ioctl.h
epson2_net.lo: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
epson2_net.lo: epson2_net.h ../include/byteorder.h /usr/include/arpa/inet.h
epson2_net.lo: /usr/include/byteswap.h ../include/_stdint.h
epson2_net.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
epson2_net.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
epson2_net.lo: /usr/include/alloca.h /usr/include/string.h
epson2-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
epson2-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
epson2-s.lo: /usr/include/fcntl.h /usr/include/features.h
epson2-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
epson2-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
epson2-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
epson2-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
epson2-s.lo: /usr/include/time.h /usr/include/endian.h
epson2-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
epson2-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
epson2-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
epson2-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
epson2-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
epson2-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
epson2-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
epson2-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
epson2-s.lo: /usr/include/bits/stdio_lim.h
epson2_scsi.lo: ../include/sane/config.h ../include/sane/sanei_debug.h
epson2_scsi.lo: ../include/sane/sanei.h ../include/sane/sane.h
epson2_scsi.lo: ../include/sane/sanei_scsi.h /usr/include/sys/types.h
epson2_scsi.lo: /usr/include/features.h /usr/include/sys/cdefs.h
epson2_scsi.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
epson2_scsi.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
epson2_scsi.lo: /usr/include/bits/typesizes.h /usr/include/time.h
epson2_scsi.lo: /usr/include/endian.h /usr/include/bits/endian.h
epson2_scsi.lo: /usr/include/sys/select.h /usr/include/bits/select.h
epson2_scsi.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
epson2_scsi.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
epson2_scsi.lo: epson2_scsi.h /usr/include/stdlib.h
epson2_scsi.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
epson2_scsi.lo: /usr/include/xlocale.h /usr/include/alloca.h
epson2_scsi.lo: /usr/include/string.h /usr/include/stdio.h
epson2_scsi.lo: /usr/include/libio.h /usr/include/_G_config.h
epson2_scsi.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
epson2_scsi.lo: /usr/include/bits/sys_errlist.h
epson.lo: ../include/sane/config.h ../include/lalloca.h /usr/include/limits.h
epson.lo: /usr/include/features.h /usr/include/sys/cdefs.h
epson.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
epson.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/posix1_lim.h
epson.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
epson.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
epson.lo: /usr/include/bits/stdio_lim.h /usr/include/stdio.h
epson.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
epson.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
epson.lo: /usr/include/bits/sys_errlist.h /usr/include/string.h
epson.lo: /usr/include/xlocale.h /usr/include/stdlib.h
epson.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
epson.lo: /usr/include/endian.h /usr/include/bits/endian.h
epson.lo: /usr/include/sys/types.h /usr/include/time.h
epson.lo: /usr/include/sys/select.h /usr/include/bits/select.h
epson.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
epson.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
epson.lo: /usr/include/alloca.h /usr/include/ctype.h /usr/include/fcntl.h
epson.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
epson.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
epson.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
epson.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
epson.lo: ../include/getopt.h /usr/include/errno.h /usr/include/bits/errno.h
epson.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
epson.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
epson.lo: /usr/include/asm-generic/errno-base.h ../include/sane/sane.h
epson.lo: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
epson.lo: ../include/sane/sanei_usb.h ../include/sane/config.h
epson.lo: ../include/sane/sane.h ../include/sane/sanei_pio.h
epson.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
epson.lo: ../include/sane/sanei.h ../include/sane/sanei_config.h epson.h
epson.lo: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
epson.lo: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
epson.lo: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
epson.lo: /usr/include/asm-generic/ioctl.h /usr/include/bits/ioctl-types.h
epson.lo: /usr/include/sys/ttydefaults.h epson_scsi.h epson_usb.h
epson-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
epson-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
epson-s.lo: /usr/include/fcntl.h /usr/include/features.h
epson-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
epson-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
epson-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
epson-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
epson-s.lo: /usr/include/time.h /usr/include/endian.h
epson-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
epson-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
epson-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
epson-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
epson-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
epson-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
epson-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
epson-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
epson-s.lo: /usr/include/bits/stdio_lim.h
epson_scsi.lo: ../include/sane/config.h ../include/sane/sanei_debug.h
epson_scsi.lo: ../include/sane/sanei.h ../include/sane/sane.h
epson_scsi.lo: ../include/sane/sanei_scsi.h /usr/include/sys/types.h
epson_scsi.lo: /usr/include/features.h /usr/include/sys/cdefs.h
epson_scsi.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
epson_scsi.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
epson_scsi.lo: /usr/include/bits/typesizes.h /usr/include/time.h
epson_scsi.lo: /usr/include/endian.h /usr/include/bits/endian.h
epson_scsi.lo: /usr/include/sys/select.h /usr/include/bits/select.h
epson_scsi.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
epson_scsi.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
epson_scsi.lo: epson_scsi.h ../include/lalloca.h /usr/include/stdlib.h
epson_scsi.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
epson_scsi.lo: /usr/include/xlocale.h /usr/include/alloca.h
epson_scsi.lo: /usr/include/string.h /usr/include/stdio.h
epson_scsi.lo: /usr/include/libio.h /usr/include/_G_config.h
epson_scsi.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
epson_scsi.lo: /usr/include/bits/sys_errlist.h
epson_usb.lo: /usr/include/sys/types.h /usr/include/features.h
epson_usb.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
epson_usb.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
epson_usb.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
epson_usb.lo: /usr/include/time.h /usr/include/endian.h
epson_usb.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
epson_usb.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
epson_usb.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
epson_usb.lo: /usr/include/bits/pthreadtypes.h ../include/sane/sanei_usb.h
epson_usb.lo: ../include/sane/config.h ../include/sane/sane.h
epson_usb.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
epson_usb.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
epson_usb.lo: /usr/include/alloca.h epson_usb.h
fujitsu.lo: ../include/sane/config.h /usr/include/errno.h
fujitsu.lo: /usr/include/features.h /usr/include/sys/cdefs.h
fujitsu.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
fujitsu.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
fujitsu.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
fujitsu.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
fujitsu.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
fujitsu.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
fujitsu.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
fujitsu.lo: /usr/include/time.h /usr/include/endian.h
fujitsu.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
fujitsu.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
fujitsu.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
fujitsu.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
fujitsu.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
fujitsu.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
fujitsu.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
fujitsu.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
fujitsu.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
fujitsu.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
fujitsu.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
fujitsu.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
fujitsu.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
fujitsu.lo: /usr/include/libio.h /usr/include/_G_config.h
fujitsu.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
fujitsu.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
fujitsu.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
fujitsu.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/ctype.h
fujitsu.lo: /usr/include/math.h /usr/include/bits/huge_val.h
fujitsu.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
fujitsu.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
fujitsu.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
fujitsu.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
fujitsu.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
fujitsu.lo: ../include/getopt.h ../include/sane/sanei_backend.h
fujitsu.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
fujitsu.lo: ../include/sane/sane.h ../include/sane/sanei_scsi.h
fujitsu.lo: ../include/sane/sanei_usb.h ../include/sane/config.h
fujitsu.lo: ../include/sane/sane.h ../include/sane/saneopts.h
fujitsu.lo: ../include/sane/sanei_config.h fujitsu-scsi.h fujitsu.h
fujitsu-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
fujitsu-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
fujitsu-s.lo: /usr/include/fcntl.h /usr/include/features.h
fujitsu-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
fujitsu-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
fujitsu-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
fujitsu-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
fujitsu-s.lo: /usr/include/time.h /usr/include/endian.h
fujitsu-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
fujitsu-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
fujitsu-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
fujitsu-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
fujitsu-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
fujitsu-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
fujitsu-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
fujitsu-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
fujitsu-s.lo: /usr/include/bits/stdio_lim.h
genesys.lo: ../include/sane/config.h /usr/include/errno.h
genesys.lo: /usr/include/features.h /usr/include/sys/cdefs.h
genesys.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
genesys.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
genesys.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
genesys.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
genesys.lo: /usr/include/asm-generic/errno-base.h /usr/include/string.h
genesys.lo: /usr/include/xlocale.h /usr/include/stdlib.h
genesys.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
genesys.lo: /usr/include/endian.h /usr/include/bits/endian.h
genesys.lo: /usr/include/sys/types.h /usr/include/bits/types.h
genesys.lo: /usr/include/bits/typesizes.h /usr/include/time.h
genesys.lo: /usr/include/sys/select.h /usr/include/bits/select.h
genesys.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
genesys.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
genesys.lo: /usr/include/alloca.h /usr/include/unistd.h
genesys.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
genesys.lo: /usr/include/bits/confname.h ../include/getopt.h
genesys.lo: /usr/include/math.h /usr/include/bits/huge_val.h
genesys.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
genesys.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
genesys.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
genesys.lo: ../include/sane/sane.h ../include/sane/sanei.h
genesys.lo: ../include/sane/sane.h ../include/sane/saneopts.h
genesys.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
genesys.lo: ../include/sane/sanei.h /usr/include/fcntl.h
genesys.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
genesys.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
genesys.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
genesys.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
genesys.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
genesys.lo: /usr/include/bits/stdio_lim.h ../include/sane/sanei_usb.h
genesys.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
genesys.lo: /usr/include/libio.h /usr/include/_G_config.h
genesys.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h genesys.h
genesys.lo: genesys_low.h genesys_devices.c genesys_conv.c genesys_conv_hlp.c
genesys_conv.lo: genesys_conv_hlp.c
genesys_gl646.lo: ../include/sane/config.h /usr/include/errno.h
genesys_gl646.lo: /usr/include/features.h /usr/include/sys/cdefs.h
genesys_gl646.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
genesys_gl646.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
genesys_gl646.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
genesys_gl646.lo: /usr/include/asm-i386/errno.h
genesys_gl646.lo: /usr/include/asm-generic/errno.h
genesys_gl646.lo: /usr/include/asm-generic/errno-base.h /usr/include/string.h
genesys_gl646.lo: /usr/include/xlocale.h /usr/include/stdlib.h
genesys_gl646.lo: /usr/include/bits/waitflags.h
genesys_gl646.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
genesys_gl646.lo: /usr/include/bits/endian.h /usr/include/sys/types.h
genesys_gl646.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
genesys_gl646.lo: /usr/include/time.h /usr/include/sys/select.h
genesys_gl646.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
genesys_gl646.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
genesys_gl646.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
genesys_gl646.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
genesys_gl646.lo: /usr/include/bits/environments.h
genesys_gl646.lo: /usr/include/bits/confname.h ../include/getopt.h
genesys_gl646.lo: /usr/include/math.h /usr/include/bits/huge_val.h
genesys_gl646.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
genesys_gl646.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
genesys_gl646.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
genesys_gl646.lo: /usr/include/sys/time.h ../include/sane/sane.h
genesys_gl646.lo: ../include/sane/sanei.h ../include/sane/sane.h
genesys_gl646.lo: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
genesys_gl646.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
genesys_gl646.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
genesys_gl646.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
genesys_gl646.lo: /usr/include/bits/stat.h /usr/include/limits.h
genesys_gl646.lo: /usr/include/bits/posix1_lim.h
genesys_gl646.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
genesys_gl646.lo: /usr/include/bits/posix2_lim.h
genesys_gl646.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
genesys_gl646.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
genesys_gl646.lo: /usr/include/libio.h /usr/include/_G_config.h
genesys_gl646.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
genesys_gl646.lo: ../include/sane/sanei_usb.h genesys.h genesys_low.h
genesys_gl841.lo: ../include/sane/config.h /usr/include/math.h
genesys_gl841.lo: /usr/include/features.h /usr/include/sys/cdefs.h
genesys_gl841.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
genesys_gl841.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/huge_val.h
genesys_gl841.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
genesys_gl841.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
genesys_gl841.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
genesys_gl841.lo: /usr/include/stdio.h /usr/include/bits/types.h
genesys_gl841.lo: /usr/include/bits/typesizes.h /usr/include/libio.h
genesys_gl841.lo: /usr/include/_G_config.h /usr/include/wchar.h
genesys_gl841.lo: /usr/include/bits/stdio_lim.h
genesys_gl841.lo: /usr/include/bits/sys_errlist.h /usr/include/string.h
genesys_gl841.lo: /usr/include/xlocale.h /usr/include/errno.h
genesys_gl841.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
genesys_gl841.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
genesys_gl841.lo: /usr/include/asm-generic/errno.h
genesys_gl841.lo: /usr/include/asm-generic/errno-base.h /usr/include/unistd.h
genesys_gl841.lo: /usr/include/bits/posix_opt.h
genesys_gl841.lo: /usr/include/bits/environments.h
genesys_gl841.lo: /usr/include/bits/confname.h ../include/getopt.h
genesys_gl841.lo: ../include/sane/sane.h ../include/sane/sanei.h
genesys_gl841.lo: ../include/sane/sane.h ../include/sane/saneopts.h
genesys_gl841.lo: ../include/sane/sanei_backend.h
genesys_gl841.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
genesys_gl841.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
genesys_gl841.lo: /usr/include/sys/types.h /usr/include/time.h
genesys_gl841.lo: /usr/include/endian.h /usr/include/bits/endian.h
genesys_gl841.lo: /usr/include/sys/select.h /usr/include/bits/select.h
genesys_gl841.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
genesys_gl841.lo: /usr/include/sys/sysmacros.h
genesys_gl841.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
genesys_gl841.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
genesys_gl841.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
genesys_gl841.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
genesys_gl841.lo: /usr/include/bits/posix2_lim.h
genesys_gl841.lo: /usr/include/bits/xopen_lim.h
genesys_gl841.lo: ../include/sane/sanei_config.h ../include/sane/sanei_usb.h
genesys_gl841.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
genesys_gl841.lo: /usr/include/bits/waitstatus.h /usr/include/alloca.h
genesys_gl841.lo: genesys.h genesys_low.h
genesys-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
genesys-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
genesys-s.lo: /usr/include/fcntl.h /usr/include/features.h
genesys-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
genesys-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
genesys-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
genesys-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
genesys-s.lo: /usr/include/time.h /usr/include/endian.h
genesys-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
genesys-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
genesys-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
genesys-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
genesys-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
genesys-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
genesys-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
genesys-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
genesys-s.lo: /usr/include/bits/stdio_lim.h
gphoto2.lo: ../include/sane/config.h /usr/include/stdlib.h
gphoto2.lo: /usr/include/features.h /usr/include/sys/cdefs.h
gphoto2.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
gphoto2.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
gphoto2.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
gphoto2.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
gphoto2.lo: /usr/include/sys/types.h /usr/include/bits/types.h
gphoto2.lo: /usr/include/bits/typesizes.h /usr/include/time.h
gphoto2.lo: /usr/include/sys/select.h /usr/include/bits/select.h
gphoto2.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
gphoto2.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
gphoto2.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/stdio.h
gphoto2.lo: /usr/include/libio.h /usr/include/_G_config.h
gphoto2.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
gphoto2.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
gphoto2.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
gphoto2.lo: /usr/include/bits/confname.h ../include/getopt.h
gphoto2.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
gphoto2.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
gphoto2.lo: /usr/include/bits/stat.h /usr/include/limits.h
gphoto2.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
gphoto2.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
gphoto2.lo: /usr/include/bits/xopen_lim.h ../include/sane/sanei_jpeg.h
gphoto2.lo: ../include/sane/sanei_jinclude.h /usr/include/jconfig.h
gphoto2.lo: /usr/include/jpeglib.h /usr/include/jmorecfg.h
gphoto2.lo: /usr/include/jerror.h ../include/sane/sanei_cderror.h
gphoto2.lo: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
gphoto2.lo: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
gphoto2.lo: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
gphoto2.lo: /usr/include/asm-generic/ioctl.h /usr/include/bits/ioctl-types.h
gphoto2.lo: /usr/include/sys/ttydefaults.h ../include/sane/sane.h
gphoto2.lo: ../include/sane/sanei.h ../include/sane/saneopts.h
gphoto2.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
gphoto2.lo: gphoto2.h /usr/include/termios.h /usr/include/bits/termios.h
gphoto2.lo: /usr/include/sys/time.h
gphoto2-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
gphoto2-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
gphoto2-s.lo: /usr/include/fcntl.h /usr/include/features.h
gphoto2-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
gphoto2-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
gphoto2-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
gphoto2-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
gphoto2-s.lo: /usr/include/time.h /usr/include/endian.h
gphoto2-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
gphoto2-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
gphoto2-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
gphoto2-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
gphoto2-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
gphoto2-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
gphoto2-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
gphoto2-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
gphoto2-s.lo: /usr/include/bits/stdio_lim.h
gt68xx.lo: ../include/sane/config.h /usr/include/ctype.h
gt68xx.lo: /usr/include/features.h /usr/include/sys/cdefs.h
gt68xx.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
gt68xx.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
gt68xx.lo: /usr/include/bits/typesizes.h /usr/include/endian.h
gt68xx.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
gt68xx.lo: /usr/include/errno.h /usr/include/bits/errno.h
gt68xx.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
gt68xx.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
gt68xx.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
gt68xx.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
gt68xx.lo: /usr/include/time.h /usr/include/sys/select.h
gt68xx.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
gt68xx.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
gt68xx.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
gt68xx.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
gt68xx.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
gt68xx.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
gt68xx.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
gt68xx.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
gt68xx.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
gt68xx.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
gt68xx.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
gt68xx.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
gt68xx.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
gt68xx.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
gt68xx.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
gt68xx.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
gt68xx.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
gt68xx.lo: /usr/include/bits/confname.h ../include/getopt.h
gt68xx.lo: /usr/include/sys/time.h /usr/include/math.h
gt68xx.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
gt68xx.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
gt68xx.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
gt68xx.lo: /usr/include/bits/mathcalls.h /usr/include/dirent.h
gt68xx.lo: /usr/include/bits/dirent.h ../include/sane/sane.h
gt68xx.lo: ../include/sane/sanei.h ../include/sane/sane.h
gt68xx.lo: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
gt68xx.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
gt68xx.lo: ../include/sane/sanei_config.h gt68xx.h gt68xx_high.h gt68xx_mid.h
gt68xx.lo: gt68xx_low.h gt68xx_shm_channel.h gt68xx_high.c gt68xx_mid.c
gt68xx.lo: gt68xx_low.c ../include/sane/sanei_debug.h
gt68xx.lo: ../include/sane/sanei_usb.h /usr/include/sys/wait.h
gt68xx.lo: /usr/include/sys/resource.h /usr/include/bits/resource.h
gt68xx.lo: gt68xx_shm_channel.c /usr/include/sys/ipc.h
gt68xx.lo: /usr/include/bits/ipctypes.h /usr/include/bits/ipc.h
gt68xx.lo: /usr/include/sys/shm.h /usr/include/bits/shm.h gt68xx_devices.c
gt68xx.lo: gt68xx_generic.c gt68xx_generic.h gt68xx_gt6801.c gt68xx_gt6801.h
gt68xx.lo: gt68xx_gt6816.c gt68xx_gt6816.h
gt68xx_devices.lo: gt68xx_low.h ../include/sane/sane.h
gt68xx_devices.lo: /usr/include/sys/types.h /usr/include/features.h
gt68xx_devices.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
gt68xx_devices.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
gt68xx_devices.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
gt68xx_devices.lo: /usr/include/time.h /usr/include/endian.h
gt68xx_devices.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
gt68xx_devices.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
gt68xx_devices.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
gt68xx_devices.lo: /usr/include/bits/pthreadtypes.h gt68xx_shm_channel.h
gt68xx_devices.lo: gt68xx_generic.c gt68xx_generic.h gt68xx_gt6801.c
gt68xx_devices.lo: gt68xx_gt6801.h gt68xx_gt6816.c gt68xx_gt6816.h
gt68xx_generic.lo: gt68xx_generic.h gt68xx_low.h ../include/sane/sane.h
gt68xx_generic.lo: /usr/include/sys/types.h /usr/include/features.h
gt68xx_generic.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
gt68xx_generic.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
gt68xx_generic.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
gt68xx_generic.lo: /usr/include/time.h /usr/include/endian.h
gt68xx_generic.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
gt68xx_generic.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
gt68xx_generic.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
gt68xx_generic.lo: /usr/include/bits/pthreadtypes.h gt68xx_shm_channel.h
gt68xx_gt6801.lo: gt68xx_gt6801.h
gt68xx_gt6816.lo: gt68xx_gt6816.h
gt68xx_high.lo: gt68xx_high.h gt68xx_mid.h gt68xx_low.h
gt68xx_high.lo: ../include/sane/sane.h /usr/include/sys/types.h
gt68xx_high.lo: /usr/include/features.h /usr/include/sys/cdefs.h
gt68xx_high.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
gt68xx_high.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
gt68xx_high.lo: /usr/include/bits/typesizes.h /usr/include/time.h
gt68xx_high.lo: /usr/include/endian.h /usr/include/bits/endian.h
gt68xx_high.lo: /usr/include/sys/select.h /usr/include/bits/select.h
gt68xx_high.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
gt68xx_high.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
gt68xx_high.lo: gt68xx_shm_channel.h gt68xx_mid.c gt68xx_low.c
gt68xx_high.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
gt68xx_high.lo: ../include/sane/sane.h ../include/sane/sanei_usb.h
gt68xx_high.lo: ../include/sane/config.h /usr/include/stdlib.h
gt68xx_high.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
gt68xx_high.lo: /usr/include/xlocale.h /usr/include/alloca.h
gt68xx_high.lo: /usr/include/string.h /usr/include/sys/wait.h
gt68xx_high.lo: /usr/include/signal.h /usr/include/bits/signum.h
gt68xx_high.lo: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
gt68xx_high.lo: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
gt68xx_high.lo: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
gt68xx_high.lo: /usr/include/sys/resource.h /usr/include/bits/resource.h
gt68xx_high.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
gt68xx_high.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
gt68xx_high.lo: ../include/getopt.h gt68xx_shm_channel.c
gt68xx_high.lo: /usr/include/sys/ipc.h /usr/include/bits/ipctypes.h
gt68xx_high.lo: /usr/include/bits/ipc.h /usr/include/sys/shm.h
gt68xx_high.lo: /usr/include/bits/shm.h /usr/include/fcntl.h
gt68xx_high.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
gt68xx_high.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
gt68xx_high.lo: /usr/include/errno.h /usr/include/bits/errno.h
gt68xx_high.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
gt68xx_high.lo: /usr/include/asm-i386/errno.h
gt68xx_high.lo: /usr/include/asm-generic/errno.h
gt68xx_high.lo: /usr/include/asm-generic/errno-base.h /usr/include/math.h
gt68xx_high.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
gt68xx_high.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
gt68xx_high.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
gt68xx_high.lo: /usr/include/bits/mathcalls.h
gt68xx_low.lo: gt68xx_low.h ../include/sane/sane.h /usr/include/sys/types.h
gt68xx_low.lo: /usr/include/features.h /usr/include/sys/cdefs.h
gt68xx_low.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
gt68xx_low.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
gt68xx_low.lo: /usr/include/bits/typesizes.h /usr/include/time.h
gt68xx_low.lo: /usr/include/endian.h /usr/include/bits/endian.h
gt68xx_low.lo: /usr/include/sys/select.h /usr/include/bits/select.h
gt68xx_low.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
gt68xx_low.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
gt68xx_low.lo: gt68xx_shm_channel.h ../include/sane/sanei_debug.h
gt68xx_low.lo: ../include/sane/sanei.h ../include/sane/sane.h
gt68xx_low.lo: ../include/sane/sanei_usb.h ../include/sane/config.h
gt68xx_low.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
gt68xx_low.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
gt68xx_low.lo: /usr/include/alloca.h /usr/include/string.h
gt68xx_mid.lo: gt68xx_mid.h gt68xx_low.h ../include/sane/sane.h
gt68xx_mid.lo: /usr/include/sys/types.h /usr/include/features.h
gt68xx_mid.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
gt68xx_mid.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
gt68xx_mid.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
gt68xx_mid.lo: /usr/include/time.h /usr/include/endian.h
gt68xx_mid.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
gt68xx_mid.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
gt68xx_mid.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
gt68xx_mid.lo: /usr/include/bits/pthreadtypes.h gt68xx_shm_channel.h
gt68xx_mid.lo: gt68xx_low.c ../include/sane/sanei_debug.h
gt68xx_mid.lo: ../include/sane/sanei.h ../include/sane/sane.h
gt68xx_mid.lo: ../include/sane/sanei_usb.h ../include/sane/config.h
gt68xx_mid.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
gt68xx_mid.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
gt68xx_mid.lo: /usr/include/alloca.h /usr/include/string.h
gt68xx_mid.lo: /usr/include/sys/wait.h /usr/include/signal.h
gt68xx_mid.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
gt68xx_mid.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
gt68xx_mid.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
gt68xx_mid.lo: /usr/include/bits/sigthread.h /usr/include/sys/resource.h
gt68xx_mid.lo: /usr/include/bits/resource.h /usr/include/unistd.h
gt68xx_mid.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
gt68xx_mid.lo: /usr/include/bits/confname.h ../include/getopt.h
gt68xx_mid.lo: gt68xx_shm_channel.c /usr/include/sys/ipc.h
gt68xx_mid.lo: /usr/include/bits/ipctypes.h /usr/include/bits/ipc.h
gt68xx_mid.lo: /usr/include/sys/shm.h /usr/include/bits/shm.h
gt68xx_mid.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
gt68xx_mid.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
gt68xx_mid.lo: /usr/include/bits/stat.h /usr/include/errno.h
gt68xx_mid.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
gt68xx_mid.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
gt68xx_mid.lo: /usr/include/asm-generic/errno.h
gt68xx_mid.lo: /usr/include/asm-generic/errno-base.h
gt68xx-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
gt68xx-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
gt68xx-s.lo: /usr/include/fcntl.h /usr/include/features.h
gt68xx-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
gt68xx-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
gt68xx-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
gt68xx-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
gt68xx-s.lo: /usr/include/time.h /usr/include/endian.h
gt68xx-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
gt68xx-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
gt68xx-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
gt68xx-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
gt68xx-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
gt68xx-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
gt68xx-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
gt68xx-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
gt68xx-s.lo: /usr/include/bits/stdio_lim.h
gt68xx_shm_channel.lo: gt68xx_shm_channel.h ../include/sane/sane.h
gt68xx_shm_channel.lo: /usr/include/sys/types.h /usr/include/features.h
gt68xx_shm_channel.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
gt68xx_shm_channel.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
gt68xx_shm_channel.lo: /usr/include/bits/types.h
gt68xx_shm_channel.lo: /usr/include/bits/typesizes.h /usr/include/time.h
gt68xx_shm_channel.lo: /usr/include/endian.h /usr/include/bits/endian.h
gt68xx_shm_channel.lo: /usr/include/sys/select.h /usr/include/bits/select.h
gt68xx_shm_channel.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
gt68xx_shm_channel.lo: /usr/include/sys/sysmacros.h
gt68xx_shm_channel.lo: /usr/include/bits/pthreadtypes.h
gt68xx_shm_channel.lo: /usr/include/sys/ipc.h /usr/include/bits/ipctypes.h
gt68xx_shm_channel.lo: /usr/include/bits/ipc.h /usr/include/sys/shm.h
gt68xx_shm_channel.lo: /usr/include/bits/shm.h /usr/include/unistd.h
gt68xx_shm_channel.lo: /usr/include/bits/posix_opt.h
gt68xx_shm_channel.lo: /usr/include/bits/environments.h
gt68xx_shm_channel.lo: /usr/include/bits/confname.h ../include/getopt.h
gt68xx_shm_channel.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
gt68xx_shm_channel.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
gt68xx_shm_channel.lo: /usr/include/bits/stat.h /usr/include/errno.h
gt68xx_shm_channel.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
gt68xx_shm_channel.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
gt68xx_shm_channel.lo: /usr/include/asm-generic/errno.h
gt68xx_shm_channel.lo: /usr/include/asm-generic/errno-base.h
hp3500.lo: ../include/sane/config.h /usr/include/errno.h
hp3500.lo: /usr/include/features.h /usr/include/sys/cdefs.h
hp3500.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp3500.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
hp3500.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
hp3500.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
hp3500.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
hp3500.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hp3500.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp3500.lo: /usr/include/time.h /usr/include/endian.h
hp3500.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
hp3500.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp3500.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp3500.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hp3500.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
hp3500.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp3500.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp3500.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp3500.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
hp3500.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
hp3500.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
hp3500.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
hp3500.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
hp3500.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
hp3500.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
hp3500.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
hp3500.lo: /usr/include/xlocale.h /usr/include/alloca.h /usr/include/string.h
hp3500.lo: /usr/include/ctype.h /usr/include/unistd.h
hp3500.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
hp3500.lo: /usr/include/bits/confname.h ../include/getopt.h
hp3500.lo: ../include/sane/sane.h ../include/sane/sanei_usb.h
hp3500.lo: ../include/sane/config.h ../include/sane/sane.h
hp3500.lo: ../include/sane/saneopts.h ../include/sane/sanei_config.h
hp3500.lo: ../include/sane/sanei_thread.h ../include/sane/sanei_backend.h
hp3500.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
hp3500-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hp3500-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
hp3500-s.lo: /usr/include/fcntl.h /usr/include/features.h
hp3500-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp3500-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp3500-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hp3500-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp3500-s.lo: /usr/include/time.h /usr/include/endian.h
hp3500-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
hp3500-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp3500-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp3500-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hp3500-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
hp3500-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp3500-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp3500-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp3500-s.lo: /usr/include/bits/stdio_lim.h
hp3900.lo: hp3900_sane.c ../include/sane/config.h ../include/sane/sane.h
hp3900.lo: ../include/sane/sanei.h ../include/sane/sane.h
hp3900.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hp3900.lo: ../include/sane/sanei.h /usr/include/fcntl.h
hp3900.lo: /usr/include/features.h /usr/include/sys/cdefs.h
hp3900.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp3900.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
hp3900.lo: /usr/include/sys/types.h /usr/include/bits/types.h
hp3900.lo: /usr/include/bits/typesizes.h /usr/include/time.h
hp3900.lo: /usr/include/endian.h /usr/include/bits/endian.h
hp3900.lo: /usr/include/sys/select.h /usr/include/bits/select.h
hp3900.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp3900.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp3900.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
hp3900.lo: /usr/include/bits/stat.h /usr/include/limits.h
hp3900.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
hp3900.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
hp3900.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
hp3900.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
hp3900.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
hp3900.lo: /usr/include/bits/sys_errlist.h ../include/sane/saneopts.h
hp3900.lo: ../include/sane/sanei_usb.h /usr/include/stdlib.h
hp3900.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
hp3900.lo: /usr/include/xlocale.h /usr/include/alloca.h
hp3900.lo: ../include/sane/sanei_debug.h hp3900_rts8822.c
hp3900.lo: /usr/include/string.h /usr/include/math.h
hp3900.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
hp3900.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
hp3900.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
hp3900.lo: /usr/include/bits/mathcalls.h /usr/include/ctype.h
hp3900.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
hp3900.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
hp3900.lo: ../include/getopt.h hp3900_types.c hp3900_debug.c
hp3900.lo: /usr/include/tiffio.h /usr/include/tiff.h /usr/include/tiffconf.h
hp3900.lo: /usr/include/tiffvers.h hp3900_config.c hp3900_usb.c
hp3900_rts8822.lo: /usr/include/stdio.h /usr/include/features.h
hp3900_rts8822.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp3900_rts8822.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp3900_rts8822.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp3900_rts8822.lo: /usr/include/libio.h /usr/include/_G_config.h
hp3900_rts8822.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
hp3900_rts8822.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
hp3900_rts8822.lo: /usr/include/bits/waitflags.h
hp3900_rts8822.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
hp3900_rts8822.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
hp3900_rts8822.lo: /usr/include/sys/types.h /usr/include/time.h
hp3900_rts8822.lo: /usr/include/sys/select.h /usr/include/bits/select.h
hp3900_rts8822.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp3900_rts8822.lo: /usr/include/sys/sysmacros.h
hp3900_rts8822.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
hp3900_rts8822.lo: /usr/include/string.h /usr/include/math.h
hp3900_rts8822.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
hp3900_rts8822.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
hp3900_rts8822.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
hp3900_rts8822.lo: /usr/include/bits/mathcalls.h /usr/include/ctype.h
hp3900_rts8822.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
hp3900_rts8822.lo: /usr/include/bits/environments.h
hp3900_rts8822.lo: /usr/include/bits/confname.h ../include/getopt.h
hp3900_rts8822.lo: hp3900_types.c hp3900_debug.c /usr/include/tiffio.h
hp3900_rts8822.lo: /usr/include/tiff.h /usr/include/tiffconf.h
hp3900_rts8822.lo: /usr/include/tiffvers.h hp3900_config.c hp3900_usb.c
hp3900_sane.lo: ../include/sane/config.h ../include/sane/sane.h
hp3900_sane.lo: ../include/sane/sanei.h ../include/sane/sane.h
hp3900_sane.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hp3900_sane.lo: ../include/sane/sanei.h /usr/include/fcntl.h
hp3900_sane.lo: /usr/include/features.h /usr/include/sys/cdefs.h
hp3900_sane.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp3900_sane.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
hp3900_sane.lo: /usr/include/sys/types.h /usr/include/bits/types.h
hp3900_sane.lo: /usr/include/bits/typesizes.h /usr/include/time.h
hp3900_sane.lo: /usr/include/endian.h /usr/include/bits/endian.h
hp3900_sane.lo: /usr/include/sys/select.h /usr/include/bits/select.h
hp3900_sane.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp3900_sane.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp3900_sane.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
hp3900_sane.lo: /usr/include/bits/stat.h /usr/include/limits.h
hp3900_sane.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
hp3900_sane.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
hp3900_sane.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
hp3900_sane.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
hp3900_sane.lo: /usr/include/libio.h /usr/include/_G_config.h
hp3900_sane.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
hp3900_sane.lo: ../include/sane/saneopts.h ../include/sane/sanei_usb.h
hp3900_sane.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
hp3900_sane.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
hp3900_sane.lo: /usr/include/alloca.h ../include/sane/sanei_debug.h
hp3900_sane.lo: hp3900_rts8822.c /usr/include/string.h /usr/include/math.h
hp3900_sane.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
hp3900_sane.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
hp3900_sane.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
hp3900_sane.lo: /usr/include/bits/mathcalls.h /usr/include/ctype.h
hp3900_sane.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
hp3900_sane.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
hp3900_sane.lo: ../include/getopt.h hp3900_types.c hp3900_debug.c
hp3900_sane.lo: /usr/include/tiffio.h /usr/include/tiff.h
hp3900_sane.lo: /usr/include/tiffconf.h /usr/include/tiffvers.h
hp3900_sane.lo: hp3900_config.c hp3900_usb.c
hp3900-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hp3900-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
hp3900-s.lo: /usr/include/fcntl.h /usr/include/features.h
hp3900-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp3900-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp3900-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hp3900-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp3900-s.lo: /usr/include/time.h /usr/include/endian.h
hp3900-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
hp3900-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp3900-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp3900-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hp3900-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
hp3900-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp3900-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp3900-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp3900-s.lo: /usr/include/bits/stdio_lim.h
hp4200.lo: ../include/sane/config.h /usr/include/sys/ioctl.h
hp4200.lo: /usr/include/features.h /usr/include/sys/cdefs.h
hp4200.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp4200.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/ioctls.h
hp4200.lo: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
hp4200.lo: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
hp4200.lo: /usr/include/asm-generic/ioctl.h /usr/include/bits/ioctl-types.h
hp4200.lo: /usr/include/sys/ttydefaults.h /usr/include/stdio.h
hp4200.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp4200.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
hp4200.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
hp4200.lo: /usr/include/sys/types.h /usr/include/time.h /usr/include/endian.h
hp4200.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
hp4200.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp4200.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp4200.lo: /usr/include/bits/pthreadtypes.h /usr/include/sys/stat.h
hp4200.lo: /usr/include/bits/stat.h /usr/include/fcntl.h
hp4200.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
hp4200.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
hp4200.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
hp4200.lo: ../include/getopt.h /usr/include/string.h /usr/include/xlocale.h
hp4200.lo: /usr/include/math.h /usr/include/bits/huge_val.h
hp4200.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
hp4200.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
hp4200.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
hp4200.lo: /usr/include/sys/time.h /usr/include/stdlib.h
hp4200.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
hp4200.lo: /usr/include/alloca.h /usr/include/ctype.h /usr/include/assert.h
hp4200.lo: ../include/sane/sane.h ../include/sane/sanei.h
hp4200.lo: ../include/sane/sane.h ../include/sane/sanei_debug.h
hp4200.lo: ../include/sane/sanei.h ../include/sane/sanei_config.h
hp4200.lo: ../include/sane/sanei_usb.h ../include/sane/sanei_pv8630.h
hp4200.lo: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
hp4200.lo: ../include/sane/sanei_debug.h /usr/include/limits.h
hp4200.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
hp4200.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
hp4200.lo: /usr/include/bits/xopen_lim.h hp4200.h hp4200_lm9830.c
hp4200.lo: hp4200_lm9830.h
hp4200_lm9830.lo: hp4200_lm9830.h
hp4200-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hp4200-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
hp4200-s.lo: /usr/include/fcntl.h /usr/include/features.h
hp4200-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp4200-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp4200-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hp4200-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp4200-s.lo: /usr/include/time.h /usr/include/endian.h
hp4200-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
hp4200-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp4200-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp4200-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hp4200-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
hp4200-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp4200-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp4200-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp4200-s.lo: /usr/include/bits/stdio_lim.h
hp5400.lo: ../include/sane/config.h hp5400_debug.h
hp5400.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
hp5400.lo: ../include/sane/sane.h hp5400.h /usr/include/unistd.h
hp5400.lo: /usr/include/features.h /usr/include/sys/cdefs.h
hp5400.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp5400.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/posix_opt.h
hp5400.lo: /usr/include/bits/environments.h /usr/include/bits/types.h
hp5400.lo: /usr/include/bits/typesizes.h /usr/include/bits/confname.h
hp5400.lo: ../include/getopt.h hp5400_xfer.h /usr/include/stdio.h
hp5400.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
hp5400.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
hp5400.lo: ../include/sane/sane.h ../include/sane/sanei.h
hp5400.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hp5400.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
hp5400.lo: /usr/include/sys/types.h /usr/include/time.h /usr/include/endian.h
hp5400.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
hp5400.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp5400.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp5400.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hp5400.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
hp5400.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp5400.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp5400.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp5400.lo: ../include/sane/sanei_config.h ../include/sane/saneopts.h
hp5400.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
hp5400.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
hp5400.lo: /usr/include/alloca.h /usr/include/string.h hp5400_debug.c
hp5400.lo: hp5400_internal.c /usr/include/assert.h /usr/include/errno.h
hp5400.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
hp5400.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
hp5400.lo: /usr/include/asm-generic/errno.h
hp5400.lo: /usr/include/asm-generic/errno-base.h /usr/include/math.h
hp5400.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
hp5400.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
hp5400.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
hp5400.lo: /usr/include/bits/mathcalls.h /usr/include/netinet/in.h
hp5400.lo: /usr/include/stdint.h /usr/include/bits/wchar.h
hp5400.lo: /usr/include/sys/socket.h /usr/include/sys/uio.h
hp5400.lo: /usr/include/bits/socket.h /usr/include/bits/sockaddr.h
hp5400.lo: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
hp5400.lo: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
hp5400.lo: /usr/include/bits/in.h /usr/include/bits/byteswap.h
hp5400.lo: hp5400_internal.h hp5400_sane.c ../include/sane/sanei_usb.h
hp5400.lo: hp5400_sanei.c
hp5400_debug.lo: hp5400_debug.h ../include/sane/sanei_debug.h
hp5400_debug.lo: ../include/sane/sanei.h ../include/sane/sane.h
hp5400_internal.lo: /usr/include/stdio.h /usr/include/features.h
hp5400_internal.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp5400_internal.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp5400_internal.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp5400_internal.lo: /usr/include/libio.h /usr/include/_G_config.h
hp5400_internal.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
hp5400_internal.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
hp5400_internal.lo: /usr/include/bits/waitflags.h
hp5400_internal.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
hp5400_internal.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
hp5400_internal.lo: /usr/include/sys/types.h /usr/include/time.h
hp5400_internal.lo: /usr/include/sys/select.h /usr/include/bits/select.h
hp5400_internal.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp5400_internal.lo: /usr/include/sys/sysmacros.h
hp5400_internal.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
hp5400_internal.lo: /usr/include/assert.h /usr/include/errno.h
hp5400_internal.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
hp5400_internal.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
hp5400_internal.lo: /usr/include/asm-generic/errno.h
hp5400_internal.lo: /usr/include/asm-generic/errno-base.h
hp5400_internal.lo: /usr/include/string.h /usr/include/unistd.h
hp5400_internal.lo: /usr/include/bits/posix_opt.h
hp5400_internal.lo: /usr/include/bits/environments.h
hp5400_internal.lo: /usr/include/bits/confname.h ../include/getopt.h
hp5400_internal.lo: /usr/include/math.h /usr/include/bits/huge_val.h
hp5400_internal.lo: /usr/include/bits/huge_valf.h
hp5400_internal.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
hp5400_internal.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
hp5400_internal.lo: /usr/include/bits/mathcalls.h /usr/include/netinet/in.h
hp5400_internal.lo: /usr/include/stdint.h /usr/include/bits/wchar.h
hp5400_internal.lo: /usr/include/sys/socket.h /usr/include/sys/uio.h
hp5400_internal.lo: /usr/include/bits/uio.h /usr/include/bits/socket.h
hp5400_internal.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp5400_internal.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp5400_internal.lo: /usr/include/bits/posix2_lim.h
hp5400_internal.lo: /usr/include/bits/xopen_lim.h
hp5400_internal.lo: /usr/include/bits/sockaddr.h /usr/include/asm/socket.h
hp5400_internal.lo: /usr/include/asm-i386/socket.h /usr/include/asm/sockios.h
hp5400_internal.lo: /usr/include/asm-i386/sockios.h /usr/include/bits/in.h
hp5400_internal.lo: /usr/include/bits/byteswap.h hp5400.h hp5400_xfer.h
hp5400_internal.lo: hp5400_internal.h hp5400_debug.h
hp5400_internal.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
hp5400_internal.lo: ../include/sane/sane.h
hp5400_sane.lo: ../include/sane/config.h hp5400_debug.h
hp5400_sane.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
hp5400_sane.lo: ../include/sane/sane.h ../include/sane/sane.h
hp5400_sane.lo: ../include/sane/sanei.h ../include/sane/sanei_backend.h
hp5400_sane.lo: ../include/sane/sanei_debug.h /usr/include/fcntl.h
hp5400_sane.lo: /usr/include/features.h /usr/include/sys/cdefs.h
hp5400_sane.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp5400_sane.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
hp5400_sane.lo: /usr/include/sys/types.h /usr/include/bits/types.h
hp5400_sane.lo: /usr/include/bits/typesizes.h /usr/include/time.h
hp5400_sane.lo: /usr/include/endian.h /usr/include/bits/endian.h
hp5400_sane.lo: /usr/include/sys/select.h /usr/include/bits/select.h
hp5400_sane.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp5400_sane.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp5400_sane.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
hp5400_sane.lo: /usr/include/bits/stat.h /usr/include/limits.h
hp5400_sane.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
hp5400_sane.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
hp5400_sane.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
hp5400_sane.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
hp5400_sane.lo: /usr/include/libio.h /usr/include/_G_config.h
hp5400_sane.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
hp5400_sane.lo: ../include/sane/saneopts.h ../include/sane/sanei_usb.h
hp5400_sane.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
hp5400_sane.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
hp5400_sane.lo: /usr/include/alloca.h /usr/include/string.h
hp5400_sane.lo: /usr/include/errno.h /usr/include/bits/errno.h
hp5400_sane.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
hp5400_sane.lo: /usr/include/asm-i386/errno.h
hp5400_sane.lo: /usr/include/asm-generic/errno.h
hp5400_sane.lo: /usr/include/asm-generic/errno-base.h hp5400.h
hp5400_sane.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
hp5400_sane.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
hp5400_sane.lo: ../include/getopt.h hp5400_xfer.h
hp5400_sanei.lo: hp5400_xfer.h /usr/include/stdio.h /usr/include/features.h
hp5400_sanei.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp5400_sanei.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp5400_sanei.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp5400_sanei.lo: /usr/include/libio.h /usr/include/_G_config.h
hp5400_sanei.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
hp5400_sanei.lo: /usr/include/bits/sys_errlist.h hp5400_debug.h
hp5400_sanei.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
hp5400_sanei.lo: ../include/sane/sane.h ../include/sane/sanei_usb.h
hp5400_sanei.lo: ../include/sane/config.h ../include/sane/sane.h
hp5400_sanei.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
hp5400_sanei.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
hp5400_sanei.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
hp5400_sanei.lo: /usr/include/sys/types.h /usr/include/time.h
hp5400_sanei.lo: /usr/include/sys/select.h /usr/include/bits/select.h
hp5400_sanei.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp5400_sanei.lo: /usr/include/sys/sysmacros.h
hp5400_sanei.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
hp5400-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hp5400-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
hp5400-s.lo: /usr/include/fcntl.h /usr/include/features.h
hp5400-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp5400-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp5400-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hp5400-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp5400-s.lo: /usr/include/time.h /usr/include/endian.h
hp5400-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
hp5400-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp5400-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp5400-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hp5400-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
hp5400-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp5400-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp5400-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp5400-s.lo: /usr/include/bits/stdio_lim.h
hp5590.lo: ../include/sane/config.h /usr/include/stdio.h
hp5590.lo: /usr/include/features.h /usr/include/sys/cdefs.h
hp5590.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp5590.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
hp5590.lo: /usr/include/bits/typesizes.h /usr/include/libio.h
hp5590.lo: /usr/include/_G_config.h /usr/include/wchar.h
hp5590.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
hp5590.lo: /usr/include/string.h /usr/include/xlocale.h /usr/include/unistd.h
hp5590.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
hp5590.lo: /usr/include/bits/confname.h ../include/getopt.h
hp5590.lo: ../include/sane/sane.h ../include/sane/sanei_backend.h
hp5590.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
hp5590.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
hp5590.lo: /usr/include/sys/types.h /usr/include/time.h /usr/include/endian.h
hp5590.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
hp5590.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp5590.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp5590.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hp5590.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
hp5590.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp5590.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp5590.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp5590.lo: ../include/sane/sanei_usb.h ../include/sane/config.h
hp5590.lo: ../include/sane/sane.h /usr/include/stdlib.h
hp5590.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
hp5590.lo: /usr/include/alloca.h ../include/sane/saneopts.h hp5590_cmds.c
hp5590.lo: /usr/include/netinet/in.h /usr/include/stdint.h
hp5590.lo: /usr/include/bits/wchar.h /usr/include/sys/socket.h
hp5590.lo: /usr/include/sys/uio.h /usr/include/bits/socket.h
hp5590.lo: /usr/include/bits/sockaddr.h /usr/include/asm/socket.h
hp5590.lo: /usr/include/asm-i386/socket.h /usr/include/asm/sockios.h
hp5590.lo: /usr/include/asm-i386/sockios.h /usr/include/bits/in.h
hp5590.lo: /usr/include/bits/byteswap.h /usr/include/errno.h
hp5590.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
hp5590.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
hp5590.lo: /usr/include/asm-generic/errno.h
hp5590.lo: /usr/include/asm-generic/errno-base.h hp5590_low.h hp5590_cmds.h
hp5590.lo: hp5590_low.c
hp5590_cmds.lo: ../include/sane/config.h /usr/include/unistd.h
hp5590_cmds.lo: /usr/include/features.h /usr/include/sys/cdefs.h
hp5590_cmds.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp5590_cmds.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/posix_opt.h
hp5590_cmds.lo: /usr/include/bits/environments.h /usr/include/bits/types.h
hp5590_cmds.lo: /usr/include/bits/typesizes.h /usr/include/bits/confname.h
hp5590_cmds.lo: ../include/getopt.h /usr/include/netinet/in.h
hp5590_cmds.lo: /usr/include/stdint.h /usr/include/bits/wchar.h
hp5590_cmds.lo: /usr/include/sys/socket.h /usr/include/sys/uio.h
hp5590_cmds.lo: /usr/include/sys/types.h /usr/include/time.h
hp5590_cmds.lo: /usr/include/endian.h /usr/include/bits/endian.h
hp5590_cmds.lo: /usr/include/sys/select.h /usr/include/bits/select.h
hp5590_cmds.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp5590_cmds.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp5590_cmds.lo: /usr/include/bits/uio.h /usr/include/bits/socket.h
hp5590_cmds.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp5590_cmds.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp5590_cmds.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp5590_cmds.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sockaddr.h
hp5590_cmds.lo: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
hp5590_cmds.lo: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
hp5590_cmds.lo: /usr/include/bits/in.h /usr/include/bits/byteswap.h
hp5590_cmds.lo: /usr/include/errno.h /usr/include/bits/errno.h
hp5590_cmds.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
hp5590_cmds.lo: /usr/include/asm-i386/errno.h
hp5590_cmds.lo: /usr/include/asm-generic/errno.h
hp5590_cmds.lo: /usr/include/asm-generic/errno-base.h /usr/include/string.h
hp5590_cmds.lo: /usr/include/xlocale.h ../include/sane/sanei_debug.h
hp5590_cmds.lo: ../include/sane/sanei.h ../include/sane/sane.h hp5590_low.h
hp5590_cmds.lo: hp5590_cmds.h
hp5590_low.lo: ../include/sane/config.h /usr/include/stdio.h
hp5590_low.lo: /usr/include/features.h /usr/include/sys/cdefs.h
hp5590_low.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp5590_low.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
hp5590_low.lo: /usr/include/bits/typesizes.h /usr/include/libio.h
hp5590_low.lo: /usr/include/_G_config.h /usr/include/wchar.h
hp5590_low.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
hp5590_low.lo: /usr/include/string.h /usr/include/xlocale.h
hp5590_low.lo: /usr/include/errno.h /usr/include/bits/errno.h
hp5590_low.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
hp5590_low.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
hp5590_low.lo: /usr/include/asm-generic/errno-base.h
hp5590_low.lo: /usr/include/netinet/in.h /usr/include/stdint.h
hp5590_low.lo: /usr/include/bits/wchar.h /usr/include/sys/socket.h
hp5590_low.lo: /usr/include/sys/uio.h /usr/include/sys/types.h
hp5590_low.lo: /usr/include/time.h /usr/include/endian.h
hp5590_low.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
hp5590_low.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp5590_low.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp5590_low.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hp5590_low.lo: /usr/include/bits/socket.h /usr/include/limits.h
hp5590_low.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
hp5590_low.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
hp5590_low.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/sockaddr.h
hp5590_low.lo: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
hp5590_low.lo: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
hp5590_low.lo: /usr/include/bits/in.h /usr/include/bits/byteswap.h
hp5590_low.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
hp5590_low.lo: ../include/sane/sane.h ../include/sane/sanei_usb.h
hp5590_low.lo: ../include/sane/config.h ../include/sane/sane.h
hp5590_low.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
hp5590_low.lo: /usr/include/bits/waitstatus.h /usr/include/alloca.h
hp5590_low.lo: hp5590_low.h
hp5590-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hp5590-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
hp5590-s.lo: /usr/include/fcntl.h /usr/include/features.h
hp5590-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp5590-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp5590-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hp5590-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp5590-s.lo: /usr/include/time.h /usr/include/endian.h
hp5590-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
hp5590-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
hp5590-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp5590-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hp5590-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
hp5590-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp5590-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp5590-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp5590-s.lo: /usr/include/bits/stdio_lim.h
hp-accessor.lo: ../include/sane/config.h ../include/lassert.h
hp-accessor.lo: /usr/include/assert.h /usr/include/features.h
hp-accessor.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp-accessor.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp-accessor.lo: /usr/include/string.h /usr/include/xlocale.h
hp-accessor.lo: /usr/include/sys/types.h /usr/include/bits/types.h
hp-accessor.lo: /usr/include/bits/typesizes.h /usr/include/time.h
hp-accessor.lo: /usr/include/endian.h /usr/include/bits/endian.h
hp-accessor.lo: /usr/include/sys/select.h /usr/include/bits/select.h
hp-accessor.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp-accessor.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp-accessor.lo: hp.h /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp-accessor.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp-accessor.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp-accessor.lo: /usr/include/bits/stdio_lim.h ../include/sane/sane.h
hp-accessor.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
hp-accessor.lo: hp-option.h hp-accessor.h hp-device.h
hp.lo: ../include/sane/config.h hp.h /usr/include/limits.h
hp.lo: /usr/include/features.h /usr/include/sys/cdefs.h
hp.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/posix1_lim.h
hp.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp.lo: /usr/include/bits/stdio_lim.h /usr/include/sys/types.h
hp.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp.lo: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
hp.lo: /usr/include/sys/select.h /usr/include/bits/select.h
hp.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp.lo: ../include/sane/sane.h ../include/sane/sanei_debug.h
hp.lo: ../include/sane/sanei.h /usr/include/string.h /usr/include/xlocale.h
hp.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
hp.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
hp.lo: /usr/include/bits/sys_errlist.h ../include/sane/sanei_backend.h
hp.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h /usr/include/bits/uio.h
hp.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
hp.lo: ../include/sane/sanei_usb.h ../include/sane/config.h
hp.lo: ../include/sane/sane.h /usr/include/stdlib.h
hp.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
hp.lo: /usr/include/alloca.h ../include/sane/sanei_thread.h hp-device.h
hp.lo: hp-handle.h /usr/include/ctype.h
hp-device.lo: ../include/sane/config.h /usr/include/stdlib.h
hp-device.lo: /usr/include/features.h /usr/include/sys/cdefs.h
hp-device.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp-device.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
hp-device.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
hp-device.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
hp-device.lo: /usr/include/sys/types.h /usr/include/bits/types.h
hp-device.lo: /usr/include/bits/typesizes.h /usr/include/time.h
hp-device.lo: /usr/include/sys/select.h /usr/include/bits/select.h
hp-device.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp-device.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp-device.lo: /usr/include/alloca.h /usr/include/string.h
hp-device.lo: ../include/lassert.h /usr/include/assert.h hp-device.h hp.h
hp-device.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp-device.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp-device.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp-device.lo: /usr/include/bits/stdio_lim.h ../include/sane/sane.h
hp-device.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
hp-device.lo: hp-accessor.h hp-option.h hp-scsi.h hp-scl.h
hp-handle.lo: ../include/sane/config.h /usr/include/unistd.h
hp-handle.lo: /usr/include/features.h /usr/include/sys/cdefs.h
hp-handle.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp-handle.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/posix_opt.h
hp-handle.lo: /usr/include/bits/environments.h /usr/include/bits/types.h
hp-handle.lo: /usr/include/bits/typesizes.h /usr/include/bits/confname.h
hp-handle.lo: ../include/getopt.h /usr/include/string.h
hp-handle.lo: /usr/include/xlocale.h /usr/include/signal.h
hp-handle.lo: /usr/include/bits/sigset.h /usr/include/bits/signum.h
hp-handle.lo: /usr/include/time.h /usr/include/bits/siginfo.h
hp-handle.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
hp-handle.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
hp-handle.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/sigthread.h
hp-handle.lo: ../include/lassert.h /usr/include/assert.h /usr/include/errno.h
hp-handle.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
hp-handle.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
hp-handle.lo: /usr/include/asm-generic/errno.h
hp-handle.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
hp-handle.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hp-handle.lo: /usr/include/endian.h /usr/include/bits/endian.h
hp-handle.lo: /usr/include/sys/select.h /usr/include/bits/select.h
hp-handle.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hp-handle.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
hp-handle.lo: /usr/include/bits/stat.h /usr/include/sys/wait.h
hp-handle.lo: /usr/include/sys/resource.h /usr/include/bits/resource.h
hp-handle.lo: hp-handle.h hp.h /usr/include/limits.h
hp-handle.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
hp-handle.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
hp-handle.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
hp-handle.lo: ../include/sane/sane.h ../include/sane/sanei_debug.h
hp-handle.lo: ../include/sane/sanei.h ../include/sane/sanei_backend.h
hp-handle.lo: ../include/sane/sanei_thread.h ../include/sane/config.h
hp-handle.lo: hp-device.h hp-option.h hp-accessor.h hp-scsi.h hp-scl.h
hp-hpmem.lo: ../include/sane/config.h /usr/include/stdlib.h
hp-hpmem.lo: /usr/include/features.h /usr/include/sys/cdefs.h
hp-hpmem.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp-hpmem.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
hp-hpmem.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
hp-hpmem.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
hp-hpmem.lo: /usr/include/sys/types.h /usr/include/bits/types.h
hp-hpmem.lo: /usr/include/bits/typesizes.h /usr/include/time.h
hp-hpmem.lo: /usr/include/sys/select.h /usr/include/bits/select.h
hp-hpmem.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp-hpmem.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp-hpmem.lo: /usr/include/alloca.h /usr/include/string.h ../include/lassert.h
hp-hpmem.lo: /usr/include/assert.h hp.h /usr/include/limits.h
hp-hpmem.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
hp-hpmem.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
hp-hpmem.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
hp-hpmem.lo: ../include/sane/sane.h ../include/sane/sanei_debug.h
hp-hpmem.lo: ../include/sane/sanei.h
hpljm1005.lo: ../include/sane/config.h /usr/include/math.h
hpljm1005.lo: /usr/include/features.h /usr/include/sys/cdefs.h
hpljm1005.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hpljm1005.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/huge_val.h
hpljm1005.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
hpljm1005.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
hpljm1005.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
hpljm1005.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hpljm1005.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hpljm1005.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hpljm1005.lo: /usr/include/bits/stdio_lim.h /usr/include/stdio.h
hpljm1005.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hpljm1005.lo: /usr/include/libio.h /usr/include/_G_config.h
hpljm1005.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
hpljm1005.lo: /usr/include/string.h /usr/include/xlocale.h
hpljm1005.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
hpljm1005.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
hpljm1005.lo: /usr/include/bits/endian.h /usr/include/sys/types.h
hpljm1005.lo: /usr/include/time.h /usr/include/sys/select.h
hpljm1005.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
hpljm1005.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hpljm1005.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
hpljm1005.lo: /usr/include/ctype.h /usr/include/fcntl.h
hpljm1005.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
hpljm1005.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
hpljm1005.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
hpljm1005.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
hpljm1005.lo: ../include/getopt.h /usr/include/errno.h
hpljm1005.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
hpljm1005.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
hpljm1005.lo: /usr/include/asm-generic/errno.h
hpljm1005.lo: /usr/include/asm-generic/errno-base.h /usr/include/stdint.h
hpljm1005.lo: /usr/include/bits/wchar.h /usr/include/netinet/in.h
hpljm1005.lo: /usr/include/sys/socket.h /usr/include/sys/uio.h
hpljm1005.lo: /usr/include/bits/socket.h /usr/include/bits/sockaddr.h
hpljm1005.lo: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
hpljm1005.lo: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
hpljm1005.lo: /usr/include/bits/in.h /usr/include/bits/byteswap.h
hpljm1005.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hpljm1005.lo: ../include/sane/sanei.h ../include/sane/sane.h
hpljm1005.lo: ../include/sane/sanei_usb.h ../include/sane/sane.h
hpljm1005.lo: ../include/sane/saneopts.h
hpljm1005-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hpljm1005-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
hpljm1005-s.lo: /usr/include/fcntl.h /usr/include/features.h
hpljm1005-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hpljm1005-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hpljm1005-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hpljm1005-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hpljm1005-s.lo: /usr/include/time.h /usr/include/endian.h
hpljm1005-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
hpljm1005-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
hpljm1005-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hpljm1005-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hpljm1005-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
hpljm1005-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hpljm1005-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hpljm1005-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hpljm1005-s.lo: /usr/include/bits/stdio_lim.h
hp-option.lo: ../include/sane/config.h ../include/lalloca.h
hp-option.lo: /usr/include/stdio.h /usr/include/features.h
hp-option.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp-option.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp-option.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp-option.lo: /usr/include/libio.h /usr/include/_G_config.h
hp-option.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
hp-option.lo: /usr/include/bits/sys_errlist.h /usr/include/string.h
hp-option.lo: /usr/include/xlocale.h ../include/lassert.h
hp-option.lo: /usr/include/assert.h /usr/include/pwd.h
hp-option.lo: /usr/include/sys/types.h /usr/include/time.h
hp-option.lo: /usr/include/endian.h /usr/include/bits/endian.h
hp-option.lo: /usr/include/sys/select.h /usr/include/bits/select.h
hp-option.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp-option.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp-option.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
hp-option.lo: /usr/include/bits/waitstatus.h /usr/include/alloca.h
hp-option.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
hp-option.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
hp-option.lo: ../include/getopt.h /usr/include/math.h
hp-option.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
hp-option.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
hp-option.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
hp-option.lo: /usr/include/bits/mathcalls.h ../include/sane/saneopts.h
hp-option.lo: ../include/sane/sanei.h ../include/sane/sane.h hp.h
hp-option.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp-option.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp-option.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp-option.lo: ../include/sane/sanei_debug.h hp-option.h hp-accessor.h
hp-option.lo: hp-scsi.h hp-scl.h hp-device.h
hp-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hp-s.lo: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
hp-s.lo: /usr/include/features.h /usr/include/sys/cdefs.h
hp-s.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hp-s.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
hp-s.lo: /usr/include/sys/types.h /usr/include/bits/types.h
hp-s.lo: /usr/include/bits/typesizes.h /usr/include/time.h
hp-s.lo: /usr/include/endian.h /usr/include/bits/endian.h
hp-s.lo: /usr/include/sys/select.h /usr/include/bits/select.h
hp-s.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp-s.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp-s.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
hp-s.lo: /usr/include/bits/stat.h /usr/include/limits.h
hp-s.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
hp-s.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
hp-s.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
hp-scl.lo: ../include/sane/config.h ../include/lalloca.h
hp-scl.lo: /usr/include/unistd.h /usr/include/features.h
hp-scl.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hp-scl.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hp-scl.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
hp-scl.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hp-scl.lo: /usr/include/bits/confname.h ../include/getopt.h
hp-scl.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
hp-scl.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
hp-scl.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
hp-scl.lo: /usr/include/sys/types.h /usr/include/time.h
hp-scl.lo: /usr/include/sys/select.h /usr/include/bits/select.h
hp-scl.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
hp-scl.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
hp-scl.lo: /usr/include/alloca.h /usr/include/ctype.h /usr/include/stdio.h
hp-scl.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
hp-scl.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
hp-scl.lo: /usr/include/string.h /usr/include/errno.h
hp-scl.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
hp-scl.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
hp-scl.lo: /usr/include/asm-generic/errno.h
hp-scl.lo: /usr/include/asm-generic/errno-base.h ../include/lassert.h
hp-scl.lo: /usr/include/assert.h /usr/include/signal.h
hp-scl.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
hp-scl.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
hp-scl.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
hp-scl.lo: /usr/include/bits/sigthread.h /usr/include/sys/stat.h
hp-scl.lo: /usr/include/bits/stat.h /usr/include/fcntl.h
hp-scl.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
hp-scl.lo: ../include/sane/sanei_scsi.h ../include/sane/sane.h
hp-scl.lo: ../include/sane/sanei_usb.h ../include/sane/config.h
hp-scl.lo: ../include/sane/sane.h ../include/sane/sanei_pio.h hp.h
hp-scl.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hp-scl.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hp-scl.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hp-scl.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
hp-scl.lo: ../include/sane/sanei_backend.h hp-option.h hp-scsi.h hp-scl.h
hp-scl.lo: hp-device.h
hpsj5s.lo: ../include/sane/config.h ../include/sane/sane.h
hpsj5s.lo: ../include/sane/sanei.h ../include/sane/sane.h
hpsj5s.lo: ../include/sane/saneopts.h ../include/sane/sanei_config.h
hpsj5s.lo: /usr/include/stdio.h /usr/include/features.h
hpsj5s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hpsj5s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hpsj5s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hpsj5s.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
hpsj5s.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
hpsj5s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hpsj5s.lo: ../include/sane/sanei.h /usr/include/fcntl.h
hpsj5s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hpsj5s.lo: /usr/include/time.h /usr/include/endian.h
hpsj5s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
hpsj5s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
hpsj5s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hpsj5s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hpsj5s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
hpsj5s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hpsj5s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hpsj5s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hpsj5s.lo: hpsj5s.h /usr/include/ieee1284.h /usr/include/sys/time.h
hpsj5s.lo: /usr/include/string.h /usr/include/xlocale.h /usr/include/stdlib.h
hpsj5s.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
hpsj5s.lo: /usr/include/alloca.h /usr/include/unistd.h
hpsj5s.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
hpsj5s.lo: /usr/include/bits/confname.h ../include/getopt.h
hpsj5s-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hpsj5s-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
hpsj5s-s.lo: /usr/include/fcntl.h /usr/include/features.h
hpsj5s-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hpsj5s-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hpsj5s-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hpsj5s-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hpsj5s-s.lo: /usr/include/time.h /usr/include/endian.h
hpsj5s-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
hpsj5s-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
hpsj5s-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hpsj5s-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hpsj5s-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
hpsj5s-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hpsj5s-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hpsj5s-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hpsj5s-s.lo: /usr/include/bits/stdio_lim.h
hs2p.lo: ../include/sane/config.h /usr/include/limits.h
hs2p.lo: /usr/include/features.h /usr/include/sys/cdefs.h
hs2p.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hs2p.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/posix1_lim.h
hs2p.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hs2p.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hs2p.lo: /usr/include/bits/stdio_lim.h /usr/include/stdlib.h
hs2p.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
hs2p.lo: /usr/include/endian.h /usr/include/bits/endian.h
hs2p.lo: /usr/include/xlocale.h /usr/include/sys/types.h
hs2p.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hs2p.lo: /usr/include/time.h /usr/include/sys/select.h
hs2p.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
hs2p.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hs2p.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
hs2p.lo: /usr/include/string.h /usr/include/sys/time.h /usr/include/errno.h
hs2p.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
hs2p.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
hs2p.lo: /usr/include/asm-generic/errno.h
hs2p.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
hs2p.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
hs2p.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
hs2p.lo: /usr/include/ctype.h /usr/include/stdio.h /usr/include/libio.h
hs2p.lo: /usr/include/_G_config.h /usr/include/wchar.h
hs2p.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
hs2p.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
hs2p.lo: /usr/include/bits/confname.h ../include/getopt.h
hs2p.lo: ../include/sane/sane.h ../include/sane/saneopts.h
hs2p.lo: ../include/sane/sanei_scsi.h ../include/sane/sane.h
hs2p.lo: ../include/sane/sanei_config.h ../include/sane/sanei_thread.h
hs2p.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hs2p.lo: ../include/sane/sanei.h hs2p-scsi.c hs2p.h ../include/sane/config.h
hs2p.lo: hs2p-scsi.h hs2p-saneopts.h
hs2p-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
hs2p-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
hs2p-s.lo: /usr/include/fcntl.h /usr/include/features.h
hs2p-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
hs2p-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
hs2p-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
hs2p-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
hs2p-s.lo: /usr/include/time.h /usr/include/endian.h
hs2p-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
hs2p-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
hs2p-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hs2p-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
hs2p-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
hs2p-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
hs2p-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
hs2p-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
hs2p-s.lo: /usr/include/bits/stdio_lim.h
hs2p-scsi.lo: /usr/include/time.h /usr/include/bits/types.h
hs2p-scsi.lo: /usr/include/features.h /usr/include/sys/cdefs.h
hs2p-scsi.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
hs2p-scsi.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/typesizes.h
hs2p-scsi.lo: hs2p.h /usr/include/sys/types.h /usr/include/endian.h
hs2p-scsi.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
hs2p-scsi.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
hs2p-scsi.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
hs2p-scsi.lo: /usr/include/bits/pthreadtypes.h ../include/sane/config.h
hs2p-scsi.lo: hs2p-scsi.h ../include/sane/sane.h ../include/sane/saneopts.h
hs2p-scsi.lo: ../include/sane/sanei_scsi.h ../include/sane/sane.h
hs2p-scsi.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
hs2p-scsi.lo: /usr/include/libio.h /usr/include/_G_config.h
hs2p-scsi.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
hs2p-scsi.lo: /usr/include/bits/sys_errlist.h ../include/sane/sanei_thread.h
hs2p-scsi.lo: ../include/sane/config.h hs2p-saneopts.h
ibm.lo: ../include/sane/config.h /usr/include/limits.h
ibm.lo: /usr/include/features.h /usr/include/sys/cdefs.h
ibm.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
ibm.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/posix1_lim.h
ibm.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
ibm.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
ibm.lo: /usr/include/bits/stdio_lim.h /usr/include/stdlib.h
ibm.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
ibm.lo: /usr/include/endian.h /usr/include/bits/endian.h
ibm.lo: /usr/include/xlocale.h /usr/include/sys/types.h
ibm.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
ibm.lo: /usr/include/time.h /usr/include/sys/select.h
ibm.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
ibm.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
ibm.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
ibm.lo: /usr/include/string.h /usr/include/sys/time.h /usr/include/unistd.h
ibm.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
ibm.lo: /usr/include/bits/confname.h ../include/getopt.h /usr/include/ctype.h
ibm.lo: ../include/sane/sane.h ../include/sane/saneopts.h
ibm.lo: ../include/sane/sanei_scsi.h ../include/sane/sane.h
ibm.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
ibm.lo: ../include/sane/sanei.h /usr/include/fcntl.h
ibm.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
ibm.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
ibm.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
ibm.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
ibm.lo: /usr/include/bits/sys_errlist.h ibm.h ../include/sane/config.h
ibm.lo: ibm-scsi.c
ibm-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
ibm-s.lo: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
ibm-s.lo: /usr/include/features.h /usr/include/sys/cdefs.h
ibm-s.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
ibm-s.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
ibm-s.lo: /usr/include/sys/types.h /usr/include/bits/types.h
ibm-s.lo: /usr/include/bits/typesizes.h /usr/include/time.h
ibm-s.lo: /usr/include/endian.h /usr/include/bits/endian.h
ibm-s.lo: /usr/include/sys/select.h /usr/include/bits/select.h
ibm-s.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
ibm-s.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
ibm-s.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
ibm-s.lo: /usr/include/bits/stat.h /usr/include/limits.h
ibm-s.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
ibm-s.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
ibm-s.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
ibm-scsi.lo: /usr/include/time.h /usr/include/bits/types.h
ibm-scsi.lo: /usr/include/features.h /usr/include/sys/cdefs.h
ibm-scsi.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
ibm-scsi.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/typesizes.h
leo.lo: ../include/sane/config.h /usr/include/errno.h /usr/include/features.h
leo.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
leo.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
leo.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
leo.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
leo.lo: /usr/include/asm-generic/errno.h
leo.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
leo.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
leo.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
leo.lo: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
leo.lo: /usr/include/sys/select.h /usr/include/bits/select.h
leo.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
leo.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
leo.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
leo.lo: /usr/include/bits/stat.h /usr/include/limits.h
leo.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
leo.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
leo.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
leo.lo: /usr/include/signal.h /usr/include/bits/signum.h
leo.lo: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
leo.lo: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
leo.lo: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
leo.lo: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
leo.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
leo.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
leo.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
leo.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/sys/wait.h
leo.lo: /usr/include/sys/resource.h /usr/include/bits/resource.h
leo.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
leo.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
leo.lo: ../include/getopt.h ../include/sane/sane.h ../include/sane/sanei.h
leo.lo: ../include/sane/sane.h ../include/sane/saneopts.h
leo.lo: ../include/sane/sanei_scsi.h ../include/sane/sanei_debug.h
leo.lo: ../include/sane/sanei.h ../include/sane/sanei_backend.h
leo.lo: ../include/sane/sanei_debug.h ../include/sane/sanei_config.h
leo.lo: ../include/lassert.h /usr/include/assert.h leo.h
leo-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
leo-s.lo: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
leo-s.lo: /usr/include/features.h /usr/include/sys/cdefs.h
leo-s.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
leo-s.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
leo-s.lo: /usr/include/sys/types.h /usr/include/bits/types.h
leo-s.lo: /usr/include/bits/typesizes.h /usr/include/time.h
leo-s.lo: /usr/include/endian.h /usr/include/bits/endian.h
leo-s.lo: /usr/include/sys/select.h /usr/include/bits/select.h
leo-s.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
leo-s.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
leo-s.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
leo-s.lo: /usr/include/bits/stat.h /usr/include/limits.h
leo-s.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
leo-s.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
leo-s.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
lexmark.lo: ../include/sane/config.h /usr/include/errno.h
lexmark.lo: /usr/include/features.h /usr/include/sys/cdefs.h
lexmark.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
lexmark.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
lexmark.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
lexmark.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
lexmark.lo: /usr/include/asm-generic/errno-base.h /usr/include/signal.h
lexmark.lo: /usr/include/bits/sigset.h /usr/include/bits/types.h
lexmark.lo: /usr/include/bits/typesizes.h /usr/include/bits/signum.h
lexmark.lo: /usr/include/time.h /usr/include/bits/siginfo.h
lexmark.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
lexmark.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
lexmark.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/sigthread.h
lexmark.lo: /usr/include/stdio.h /usr/include/libio.h
lexmark.lo: /usr/include/_G_config.h /usr/include/wchar.h
lexmark.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
lexmark.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
lexmark.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
lexmark.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
lexmark.lo: /usr/include/sys/types.h /usr/include/sys/select.h
lexmark.lo: /usr/include/bits/select.h /usr/include/bits/time.h
lexmark.lo: /usr/include/sys/sysmacros.h /usr/include/alloca.h
lexmark.lo: /usr/include/string.h /usr/include/sys/wait.h
lexmark.lo: /usr/include/sys/resource.h /usr/include/bits/resource.h
lexmark.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
lexmark.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
lexmark.lo: ../include/getopt.h /usr/include/fcntl.h
lexmark.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
lexmark.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
lexmark.lo: /usr/include/ctype.h /usr/include/sys/time.h
lexmark.lo: ../include/sane/sane.h ../include/sane/sanei.h
lexmark.lo: ../include/sane/sane.h ../include/sane/saneopts.h
lexmark.lo: ../include/sane/sanei_config.h ../include/sane/sanei_usb.h
lexmark.lo: lexmark.h ../include/sane/sanei_backend.h
lexmark.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
lexmark.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
lexmark.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
lexmark.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
lexmark_low.lo: ../include/sane/config.h /usr/include/stdio.h
lexmark_low.lo: /usr/include/features.h /usr/include/sys/cdefs.h
lexmark_low.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
lexmark_low.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
lexmark_low.lo: /usr/include/bits/typesizes.h /usr/include/libio.h
lexmark_low.lo: /usr/include/_G_config.h /usr/include/wchar.h
lexmark_low.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
lexmark_low.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
lexmark_low.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
lexmark_low.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
lexmark_low.lo: /usr/include/sys/types.h /usr/include/time.h
lexmark_low.lo: /usr/include/sys/select.h /usr/include/bits/select.h
lexmark_low.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
lexmark_low.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
lexmark_low.lo: /usr/include/alloca.h /usr/include/string.h
lexmark_low.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
lexmark_low.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
lexmark_low.lo: ../include/getopt.h /usr/include/math.h
lexmark_low.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
lexmark_low.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
lexmark_low.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
lexmark_low.lo: /usr/include/bits/mathcalls.h ../include/sane/sane.h
lexmark_low.lo: ../include/sane/sanei.h ../include/sane/sane.h
lexmark_low.lo: ../include/sane/saneopts.h ../include/sane/sanei_usb.h
lexmark_low.lo: lexmark.h ../include/sane/sanei_backend.h
lexmark_low.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
lexmark_low.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
lexmark_low.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
lexmark_low.lo: /usr/include/bits/stat.h /usr/include/limits.h
lexmark_low.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
lexmark_low.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
lexmark_low.lo: /usr/include/bits/xopen_lim.h lexmark_sensors.c
lexmark_low.lo: lexmark_models.c
lexmark-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
lexmark-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
lexmark-s.lo: /usr/include/fcntl.h /usr/include/features.h
lexmark-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
lexmark-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
lexmark-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
lexmark-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
lexmark-s.lo: /usr/include/time.h /usr/include/endian.h
lexmark-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
lexmark-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
lexmark-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
lexmark-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
lexmark-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
lexmark-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
lexmark-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
lexmark-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
lexmark-s.lo: /usr/include/bits/stdio_lim.h
ma1509.lo: ../include/sane/config.h /usr/include/ctype.h
ma1509.lo: /usr/include/features.h /usr/include/sys/cdefs.h
ma1509.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
ma1509.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
ma1509.lo: /usr/include/bits/typesizes.h /usr/include/endian.h
ma1509.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
ma1509.lo: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
ma1509.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
ma1509.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
ma1509.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
ma1509.lo: /usr/include/sys/types.h /usr/include/time.h
ma1509.lo: /usr/include/sys/select.h /usr/include/bits/select.h
ma1509.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
ma1509.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
ma1509.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
ma1509.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
ma1509.lo: /usr/include/bits/confname.h ../include/getopt.h
ma1509.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
ma1509.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
ma1509.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
ma1509.lo: /usr/include/sys/time.h /usr/include/errno.h
ma1509.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
ma1509.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
ma1509.lo: /usr/include/asm-generic/errno.h
ma1509.lo: /usr/include/asm-generic/errno-base.h ../include/sane/sane.h
ma1509.lo: ../include/sane/sanei.h ../include/sane/sane.h
ma1509.lo: ../include/sane/saneopts.h ../include/sane/sanei_usb.h
ma1509.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
ma1509.lo: ../include/sane/sanei.h /usr/include/fcntl.h
ma1509.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
ma1509.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
ma1509.lo: ../include/sane/sanei_config.h ma1509.h
ma1509-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
ma1509-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
ma1509-s.lo: /usr/include/fcntl.h /usr/include/features.h
ma1509-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
ma1509-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
ma1509-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
ma1509-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
ma1509-s.lo: /usr/include/time.h /usr/include/endian.h
ma1509-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
ma1509-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
ma1509-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
ma1509-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
ma1509-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
ma1509-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
ma1509-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
ma1509-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
ma1509-s.lo: /usr/include/bits/stdio_lim.h
matsushita.lo: ../include/sane/config.h /usr/include/errno.h
matsushita.lo: /usr/include/features.h /usr/include/sys/cdefs.h
matsushita.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
matsushita.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
matsushita.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
matsushita.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
matsushita.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
matsushita.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
matsushita.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
matsushita.lo: /usr/include/time.h /usr/include/endian.h
matsushita.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
matsushita.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
matsushita.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
matsushita.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
matsushita.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
matsushita.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
matsushita.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
matsushita.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
matsushita.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
matsushita.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
matsushita.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
matsushita.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
matsushita.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
matsushita.lo: /usr/include/libio.h /usr/include/_G_config.h
matsushita.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
matsushita.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
matsushita.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
matsushita.lo: /usr/include/alloca.h /usr/include/string.h
matsushita.lo: /usr/include/sys/wait.h /usr/include/sys/resource.h
matsushita.lo: /usr/include/bits/resource.h /usr/include/unistd.h
matsushita.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
matsushita.lo: /usr/include/bits/confname.h ../include/getopt.h
matsushita.lo: ../include/sane/sane.h ../include/sane/sanei.h
matsushita.lo: ../include/sane/sane.h ../include/sane/saneopts.h
matsushita.lo: ../include/sane/sanei_scsi.h ../include/sane/sanei_debug.h
matsushita.lo: ../include/sane/sanei.h ../include/sane/sanei_backend.h
matsushita.lo: ../include/sane/sanei_debug.h ../include/sane/sanei_config.h
matsushita.lo: ../include/lassert.h /usr/include/assert.h matsushita.h
matsushita-s.lo: ../include/sane/sanei_backend.h
matsushita-s.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
matsushita-s.lo: ../include/sane/sane.h /usr/include/fcntl.h
matsushita-s.lo: /usr/include/features.h /usr/include/sys/cdefs.h
matsushita-s.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
matsushita-s.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
matsushita-s.lo: /usr/include/sys/types.h /usr/include/bits/types.h
matsushita-s.lo: /usr/include/bits/typesizes.h /usr/include/time.h
matsushita-s.lo: /usr/include/endian.h /usr/include/bits/endian.h
matsushita-s.lo: /usr/include/sys/select.h /usr/include/bits/select.h
matsushita-s.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
matsushita-s.lo: /usr/include/sys/sysmacros.h
matsushita-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
matsushita-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
matsushita-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
matsushita-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
matsushita-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
matsushita-s.lo: /usr/include/bits/stdio_lim.h
microtek2.lo: ../include/sane/config.h ../include/lalloca.h
microtek2.lo: /usr/include/stdio.h /usr/include/features.h
microtek2.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
microtek2.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
microtek2.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
microtek2.lo: /usr/include/libio.h /usr/include/_G_config.h
microtek2.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
microtek2.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
microtek2.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
microtek2.lo: /usr/include/endian.h /usr/include/bits/endian.h
microtek2.lo: /usr/include/xlocale.h /usr/include/sys/types.h
microtek2.lo: /usr/include/time.h /usr/include/sys/select.h
microtek2.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
microtek2.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
microtek2.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
microtek2.lo: /usr/include/string.h /usr/include/unistd.h
microtek2.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
microtek2.lo: /usr/include/bits/confname.h ../include/getopt.h
microtek2.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
microtek2.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
microtek2.lo: /usr/include/bits/stat.h /usr/include/ctype.h
microtek2.lo: /usr/include/signal.h /usr/include/bits/signum.h
microtek2.lo: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
microtek2.lo: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
microtek2.lo: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
microtek2.lo: /usr/include/errno.h /usr/include/bits/errno.h
microtek2.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
microtek2.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
microtek2.lo: /usr/include/asm-generic/errno-base.h /usr/include/math.h
microtek2.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
microtek2.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
microtek2.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
microtek2.lo: /usr/include/bits/mathcalls.h ../include/sane/sane.h
microtek2.lo: ../include/sane/sanei.h ../include/sane/sane.h
microtek2.lo: ../include/sane/sanei_config.h ../include/sane/sanei_scsi.h
microtek2.lo: ../include/sane/saneopts.h ../include/sane/sanei_thread.h
microtek2.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
microtek2.lo: ../include/sane/sanei.h /usr/include/limits.h
microtek2.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
microtek2.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
microtek2.lo: /usr/include/bits/xopen_lim.h microtek2.h
microtek2-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
microtek2-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
microtek2-s.lo: /usr/include/fcntl.h /usr/include/features.h
microtek2-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
microtek2-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
microtek2-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
microtek2-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
microtek2-s.lo: /usr/include/time.h /usr/include/endian.h
microtek2-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
microtek2-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
microtek2-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
microtek2-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
microtek2-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
microtek2-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
microtek2-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
microtek2-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
microtek2-s.lo: /usr/include/bits/stdio_lim.h
microtek.lo: ../include/sane/config.h /usr/include/stdlib.h
microtek.lo: /usr/include/features.h /usr/include/sys/cdefs.h
microtek.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
microtek.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
microtek.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
microtek.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
microtek.lo: /usr/include/sys/types.h /usr/include/bits/types.h
microtek.lo: /usr/include/bits/typesizes.h /usr/include/time.h
microtek.lo: /usr/include/sys/select.h /usr/include/bits/select.h
microtek.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
microtek.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
microtek.lo: /usr/include/alloca.h /usr/include/string.h
microtek.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
microtek.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
microtek.lo: ../include/getopt.h /usr/include/fcntl.h
microtek.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
microtek.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
microtek.lo: /usr/include/math.h /usr/include/bits/huge_val.h
microtek.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
microtek.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
microtek.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
microtek.lo: ../include/sane/sane.h ../include/sane/sanei.h
microtek.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
microtek.lo: /usr/include/libio.h /usr/include/_G_config.h
microtek.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
microtek.lo: /usr/include/bits/sys_errlist.h ../include/sane/sanei_scsi.h
microtek.lo: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
microtek.lo: ../include/sane/sanei_debug.h /usr/include/limits.h
microtek.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
microtek.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
microtek.lo: /usr/include/bits/xopen_lim.h microtek.h
microtek-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
microtek-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
microtek-s.lo: /usr/include/fcntl.h /usr/include/features.h
microtek-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
microtek-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
microtek-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
microtek-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
microtek-s.lo: /usr/include/time.h /usr/include/endian.h
microtek-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
microtek-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
microtek-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
microtek-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
microtek-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
microtek-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
microtek-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
microtek-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
microtek-s.lo: /usr/include/bits/stdio_lim.h
mustek.lo: ../include/sane/config.h /usr/include/ctype.h
mustek.lo: /usr/include/features.h /usr/include/sys/cdefs.h
mustek.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
mustek.lo: /usr/include/bits/typesizes.h /usr/include/endian.h
mustek.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek.lo: /usr/include/errno.h /usr/include/bits/errno.h
mustek.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
mustek.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
mustek.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
mustek.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
mustek.lo: /usr/include/time.h /usr/include/sys/select.h
mustek.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
mustek.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
mustek.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
mustek.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
mustek.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
mustek.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
mustek.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
mustek.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
mustek.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
mustek.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
mustek.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
mustek.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
mustek.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
mustek.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
mustek.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
mustek.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
mustek.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
mustek.lo: /usr/include/bits/confname.h ../include/getopt.h
mustek.lo: /usr/include/sys/time.h ../include/sane/sane.h
mustek.lo: ../include/sane/sanei.h ../include/sane/sane.h
mustek.lo: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
mustek.lo: ../include/sane/sanei_ab306.h ../include/sane/sanei_thread.h
mustek.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
mustek.lo: ../include/sane/sanei.h ../include/sane/sanei_config.h mustek.h
mustek.lo: mustek_scsi_pp.h mustek_scsi_pp.c /usr/include/sys/wait.h
mustek.lo: /usr/include/sys/resource.h /usr/include/bits/resource.h
mustek.lo: ../include/sane/sanei_debug.h ../include/sane/sanei_pa4s2.h
mustek_pp.lo: ../include/sane/config.h /usr/include/stdlib.h
mustek_pp.lo: /usr/include/features.h /usr/include/sys/cdefs.h
mustek_pp.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek_pp.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
mustek_pp.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
mustek_pp.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek_pp.lo: /usr/include/sys/types.h /usr/include/bits/types.h
mustek_pp.lo: /usr/include/bits/typesizes.h /usr/include/time.h
mustek_pp.lo: /usr/include/sys/select.h /usr/include/bits/select.h
mustek_pp.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
mustek_pp.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
mustek_pp.lo: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
mustek_pp.lo: /usr/include/_G_config.h /usr/include/wchar.h
mustek_pp.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
mustek_pp.lo: /usr/include/ctype.h /usr/include/errno.h
mustek_pp.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
mustek_pp.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
mustek_pp.lo: /usr/include/asm-generic/errno.h
mustek_pp.lo: /usr/include/asm-generic/errno-base.h /usr/include/limits.h
mustek_pp.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
mustek_pp.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
mustek_pp.lo: /usr/include/bits/xopen_lim.h /usr/include/signal.h
mustek_pp.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
mustek_pp.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
mustek_pp.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
mustek_pp.lo: /usr/include/bits/sigthread.h /usr/include/string.h
mustek_pp.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
mustek_pp.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
mustek_pp.lo: ../include/getopt.h /usr/include/math.h
mustek_pp.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
mustek_pp.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
mustek_pp.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
mustek_pp.lo: /usr/include/bits/mathcalls.h /usr/include/fcntl.h
mustek_pp.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
mustek_pp.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
mustek_pp.lo: /usr/include/sys/time.h /usr/include/sys/wait.h
mustek_pp.lo: /usr/include/sys/resource.h /usr/include/bits/resource.h
mustek_pp.lo: ../include/sane/sane.h ../include/sane/sanei.h
mustek_pp.lo: ../include/sane/sane.h ../include/sane/saneopts.h
mustek_pp.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
mustek_pp.lo: ../include/sane/sanei.h ../include/sane/sanei_config.h
mustek_pp.lo: ../include/sane/sanei_pa4s2.h mustek_pp.h
mustek_pp.lo: ../include/sane/sanei_debug.h mustek_pp_drivers.h
mustek_pp.lo: mustek_pp_decl.h mustek_pp_null.c mustek_pp_cis.h
mustek_pp.lo: mustek_pp_cis.c /usr/include/assert.h mustek_pp_ccd300.h
mustek_pp.lo: mustek_pp_ccd300.c
mustek_pp_ccd300.lo: mustek_pp_ccd300.h
mustek_pp_cis.lo: ../include/sane/config.h /usr/include/assert.h
mustek_pp_cis.lo: /usr/include/features.h /usr/include/sys/cdefs.h
mustek_pp_cis.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek_pp_cis.lo: /usr/include/gnu/stubs-32.h /usr/include/string.h
mustek_pp_cis.lo: /usr/include/xlocale.h /usr/include/stdlib.h
mustek_pp_cis.lo: /usr/include/bits/waitflags.h
mustek_pp_cis.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
mustek_pp_cis.lo: /usr/include/bits/endian.h /usr/include/sys/types.h
mustek_pp_cis.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
mustek_pp_cis.lo: /usr/include/time.h /usr/include/sys/select.h
mustek_pp_cis.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
mustek_pp_cis.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
mustek_pp_cis.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
mustek_pp_cis.lo: /usr/include/stdio.h /usr/include/libio.h
mustek_pp_cis.lo: /usr/include/_G_config.h /usr/include/wchar.h
mustek_pp_cis.lo: /usr/include/bits/stdio_lim.h
mustek_pp_cis.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
mustek_pp_cis.lo: /usr/include/bits/posix_opt.h
mustek_pp_cis.lo: /usr/include/bits/environments.h
mustek_pp_cis.lo: /usr/include/bits/confname.h ../include/getopt.h
mustek_pp_cis.lo: /usr/include/math.h /usr/include/bits/huge_val.h
mustek_pp_cis.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
mustek_pp_cis.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
mustek_pp_cis.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
mustek_pp_cis.lo: ../include/sane/sane.h ../include/sane/sanei_pa4s2.h
mustek_pp_cis.lo: ../include/sane/sane.h mustek_pp.h /usr/include/sys/time.h
mustek_pp_cis.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
mustek_pp_cis.lo: mustek_pp_decl.h mustek_pp_cis.h
mustek_pp_null.lo: ../include/sane/config.h /usr/include/stdlib.h
mustek_pp_null.lo: /usr/include/features.h /usr/include/sys/cdefs.h
mustek_pp_null.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek_pp_null.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
mustek_pp_null.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
mustek_pp_null.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek_pp_null.lo: /usr/include/sys/types.h /usr/include/bits/types.h
mustek_pp_null.lo: /usr/include/bits/typesizes.h /usr/include/time.h
mustek_pp_null.lo: /usr/include/sys/select.h /usr/include/bits/select.h
mustek_pp_null.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
mustek_pp_null.lo: /usr/include/sys/sysmacros.h
mustek_pp_null.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
mustek_pp_null.lo: /usr/include/ctype.h /usr/include/stdio.h
mustek_pp_null.lo: /usr/include/libio.h /usr/include/_G_config.h
mustek_pp_null.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
mustek_pp_null.lo: /usr/include/bits/sys_errlist.h /usr/include/string.h
mustek_pp_null.lo: mustek_pp.h /usr/include/sys/time.h
mustek_pp_null.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
mustek_pp_null.lo: ../include/sane/sane.h mustek_pp_decl.h
mustek_pp_null.lo: ../include/sane/sane.h ../include/sane/sanei.h
mustek_pp-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
mustek_pp-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
mustek_pp-s.lo: /usr/include/fcntl.h /usr/include/features.h
mustek_pp-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
mustek_pp-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
mustek_pp-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
mustek_pp-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
mustek_pp-s.lo: /usr/include/time.h /usr/include/endian.h
mustek_pp-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
mustek_pp-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
mustek_pp-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
mustek_pp-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
mustek_pp-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
mustek_pp-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
mustek_pp-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
mustek_pp-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
mustek_pp-s.lo: /usr/include/bits/stdio_lim.h
mustek-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
mustek-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
mustek-s.lo: /usr/include/fcntl.h /usr/include/features.h
mustek-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
mustek-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
mustek-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
mustek-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
mustek-s.lo: /usr/include/time.h /usr/include/endian.h
mustek-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
mustek-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
mustek-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
mustek-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
mustek-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
mustek-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
mustek-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
mustek-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
mustek-s.lo: /usr/include/bits/stdio_lim.h
mustek_scsi_pp.lo: ../include/sane/config.h /usr/include/ctype.h
mustek_scsi_pp.lo: /usr/include/features.h /usr/include/sys/cdefs.h
mustek_scsi_pp.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek_scsi_pp.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
mustek_scsi_pp.lo: /usr/include/bits/typesizes.h /usr/include/endian.h
mustek_scsi_pp.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek_scsi_pp.lo: /usr/include/errno.h /usr/include/bits/errno.h
mustek_scsi_pp.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
mustek_scsi_pp.lo: /usr/include/asm-i386/errno.h
mustek_scsi_pp.lo: /usr/include/asm-generic/errno.h
mustek_scsi_pp.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
mustek_scsi_pp.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
mustek_scsi_pp.lo: /usr/include/time.h /usr/include/sys/select.h
mustek_scsi_pp.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
mustek_scsi_pp.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
mustek_scsi_pp.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
mustek_scsi_pp.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
mustek_scsi_pp.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
mustek_scsi_pp.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
mustek_scsi_pp.lo: /usr/include/bits/posix2_lim.h
mustek_scsi_pp.lo: /usr/include/bits/xopen_lim.h
mustek_scsi_pp.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
mustek_scsi_pp.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
mustek_scsi_pp.lo: /usr/include/bits/sigaction.h
mustek_scsi_pp.lo: /usr/include/bits/sigcontext.h
mustek_scsi_pp.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
mustek_scsi_pp.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
mustek_scsi_pp.lo: /usr/include/libio.h /usr/include/_G_config.h
mustek_scsi_pp.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
mustek_scsi_pp.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
mustek_scsi_pp.lo: /usr/include/bits/waitstatus.h /usr/include/alloca.h
mustek_scsi_pp.lo: /usr/include/string.h /usr/include/unistd.h
mustek_scsi_pp.lo: /usr/include/bits/posix_opt.h
mustek_scsi_pp.lo: /usr/include/bits/environments.h
mustek_scsi_pp.lo: /usr/include/bits/confname.h ../include/getopt.h
mustek_scsi_pp.lo: /usr/include/sys/time.h /usr/include/sys/wait.h
mustek_scsi_pp.lo: /usr/include/sys/resource.h /usr/include/bits/resource.h
mustek_scsi_pp.lo: ../include/sane/sane.h ../include/sane/sanei.h
mustek_scsi_pp.lo: ../include/sane/sane.h ../include/sane/saneopts.h
mustek_scsi_pp.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
mustek_scsi_pp.lo: ../include/sane/sanei_pa4s2.h
mustek_usb2_asic.lo: mustek_usb2_asic.h ../include/sane/sanei_usb.h
mustek_usb2_asic.lo: ../include/sane/config.h ../include/sane/sane.h
mustek_usb2_asic.lo: /usr/include/stdlib.h /usr/include/features.h
mustek_usb2_asic.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
mustek_usb2_asic.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
mustek_usb2_asic.lo: /usr/include/bits/waitflags.h
mustek_usb2_asic.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
mustek_usb2_asic.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek_usb2_asic.lo: /usr/include/sys/types.h /usr/include/bits/types.h
mustek_usb2_asic.lo: /usr/include/bits/typesizes.h /usr/include/time.h
mustek_usb2_asic.lo: /usr/include/sys/select.h /usr/include/bits/select.h
mustek_usb2_asic.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
mustek_usb2_asic.lo: /usr/include/sys/sysmacros.h
mustek_usb2_asic.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
mustek_usb2.lo: ../include/sane/config.h /usr/include/ctype.h
mustek_usb2.lo: /usr/include/features.h /usr/include/sys/cdefs.h
mustek_usb2.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek_usb2.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
mustek_usb2.lo: /usr/include/bits/typesizes.h /usr/include/endian.h
mustek_usb2.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek_usb2.lo: /usr/include/errno.h /usr/include/bits/errno.h
mustek_usb2.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
mustek_usb2.lo: /usr/include/asm-i386/errno.h
mustek_usb2.lo: /usr/include/asm-generic/errno.h
mustek_usb2.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
mustek_usb2.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
mustek_usb2.lo: /usr/include/time.h /usr/include/sys/select.h
mustek_usb2.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
mustek_usb2.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
mustek_usb2.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
mustek_usb2.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
mustek_usb2.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
mustek_usb2.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
mustek_usb2.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
mustek_usb2.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
mustek_usb2.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
mustek_usb2.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
mustek_usb2.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
mustek_usb2.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
mustek_usb2.lo: /usr/include/libio.h /usr/include/_G_config.h
mustek_usb2.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
mustek_usb2.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
mustek_usb2.lo: /usr/include/bits/waitstatus.h /usr/include/alloca.h
mustek_usb2.lo: /usr/include/string.h /usr/include/unistd.h
mustek_usb2.lo: /usr/include/bits/posix_opt.h
mustek_usb2.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
mustek_usb2.lo: ../include/getopt.h /usr/include/math.h
mustek_usb2.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
mustek_usb2.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
mustek_usb2.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
mustek_usb2.lo: /usr/include/bits/mathcalls.h /usr/include/sys/time.h
mustek_usb2.lo: /usr/include/sys/wait.h /usr/include/sys/resource.h
mustek_usb2.lo: /usr/include/bits/resource.h ../include/sane/sane.h
mustek_usb2.lo: ../include/sane/sanei.h ../include/sane/sane.h
mustek_usb2.lo: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
mustek_usb2.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
mustek_usb2.lo: mustek_usb2_high.c /usr/include/pthread.h
mustek_usb2.lo: /usr/include/sched.h /usr/include/bits/sched.h
mustek_usb2.lo: /usr/include/bits/setjmp.h mustek_usb2_asic.c
mustek_usb2.lo: mustek_usb2_asic.h ../include/sane/sanei_usb.h
mustek_usb2.lo: mustek_usb2_high.h mustek_usb2_reflective.c
mustek_usb2.lo: mustek_usb2_transparent.c mustek_usb2.h
mustek_usb2_high.lo: /usr/include/pthread.h /usr/include/features.h
mustek_usb2_high.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
mustek_usb2_high.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
mustek_usb2_high.lo: /usr/include/endian.h /usr/include/bits/endian.h
mustek_usb2_high.lo: /usr/include/sched.h /usr/include/bits/types.h
mustek_usb2_high.lo: /usr/include/bits/typesizes.h /usr/include/time.h
mustek_usb2_high.lo: /usr/include/bits/sched.h /usr/include/signal.h
mustek_usb2_high.lo: /usr/include/bits/sigset.h /usr/include/bits/signum.h
mustek_usb2_high.lo: /usr/include/bits/siginfo.h
mustek_usb2_high.lo: /usr/include/bits/sigaction.h
mustek_usb2_high.lo: /usr/include/bits/sigcontext.h
mustek_usb2_high.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
mustek_usb2_high.lo: /usr/include/bits/pthreadtypes.h
mustek_usb2_high.lo: /usr/include/bits/sigthread.h /usr/include/bits/setjmp.h
mustek_usb2_high.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
mustek_usb2_high.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
mustek_usb2_high.lo: /usr/include/sys/types.h /usr/include/sys/select.h
mustek_usb2_high.lo: /usr/include/bits/select.h /usr/include/bits/time.h
mustek_usb2_high.lo: /usr/include/sys/sysmacros.h /usr/include/alloca.h
mustek_usb2_high.lo: mustek_usb2_asic.c mustek_usb2_asic.h
mustek_usb2_high.lo: ../include/sane/sanei_usb.h ../include/sane/config.h
mustek_usb2_high.lo: ../include/sane/sane.h mustek_usb2_high.h
mustek_usb2_high.lo: mustek_usb2_reflective.c mustek_usb2_transparent.c
mustek_usb2-s.lo: ../include/sane/sanei_backend.h
mustek_usb2-s.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
mustek_usb2-s.lo: ../include/sane/sane.h /usr/include/fcntl.h
mustek_usb2-s.lo: /usr/include/features.h /usr/include/sys/cdefs.h
mustek_usb2-s.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek_usb2-s.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
mustek_usb2-s.lo: /usr/include/sys/types.h /usr/include/bits/types.h
mustek_usb2-s.lo: /usr/include/bits/typesizes.h /usr/include/time.h
mustek_usb2-s.lo: /usr/include/endian.h /usr/include/bits/endian.h
mustek_usb2-s.lo: /usr/include/sys/select.h /usr/include/bits/select.h
mustek_usb2-s.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
mustek_usb2-s.lo: /usr/include/sys/sysmacros.h
mustek_usb2-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
mustek_usb2-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
mustek_usb2-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
mustek_usb2-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
mustek_usb2-s.lo: /usr/include/bits/posix2_lim.h
mustek_usb2-s.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
mustek_usb.lo: ../include/sane/config.h /usr/include/ctype.h
mustek_usb.lo: /usr/include/features.h /usr/include/sys/cdefs.h
mustek_usb.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek_usb.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
mustek_usb.lo: /usr/include/bits/typesizes.h /usr/include/endian.h
mustek_usb.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek_usb.lo: /usr/include/errno.h /usr/include/bits/errno.h
mustek_usb.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
mustek_usb.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
mustek_usb.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
mustek_usb.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
mustek_usb.lo: /usr/include/time.h /usr/include/sys/select.h
mustek_usb.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
mustek_usb.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
mustek_usb.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
mustek_usb.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
mustek_usb.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
mustek_usb.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
mustek_usb.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
mustek_usb.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
mustek_usb.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
mustek_usb.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
mustek_usb.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
mustek_usb.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
mustek_usb.lo: /usr/include/libio.h /usr/include/_G_config.h
mustek_usb.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
mustek_usb.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
mustek_usb.lo: /usr/include/bits/waitstatus.h /usr/include/alloca.h
mustek_usb.lo: /usr/include/string.h /usr/include/unistd.h
mustek_usb.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
mustek_usb.lo: /usr/include/bits/confname.h ../include/getopt.h
mustek_usb.lo: /usr/include/sys/time.h /usr/include/sys/wait.h
mustek_usb.lo: /usr/include/sys/resource.h /usr/include/bits/resource.h
mustek_usb.lo: ../include/sane/sane.h ../include/sane/sanei.h
mustek_usb.lo: ../include/sane/sane.h ../include/sane/saneopts.h
mustek_usb.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
mustek_usb.lo: ../include/sane/sanei.h ../include/sane/sanei_config.h
mustek_usb.lo: ../include/sane/sanei_usb.h mustek_usb.h mustek_usb_high.h
mustek_usb.lo: mustek_usb_mid.h mustek_usb_low.h mustek_usb_high.c
mustek_usb.lo: mustek_usb_mid.c mustek_usb_low.c
mustek_usb_high.lo: mustek_usb_high.h mustek_usb_mid.h mustek_usb_low.h
mustek_usb_high.lo: ../include/sane/sane.h mustek_usb_mid.c mustek_usb_low.c
mustek_usb_high.lo: /usr/include/unistd.h /usr/include/features.h
mustek_usb_high.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
mustek_usb_high.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
mustek_usb_high.lo: /usr/include/bits/posix_opt.h
mustek_usb_high.lo: /usr/include/bits/environments.h
mustek_usb_high.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
mustek_usb_high.lo: /usr/include/bits/confname.h ../include/getopt.h
mustek_usb_high.lo: ../include/sane/sanei_usb.h ../include/sane/config.h
mustek_usb_high.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
mustek_usb_high.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
mustek_usb_high.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek_usb_high.lo: /usr/include/sys/types.h /usr/include/time.h
mustek_usb_high.lo: /usr/include/sys/select.h /usr/include/bits/select.h
mustek_usb_high.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
mustek_usb_high.lo: /usr/include/sys/sysmacros.h
mustek_usb_high.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
mustek_usb_low.lo: /usr/include/unistd.h /usr/include/features.h
mustek_usb_low.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
mustek_usb_low.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
mustek_usb_low.lo: /usr/include/bits/posix_opt.h
mustek_usb_low.lo: /usr/include/bits/environments.h /usr/include/bits/types.h
mustek_usb_low.lo: /usr/include/bits/typesizes.h /usr/include/bits/confname.h
mustek_usb_low.lo: ../include/getopt.h ../include/sane/sane.h
mustek_usb_low.lo: ../include/sane/sanei_usb.h ../include/sane/config.h
mustek_usb_low.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
mustek_usb_low.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
mustek_usb_low.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek_usb_low.lo: /usr/include/sys/types.h /usr/include/time.h
mustek_usb_low.lo: /usr/include/sys/select.h /usr/include/bits/select.h
mustek_usb_low.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
mustek_usb_low.lo: /usr/include/sys/sysmacros.h
mustek_usb_low.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
mustek_usb_low.lo: mustek_usb_low.h
mustek_usb_mid.lo: mustek_usb_mid.h mustek_usb_low.h ../include/sane/sane.h
mustek_usb_mid.lo: mustek_usb_low.c /usr/include/unistd.h
mustek_usb_mid.lo: /usr/include/features.h /usr/include/sys/cdefs.h
mustek_usb_mid.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek_usb_mid.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/posix_opt.h
mustek_usb_mid.lo: /usr/include/bits/environments.h /usr/include/bits/types.h
mustek_usb_mid.lo: /usr/include/bits/typesizes.h /usr/include/bits/confname.h
mustek_usb_mid.lo: ../include/getopt.h ../include/sane/sanei_usb.h
mustek_usb_mid.lo: ../include/sane/config.h /usr/include/stdlib.h
mustek_usb_mid.lo: /usr/include/bits/waitflags.h
mustek_usb_mid.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
mustek_usb_mid.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek_usb_mid.lo: /usr/include/sys/types.h /usr/include/time.h
mustek_usb_mid.lo: /usr/include/sys/select.h /usr/include/bits/select.h
mustek_usb_mid.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
mustek_usb_mid.lo: /usr/include/sys/sysmacros.h
mustek_usb_mid.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
mustek_usb-s.lo: ../include/sane/sanei_backend.h
mustek_usb-s.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
mustek_usb-s.lo: ../include/sane/sane.h /usr/include/fcntl.h
mustek_usb-s.lo: /usr/include/features.h /usr/include/sys/cdefs.h
mustek_usb-s.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek_usb-s.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
mustek_usb-s.lo: /usr/include/sys/types.h /usr/include/bits/types.h
mustek_usb-s.lo: /usr/include/bits/typesizes.h /usr/include/time.h
mustek_usb-s.lo: /usr/include/endian.h /usr/include/bits/endian.h
mustek_usb-s.lo: /usr/include/sys/select.h /usr/include/bits/select.h
mustek_usb-s.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
mustek_usb-s.lo: /usr/include/sys/sysmacros.h
mustek_usb-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
mustek_usb-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
mustek_usb-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
mustek_usb-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
mustek_usb-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
mustek_usb-s.lo: /usr/include/bits/stdio_lim.h
nec.lo: ../include/sane/config.h /usr/include/limits.h
nec.lo: /usr/include/features.h /usr/include/sys/cdefs.h
nec.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
nec.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/posix1_lim.h
nec.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
nec.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
nec.lo: /usr/include/bits/stdio_lim.h /usr/include/stdlib.h
nec.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
nec.lo: /usr/include/endian.h /usr/include/bits/endian.h
nec.lo: /usr/include/xlocale.h /usr/include/sys/types.h
nec.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
nec.lo: /usr/include/time.h /usr/include/sys/select.h
nec.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
nec.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
nec.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
nec.lo: /usr/include/string.h /usr/include/unistd.h
nec.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
nec.lo: /usr/include/bits/confname.h ../include/getopt.h /usr/include/errno.h
nec.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
nec.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
nec.lo: /usr/include/asm-generic/errno.h
nec.lo: /usr/include/asm-generic/errno-base.h /usr/include/math.h
nec.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
nec.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
nec.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
nec.lo: /usr/include/bits/mathcalls.h ../include/sane/sane.h
nec.lo: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
nec.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
nec.lo: ../include/sane/sanei.h /usr/include/fcntl.h
nec.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
nec.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
nec.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
nec.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
nec.lo: /usr/include/bits/sys_errlist.h nec.h
nec-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
nec-s.lo: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
nec-s.lo: /usr/include/features.h /usr/include/sys/cdefs.h
nec-s.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
nec-s.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
nec-s.lo: /usr/include/sys/types.h /usr/include/bits/types.h
nec-s.lo: /usr/include/bits/typesizes.h /usr/include/time.h
nec-s.lo: /usr/include/endian.h /usr/include/bits/endian.h
nec-s.lo: /usr/include/sys/select.h /usr/include/bits/select.h
nec-s.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
nec-s.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
nec-s.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
nec-s.lo: /usr/include/bits/stat.h /usr/include/limits.h
nec-s.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
nec-s.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
nec-s.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
net.lo: ../include/sane/config.h ../include/lalloca.h /usr/include/errno.h
net.lo: /usr/include/features.h /usr/include/sys/cdefs.h
net.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
net.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
net.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
net.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
net.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
net.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
net.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
net.lo: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
net.lo: /usr/include/sys/select.h /usr/include/bits/select.h
net.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
net.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
net.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
net.lo: /usr/include/bits/stat.h /usr/include/limits.h
net.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
net.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
net.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
net.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
net.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
net.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
net.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
net.lo: /usr/include/bits/confname.h ../include/getopt.h
net.lo: /usr/include/sys/time.h /usr/include/netinet/in.h
net.lo: /usr/include/stdint.h /usr/include/bits/wchar.h
net.lo: /usr/include/sys/socket.h /usr/include/sys/uio.h
net.lo: /usr/include/bits/socket.h /usr/include/bits/sockaddr.h
net.lo: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
net.lo: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
net.lo: /usr/include/bits/in.h /usr/include/bits/byteswap.h
net.lo: /usr/include/netdb.h /usr/include/rpc/netdb.h
net.lo: /usr/include/bits/siginfo.h /usr/include/bits/netdb.h
net.lo: ../include/sane/sane.h ../include/sane/sanei.h ../include/sane/sane.h
net.lo: ../include/sane/sanei_net.h ../include/sane/sanei_wire.h
net.lo: ../include/sane/sanei_codec_bin.h net.h ../include/sane/sanei_wire.h
net.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
net.lo: ../include/sane/sanei.h ../include/sane/sanei_config.h
net.lo: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
net.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
net-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
net-s.lo: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
net-s.lo: /usr/include/features.h /usr/include/sys/cdefs.h
net-s.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
net-s.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
net-s.lo: /usr/include/sys/types.h /usr/include/bits/types.h
net-s.lo: /usr/include/bits/typesizes.h /usr/include/time.h
net-s.lo: /usr/include/endian.h /usr/include/bits/endian.h
net-s.lo: /usr/include/sys/select.h /usr/include/bits/select.h
net-s.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
net-s.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
net-s.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
net-s.lo: /usr/include/bits/stat.h /usr/include/limits.h
net-s.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
net-s.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
net-s.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
niash.lo: ../include/sane/config.h ../include/sane/sane.h
niash.lo: ../include/sane/sanei.h ../include/sane/sane.h
niash.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
niash.lo: ../include/sane/sanei.h /usr/include/fcntl.h
niash.lo: /usr/include/features.h /usr/include/sys/cdefs.h
niash.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
niash.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
niash.lo: /usr/include/sys/types.h /usr/include/bits/types.h
niash.lo: /usr/include/bits/typesizes.h /usr/include/time.h
niash.lo: /usr/include/endian.h /usr/include/bits/endian.h
niash.lo: /usr/include/sys/select.h /usr/include/bits/select.h
niash.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
niash.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
niash.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
niash.lo: /usr/include/bits/stat.h /usr/include/limits.h
niash.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
niash.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
niash.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
niash.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
niash.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
niash.lo: /usr/include/bits/sys_errlist.h ../include/sane/saneopts.h
niash.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
niash.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
niash.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/sys/time.h
niash.lo: /usr/include/sys/wait.h /usr/include/signal.h
niash.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
niash.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
niash.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
niash.lo: /usr/include/bits/sigthread.h /usr/include/sys/resource.h
niash.lo: /usr/include/bits/resource.h niash_core.c /usr/include/unistd.h
niash.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
niash.lo: /usr/include/bits/confname.h ../include/getopt.h
niash.lo: /usr/include/math.h /usr/include/bits/huge_val.h
niash.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
niash.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
niash.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
niash.lo: niash_xfer.h niash_core.h niash_xfer.c /usr/include/errno.h
niash.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
niash.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
niash.lo: /usr/include/asm-generic/errno.h
niash.lo: /usr/include/asm-generic/errno-base.h ../include/sane/sanei_usb.h
niash_core.lo: /usr/include/stdio.h /usr/include/features.h
niash_core.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
niash_core.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
niash_core.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
niash_core.lo: /usr/include/libio.h /usr/include/_G_config.h
niash_core.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
niash_core.lo: /usr/include/bits/sys_errlist.h /usr/include/string.h
niash_core.lo: /usr/include/xlocale.h /usr/include/unistd.h
niash_core.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
niash_core.lo: /usr/include/bits/confname.h ../include/getopt.h
niash_core.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
niash_core.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
niash_core.lo: /usr/include/bits/endian.h /usr/include/sys/types.h
niash_core.lo: /usr/include/time.h /usr/include/sys/select.h
niash_core.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
niash_core.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
niash_core.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
niash_core.lo: /usr/include/math.h /usr/include/bits/huge_val.h
niash_core.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
niash_core.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
niash_core.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
niash_core.lo: niash_xfer.h niash_core.h
niash-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
niash-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
niash-s.lo: /usr/include/fcntl.h /usr/include/features.h
niash-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
niash-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
niash-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
niash-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
niash-s.lo: /usr/include/time.h /usr/include/endian.h
niash-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
niash-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
niash-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
niash-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
niash-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
niash-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
niash-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
niash-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
niash-s.lo: /usr/include/bits/stdio_lim.h
niash_xfer.lo: /usr/include/stdio.h /usr/include/features.h
niash_xfer.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
niash_xfer.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
niash_xfer.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
niash_xfer.lo: /usr/include/libio.h /usr/include/_G_config.h
niash_xfer.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
niash_xfer.lo: /usr/include/bits/sys_errlist.h /usr/include/errno.h
niash_xfer.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
niash_xfer.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
niash_xfer.lo: /usr/include/asm-generic/errno.h
niash_xfer.lo: /usr/include/asm-generic/errno-base.h /usr/include/string.h
niash_xfer.lo: /usr/include/xlocale.h niash_xfer.h
niash_xfer.lo: ../include/sane/sanei_usb.h ../include/sane/config.h
niash_xfer.lo: ../include/sane/sane.h /usr/include/stdlib.h
niash_xfer.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
niash_xfer.lo: /usr/include/endian.h /usr/include/bits/endian.h
niash_xfer.lo: /usr/include/sys/types.h /usr/include/time.h
niash_xfer.lo: /usr/include/sys/select.h /usr/include/bits/select.h
niash_xfer.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
niash_xfer.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
niash_xfer.lo: /usr/include/alloca.h
pie.lo: ../include/sane/config.h /usr/include/errno.h /usr/include/features.h
pie.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
pie.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
pie.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
pie.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
pie.lo: /usr/include/asm-generic/errno.h
pie.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
pie.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
pie.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
pie.lo: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
pie.lo: /usr/include/sys/select.h /usr/include/bits/select.h
pie.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
pie.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
pie.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
pie.lo: /usr/include/bits/stat.h /usr/include/limits.h
pie.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
pie.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
pie.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
pie.lo: /usr/include/signal.h /usr/include/bits/signum.h
pie.lo: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
pie.lo: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
pie.lo: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
pie.lo: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
pie.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
pie.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
pie.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
pie.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/sys/wait.h
pie.lo: /usr/include/sys/resource.h /usr/include/bits/resource.h
pie.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
pie.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
pie.lo: ../include/getopt.h ../include/sane/sane.h ../include/sane/sanei.h
pie.lo: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
pie.lo: ../include/sane/sanei_debug.h ../include/sane/sanei_backend.h
pie.lo: ../include/sane/sanei_config.h ../include/sane/sanei_thread.h
pie.lo: ../include/sane/config.h pie-scsidef.h
pie-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
pie-s.lo: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
pie-s.lo: /usr/include/features.h /usr/include/sys/cdefs.h
pie-s.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
pie-s.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
pie-s.lo: /usr/include/sys/types.h /usr/include/bits/types.h
pie-s.lo: /usr/include/bits/typesizes.h /usr/include/time.h
pie-s.lo: /usr/include/endian.h /usr/include/bits/endian.h
pie-s.lo: /usr/include/sys/select.h /usr/include/bits/select.h
pie-s.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
pie-s.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
pie-s.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
pie-s.lo: /usr/include/bits/stat.h /usr/include/limits.h
pie-s.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
pie-s.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
pie-s.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
pint.lo: ../include/sane/config.h /usr/include/limits.h
pint.lo: /usr/include/features.h /usr/include/sys/cdefs.h
pint.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
pint.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/posix1_lim.h
pint.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
pint.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
pint.lo: /usr/include/bits/stdio_lim.h /usr/include/stdlib.h
pint.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
pint.lo: /usr/include/endian.h /usr/include/bits/endian.h
pint.lo: /usr/include/xlocale.h /usr/include/sys/types.h
pint.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
pint.lo: /usr/include/time.h /usr/include/sys/select.h
pint.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
pint.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
pint.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
pint.lo: /usr/include/string.h ../include/sane/sane.h
pint.lo: ../include/sane/saneopts.h /usr/include/unistd.h
pint.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
pint.lo: /usr/include/bits/confname.h ../include/getopt.h
pint.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
pint.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
pint.lo: /usr/include/bits/stat.h ../include/sane/sanei_backend.h
pint.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
pint.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
pint.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
pint.lo: /usr/include/bits/sys_errlist.h pint.h /usr/include/sys/ioctl.h
pint.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
pint.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
pint.lo: /usr/include/asm-i386/ioctl.h /usr/include/asm-generic/ioctl.h
pint.lo: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
pixma.lo: ../include/sane/config.h /usr/include/errno.h
pixma.lo: /usr/include/features.h /usr/include/sys/cdefs.h
pixma.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
pixma.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
pixma.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
pixma.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
pixma.lo: /usr/include/asm-generic/errno-base.h /usr/include/string.h
pixma.lo: /usr/include/xlocale.h /usr/include/stdlib.h
pixma.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
pixma.lo: /usr/include/endian.h /usr/include/bits/endian.h
pixma.lo: /usr/include/sys/types.h /usr/include/bits/types.h
pixma.lo: /usr/include/bits/typesizes.h /usr/include/time.h
pixma.lo: /usr/include/sys/select.h /usr/include/bits/select.h
pixma.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
pixma.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
pixma.lo: /usr/include/alloca.h /usr/include/signal.h
pixma.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
pixma.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
pixma.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
pixma.lo: /usr/include/bits/sigthread.h /usr/include/unistd.h
pixma.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
pixma.lo: /usr/include/bits/confname.h ../include/getopt.h
pixma.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
pixma.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
pixma.lo: /usr/include/bits/stat.h pixma_rename.h pixma.h
pixma.lo: /usr/include/stdint.h /usr/include/bits/wchar.h
pixma.lo: ../include/sane/sane.h ../include/sane/sanei.h
pixma.lo: ../include/sane/sane.h ../include/sane/saneopts.h
pixma.lo: ../include/sane/sanei_thread.h ../include/sane/sanei_backend.h
pixma.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
pixma.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
pixma.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
pixma.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
pixma.lo: /usr/include/bits/stdio_lim.h pixma_sane_options.h
pixma.lo: pixma_sane_options.c
pixma_common.lo: ../include/sane/config.h /usr/include/stdio.h
pixma_common.lo: /usr/include/features.h /usr/include/sys/cdefs.h
pixma_common.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
pixma_common.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
pixma_common.lo: /usr/include/bits/typesizes.h /usr/include/libio.h
pixma_common.lo: /usr/include/_G_config.h /usr/include/wchar.h
pixma_common.lo: /usr/include/bits/stdio_lim.h
pixma_common.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
pixma_common.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
pixma_common.lo: /usr/include/endian.h /usr/include/bits/endian.h
pixma_common.lo: /usr/include/xlocale.h /usr/include/sys/types.h
pixma_common.lo: /usr/include/time.h /usr/include/sys/select.h
pixma_common.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
pixma_common.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
pixma_common.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
pixma_common.lo: /usr/include/string.h /usr/include/math.h
pixma_common.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
pixma_common.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
pixma_common.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
pixma_common.lo: /usr/include/bits/mathcalls.h /usr/include/sys/time.h
pixma_common.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
pixma_common.lo: /usr/include/bits/environments.h
pixma_common.lo: /usr/include/bits/confname.h ../include/getopt.h
pixma_common.lo: pixma_rename.h pixma_common.h pixma.h /usr/include/stdint.h
pixma_common.lo: /usr/include/bits/wchar.h ../include/sane/sanei_debug.h
pixma_common.lo: ../include/sane/sanei.h ../include/sane/sane.h pixma_io.h
pixma_io_sanei.lo: ../include/sane/config.h /usr/include/string.h
pixma_io_sanei.lo: /usr/include/features.h /usr/include/sys/cdefs.h
pixma_io_sanei.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
pixma_io_sanei.lo: /usr/include/gnu/stubs-32.h /usr/include/xlocale.h
pixma_io_sanei.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
pixma_io_sanei.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
pixma_io_sanei.lo: /usr/include/bits/endian.h /usr/include/sys/types.h
pixma_io_sanei.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
pixma_io_sanei.lo: /usr/include/time.h /usr/include/sys/select.h
pixma_io_sanei.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
pixma_io_sanei.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
pixma_io_sanei.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
pixma_io_sanei.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
pixma_io_sanei.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
pixma_io_sanei.lo: /usr/include/bits/posix2_lim.h
pixma_io_sanei.lo: /usr/include/bits/xopen_lim.h
pixma_io_sanei.lo: /usr/include/bits/stdio_lim.h pixma_rename.h
pixma_io_sanei.lo: pixma_common.h pixma.h /usr/include/stdint.h
pixma_io_sanei.lo: /usr/include/bits/wchar.h ../include/sane/sanei_debug.h
pixma_io_sanei.lo: ../include/sane/sanei.h ../include/sane/sane.h pixma_io.h
pixma_io_sanei.lo: ../include/sane/sanei_usb.h ../include/sane/sane.h
pixma_mp150.lo: ../include/sane/config.h /usr/include/stdio.h
pixma_mp150.lo: /usr/include/features.h /usr/include/sys/cdefs.h
pixma_mp150.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
pixma_mp150.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
pixma_mp150.lo: /usr/include/bits/typesizes.h /usr/include/libio.h
pixma_mp150.lo: /usr/include/_G_config.h /usr/include/wchar.h
pixma_mp150.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
pixma_mp150.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
pixma_mp150.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
pixma_mp150.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
pixma_mp150.lo: /usr/include/sys/types.h /usr/include/time.h
pixma_mp150.lo: /usr/include/sys/select.h /usr/include/bits/select.h
pixma_mp150.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
pixma_mp150.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
pixma_mp150.lo: /usr/include/alloca.h /usr/include/string.h pixma_rename.h
pixma_mp150.lo: pixma_common.h pixma.h /usr/include/stdint.h
pixma_mp150.lo: /usr/include/bits/wchar.h ../include/sane/sanei_debug.h
pixma_mp150.lo: ../include/sane/sanei.h ../include/sane/sane.h pixma_io.h
pixma_mp730.lo: ../include/sane/config.h /usr/include/stdio.h
pixma_mp730.lo: /usr/include/features.h /usr/include/sys/cdefs.h
pixma_mp730.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
pixma_mp730.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
pixma_mp730.lo: /usr/include/bits/typesizes.h /usr/include/libio.h
pixma_mp730.lo: /usr/include/_G_config.h /usr/include/wchar.h
pixma_mp730.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
pixma_mp730.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
pixma_mp730.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
pixma_mp730.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
pixma_mp730.lo: /usr/include/sys/types.h /usr/include/time.h
pixma_mp730.lo: /usr/include/sys/select.h /usr/include/bits/select.h
pixma_mp730.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
pixma_mp730.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
pixma_mp730.lo: /usr/include/alloca.h /usr/include/string.h pixma_rename.h
pixma_mp730.lo: pixma_common.h pixma.h /usr/include/stdint.h
pixma_mp730.lo: /usr/include/bits/wchar.h ../include/sane/sanei_debug.h
pixma_mp730.lo: ../include/sane/sanei.h ../include/sane/sane.h pixma_io.h
pixma_mp750.lo: ../include/sane/config.h /usr/include/stdlib.h
pixma_mp750.lo: /usr/include/features.h /usr/include/sys/cdefs.h
pixma_mp750.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
pixma_mp750.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
pixma_mp750.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
pixma_mp750.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
pixma_mp750.lo: /usr/include/sys/types.h /usr/include/bits/types.h
pixma_mp750.lo: /usr/include/bits/typesizes.h /usr/include/time.h
pixma_mp750.lo: /usr/include/sys/select.h /usr/include/bits/select.h
pixma_mp750.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
pixma_mp750.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
pixma_mp750.lo: /usr/include/alloca.h /usr/include/string.h pixma_rename.h
pixma_mp750.lo: pixma_common.h pixma.h /usr/include/stdint.h
pixma_mp750.lo: /usr/include/bits/wchar.h ../include/sane/sanei_debug.h
pixma_mp750.lo: ../include/sane/sanei.h ../include/sane/sane.h pixma_io.h
pixma-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
pixma-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
pixma-s.lo: /usr/include/fcntl.h /usr/include/features.h
pixma-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
pixma-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
pixma-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
pixma-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
pixma-s.lo: /usr/include/time.h /usr/include/endian.h
pixma-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
pixma-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
pixma-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
pixma-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
pixma-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
pixma-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
pixma-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
pixma-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
pixma-s.lo: /usr/include/bits/stdio_lim.h
plustek.lo: ../include/sane/config.h ../include/lalloca.h
plustek.lo: /usr/include/errno.h /usr/include/features.h
plustek.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
plustek.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
plustek.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
plustek.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
plustek.lo: /usr/include/asm-generic/errno.h
plustek.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
plustek.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
plustek.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
plustek.lo: /usr/include/time.h /usr/include/endian.h
plustek.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
plustek.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
plustek.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
plustek.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
plustek.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
plustek.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
plustek.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
plustek.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
plustek.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
plustek.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
plustek.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
plustek.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek.lo: /usr/include/bits/sigthread.h /usr/include/stdlib.h
plustek.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
plustek.lo: /usr/include/xlocale.h /usr/include/alloca.h
plustek.lo: /usr/include/string.h /usr/include/ctype.h /usr/include/unistd.h
plustek.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
plustek.lo: /usr/include/bits/confname.h ../include/getopt.h
plustek.lo: /usr/include/math.h /usr/include/bits/huge_val.h
plustek.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
plustek.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
plustek.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
plustek.lo: /usr/include/sys/time.h /usr/include/sys/ioctl.h
plustek.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek.lo: /usr/include/asm-i386/ioctl.h /usr/include/asm-generic/ioctl.h
plustek.lo: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
plustek.lo: ../include/sane/sane.h ../include/sane/sanei.h
plustek.lo: ../include/sane/sane.h ../include/sane/saneopts.h
plustek.lo: ../include/sane/sanei_access.h ../include/sane/sanei_backend.h
plustek.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
plustek.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
plustek.lo: /usr/include/libio.h /usr/include/_G_config.h
plustek.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
plustek.lo: ../include/sane/sanei_thread.h plustek-usb.h plustek.h
plustek.lo: plustek-usbio.c ../include/sane/sanei_usb.h
plustek.lo: ../include/sane/sanei_lm983x.h plustek-usbdevs.c plustek-usbhw.c
plustek.lo: plustek-usbmap.c plustek-usbscan.c plustek-usbimg.c
plustek.lo: plustek-usbcalfile.c plustek-usbshading.c plustek-usbcal.c
plustek.lo: plustek-usb.c
plustek_pp.lo: ../include/sane/config.h ../include/lalloca.h
plustek_pp.lo: /usr/include/errno.h /usr/include/features.h
plustek_pp.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
plustek_pp.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
plustek_pp.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
plustek_pp.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
plustek_pp.lo: /usr/include/asm-generic/errno.h
plustek_pp.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
plustek_pp.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
plustek_pp.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
plustek_pp.lo: /usr/include/time.h /usr/include/endian.h
plustek_pp.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
plustek_pp.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
plustek_pp.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
plustek_pp.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
plustek_pp.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
plustek_pp.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
plustek_pp.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
plustek_pp.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
plustek_pp.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
plustek_pp.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
plustek_pp.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
plustek_pp.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek_pp.lo: /usr/include/bits/sigthread.h /usr/include/stdlib.h
plustek_pp.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
plustek_pp.lo: /usr/include/xlocale.h /usr/include/alloca.h
plustek_pp.lo: /usr/include/string.h /usr/include/ctype.h
plustek_pp.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
plustek_pp.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
plustek_pp.lo: ../include/getopt.h /usr/include/math.h
plustek_pp.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
plustek_pp.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
plustek_pp.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
plustek_pp.lo: /usr/include/bits/mathcalls.h /usr/include/sys/time.h
plustek_pp.lo: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
plustek_pp.lo: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
plustek_pp.lo: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
plustek_pp.lo: /usr/include/asm-generic/ioctl.h
plustek_pp.lo: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
plustek_pp.lo: ../include/sane/sane.h ../include/sane/sanei.h
plustek_pp.lo: ../include/sane/sane.h ../include/sane/saneopts.h
plustek_pp.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
plustek_pp.lo: ../include/sane/sanei.h ../include/sane/sanei_config.h
plustek_pp.lo: /usr/include/stdio.h /usr/include/libio.h
plustek_pp.lo: /usr/include/_G_config.h /usr/include/wchar.h
plustek_pp.lo: /usr/include/bits/sys_errlist.h ../include/sane/sanei_thread.h
plustek_pp.lo: ../include/sane/sanei_pp.h plustek-pp.h plustek-pp_io.c
plustek_pp.lo: plustek-pp_scan.h /usr/include/sys/signal.h
plustek_pp.lo: /usr/include/sys/io.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek_pp.lo: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek_pp.lo: /usr/include/assert.h plustek-pp_dac.c plustek-pp_detect.c
plustek_pp.lo: plustek-pp_genericio.c plustek-pp_image.c plustek-pp_map.c
plustek_pp.lo: plustek-pp_misc.c plustek-pp_models.c plustek-pp_motor.c
plustek_pp.lo: plustek-pp_p12.c plustek-pp_p12ccd.c plustek-pp_p48xx.c
plustek_pp.lo: plustek-pp_p9636.c plustek-pp_procfs.c plustek-pp_scale.c
plustek_pp.lo: plustek-pp_tpa.c plustek-pp_ptdrv.c plustek-pp_wrapper.c
plustek-pp_dac.lo: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_dac.lo: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_dac.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_dac.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-pp_dac.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_dac.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_dac.lo: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_dac.lo: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_dac.lo: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_dac.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_dac.lo: /usr/include/sys/sysmacros.h
plustek-pp_dac.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_dac.lo: /usr/include/string.h /usr/include/stdio.h
plustek-pp_dac.lo: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_dac.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_dac.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_dac.lo: /usr/include/bits/posix_opt.h
plustek-pp_dac.lo: /usr/include/bits/environments.h
plustek-pp_dac.lo: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_dac.lo: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_dac.lo: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_dac.lo: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
plustek-pp_dac.lo: /usr/include/bits/sigcontext.h
plustek-pp_dac.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_dac.lo: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_dac.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_dac.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_dac.lo: /usr/include/asm-i386/ioctl.h
plustek-pp_dac.lo: /usr/include/asm-generic/ioctl.h
plustek-pp_dac.lo: /usr/include/bits/ioctl-types.h
plustek-pp_dac.lo: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_dac.lo: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_dac.lo: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek-pp_dac.lo: /usr/include/assert.h
plustek-pp_detect.lo: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_detect.lo: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_detect.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_detect.lo: /usr/include/gnu/stubs-32.h
plustek-pp_detect.lo: /usr/include/bits/waitflags.h
plustek-pp_detect.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_detect.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_detect.lo: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_detect.lo: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_detect.lo: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_detect.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_detect.lo: /usr/include/sys/sysmacros.h
plustek-pp_detect.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_detect.lo: /usr/include/string.h /usr/include/stdio.h
plustek-pp_detect.lo: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_detect.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_detect.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_detect.lo: /usr/include/bits/posix_opt.h
plustek-pp_detect.lo: /usr/include/bits/environments.h
plustek-pp_detect.lo: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_detect.lo: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_detect.lo: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_detect.lo: /usr/include/bits/siginfo.h
plustek-pp_detect.lo: /usr/include/bits/sigaction.h
plustek-pp_detect.lo: /usr/include/bits/sigcontext.h
plustek-pp_detect.lo: /usr/include/bits/sigstack.h
plustek-pp_detect.lo: /usr/include/sys/ucontext.h
plustek-pp_detect.lo: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_detect.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_detect.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_detect.lo: /usr/include/asm-i386/ioctl.h
plustek-pp_detect.lo: /usr/include/asm-generic/ioctl.h
plustek-pp_detect.lo: /usr/include/bits/ioctl-types.h
plustek-pp_detect.lo: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_detect.lo: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_detect.lo: plustek-pp_scandata.h plustek-pp_procs.h
plustek-pp_detect.lo: plustek-pp_dbg.h /usr/include/assert.h
plustek-pp_genericio.lo: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_genericio.lo: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_genericio.lo: /usr/include/bits/wordsize.h
plustek-pp_genericio.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
plustek-pp_genericio.lo: /usr/include/bits/waitflags.h
plustek-pp_genericio.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_genericio.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_genericio.lo: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_genericio.lo: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_genericio.lo: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_genericio.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_genericio.lo: /usr/include/sys/sysmacros.h
plustek-pp_genericio.lo: /usr/include/bits/pthreadtypes.h
plustek-pp_genericio.lo: /usr/include/alloca.h /usr/include/string.h
plustek-pp_genericio.lo: /usr/include/stdio.h /usr/include/libio.h
plustek-pp_genericio.lo: /usr/include/_G_config.h /usr/include/wchar.h
plustek-pp_genericio.lo: /usr/include/bits/stdio_lim.h
plustek-pp_genericio.lo: /usr/include/bits/sys_errlist.h
plustek-pp_genericio.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
plustek-pp_genericio.lo: /usr/include/bits/environments.h
plustek-pp_genericio.lo: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_genericio.lo: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_genericio.lo: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_genericio.lo: /usr/include/bits/siginfo.h
plustek-pp_genericio.lo: /usr/include/bits/sigaction.h
plustek-pp_genericio.lo: /usr/include/bits/sigcontext.h
plustek-pp_genericio.lo: /usr/include/bits/sigstack.h
plustek-pp_genericio.lo: /usr/include/sys/ucontext.h
plustek-pp_genericio.lo: /usr/include/bits/sigthread.h
plustek-pp_genericio.lo: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
plustek-pp_genericio.lo: /usr/include/asm/ioctls.h
plustek-pp_genericio.lo: /usr/include/asm-i386/ioctls.h
plustek-pp_genericio.lo: /usr/include/asm/ioctl.h
plustek-pp_genericio.lo: /usr/include/asm-i386/ioctl.h
plustek-pp_genericio.lo: /usr/include/asm-generic/ioctl.h
plustek-pp_genericio.lo: /usr/include/bits/ioctl-types.h
plustek-pp_genericio.lo: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_genericio.lo: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_genericio.lo: plustek-pp_scandata.h plustek-pp_procs.h
plustek-pp_genericio.lo: plustek-pp_dbg.h /usr/include/assert.h
plustek-pp_image.lo: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_image.lo: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_image.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_image.lo: /usr/include/gnu/stubs-32.h
plustek-pp_image.lo: /usr/include/bits/waitflags.h
plustek-pp_image.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_image.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_image.lo: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_image.lo: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_image.lo: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_image.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_image.lo: /usr/include/sys/sysmacros.h
plustek-pp_image.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_image.lo: /usr/include/string.h /usr/include/stdio.h
plustek-pp_image.lo: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_image.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_image.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_image.lo: /usr/include/bits/posix_opt.h
plustek-pp_image.lo: /usr/include/bits/environments.h
plustek-pp_image.lo: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_image.lo: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_image.lo: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_image.lo: /usr/include/bits/siginfo.h
plustek-pp_image.lo: /usr/include/bits/sigaction.h
plustek-pp_image.lo: /usr/include/bits/sigcontext.h
plustek-pp_image.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_image.lo: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_image.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_image.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_image.lo: /usr/include/asm-i386/ioctl.h
plustek-pp_image.lo: /usr/include/asm-generic/ioctl.h
plustek-pp_image.lo: /usr/include/bits/ioctl-types.h
plustek-pp_image.lo: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_image.lo: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_image.lo: plustek-pp_scandata.h plustek-pp_procs.h
plustek-pp_image.lo: plustek-pp_dbg.h /usr/include/assert.h
plustek-pp_io.lo: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_io.lo: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_io.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_io.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-pp_io.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_io.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_io.lo: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_io.lo: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_io.lo: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_io.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_io.lo: /usr/include/sys/sysmacros.h
plustek-pp_io.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_io.lo: /usr/include/string.h /usr/include/stdio.h
plustek-pp_io.lo: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_io.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_io.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_io.lo: /usr/include/bits/posix_opt.h
plustek-pp_io.lo: /usr/include/bits/environments.h
plustek-pp_io.lo: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_io.lo: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_io.lo: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_io.lo: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
plustek-pp_io.lo: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
plustek-pp_io.lo: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
plustek-pp_io.lo: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
plustek-pp_io.lo: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
plustek-pp_io.lo: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
plustek-pp_io.lo: /usr/include/asm-generic/ioctl.h
plustek-pp_io.lo: /usr/include/bits/ioctl-types.h
plustek-pp_io.lo: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_io.lo: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_io.lo: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek-pp_io.lo: /usr/include/assert.h
plustek-pp_map.lo: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_map.lo: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_map.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_map.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-pp_map.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_map.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_map.lo: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_map.lo: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_map.lo: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_map.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_map.lo: /usr/include/sys/sysmacros.h
plustek-pp_map.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_map.lo: /usr/include/string.h /usr/include/stdio.h
plustek-pp_map.lo: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_map.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_map.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_map.lo: /usr/include/bits/posix_opt.h
plustek-pp_map.lo: /usr/include/bits/environments.h
plustek-pp_map.lo: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_map.lo: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_map.lo: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_map.lo: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
plustek-pp_map.lo: /usr/include/bits/sigcontext.h
plustek-pp_map.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_map.lo: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_map.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_map.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_map.lo: /usr/include/asm-i386/ioctl.h
plustek-pp_map.lo: /usr/include/asm-generic/ioctl.h
plustek-pp_map.lo: /usr/include/bits/ioctl-types.h
plustek-pp_map.lo: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_map.lo: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_map.lo: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek-pp_map.lo: /usr/include/assert.h
plustek-pp_misc.lo: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_misc.lo: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_misc.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_misc.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-pp_misc.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_misc.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_misc.lo: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_misc.lo: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_misc.lo: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_misc.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_misc.lo: /usr/include/sys/sysmacros.h
plustek-pp_misc.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_misc.lo: /usr/include/string.h /usr/include/stdio.h
plustek-pp_misc.lo: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_misc.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_misc.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_misc.lo: /usr/include/bits/posix_opt.h
plustek-pp_misc.lo: /usr/include/bits/environments.h
plustek-pp_misc.lo: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_misc.lo: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_misc.lo: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_misc.lo: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
plustek-pp_misc.lo: /usr/include/bits/sigcontext.h
plustek-pp_misc.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_misc.lo: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_misc.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_misc.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_misc.lo: /usr/include/asm-i386/ioctl.h
plustek-pp_misc.lo: /usr/include/asm-generic/ioctl.h
plustek-pp_misc.lo: /usr/include/bits/ioctl-types.h
plustek-pp_misc.lo: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_misc.lo: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_misc.lo: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek-pp_misc.lo: /usr/include/assert.h
plustek-pp_models.lo: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_models.lo: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_models.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_models.lo: /usr/include/gnu/stubs-32.h
plustek-pp_models.lo: /usr/include/bits/waitflags.h
plustek-pp_models.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_models.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_models.lo: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_models.lo: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_models.lo: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_models.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_models.lo: /usr/include/sys/sysmacros.h
plustek-pp_models.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_models.lo: /usr/include/string.h /usr/include/stdio.h
plustek-pp_models.lo: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_models.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_models.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_models.lo: /usr/include/bits/posix_opt.h
plustek-pp_models.lo: /usr/include/bits/environments.h
plustek-pp_models.lo: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_models.lo: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_models.lo: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_models.lo: /usr/include/bits/siginfo.h
plustek-pp_models.lo: /usr/include/bits/sigaction.h
plustek-pp_models.lo: /usr/include/bits/sigcontext.h
plustek-pp_models.lo: /usr/include/bits/sigstack.h
plustek-pp_models.lo: /usr/include/sys/ucontext.h
plustek-pp_models.lo: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_models.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_models.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_models.lo: /usr/include/asm-i386/ioctl.h
plustek-pp_models.lo: /usr/include/asm-generic/ioctl.h
plustek-pp_models.lo: /usr/include/bits/ioctl-types.h
plustek-pp_models.lo: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_models.lo: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_models.lo: plustek-pp_scandata.h plustek-pp_procs.h
plustek-pp_models.lo: plustek-pp_dbg.h /usr/include/assert.h
plustek-pp_motor.lo: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_motor.lo: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_motor.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_motor.lo: /usr/include/gnu/stubs-32.h
plustek-pp_motor.lo: /usr/include/bits/waitflags.h
plustek-pp_motor.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_motor.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_motor.lo: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_motor.lo: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_motor.lo: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_motor.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_motor.lo: /usr/include/sys/sysmacros.h
plustek-pp_motor.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_motor.lo: /usr/include/string.h /usr/include/stdio.h
plustek-pp_motor.lo: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_motor.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_motor.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_motor.lo: /usr/include/bits/posix_opt.h
plustek-pp_motor.lo: /usr/include/bits/environments.h
plustek-pp_motor.lo: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_motor.lo: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_motor.lo: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_motor.lo: /usr/include/bits/siginfo.h
plustek-pp_motor.lo: /usr/include/bits/sigaction.h
plustek-pp_motor.lo: /usr/include/bits/sigcontext.h
plustek-pp_motor.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_motor.lo: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_motor.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_motor.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_motor.lo: /usr/include/asm-i386/ioctl.h
plustek-pp_motor.lo: /usr/include/asm-generic/ioctl.h
plustek-pp_motor.lo: /usr/include/bits/ioctl-types.h
plustek-pp_motor.lo: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_motor.lo: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_motor.lo: plustek-pp_scandata.h plustek-pp_procs.h
plustek-pp_motor.lo: plustek-pp_dbg.h /usr/include/assert.h
plustek-pp_p12.lo: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_p12.lo: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_p12.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_p12.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-pp_p12.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_p12.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_p12.lo: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_p12.lo: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_p12.lo: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_p12.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_p12.lo: /usr/include/sys/sysmacros.h
plustek-pp_p12.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_p12.lo: /usr/include/string.h /usr/include/stdio.h
plustek-pp_p12.lo: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_p12.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_p12.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_p12.lo: /usr/include/bits/posix_opt.h
plustek-pp_p12.lo: /usr/include/bits/environments.h
plustek-pp_p12.lo: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_p12.lo: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_p12.lo: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_p12.lo: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
plustek-pp_p12.lo: /usr/include/bits/sigcontext.h
plustek-pp_p12.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_p12.lo: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_p12.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_p12.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_p12.lo: /usr/include/asm-i386/ioctl.h
plustek-pp_p12.lo: /usr/include/asm-generic/ioctl.h
plustek-pp_p12.lo: /usr/include/bits/ioctl-types.h
plustek-pp_p12.lo: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_p12.lo: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_p12.lo: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek-pp_p12.lo: /usr/include/assert.h
plustek-pp_p12ccd.lo: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_p12ccd.lo: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_p12ccd.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_p12ccd.lo: /usr/include/gnu/stubs-32.h
plustek-pp_p12ccd.lo: /usr/include/bits/waitflags.h
plustek-pp_p12ccd.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_p12ccd.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_p12ccd.lo: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_p12ccd.lo: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_p12ccd.lo: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_p12ccd.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_p12ccd.lo: /usr/include/sys/sysmacros.h
plustek-pp_p12ccd.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_p12ccd.lo: /usr/include/string.h /usr/include/stdio.h
plustek-pp_p12ccd.lo: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_p12ccd.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_p12ccd.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_p12ccd.lo: /usr/include/bits/posix_opt.h
plustek-pp_p12ccd.lo: /usr/include/bits/environments.h
plustek-pp_p12ccd.lo: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_p12ccd.lo: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_p12ccd.lo: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_p12ccd.lo: /usr/include/bits/siginfo.h
plustek-pp_p12ccd.lo: /usr/include/bits/sigaction.h
plustek-pp_p12ccd.lo: /usr/include/bits/sigcontext.h
plustek-pp_p12ccd.lo: /usr/include/bits/sigstack.h
plustek-pp_p12ccd.lo: /usr/include/sys/ucontext.h
plustek-pp_p12ccd.lo: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_p12ccd.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_p12ccd.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_p12ccd.lo: /usr/include/asm-i386/ioctl.h
plustek-pp_p12ccd.lo: /usr/include/asm-generic/ioctl.h
plustek-pp_p12ccd.lo: /usr/include/bits/ioctl-types.h
plustek-pp_p12ccd.lo: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_p12ccd.lo: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_p12ccd.lo: plustek-pp_scandata.h plustek-pp_procs.h
plustek-pp_p12ccd.lo: plustek-pp_dbg.h /usr/include/assert.h
plustek-pp_p48xx.lo: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_p48xx.lo: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_p48xx.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_p48xx.lo: /usr/include/gnu/stubs-32.h
plustek-pp_p48xx.lo: /usr/include/bits/waitflags.h
plustek-pp_p48xx.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_p48xx.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_p48xx.lo: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_p48xx.lo: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_p48xx.lo: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_p48xx.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_p48xx.lo: /usr/include/sys/sysmacros.h
plustek-pp_p48xx.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_p48xx.lo: /usr/include/string.h /usr/include/stdio.h
plustek-pp_p48xx.lo: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_p48xx.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_p48xx.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_p48xx.lo: /usr/include/bits/posix_opt.h
plustek-pp_p48xx.lo: /usr/include/bits/environments.h
plustek-pp_p48xx.lo: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_p48xx.lo: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_p48xx.lo: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_p48xx.lo: /usr/include/bits/siginfo.h
plustek-pp_p48xx.lo: /usr/include/bits/sigaction.h
plustek-pp_p48xx.lo: /usr/include/bits/sigcontext.h
plustek-pp_p48xx.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_p48xx.lo: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_p48xx.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_p48xx.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_p48xx.lo: /usr/include/asm-i386/ioctl.h
plustek-pp_p48xx.lo: /usr/include/asm-generic/ioctl.h
plustek-pp_p48xx.lo: /usr/include/bits/ioctl-types.h
plustek-pp_p48xx.lo: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_p48xx.lo: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_p48xx.lo: plustek-pp_scandata.h plustek-pp_procs.h
plustek-pp_p48xx.lo: plustek-pp_dbg.h /usr/include/assert.h
plustek-pp_p9636.lo: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_p9636.lo: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_p9636.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_p9636.lo: /usr/include/gnu/stubs-32.h
plustek-pp_p9636.lo: /usr/include/bits/waitflags.h
plustek-pp_p9636.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_p9636.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_p9636.lo: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_p9636.lo: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_p9636.lo: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_p9636.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_p9636.lo: /usr/include/sys/sysmacros.h
plustek-pp_p9636.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_p9636.lo: /usr/include/string.h /usr/include/stdio.h
plustek-pp_p9636.lo: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_p9636.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_p9636.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_p9636.lo: /usr/include/bits/posix_opt.h
plustek-pp_p9636.lo: /usr/include/bits/environments.h
plustek-pp_p9636.lo: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_p9636.lo: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_p9636.lo: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_p9636.lo: /usr/include/bits/siginfo.h
plustek-pp_p9636.lo: /usr/include/bits/sigaction.h
plustek-pp_p9636.lo: /usr/include/bits/sigcontext.h
plustek-pp_p9636.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_p9636.lo: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_p9636.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_p9636.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_p9636.lo: /usr/include/asm-i386/ioctl.h
plustek-pp_p9636.lo: /usr/include/asm-generic/ioctl.h
plustek-pp_p9636.lo: /usr/include/bits/ioctl-types.h
plustek-pp_p9636.lo: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_p9636.lo: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_p9636.lo: plustek-pp_scandata.h plustek-pp_procs.h
plustek-pp_p9636.lo: plustek-pp_dbg.h /usr/include/assert.h
plustek-pp_ptdrv.lo: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_ptdrv.lo: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_ptdrv.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_ptdrv.lo: /usr/include/gnu/stubs-32.h
plustek-pp_ptdrv.lo: /usr/include/bits/waitflags.h
plustek-pp_ptdrv.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_ptdrv.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_ptdrv.lo: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_ptdrv.lo: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_ptdrv.lo: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_ptdrv.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_ptdrv.lo: /usr/include/sys/sysmacros.h
plustek-pp_ptdrv.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_ptdrv.lo: /usr/include/string.h /usr/include/stdio.h
plustek-pp_ptdrv.lo: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_ptdrv.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_ptdrv.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_ptdrv.lo: /usr/include/bits/posix_opt.h
plustek-pp_ptdrv.lo: /usr/include/bits/environments.h
plustek-pp_ptdrv.lo: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_ptdrv.lo: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_ptdrv.lo: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_ptdrv.lo: /usr/include/bits/siginfo.h
plustek-pp_ptdrv.lo: /usr/include/bits/sigaction.h
plustek-pp_ptdrv.lo: /usr/include/bits/sigcontext.h
plustek-pp_ptdrv.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_ptdrv.lo: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_ptdrv.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_ptdrv.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_ptdrv.lo: /usr/include/asm-i386/ioctl.h
plustek-pp_ptdrv.lo: /usr/include/asm-generic/ioctl.h
plustek-pp_ptdrv.lo: /usr/include/bits/ioctl-types.h
plustek-pp_ptdrv.lo: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_ptdrv.lo: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_ptdrv.lo: plustek-pp_scandata.h plustek-pp_procs.h
plustek-pp_ptdrv.lo: plustek-pp_dbg.h /usr/include/assert.h
plustek_pp-s.lo: ../include/sane/sanei_backend.h
plustek_pp-s.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
plustek_pp-s.lo: ../include/sane/sane.h /usr/include/fcntl.h
plustek_pp-s.lo: /usr/include/features.h /usr/include/sys/cdefs.h
plustek_pp-s.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek_pp-s.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
plustek_pp-s.lo: /usr/include/sys/types.h /usr/include/bits/types.h
plustek_pp-s.lo: /usr/include/bits/typesizes.h /usr/include/time.h
plustek_pp-s.lo: /usr/include/endian.h /usr/include/bits/endian.h
plustek_pp-s.lo: /usr/include/sys/select.h /usr/include/bits/select.h
plustek_pp-s.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek_pp-s.lo: /usr/include/sys/sysmacros.h
plustek_pp-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
plustek_pp-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
plustek_pp-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
plustek_pp-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
plustek_pp-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
plustek_pp-s.lo: /usr/include/bits/stdio_lim.h
plustek-pp_scale.lo: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_scale.lo: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_scale.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_scale.lo: /usr/include/gnu/stubs-32.h
plustek-pp_scale.lo: /usr/include/bits/waitflags.h
plustek-pp_scale.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_scale.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_scale.lo: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_scale.lo: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_scale.lo: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_scale.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_scale.lo: /usr/include/sys/sysmacros.h
plustek-pp_scale.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_scale.lo: /usr/include/string.h /usr/include/stdio.h
plustek-pp_scale.lo: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_scale.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_scale.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_scale.lo: /usr/include/bits/posix_opt.h
plustek-pp_scale.lo: /usr/include/bits/environments.h
plustek-pp_scale.lo: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_scale.lo: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_scale.lo: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_scale.lo: /usr/include/bits/siginfo.h
plustek-pp_scale.lo: /usr/include/bits/sigaction.h
plustek-pp_scale.lo: /usr/include/bits/sigcontext.h
plustek-pp_scale.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_scale.lo: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_scale.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_scale.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_scale.lo: /usr/include/asm-i386/ioctl.h
plustek-pp_scale.lo: /usr/include/asm-generic/ioctl.h
plustek-pp_scale.lo: /usr/include/bits/ioctl-types.h
plustek-pp_scale.lo: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_scale.lo: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_scale.lo: plustek-pp_scandata.h plustek-pp_procs.h
plustek-pp_scale.lo: plustek-pp_dbg.h /usr/include/assert.h
plustek-pp_tpa.lo: plustek-pp_scan.h /usr/include/stdlib.h
plustek-pp_tpa.lo: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-pp_tpa.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-pp_tpa.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-pp_tpa.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-pp_tpa.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-pp_tpa.lo: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-pp_tpa.lo: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-pp_tpa.lo: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-pp_tpa.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-pp_tpa.lo: /usr/include/sys/sysmacros.h
plustek-pp_tpa.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-pp_tpa.lo: /usr/include/string.h /usr/include/stdio.h
plustek-pp_tpa.lo: /usr/include/libio.h /usr/include/_G_config.h
plustek-pp_tpa.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
plustek-pp_tpa.lo: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
plustek-pp_tpa.lo: /usr/include/bits/posix_opt.h
plustek-pp_tpa.lo: /usr/include/bits/environments.h
plustek-pp_tpa.lo: /usr/include/bits/confname.h ../include/getopt.h
plustek-pp_tpa.lo: /usr/include/sys/time.h /usr/include/sys/signal.h
plustek-pp_tpa.lo: /usr/include/signal.h /usr/include/bits/signum.h
plustek-pp_tpa.lo: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
plustek-pp_tpa.lo: /usr/include/bits/sigcontext.h
plustek-pp_tpa.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
plustek-pp_tpa.lo: /usr/include/bits/sigthread.h /usr/include/sys/ioctl.h
plustek-pp_tpa.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
plustek-pp_tpa.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
plustek-pp_tpa.lo: /usr/include/asm-i386/ioctl.h
plustek-pp_tpa.lo: /usr/include/asm-generic/ioctl.h
plustek-pp_tpa.lo: /usr/include/bits/ioctl-types.h
plustek-pp_tpa.lo: /usr/include/sys/ttydefaults.h /usr/include/sys/io.h
plustek-pp_tpa.lo: plustek-pp.h plustek-pp_types.h plustek-pp_hwdefs.h
plustek-pp_tpa.lo: plustek-pp_scandata.h plustek-pp_procs.h plustek-pp_dbg.h
plustek-pp_tpa.lo: /usr/include/assert.h
plustek-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
plustek-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
plustek-s.lo: /usr/include/fcntl.h /usr/include/features.h
plustek-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
plustek-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
plustek-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
plustek-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
plustek-s.lo: /usr/include/time.h /usr/include/endian.h
plustek-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
plustek-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
plustek-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
plustek-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
plustek-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
plustek-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
plustek-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
plustek-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
plustek-s.lo: /usr/include/bits/stdio_lim.h
plustek-usbdevs.lo: plustek-usb.h
plustek-usbio.lo: ../include/sane/sanei_usb.h ../include/sane/config.h
plustek-usbio.lo: ../include/sane/sane.h /usr/include/stdlib.h
plustek-usbio.lo: /usr/include/features.h /usr/include/sys/cdefs.h
plustek-usbio.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
plustek-usbio.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
plustek-usbio.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
plustek-usbio.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
plustek-usbio.lo: /usr/include/sys/types.h /usr/include/bits/types.h
plustek-usbio.lo: /usr/include/bits/typesizes.h /usr/include/time.h
plustek-usbio.lo: /usr/include/sys/select.h /usr/include/bits/select.h
plustek-usbio.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
plustek-usbio.lo: /usr/include/sys/sysmacros.h
plustek-usbio.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
plustek-usbio.lo: ../include/sane/sanei_lm983x.h
pnm.lo: ../include/sane/config.h /usr/include/stdlib.h
pnm.lo: /usr/include/features.h /usr/include/sys/cdefs.h
pnm.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
pnm.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
pnm.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
pnm.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
pnm.lo: /usr/include/sys/types.h /usr/include/bits/types.h
pnm.lo: /usr/include/bits/typesizes.h /usr/include/time.h
pnm.lo: /usr/include/sys/select.h /usr/include/bits/select.h
pnm.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
pnm.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
pnm.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/stdio.h
pnm.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
pnm.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
pnm.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
pnm.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
pnm.lo: ../include/getopt.h /usr/include/fcntl.h /usr/include/bits/fcntl.h
pnm.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
pnm.lo: /usr/include/bits/stat.h /usr/include/errno.h
pnm.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
pnm.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
pnm.lo: /usr/include/asm-generic/errno.h
pnm.lo: /usr/include/asm-generic/errno-base.h ../include/sane/sane.h
pnm.lo: ../include/sane/sanei.h ../include/sane/sane.h
pnm.lo: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
pnm.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
pnm.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
pnm.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
pnm.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
qcam.lo: ../include/sane/config.h ../include/lalloca.h /usr/include/assert.h
qcam.lo: /usr/include/features.h /usr/include/sys/cdefs.h
qcam.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
qcam.lo: /usr/include/gnu/stubs-32.h /usr/include/ctype.h
qcam.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
qcam.lo: /usr/include/endian.h /usr/include/bits/endian.h
qcam.lo: /usr/include/xlocale.h /usr/include/errno.h
qcam.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
qcam.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
qcam.lo: /usr/include/asm-generic/errno.h
qcam.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
qcam.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
qcam.lo: /usr/include/time.h /usr/include/sys/select.h
qcam.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
qcam.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
qcam.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
qcam.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
qcam.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
qcam.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
qcam.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
qcam.lo: /usr/include/bits/stdio_lim.h /usr/include/math.h
qcam.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
qcam.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
qcam.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
qcam.lo: /usr/include/bits/mathcalls.h /usr/include/setjmp.h
qcam.lo: /usr/include/bits/setjmp.h /usr/include/signal.h
qcam.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
qcam.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
qcam.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
qcam.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
qcam.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
qcam.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
qcam.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
qcam.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/sys/wait.h
qcam.lo: /usr/include/sys/resource.h /usr/include/bits/resource.h
qcam.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
qcam.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
qcam.lo: ../include/getopt.h ../include/sane/sane.h ../include/sane/sanei.h
qcam.lo: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
qcam.lo: ../include/sane/sanei_debug.h ../include/sane/sanei_config.h qcam.h
qcam.lo: /usr/include/sys/io.h
qcam-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
qcam-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
qcam-s.lo: /usr/include/fcntl.h /usr/include/features.h
qcam-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
qcam-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
qcam-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
qcam-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
qcam-s.lo: /usr/include/time.h /usr/include/endian.h
qcam-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
qcam-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
qcam-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
qcam-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
qcam-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
qcam-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
qcam-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
qcam-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
qcam-s.lo: /usr/include/bits/stdio_lim.h
ricoh.lo: ../include/sane/config.h /usr/include/limits.h
ricoh.lo: /usr/include/features.h /usr/include/sys/cdefs.h
ricoh.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
ricoh.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/posix1_lim.h
ricoh.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
ricoh.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
ricoh.lo: /usr/include/bits/stdio_lim.h /usr/include/stdlib.h
ricoh.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
ricoh.lo: /usr/include/endian.h /usr/include/bits/endian.h
ricoh.lo: /usr/include/xlocale.h /usr/include/sys/types.h
ricoh.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
ricoh.lo: /usr/include/time.h /usr/include/sys/select.h
ricoh.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
ricoh.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
ricoh.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
ricoh.lo: /usr/include/string.h /usr/include/sys/time.h /usr/include/unistd.h
ricoh.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
ricoh.lo: /usr/include/bits/confname.h ../include/getopt.h
ricoh.lo: /usr/include/ctype.h ../include/sane/sane.h
ricoh.lo: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
ricoh.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
ricoh.lo: ../include/sane/sanei.h /usr/include/fcntl.h
ricoh.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
ricoh.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
ricoh.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
ricoh.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
ricoh.lo: /usr/include/bits/sys_errlist.h ricoh.h ricoh-scsi.c
ricoh-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
ricoh-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
ricoh-s.lo: /usr/include/fcntl.h /usr/include/features.h
ricoh-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
ricoh-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
ricoh-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
ricoh-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
ricoh-s.lo: /usr/include/time.h /usr/include/endian.h
ricoh-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
ricoh-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
ricoh-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
ricoh-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
ricoh-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
ricoh-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
ricoh-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
ricoh-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
ricoh-s.lo: /usr/include/bits/stdio_lim.h
s9036.lo: ../include/sane/config.h /usr/include/stdlib.h
s9036.lo: /usr/include/features.h /usr/include/sys/cdefs.h
s9036.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
s9036.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
s9036.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
s9036.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
s9036.lo: /usr/include/sys/types.h /usr/include/bits/types.h
s9036.lo: /usr/include/bits/typesizes.h /usr/include/time.h
s9036.lo: /usr/include/sys/select.h /usr/include/bits/select.h
s9036.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
s9036.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
s9036.lo: /usr/include/alloca.h /usr/include/unistd.h
s9036.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
s9036.lo: /usr/include/bits/confname.h ../include/getopt.h
s9036.lo: /usr/include/string.h ../include/sane/sane.h
s9036.lo: ../include/sane/sanei.h ../include/sane/sanei_config.h
s9036.lo: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
s9036.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
s9036.lo: /usr/include/bits/sys_errlist.h ../include/sane/saneopts.h
s9036.lo: ../include/sane/sanei_scsi.h s9036.h
s9036.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
s9036.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
s9036.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
s9036.lo: /usr/include/bits/stat.h /usr/include/limits.h
s9036.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
s9036.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
s9036.lo: /usr/include/bits/xopen_lim.h
s9036-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
s9036-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
s9036-s.lo: /usr/include/fcntl.h /usr/include/features.h
s9036-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
s9036-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
s9036-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
s9036-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
s9036-s.lo: /usr/include/time.h /usr/include/endian.h
s9036-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
s9036-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
s9036-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
s9036-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
s9036-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
s9036-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
s9036-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
s9036-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
s9036-s.lo: /usr/include/bits/stdio_lim.h
sane_strstatus.lo: /usr/include/stdio.h /usr/include/features.h
sane_strstatus.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sane_strstatus.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sane_strstatus.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sane_strstatus.lo: /usr/include/libio.h /usr/include/_G_config.h
sane_strstatus.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
sane_strstatus.lo: /usr/include/bits/sys_errlist.h ../include/sane/sane.h
sceptre.lo: ../include/sane/config.h /usr/include/errno.h
sceptre.lo: /usr/include/features.h /usr/include/sys/cdefs.h
sceptre.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sceptre.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
sceptre.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
sceptre.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
sceptre.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
sceptre.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
sceptre.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sceptre.lo: /usr/include/time.h /usr/include/endian.h
sceptre.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
sceptre.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
sceptre.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sceptre.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
sceptre.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
sceptre.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sceptre.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sceptre.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sceptre.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
sceptre.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
sceptre.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
sceptre.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
sceptre.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
sceptre.lo: /usr/include/libio.h /usr/include/_G_config.h
sceptre.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
sceptre.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sceptre.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
sceptre.lo: /usr/include/alloca.h /usr/include/string.h
sceptre.lo: /usr/include/sys/wait.h /usr/include/sys/resource.h
sceptre.lo: /usr/include/bits/resource.h /usr/include/unistd.h
sceptre.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
sceptre.lo: /usr/include/bits/confname.h ../include/getopt.h
sceptre.lo: ../include/sane/sane.h ../include/sane/sanei.h
sceptre.lo: ../include/sane/sane.h ../include/sane/saneopts.h
sceptre.lo: ../include/sane/sanei_scsi.h ../include/sane/sanei_debug.h
sceptre.lo: ../include/sane/sanei.h ../include/sane/sanei_backend.h
sceptre.lo: ../include/sane/sanei_debug.h ../include/sane/sanei_config.h
sceptre.lo: ../include/lassert.h /usr/include/assert.h sceptre.h
sceptre-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
sceptre-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
sceptre-s.lo: /usr/include/fcntl.h /usr/include/features.h
sceptre-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sceptre-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sceptre-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
sceptre-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sceptre-s.lo: /usr/include/time.h /usr/include/endian.h
sceptre-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
sceptre-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
sceptre-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sceptre-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
sceptre-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
sceptre-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sceptre-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sceptre-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sceptre-s.lo: /usr/include/bits/stdio_lim.h
sharp.lo: ../include/sane/config.h /usr/include/limits.h
sharp.lo: /usr/include/features.h /usr/include/sys/cdefs.h
sharp.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sharp.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/posix1_lim.h
sharp.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sharp.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sharp.lo: /usr/include/bits/stdio_lim.h /usr/include/stdlib.h
sharp.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
sharp.lo: /usr/include/endian.h /usr/include/bits/endian.h
sharp.lo: /usr/include/xlocale.h /usr/include/sys/types.h
sharp.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sharp.lo: /usr/include/time.h /usr/include/sys/select.h
sharp.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
sharp.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sharp.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
sharp.lo: /usr/include/string.h /usr/include/unistd.h
sharp.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
sharp.lo: /usr/include/bits/confname.h ../include/getopt.h
sharp.lo: /usr/include/errno.h /usr/include/bits/errno.h
sharp.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
sharp.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
sharp.lo: /usr/include/asm-generic/errno-base.h /usr/include/math.h
sharp.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
sharp.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
sharp.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
sharp.lo: /usr/include/bits/mathcalls.h ../include/sane/sane.h
sharp.lo: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
sharp.lo: /usr/include/signal.h /usr/include/bits/signum.h
sharp.lo: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
sharp.lo: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
sharp.lo: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
sharp.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
sharp.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
sharp.lo: /usr/include/bits/stat.h /usr/include/sys/wait.h
sharp.lo: /usr/include/sys/resource.h /usr/include/bits/resource.h
sharp.lo: /usr/include/sys/ipc.h /usr/include/bits/ipctypes.h
sharp.lo: /usr/include/bits/ipc.h /usr/include/sys/shm.h
sharp.lo: /usr/include/bits/shm.h ../include/sane/sanei_backend.h
sharp.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h ./sharp.h
sharp.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
sharp.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
sharp.lo: /usr/include/bits/sys_errlist.h
sharp-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
sharp-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
sharp-s.lo: /usr/include/fcntl.h /usr/include/features.h
sharp-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sharp-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sharp-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
sharp-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sharp-s.lo: /usr/include/time.h /usr/include/endian.h
sharp-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
sharp-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
sharp-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sharp-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
sharp-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
sharp-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sharp-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sharp-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sharp-s.lo: /usr/include/bits/stdio_lim.h
sm3600.lo: ../include/sane/config.h /usr/include/stdlib.h
sm3600.lo: /usr/include/features.h /usr/include/sys/cdefs.h
sm3600.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sm3600.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
sm3600.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
sm3600.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
sm3600.lo: /usr/include/sys/types.h /usr/include/bits/types.h
sm3600.lo: /usr/include/bits/typesizes.h /usr/include/time.h
sm3600.lo: /usr/include/sys/select.h /usr/include/bits/select.h
sm3600.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
sm3600.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
sm3600.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/errno.h
sm3600.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
sm3600.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
sm3600.lo: /usr/include/asm-generic/errno.h
sm3600.lo: /usr/include/asm-generic/errno-base.h ../include/sane/sane.h
sm3600.lo: ../include/sane/sanei.h ../include/sane/sane.h
sm3600.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
sm3600.lo: ../include/sane/sanei.h /usr/include/fcntl.h
sm3600.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
sm3600.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
sm3600.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sm3600.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sm3600.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sm3600.lo: /usr/include/bits/stdio_lim.h ../include/sane/sanei_config.h
sm3600.lo: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
sm3600.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
sm3600.lo: ../include/sane/saneopts.h ../include/sane/sanei_usb.h sm3600.h
sm3600.lo: sm3600-scanutil.c /usr/include/unistd.h
sm3600.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
sm3600.lo: /usr/include/bits/confname.h ../include/getopt.h sm3600-scantool.h
sm3600.lo: sm3600-scanusb.c sm3600-scanmtek.c sm3600-homerun.c
sm3600.lo: /usr/include/math.h /usr/include/bits/huge_val.h
sm3600.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
sm3600.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
sm3600.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
sm3600.lo: sm3600-gray.c sm3600-color.c
sm3600-color.lo: sm3600-scantool.h
sm3600-gray.lo: sm3600-scantool.h
sm3600-homerun.lo: sm3600-scantool.h /usr/include/math.h
sm3600-homerun.lo: /usr/include/features.h /usr/include/sys/cdefs.h
sm3600-homerun.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sm3600-homerun.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/huge_val.h
sm3600-homerun.lo: /usr/include/bits/huge_valf.h
sm3600-homerun.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
sm3600-homerun.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
sm3600-homerun.lo: /usr/include/bits/mathcalls.h
sm3600-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
sm3600-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
sm3600-s.lo: /usr/include/fcntl.h /usr/include/features.h
sm3600-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sm3600-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sm3600-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
sm3600-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sm3600-s.lo: /usr/include/time.h /usr/include/endian.h
sm3600-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
sm3600-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
sm3600-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sm3600-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
sm3600-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
sm3600-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sm3600-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sm3600-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sm3600-s.lo: /usr/include/bits/stdio_lim.h
sm3600-scanmtek.lo: sm3600-scantool.h
sm3600-scanusb.lo: sm3600-scantool.h
sm3600-scanutil.lo: /usr/include/unistd.h /usr/include/features.h
sm3600-scanutil.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sm3600-scanutil.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sm3600-scanutil.lo: /usr/include/bits/posix_opt.h
sm3600-scanutil.lo: /usr/include/bits/environments.h
sm3600-scanutil.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sm3600-scanutil.lo: /usr/include/bits/confname.h ../include/getopt.h
sm3600-scanutil.lo: sm3600-scantool.h
sm3840.lo: ../include/sane/config.h /usr/include/string.h
sm3840.lo: /usr/include/features.h /usr/include/sys/cdefs.h
sm3840.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sm3840.lo: /usr/include/gnu/stubs-32.h /usr/include/xlocale.h
sm3840.lo: /usr/include/stdio.h /usr/include/bits/types.h
sm3840.lo: /usr/include/bits/typesizes.h /usr/include/libio.h
sm3840.lo: /usr/include/_G_config.h /usr/include/wchar.h
sm3840.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
sm3840.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sm3840.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
sm3840.lo: /usr/include/bits/endian.h /usr/include/sys/types.h
sm3840.lo: /usr/include/time.h /usr/include/sys/select.h
sm3840.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
sm3840.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sm3840.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
sm3840.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
sm3840.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
sm3840.lo: ../include/getopt.h /usr/include/ctype.h /usr/include/limits.h
sm3840.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
sm3840.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
sm3840.lo: /usr/include/bits/xopen_lim.h /usr/include/signal.h
sm3840.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
sm3840.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
sm3840.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
sm3840.lo: /usr/include/bits/sigthread.h /usr/include/sys/stat.h
sm3840.lo: /usr/include/bits/stat.h ../include/sane/sane.h
sm3840.lo: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
sm3840.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
sm3840.lo: ../include/sane/sane.h /usr/include/fcntl.h
sm3840.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
sm3840.lo: ../include/sane/sanei_usb.h ../include/sane/sanei_config.h
sm3840.lo: sm3840.h sm3840_params.h sm3840_scan.c sm3840_lib.h sm3840_lib.c
sm3840.lo: /usr/include/math.h /usr/include/bits/huge_val.h
sm3840.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
sm3840.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
sm3840.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
sm3840_lib.lo: /usr/include/stdio.h /usr/include/features.h
sm3840_lib.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sm3840_lib.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sm3840_lib.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sm3840_lib.lo: /usr/include/libio.h /usr/include/_G_config.h
sm3840_lib.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
sm3840_lib.lo: /usr/include/bits/sys_errlist.h /usr/include/math.h
sm3840_lib.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
sm3840_lib.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
sm3840_lib.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
sm3840_lib.lo: /usr/include/bits/mathcalls.h sm3840_lib.h
sm3840_lib.lo: ../include/sane/sanei_usb.h ../include/sane/config.h
sm3840_lib.lo: ../include/sane/sane.h /usr/include/stdlib.h
sm3840_lib.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
sm3840_lib.lo: /usr/include/endian.h /usr/include/bits/endian.h
sm3840_lib.lo: /usr/include/xlocale.h /usr/include/sys/types.h
sm3840_lib.lo: /usr/include/time.h /usr/include/sys/select.h
sm3840_lib.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
sm3840_lib.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sm3840_lib.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
sm3840_lib.lo: sm3840_params.h
sm3840-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
sm3840-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
sm3840-s.lo: /usr/include/fcntl.h /usr/include/features.h
sm3840-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sm3840-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sm3840-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
sm3840-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sm3840-s.lo: /usr/include/time.h /usr/include/endian.h
sm3840-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
sm3840-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
sm3840-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sm3840-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
sm3840-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
sm3840-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sm3840-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sm3840-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sm3840-s.lo: /usr/include/bits/stdio_lim.h
sm3840_scan.lo: /usr/include/stdio.h /usr/include/features.h
sm3840_scan.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sm3840_scan.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sm3840_scan.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sm3840_scan.lo: /usr/include/libio.h /usr/include/_G_config.h
sm3840_scan.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
sm3840_scan.lo: /usr/include/bits/sys_errlist.h sm3840_lib.h
sm3840_scan.lo: ../include/sane/sanei_usb.h ../include/sane/config.h
sm3840_scan.lo: ../include/sane/sane.h /usr/include/stdlib.h
sm3840_scan.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
sm3840_scan.lo: /usr/include/endian.h /usr/include/bits/endian.h
sm3840_scan.lo: /usr/include/xlocale.h /usr/include/sys/types.h
sm3840_scan.lo: /usr/include/time.h /usr/include/sys/select.h
sm3840_scan.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
sm3840_scan.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sm3840_scan.lo: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
sm3840_scan.lo: sm3840_params.h sm3840_lib.c /usr/include/math.h
sm3840_scan.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
sm3840_scan.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
sm3840_scan.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
sm3840_scan.lo: /usr/include/bits/mathcalls.h
snapscan.lo: ../include/sane/config.h /usr/include/errno.h
snapscan.lo: /usr/include/features.h /usr/include/sys/cdefs.h
snapscan.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
snapscan.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
snapscan.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
snapscan.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
snapscan.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
snapscan.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
snapscan.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
snapscan.lo: /usr/include/time.h /usr/include/endian.h
snapscan.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
snapscan.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
snapscan.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
snapscan.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
snapscan.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
snapscan.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
snapscan.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
snapscan.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
snapscan.lo: /usr/include/bits/stdio_lim.h /usr/include/math.h
snapscan.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
snapscan.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
snapscan.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
snapscan.lo: /usr/include/bits/mathcalls.h /usr/include/signal.h
snapscan.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
snapscan.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
snapscan.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
snapscan.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
snapscan.lo: /usr/include/libio.h /usr/include/_G_config.h
snapscan.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
snapscan.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
snapscan.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
snapscan.lo: /usr/include/alloca.h /usr/include/string.h
snapscan.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
snapscan.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
snapscan.lo: ../include/getopt.h /usr/include/sys/time.h
snapscan.lo: /usr/include/sys/wait.h /usr/include/sys/resource.h
snapscan.lo: /usr/include/bits/resource.h ../include/sane/sane.h
snapscan.lo: ../include/sane/sanei.h ../include/sane/sane.h
snapscan.lo: ../include/sane/sanei_scsi.h ../include/sane/sanei_usb.h
snapscan.lo: ../include/sane/sanei_thread.h ../include/sane/sanei_backend.h
snapscan.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
snapscan.lo: ../include/sane/saneopts.h snapscan.h ./snapscan-sources.h
snapscan.lo: ../include/sane/sanei_config.h snapscan-scsi.c snapscan-usb.h
snapscan.lo: snapscan-data.c snapscan-sources.c snapscan-usb.c
snapscan.lo: snapscan-mutex.c /usr/include/sys/ipc.h
snapscan.lo: /usr/include/bits/ipctypes.h /usr/include/bits/ipc.h
snapscan.lo: /usr/include/sys/sem.h /usr/include/bits/sem.h
snapscan.lo: /usr/include/sys/shm.h /usr/include/bits/shm.h
snapscan.lo: snapscan-options.c
snapscan-mutex.lo: /usr/include/sys/ipc.h /usr/include/features.h
snapscan-mutex.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
snapscan-mutex.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
snapscan-mutex.lo: /usr/include/bits/ipctypes.h /usr/include/bits/types.h
snapscan-mutex.lo: /usr/include/bits/typesizes.h /usr/include/bits/ipc.h
snapscan-mutex.lo: /usr/include/sys/sem.h /usr/include/bits/sem.h
snapscan-mutex.lo: /usr/include/sys/types.h /usr/include/time.h
snapscan-mutex.lo: /usr/include/endian.h /usr/include/bits/endian.h
snapscan-mutex.lo: /usr/include/sys/select.h /usr/include/bits/select.h
snapscan-mutex.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
snapscan-mutex.lo: /usr/include/sys/sysmacros.h
snapscan-mutex.lo: /usr/include/bits/pthreadtypes.h
snapscan-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
snapscan-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
snapscan-s.lo: /usr/include/fcntl.h /usr/include/features.h
snapscan-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
snapscan-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
snapscan-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
snapscan-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
snapscan-s.lo: /usr/include/time.h /usr/include/endian.h
snapscan-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
snapscan-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
snapscan-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
snapscan-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
snapscan-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
snapscan-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
snapscan-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
snapscan-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
snapscan-s.lo: /usr/include/bits/stdio_lim.h
snapscan-scsi.lo: snapscan-usb.h snapscan-data.c
snapscan-usb.lo: snapscan-usb.h snapscan-mutex.c /usr/include/sys/ipc.h
snapscan-usb.lo: /usr/include/features.h /usr/include/sys/cdefs.h
snapscan-usb.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
snapscan-usb.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/ipctypes.h
snapscan-usb.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
snapscan-usb.lo: /usr/include/bits/ipc.h /usr/include/sys/sem.h
snapscan-usb.lo: /usr/include/bits/sem.h /usr/include/sys/types.h
snapscan-usb.lo: /usr/include/time.h /usr/include/endian.h
snapscan-usb.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
snapscan-usb.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
snapscan-usb.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
snapscan-usb.lo: /usr/include/bits/pthreadtypes.h /usr/include/sys/shm.h
snapscan-usb.lo: /usr/include/bits/shm.h
sp15c.lo: ../include/sane/config.h /usr/include/errno.h
sp15c.lo: /usr/include/features.h /usr/include/sys/cdefs.h
sp15c.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sp15c.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
sp15c.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
sp15c.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
sp15c.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
sp15c.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
sp15c.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sp15c.lo: /usr/include/time.h /usr/include/endian.h
sp15c.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
sp15c.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
sp15c.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sp15c.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
sp15c.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
sp15c.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sp15c.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sp15c.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sp15c.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
sp15c.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
sp15c.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
sp15c.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
sp15c.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
sp15c.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
sp15c.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
sp15c.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
sp15c.lo: /usr/include/xlocale.h /usr/include/alloca.h /usr/include/string.h
sp15c.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
sp15c.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
sp15c.lo: ../include/getopt.h ../include/sane/sanei_backend.h
sp15c.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
sp15c.lo: ../include/sane/sane.h ../include/sane/sanei_scsi.h
sp15c.lo: ../include/sane/saneopts.h ../include/sane/sanei_config.h
sp15c.lo: ../include/sane/sanei_thread.h ../include/sane/config.h
sp15c.lo: sp15c-scsi.h sp15c.h
sp15c-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
sp15c-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
sp15c-s.lo: /usr/include/fcntl.h /usr/include/features.h
sp15c-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sp15c-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sp15c-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
sp15c-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sp15c-s.lo: /usr/include/time.h /usr/include/endian.h
sp15c-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
sp15c-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
sp15c-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sp15c-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
sp15c-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
sp15c-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sp15c-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sp15c-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sp15c-s.lo: /usr/include/bits/stdio_lim.h
st400.lo: ../include/sane/config.h /usr/include/sys/types.h
st400.lo: /usr/include/features.h /usr/include/sys/cdefs.h
st400.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
st400.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
st400.lo: /usr/include/bits/typesizes.h /usr/include/time.h
st400.lo: /usr/include/endian.h /usr/include/bits/endian.h
st400.lo: /usr/include/sys/select.h /usr/include/bits/select.h
st400.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
st400.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
st400.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
st400.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
st400.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
st400.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
st400.lo: /usr/include/bits/confname.h ../include/getopt.h
st400.lo: /usr/include/ctype.h ../include/sane/sane.h ../include/sane/sanei.h
st400.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
st400.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
st400.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
st400.lo: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
st400.lo: ../include/sane/sanei_debug.h ../include/sane/sanei_backend.h
st400.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
st400.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
st400.lo: /usr/include/bits/stat.h /usr/include/limits.h
st400.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
st400.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
st400.lo: /usr/include/bits/xopen_lim.h st400.h
st400-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
st400-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
st400-s.lo: /usr/include/fcntl.h /usr/include/features.h
st400-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
st400-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
st400-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
st400-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
st400-s.lo: /usr/include/time.h /usr/include/endian.h
st400-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
st400-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
st400-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
st400-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
st400-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
st400-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
st400-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
st400-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
st400-s.lo: /usr/include/bits/stdio_lim.h
stubs.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
stubs.lo: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
stubs.lo: /usr/include/features.h /usr/include/sys/cdefs.h
stubs.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
stubs.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
stubs.lo: /usr/include/sys/types.h /usr/include/bits/types.h
stubs.lo: /usr/include/bits/typesizes.h /usr/include/time.h
stubs.lo: /usr/include/endian.h /usr/include/bits/endian.h
stubs.lo: /usr/include/sys/select.h /usr/include/bits/select.h
stubs.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
stubs.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
stubs.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
stubs.lo: /usr/include/bits/stat.h /usr/include/limits.h
stubs.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
stubs.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
stubs.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
stv680.lo: ../include/sane/config.h /usr/include/errno.h
stv680.lo: /usr/include/features.h /usr/include/sys/cdefs.h
stv680.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
stv680.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
stv680.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
stv680.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
stv680.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
stv680.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
stv680.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
stv680.lo: /usr/include/time.h /usr/include/endian.h
stv680.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
stv680.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
stv680.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
stv680.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
stv680.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
stv680.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
stv680.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
stv680.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
stv680.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
stv680.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
stv680.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
stv680.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
stv680.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
stv680.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
stv680.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
stv680.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
stv680.lo: /usr/include/xlocale.h /usr/include/alloca.h /usr/include/string.h
stv680.lo: /usr/include/sys/wait.h /usr/include/sys/resource.h
stv680.lo: /usr/include/bits/resource.h /usr/include/unistd.h
stv680.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
stv680.lo: /usr/include/bits/confname.h ../include/getopt.h
stv680.lo: ../include/sane/sane.h ../include/sane/sanei.h
stv680.lo: ../include/sane/sane.h ../include/sane/saneopts.h
stv680.lo: ../include/sane/sanei_usb.h ../include/sane/sanei_debug.h
stv680.lo: ../include/sane/sanei.h ../include/sane/sanei_backend.h
stv680.lo: ../include/sane/sanei_debug.h ../include/sane/sanei_config.h
stv680.lo: ../include/lassert.h /usr/include/assert.h ../include/font_6x11.h
stv680.lo: stv680.h
stv680-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
stv680-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
stv680-s.lo: /usr/include/fcntl.h /usr/include/features.h
stv680-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
stv680-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
stv680-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
stv680-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
stv680-s.lo: /usr/include/time.h /usr/include/endian.h
stv680-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
stv680-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
stv680-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
stv680-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
stv680-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
stv680-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
stv680-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
stv680-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
stv680-s.lo: /usr/include/bits/stdio_lim.h
tamarack.lo: ../include/sane/config.h /usr/include/errno.h
tamarack.lo: /usr/include/features.h /usr/include/sys/cdefs.h
tamarack.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
tamarack.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
tamarack.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
tamarack.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
tamarack.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
tamarack.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
tamarack.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
tamarack.lo: /usr/include/time.h /usr/include/endian.h
tamarack.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
tamarack.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
tamarack.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
tamarack.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
tamarack.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
tamarack.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
tamarack.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
tamarack.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
tamarack.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
tamarack.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
tamarack.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
tamarack.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
tamarack.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
tamarack.lo: /usr/include/libio.h /usr/include/_G_config.h
tamarack.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
tamarack.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
tamarack.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
tamarack.lo: /usr/include/alloca.h /usr/include/string.h
tamarack.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
tamarack.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
tamarack.lo: ../include/getopt.h /usr/include/sys/time.h
tamarack.lo: ../include/sane/sane.h ../include/sane/sanei.h
tamarack.lo: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
tamarack.lo: ../include/sane/sanei_thread.h ../include/sane/config.h
tamarack.lo: ../include/sane/sanei_config.h ../include/sane/sanei_backend.h
tamarack.lo: ../include/sane/sanei_debug.h tamarack.h
tamarack-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
tamarack-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
tamarack-s.lo: /usr/include/fcntl.h /usr/include/features.h
tamarack-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
tamarack-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
tamarack-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
tamarack-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
tamarack-s.lo: /usr/include/time.h /usr/include/endian.h
tamarack-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
tamarack-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
tamarack-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
tamarack-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
tamarack-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
tamarack-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
tamarack-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
tamarack-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
tamarack-s.lo: /usr/include/bits/stdio_lim.h
teco1.lo: ../include/sane/config.h /usr/include/errno.h
teco1.lo: /usr/include/features.h /usr/include/sys/cdefs.h
teco1.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
teco1.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
teco1.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
teco1.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
teco1.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
teco1.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
teco1.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
teco1.lo: /usr/include/time.h /usr/include/endian.h
teco1.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
teco1.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
teco1.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
teco1.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
teco1.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
teco1.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
teco1.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
teco1.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
teco1.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
teco1.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
teco1.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
teco1.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
teco1.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
teco1.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
teco1.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
teco1.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
teco1.lo: /usr/include/xlocale.h /usr/include/alloca.h /usr/include/string.h
teco1.lo: /usr/include/sys/wait.h /usr/include/sys/resource.h
teco1.lo: /usr/include/bits/resource.h /usr/include/unistd.h
teco1.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
teco1.lo: /usr/include/bits/confname.h ../include/getopt.h
teco1.lo: ../include/sane/sane.h ../include/sane/sanei.h
teco1.lo: ../include/sane/sane.h ../include/sane/saneopts.h
teco1.lo: ../include/sane/sanei_scsi.h ../include/sane/sanei_debug.h
teco1.lo: ../include/sane/sanei.h ../include/sane/sanei_backend.h
teco1.lo: ../include/sane/sanei_debug.h ../include/sane/sanei_config.h
teco1.lo: ../include/lassert.h /usr/include/assert.h teco1.h
teco1-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
teco1-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
teco1-s.lo: /usr/include/fcntl.h /usr/include/features.h
teco1-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
teco1-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
teco1-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
teco1-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
teco1-s.lo: /usr/include/time.h /usr/include/endian.h
teco1-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
teco1-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
teco1-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
teco1-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
teco1-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
teco1-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
teco1-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
teco1-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
teco1-s.lo: /usr/include/bits/stdio_lim.h
teco2.lo: ../include/sane/config.h /usr/include/errno.h
teco2.lo: /usr/include/features.h /usr/include/sys/cdefs.h
teco2.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
teco2.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
teco2.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
teco2.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
teco2.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
teco2.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
teco2.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
teco2.lo: /usr/include/time.h /usr/include/endian.h
teco2.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
teco2.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
teco2.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
teco2.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
teco2.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
teco2.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
teco2.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
teco2.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
teco2.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
teco2.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
teco2.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
teco2.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
teco2.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
teco2.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
teco2.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
teco2.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
teco2.lo: /usr/include/xlocale.h /usr/include/alloca.h /usr/include/string.h
teco2.lo: /usr/include/sys/wait.h /usr/include/sys/resource.h
teco2.lo: /usr/include/bits/resource.h /usr/include/unistd.h
teco2.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
teco2.lo: /usr/include/bits/confname.h ../include/getopt.h
teco2.lo: ../include/sane/sane.h ../include/sane/sanei.h
teco2.lo: ../include/sane/sane.h ../include/sane/saneopts.h
teco2.lo: ../include/sane/sanei_scsi.h ../include/sane/sanei_debug.h
teco2.lo: ../include/sane/sanei.h ../include/sane/sanei_backend.h
teco2.lo: ../include/sane/sanei_debug.h ../include/sane/sanei_config.h
teco2.lo: ../include/lassert.h /usr/include/assert.h teco2.h
teco2-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
teco2-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
teco2-s.lo: /usr/include/fcntl.h /usr/include/features.h
teco2-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
teco2-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
teco2-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
teco2-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
teco2-s.lo: /usr/include/time.h /usr/include/endian.h
teco2-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
teco2-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
teco2-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
teco2-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
teco2-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
teco2-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
teco2-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
teco2-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
teco2-s.lo: /usr/include/bits/stdio_lim.h
teco3.lo: ../include/sane/config.h /usr/include/errno.h
teco3.lo: /usr/include/features.h /usr/include/sys/cdefs.h
teco3.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
teco3.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
teco3.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
teco3.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
teco3.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
teco3.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
teco3.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
teco3.lo: /usr/include/time.h /usr/include/endian.h
teco3.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
teco3.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
teco3.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
teco3.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
teco3.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
teco3.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
teco3.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
teco3.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
teco3.lo: /usr/include/bits/stdio_lim.h /usr/include/signal.h
teco3.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
teco3.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
teco3.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
teco3.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
teco3.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
teco3.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
teco3.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
teco3.lo: /usr/include/xlocale.h /usr/include/alloca.h /usr/include/string.h
teco3.lo: /usr/include/sys/wait.h /usr/include/sys/resource.h
teco3.lo: /usr/include/bits/resource.h /usr/include/unistd.h
teco3.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
teco3.lo: /usr/include/bits/confname.h ../include/getopt.h
teco3.lo: ../include/sane/sane.h ../include/sane/sanei.h
teco3.lo: ../include/sane/sane.h ../include/sane/saneopts.h
teco3.lo: ../include/sane/sanei_scsi.h ../include/sane/sanei_debug.h
teco3.lo: ../include/sane/sanei.h ../include/sane/sanei_backend.h
teco3.lo: ../include/sane/sanei_debug.h ../include/sane/sanei_config.h
teco3.lo: ../include/lassert.h /usr/include/assert.h teco3.h
teco3-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
teco3-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
teco3-s.lo: /usr/include/fcntl.h /usr/include/features.h
teco3-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
teco3-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
teco3-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
teco3-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
teco3-s.lo: /usr/include/time.h /usr/include/endian.h
teco3-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
teco3-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
teco3-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
teco3-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
teco3-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
teco3-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
teco3-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
teco3-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
teco3-s.lo: /usr/include/bits/stdio_lim.h
test.lo: ../include/sane/config.h /usr/include/errno.h
test.lo: /usr/include/features.h /usr/include/sys/cdefs.h
test.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
test.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
test.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
test.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
test.lo: /usr/include/asm-generic/errno-base.h /usr/include/signal.h
test.lo: /usr/include/bits/sigset.h /usr/include/bits/types.h
test.lo: /usr/include/bits/typesizes.h /usr/include/bits/signum.h
test.lo: /usr/include/time.h /usr/include/bits/siginfo.h
test.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
test.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
test.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/sigthread.h
test.lo: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
test.lo: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
test.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
test.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
test.lo: /usr/include/endian.h /usr/include/bits/endian.h
test.lo: /usr/include/xlocale.h /usr/include/sys/types.h
test.lo: /usr/include/sys/select.h /usr/include/bits/select.h
test.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
test.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
test.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
test.lo: /usr/include/bits/confname.h ../include/getopt.h
test.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
test.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
test.lo: /usr/include/bits/stat.h ../include/sane/sane.h
test.lo: ../include/sane/sanei.h ../include/sane/sane.h
test.lo: ../include/sane/saneopts.h ../include/sane/sanei_config.h
test.lo: ../include/sane/sanei_thread.h ../include/sane/sanei_backend.h
test.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
test.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
test.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
test.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h test.h
test.lo: test-picture.c
test-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
test-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
test-s.lo: /usr/include/fcntl.h /usr/include/features.h
test-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
test-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
test-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
test-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
test-s.lo: /usr/include/time.h /usr/include/endian.h
test-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
test-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
test-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
test-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
test-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
test-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
test-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
test-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
test-s.lo: /usr/include/bits/stdio_lim.h
u12.lo: ../include/sane/config.h ../include/lalloca.h /usr/include/errno.h
u12.lo: /usr/include/features.h /usr/include/sys/cdefs.h
u12.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
u12.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
u12.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
u12.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
u12.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
u12.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
u12.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
u12.lo: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
u12.lo: /usr/include/sys/select.h /usr/include/bits/select.h
u12.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
u12.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
u12.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
u12.lo: /usr/include/bits/stat.h /usr/include/limits.h
u12.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
u12.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
u12.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
u12.lo: /usr/include/signal.h /usr/include/bits/signum.h
u12.lo: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
u12.lo: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
u12.lo: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
u12.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
u12.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
u12.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/ctype.h
u12.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
u12.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
u12.lo: ../include/getopt.h /usr/include/math.h /usr/include/bits/huge_val.h
u12.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
u12.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
u12.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
u12.lo: /usr/include/sys/time.h /usr/include/sys/ioctl.h
u12.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
u12.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
u12.lo: /usr/include/asm-i386/ioctl.h /usr/include/asm-generic/ioctl.h
u12.lo: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
u12.lo: ../include/sane/sane.h ../include/sane/sanei.h ../include/sane/sane.h
u12.lo: ../include/sane/saneopts.h ../include/sane/sanei_backend.h
u12.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
u12.lo: ../include/sane/sanei_config.h /usr/include/stdio.h
u12.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
u12.lo: /usr/include/bits/sys_errlist.h ../include/sane/sanei_thread.h
u12.lo: ../include/sane/sanei_usb.h u12-scanner.h u12-hwdef.h u12.h u12-io.c
u12.lo: u12-ccd.c u12-hw.c u12-motor.c u12-image.c u12-map.c u12-shading.c
u12.lo: u12-tpa.c u12-if.c
u12-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
u12-s.lo: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
u12-s.lo: /usr/include/features.h /usr/include/sys/cdefs.h
u12-s.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
u12-s.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
u12-s.lo: /usr/include/sys/types.h /usr/include/bits/types.h
u12-s.lo: /usr/include/bits/typesizes.h /usr/include/time.h
u12-s.lo: /usr/include/endian.h /usr/include/bits/endian.h
u12-s.lo: /usr/include/sys/select.h /usr/include/bits/select.h
u12-s.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
u12-s.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
u12-s.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
u12-s.lo: /usr/include/bits/stat.h /usr/include/limits.h
u12-s.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
u12-s.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
u12-s.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
umax1220u.lo: ../include/sane/config.h /usr/include/stdlib.h
umax1220u.lo: /usr/include/features.h /usr/include/sys/cdefs.h
umax1220u.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
umax1220u.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
umax1220u.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
umax1220u.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
umax1220u.lo: /usr/include/sys/types.h /usr/include/bits/types.h
umax1220u.lo: /usr/include/bits/typesizes.h /usr/include/time.h
umax1220u.lo: /usr/include/sys/select.h /usr/include/bits/select.h
umax1220u.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
umax1220u.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
umax1220u.lo: /usr/include/alloca.h /usr/include/string.h
umax1220u.lo: /usr/include/stdio.h /usr/include/libio.h
umax1220u.lo: /usr/include/_G_config.h /usr/include/wchar.h
umax1220u.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
umax1220u.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
umax1220u.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
umax1220u.lo: ../include/getopt.h /usr/include/fcntl.h
umax1220u.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
umax1220u.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
umax1220u.lo: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
umax1220u.lo: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
umax1220u.lo: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
umax1220u.lo: /usr/include/asm-generic/ioctl.h
umax1220u.lo: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
umax1220u.lo: ../include/sane/sane.h ../include/sane/sanei.h
umax1220u.lo: ../include/sane/sane.h ../include/sane/saneopts.h
umax1220u.lo: ../include/sane/sanei_config.h ../include/sane/sanei_usb.h
umax1220u.lo: ../include/sane/sanei_pv8630.h ../include/sane/sanei_backend.h
umax1220u.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
umax1220u.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
umax1220u.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
umax1220u.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
umax1220u.lo: umax1220u-common.c /usr/include/errno.h
umax1220u.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
umax1220u.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
umax1220u.lo: /usr/include/asm-generic/errno.h
umax1220u.lo: /usr/include/asm-generic/errno-base.h /usr/include/math.h
umax1220u.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
umax1220u.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
umax1220u.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
umax1220u.lo: /usr/include/bits/mathcalls.h
umax1220u-common.lo: /usr/include/string.h /usr/include/features.h
umax1220u-common.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
umax1220u-common.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
umax1220u-common.lo: /usr/include/xlocale.h /usr/include/errno.h
umax1220u-common.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
umax1220u-common.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
umax1220u-common.lo: /usr/include/asm-generic/errno.h
umax1220u-common.lo: /usr/include/asm-generic/errno-base.h
umax1220u-common.lo: /usr/include/fcntl.h /usr/include/bits/fcntl.h
umax1220u-common.lo: /usr/include/sys/types.h /usr/include/bits/types.h
umax1220u-common.lo: /usr/include/bits/typesizes.h /usr/include/time.h
umax1220u-common.lo: /usr/include/endian.h /usr/include/bits/endian.h
umax1220u-common.lo: /usr/include/sys/select.h /usr/include/bits/select.h
umax1220u-common.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
umax1220u-common.lo: /usr/include/sys/sysmacros.h
umax1220u-common.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
umax1220u-common.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
umax1220u-common.lo: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
umax1220u-common.lo: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
umax1220u-common.lo: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
umax1220u-common.lo: /usr/include/asm-generic/ioctl.h
umax1220u-common.lo: /usr/include/bits/ioctl-types.h
umax1220u-common.lo: /usr/include/sys/ttydefaults.h /usr/include/math.h
umax1220u-common.lo: /usr/include/bits/huge_val.h
umax1220u-common.lo: /usr/include/bits/huge_valf.h
umax1220u-common.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
umax1220u-common.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
umax1220u-common.lo: /usr/include/bits/mathcalls.h
umax1220u-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
umax1220u-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
umax1220u-s.lo: /usr/include/fcntl.h /usr/include/features.h
umax1220u-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
umax1220u-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
umax1220u-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
umax1220u-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
umax1220u-s.lo: /usr/include/time.h /usr/include/endian.h
umax1220u-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
umax1220u-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
umax1220u-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
umax1220u-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
umax1220u-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
umax1220u-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
umax1220u-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
umax1220u-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
umax1220u-s.lo: /usr/include/bits/stdio_lim.h
umax.lo: ../include/sane/config.h /usr/include/errno.h
umax.lo: /usr/include/features.h /usr/include/sys/cdefs.h
umax.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
umax.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
umax.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
umax.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
umax.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
umax.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
umax.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
umax.lo: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
umax.lo: /usr/include/sys/select.h /usr/include/bits/select.h
umax.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
umax.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
umax.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
umax.lo: /usr/include/bits/stat.h /usr/include/limits.h
umax.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
umax.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
umax.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
umax.lo: /usr/include/signal.h /usr/include/bits/signum.h
umax.lo: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
umax.lo: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
umax.lo: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
umax.lo: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
umax.lo: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
umax.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
umax.lo: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
umax.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/sys/wait.h
umax.lo: /usr/include/sys/resource.h /usr/include/bits/resource.h
umax.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
umax.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
umax.lo: ../include/getopt.h ../include/sane/sane.h ../include/sane/sanei.h
umax.lo: ../include/sane/saneopts.h ../include/sane/sanei_scsi.h
umax.lo: ../include/sane/sanei_debug.h ../include/sane/sanei_backend.h
umax.lo: ../include/sane/sanei_config.h ../include/sane/sanei_thread.h
umax.lo: ../include/sane/config.h /usr/include/math.h
umax.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
umax.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
umax.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
umax.lo: /usr/include/bits/mathcalls.h umax-scsidef.h umax.h umax-scanner.c
umax.lo: umax-scanner.h umax-uc630.c umax-uc840.c umax-ug630.c umax-ug80.c
umax.lo: umax-uc1200s.c umax-uc1200se.c umax-uc1260.c umax-usb.c
umax.lo: ../include/sane/sanei_usb.h ../include/sane/sane.h
umax.lo: ../include/sane/sanei_pv8630.h
umax_pp.lo: ../include/sane/config.h /usr/include/ctype.h
umax_pp.lo: /usr/include/features.h /usr/include/sys/cdefs.h
umax_pp.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
umax_pp.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
umax_pp.lo: /usr/include/bits/typesizes.h /usr/include/endian.h
umax_pp.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
umax_pp.lo: /usr/include/errno.h /usr/include/bits/errno.h
umax_pp.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
umax_pp.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
umax_pp.lo: /usr/include/asm-generic/errno-base.h /usr/include/limits.h
umax_pp.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
umax_pp.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
umax_pp.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
umax_pp.lo: /usr/include/stdio.h /usr/include/libio.h
umax_pp.lo: /usr/include/_G_config.h /usr/include/wchar.h
umax_pp.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
umax_pp.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
umax_pp.lo: /usr/include/sys/types.h /usr/include/time.h
umax_pp.lo: /usr/include/sys/select.h /usr/include/bits/select.h
umax_pp.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
umax_pp.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
umax_pp.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
umax_pp.lo: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
umax_pp.lo: /usr/include/bits/confname.h ../include/getopt.h
umax_pp.lo: /usr/include/math.h /usr/include/bits/huge_val.h
umax_pp.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
umax_pp.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
umax_pp.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
umax_pp.lo: /usr/include/sys/time.h ../include/sane/sane.h
umax_pp.lo: ../include/sane/sanei.h ../include/sane/sane.h
umax_pp.lo: ../include/sane/saneopts.h ../include/sane/sanei_config.h
umax_pp.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
umax_pp.lo: ../include/sane/sanei.h /usr/include/fcntl.h
umax_pp.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
umax_pp.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h umax_pp_mid.h
umax_pp.lo: /usr/include/linux/parport.h /usr/include/linux/ppdev.h
umax_pp.lo: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
umax_pp.lo: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
umax_pp.lo: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
umax_pp.lo: /usr/include/asm-generic/ioctl.h /usr/include/bits/ioctl-types.h
umax_pp.lo: /usr/include/sys/ttydefaults.h umax_pp_low.h umax_pp.h
umax_pp.lo: ../include/sane/sanei_debug.h
umax_pp_low.lo: ../include/sane/config.h /usr/include/stdio.h
umax_pp_low.lo: /usr/include/features.h /usr/include/sys/cdefs.h
umax_pp_low.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
umax_pp_low.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
umax_pp_low.lo: /usr/include/bits/typesizes.h /usr/include/libio.h
umax_pp_low.lo: /usr/include/_G_config.h /usr/include/wchar.h
umax_pp_low.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
umax_pp_low.lo: /usr/include/stdlib.h /usr/include/bits/waitflags.h
umax_pp_low.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
umax_pp_low.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
umax_pp_low.lo: /usr/include/sys/types.h /usr/include/time.h
umax_pp_low.lo: /usr/include/sys/select.h /usr/include/bits/select.h
umax_pp_low.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
umax_pp_low.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
umax_pp_low.lo: /usr/include/alloca.h /usr/include/string.h
umax_pp_low.lo: /usr/include/math.h /usr/include/bits/huge_val.h
umax_pp_low.lo: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
umax_pp_low.lo: /usr/include/bits/inf.h /usr/include/bits/nan.h
umax_pp_low.lo: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
umax_pp_low.lo: /usr/include/sys/time.h /usr/include/sys/io.h
umax_pp_low.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
umax_pp_low.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
umax_pp_low.lo: ../include/getopt.h /usr/include/fcntl.h
umax_pp_low.lo: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
umax_pp_low.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
umax_pp_low.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
umax_pp_low.lo: ../include/sane/sane.h /usr/include/errno.h
umax_pp_low.lo: /usr/include/bits/errno.h /usr/include/linux/errno.h
umax_pp_low.lo: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
umax_pp_low.lo: /usr/include/asm-generic/errno.h
umax_pp_low.lo: /usr/include/asm-generic/errno-base.h
umax_pp_low.lo: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
umax_pp_low.lo: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
umax_pp_low.lo: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
umax_pp_low.lo: /usr/include/asm-generic/ioctl.h
umax_pp_low.lo: /usr/include/bits/ioctl-types.h
umax_pp_low.lo: /usr/include/sys/ttydefaults.h /usr/include/linux/parport.h
umax_pp_low.lo: /usr/include/linux/ppdev.h umax_pp_low.h
umax_pp_mid.lo: ../include/sane/config.h /usr/include/stdlib.h
umax_pp_mid.lo: /usr/include/features.h /usr/include/sys/cdefs.h
umax_pp_mid.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
umax_pp_mid.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
umax_pp_mid.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
umax_pp_mid.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
umax_pp_mid.lo: /usr/include/sys/types.h /usr/include/bits/types.h
umax_pp_mid.lo: /usr/include/bits/typesizes.h /usr/include/time.h
umax_pp_mid.lo: /usr/include/sys/select.h /usr/include/bits/select.h
umax_pp_mid.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
umax_pp_mid.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
umax_pp_mid.lo: /usr/include/alloca.h /usr/include/string.h
umax_pp_mid.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
umax_pp_mid.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
umax_pp_mid.lo: ../include/getopt.h /usr/include/stdio.h /usr/include/libio.h
umax_pp_mid.lo: /usr/include/_G_config.h /usr/include/wchar.h
umax_pp_mid.lo: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
umax_pp_mid.lo: ../include/sane/sanei_debug.h ../include/sane/sanei.h
umax_pp_mid.lo: ../include/sane/sane.h umax_pp_mid.h
umax_pp_mid.lo: /usr/include/linux/parport.h /usr/include/linux/ppdev.h
umax_pp_mid.lo: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
umax_pp_mid.lo: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
umax_pp_mid.lo: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
umax_pp_mid.lo: /usr/include/asm-generic/ioctl.h
umax_pp_mid.lo: /usr/include/bits/ioctl-types.h
umax_pp_mid.lo: /usr/include/sys/ttydefaults.h umax_pp_low.h
umax_pp-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
umax_pp-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
umax_pp-s.lo: /usr/include/fcntl.h /usr/include/features.h
umax_pp-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
umax_pp-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
umax_pp-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
umax_pp-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
umax_pp-s.lo: /usr/include/time.h /usr/include/endian.h
umax_pp-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
umax_pp-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
umax_pp-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
umax_pp-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
umax_pp-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
umax_pp-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
umax_pp-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
umax_pp-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
umax_pp-s.lo: /usr/include/bits/stdio_lim.h
umax-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
umax-s.lo: ../include/sane/sanei.h ../include/sane/sane.h
umax-s.lo: /usr/include/fcntl.h /usr/include/features.h
umax-s.lo: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
umax-s.lo: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
umax-s.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
umax-s.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
umax-s.lo: /usr/include/time.h /usr/include/endian.h
umax-s.lo: /usr/include/bits/endian.h /usr/include/sys/select.h
umax-s.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
umax-s.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
umax-s.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
umax-s.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
umax-s.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
umax-s.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
umax-s.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
umax-s.lo: /usr/include/bits/stdio_lim.h
umax-scanner.lo: umax-scanner.h umax-uc630.c umax-uc840.c umax-ug630.c
umax-scanner.lo: umax-ug80.c umax-uc1200s.c umax-uc1200se.c umax-uc1260.c
umax-uc1200s.lo: umax-scanner.h
umax-uc1200se.lo: umax-scanner.h
umax-uc1260.lo: umax-scanner.h
umax-uc630.lo: umax-scanner.h
umax-uc840.lo: umax-scanner.h
umax-ug630.lo: umax-scanner.h
umax-ug80.lo: umax-scanner.h
umax-usb.lo: ../include/sane/sanei_usb.h ../include/sane/config.h
umax-usb.lo: ../include/sane/sane.h /usr/include/stdlib.h
umax-usb.lo: /usr/include/features.h /usr/include/sys/cdefs.h
umax-usb.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
umax-usb.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
umax-usb.lo: /usr/include/bits/waitstatus.h /usr/include/endian.h
umax-usb.lo: /usr/include/bits/endian.h /usr/include/xlocale.h
umax-usb.lo: /usr/include/sys/types.h /usr/include/bits/types.h
umax-usb.lo: /usr/include/bits/typesizes.h /usr/include/time.h
umax-usb.lo: /usr/include/sys/select.h /usr/include/bits/select.h
umax-usb.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
umax-usb.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
umax-usb.lo: /usr/include/alloca.h ../include/sane/sanei_pv8630.h
v4l.lo: ../include/sane/config.h /usr/include/assert.h
v4l.lo: /usr/include/features.h /usr/include/sys/cdefs.h
v4l.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
v4l.lo: /usr/include/gnu/stubs-32.h /usr/include/ctype.h
v4l.lo: /usr/include/bits/types.h /usr/include/bits/typesizes.h
v4l.lo: /usr/include/endian.h /usr/include/bits/endian.h
v4l.lo: /usr/include/xlocale.h /usr/include/errno.h /usr/include/bits/errno.h
v4l.lo: /usr/include/linux/errno.h /usr/include/asm/errno.h
v4l.lo: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
v4l.lo: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
v4l.lo: /usr/include/bits/fcntl.h /usr/include/sys/types.h
v4l.lo: /usr/include/time.h /usr/include/sys/select.h
v4l.lo: /usr/include/bits/select.h /usr/include/bits/sigset.h
v4l.lo: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
v4l.lo: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
v4l.lo: /usr/include/sys/stat.h /usr/include/bits/stat.h
v4l.lo: /usr/include/limits.h /usr/include/bits/posix1_lim.h
v4l.lo: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
v4l.lo: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
v4l.lo: /usr/include/bits/stdio_lim.h /usr/include/math.h
v4l.lo: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
v4l.lo: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
v4l.lo: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
v4l.lo: /usr/include/bits/mathcalls.h /usr/include/setjmp.h
v4l.lo: /usr/include/bits/setjmp.h /usr/include/signal.h
v4l.lo: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
v4l.lo: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
v4l.lo: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
v4l.lo: /usr/include/bits/sigthread.h /usr/include/stdio.h
v4l.lo: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
v4l.lo: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
v4l.lo: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
v4l.lo: /usr/include/alloca.h /usr/include/string.h /usr/include/sys/wait.h
v4l.lo: /usr/include/sys/resource.h /usr/include/bits/resource.h
v4l.lo: /usr/include/unistd.h /usr/include/bits/posix_opt.h
v4l.lo: /usr/include/bits/environments.h /usr/include/bits/confname.h
v4l.lo: ../include/getopt.h /usr/include/sys/mman.h /usr/include/bits/mman.h
v4l.lo: /usr/include/sys/time.h ../include/sane/sane.h
v4l.lo: ../include/sane/sanei.h ../include/sane/sane.h
v4l.lo: ../include/sane/saneopts.h /usr/include/sys/ioctl.h
v4l.lo: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
v4l.lo: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
v4l.lo: /usr/include/asm-i386/ioctl.h /usr/include/asm-generic/ioctl.h
v4l.lo: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
v4l.lo: /usr/include/asm/types.h /usr/include/asm-i386/types.h
v4l.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
v4l.lo: ../include/sane/sanei.h ../include/sane/sanei_config.h v4l.h
v4l-s.lo: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
v4l-s.lo: ../include/sane/sanei.h ../include/sane/sane.h /usr/include/fcntl.h
v4l-s.lo: /usr/include/features.h /usr/include/sys/cdefs.h
v4l-s.lo: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
v4l-s.lo: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
v4l-s.lo: /usr/include/sys/types.h /usr/include/bits/types.h
v4l-s.lo: /usr/include/bits/typesizes.h /usr/include/time.h
v4l-s.lo: /usr/include/endian.h /usr/include/bits/endian.h
v4l-s.lo: /usr/include/sys/select.h /usr/include/bits/select.h
v4l-s.lo: /usr/include/bits/sigset.h /usr/include/bits/time.h
v4l-s.lo: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
v4l-s.lo: /usr/include/bits/uio.h /usr/include/sys/stat.h
v4l-s.lo: /usr/include/bits/stat.h /usr/include/limits.h
v4l-s.lo: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
v4l-s.lo: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
v4l-s.lo: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
