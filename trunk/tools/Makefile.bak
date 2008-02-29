SHELL = /bin/sh


srcdir = .
top_srcdir = ..
top_builddir = ..
subdir = tools

PACKAGE = sane-backends
VERSION = 1.1.0-svn
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
libdir = ${exec_prefix}/lib
infodir = ${datarootdir}/info
mandir = ${datarootdir}/man
includedir = ${prefix}/include
oldincludedir = /usr/include
configdir = ${sysconfdir}/sane.d

MKDIR = $(top_srcdir)/mkinstalldirs
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
RANLIB = ranlib

CC = gcc
INCLUDES = -I. -I$(srcdir) -I$(top_builddir)/include -I$(top_srcdir)/include
CPPFLAGS =  -D_REENTRANT -I/usr/include/gphoto2 -I/usr/include/libexif   -DPATH_SANE_CONFIG_DIR=$(configdir) 	  -DPATH_SANE_DATA_DIR=$(datadir) 	  -DPATH_SANE_LOCK_DIR=$(locksanedir) 	  -DV_MAJOR=1 -DV_MINOR=1
CFLAGS = -g -O2 -W -Wall -Wcast-align -Wcast-qual -Wmissing-declarations -Wmissing-prototypes -Wpointer-arith -Wreturn-type -Wstrict-prototypes -pedantic -ansi
LDFLAGS =  
LIBS = -lusb -lpthread -lm  -ljpeg -ltiff -lieee1284  -lgphoto2 -lgphoto2_port -lexif -lm -lusb
DEFS = -DHAVE_CONFIG_H

LIBTOOL = ../libtool
MCOMP	= --mode=compile
MLINK	= --mode=link
MINST	= --mode=install

COMPILE = $(CC) -c $(CFLAGS) $(DEFS) $(INCLUDES) $(CPPFLAGS)
LINK = $(CC) $(LDFLAGS) -o $@

DISTCLEAN_FILES = *~ .*~ *.log *.bak *.old *.orig *.out *.rej "\#"* ".\#"*



ifeq (no,no)
HOTPLUG_SCRIPTS = hotplug/libsane.usermap hotplug-ng/libsane.db \
		  udev/libsane.rules hal/libsane.fdi
else
HOTPLUG_SCRIPTS =
endif

DESTINATIONS = sane-find-scanner sane-config umax_pp gamma4scanimage \
	       sane-desc $(HOTPLUG_SCRIPTS)

EXTRA = sane_strstatus.lo ../sanei/sanei_init_debug.lo \
	../sanei/sanei_config.lo ../sanei/sanei_config2.lo \
	../lib/usleep.lo ../lib/strndup.lo

LIBSANEI = ../sanei/libsanei.a
# Library routines that should be part of libc, but aren't on some systems:
LIBLIB = ../lib/liblib.a

DISTFILES = Makefile.in RenSaneDlls.cmd README libtool-get-dll-ext     \
	mustek600iin-off.c sane-config.in sane-desc.c check-usb-chip.c \
	sane-find-scanner.c umax_pp.c xerox gamma4scanimage.c check-po.awk

SUBDIRS = hotplug hotplug-ng udev hal

.PHONY: all clean depend dist distclean install uninstall

.c.o:
	$(COMPILE) $<

%.lo:	%.c
	@$(LIBTOOL) $(MCOMP) $(COMPILE) -DLIBDIR=$(libdir) $<

all:	$(DESTINATIONS)

install: sane-config sane-find-scanner gamma4scanimage
	$(INSTALL_SCRIPT) sane-config $(DESTDIR)$(bindir)/sane-config
	$(INSTALL_PROGRAM) sane-find-scanner $(DESTDIR)$(bindir)/sane-find-scanner
	$(INSTALL_PROGRAM) gamma4scanimage $(DESTDIR)$(bindir)/gamma4scanimage

uninstall: 
	rm -f $(bindir)/sane-config $(bindir)/sane-find-scanner $(bindir)/gamma4scanimage

sane-config: sane-config.in $(top_builddir)/config.status 
	cd $(top_builddir) \
          && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status

sane-find-scanner: sane-find-scanner.o check-usb-chip.o ../backend/sane_strstatus.lo \
	../sanei/sanei_scsi.lo ../sanei/sanei_usb.lo ../sanei/sanei_init_debug.lo \
	../sanei/sanei_config.lo
	@$(LIBTOOL) $(MLINK) $(LINK) sane-find-scanner.o check-usb-chip.o \
	  ../backend/sane_strstatus.lo $(LIBSANEI) $(LIBLIB) $(LIBS)

gamma4scanimage: gamma4scanimage.o
	@$(LIBTOOL) $(MLINK) $(LINK) gamma4scanimage.o -lm

../backend/umax_pp_low.o: ../backend/umax_pp_low.c 
	$(COMPILE) ../backend/umax_pp_low.c -o ../backend/umax_pp_low.o \
	  -DBACKEND_NAME=umax_pp_low

umax_pp: umax_pp.o ../backend/umax_pp_low.o
	@$(LIBTOOL) $(MLINK) $(LINK) umax_pp.o ../backend/umax_pp_low.o \
	   $(LIBSANEI) $(LIBLIB) $(LIBS)
sane-desc: sane-desc.o
	@$(LIBTOOL) $(MLINK) $(LINK) sane-desc.o $(LIBSANEI) $(LIBLIB)

hotplug/libsane.usermap: $(wildcard ${top_srcdir}/doc/descriptions/*.desc) $(wildcard ${top_srcdir}/doc/descriptions-external/*.desc) sane-desc
	@./sane-desc -m usermap -s ${top_srcdir}/doc/descriptions:${top_srcdir}/doc/descriptions-external \
	   -d 1 > $@

hotplug-ng/libsane.db: $(wildcard ${top_srcdir}/doc/descriptions/*.desc) $(wildcard ${top_srcdir}/doc/descriptions-external/*.desc) sane-desc
	@./sane-desc -m db -s ${top_srcdir}/doc/descriptions:${top_srcdir}/doc/descriptions-external \
	   -d 0 > $@

udev/libsane.rules: $(wildcard ${top_srcdir}/doc/descriptions/*.desc) $(wildcard ${top_srcdir}/doc/descriptions-external/*.desc) sane-desc
	@./sane-desc -m udev -s ${top_srcdir}/doc/descriptions:${top_srcdir}/doc/descriptions-external \
	   -d 0 > $@

hal/libsane.fdi: $(wildcard ${top_srcdir}/doc/descriptions/*.desc) $(wildcard ${top_srcdir}/doc/descriptions-external/*.desc) sane-desc
	@./sane-desc -m hal -s ${top_srcdir}/doc/descriptions:${top_srcdir}/doc/descriptions-external \
	   -d 0 > $@


depend:
	makedepend $(INCLUDES) *.c 2>/dev/null

clean:
	rm -f *.lo *.o *.la
	find . -type l -name \*-s.c | xargs rm -f
	rm -rf .libs
	rm -f hotplug/libsane.usermap hotplug-ng/libsane.db hotplug/libsane.rules

distclean: clean
	rm -f Makefile $(DESTINATIONS) mustek600iin-off sane-desc
	rm -f $(DISTCLEAN_FILES)
	for subdir in $(SUBDIRS) ; do \
	  ( cd $$subdir ; rm -f $(DISTCLEAN_FILES) ); \
	done

dist: $(DISTFILES)
	for subdir in $(SUBDIRS) ; do \
	  $(MKDIR) $(distdir)/tools/$${subdir} ; \
	  for file in $${subdir}/* ; do \
	    ln $$file $(distdir)/tools/$${subdir} 2> /dev/null \
	      || cp -p $$file $(distdir)/tools/$${subdir} \
	      || echo "ignoring: $$file" ; \
	  done ; \
	done
	for file in $(DISTFILES); do \
	  ln $$file $(distdir)/tools 2> /dev/null \
	    || cp -p $$file $(distdir)/tools ; \
	done

# DO NOT DELETE

check-usb-chip.o: ../include/sane/config.h ../include/sane/sane.h
check-usb-chip.o: /usr/include/stdio.h /usr/include/features.h
check-usb-chip.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
check-usb-chip.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
check-usb-chip.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
check-usb-chip.o: /usr/include/libio.h /usr/include/_G_config.h
check-usb-chip.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
check-usb-chip.o: /usr/include/bits/sys_errlist.h /usr/include/string.h
check-usb-chip.o: /usr/include/xlocale.h /usr/include/errno.h
check-usb-chip.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
check-usb-chip.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
check-usb-chip.o: /usr/include/asm-generic/errno.h
check-usb-chip.o: /usr/include/asm-generic/errno-base.h /usr/include/usb.h
check-usb-chip.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
check-usb-chip.o: /usr/include/bits/environments.h
check-usb-chip.o: /usr/include/bits/confname.h ../include/getopt.h
check-usb-chip.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
check-usb-chip.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
check-usb-chip.o: /usr/include/bits/endian.h /usr/include/sys/types.h
check-usb-chip.o: /usr/include/time.h /usr/include/sys/select.h
check-usb-chip.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
check-usb-chip.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
check-usb-chip.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
check-usb-chip.o: /usr/include/stdint.h /usr/include/bits/wchar.h
check-usb-chip.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
check-usb-chip.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
check-usb-chip.o: /usr/include/bits/posix2_lim.h
check-usb-chip.o: /usr/include/bits/xopen_lim.h /usr/include/sys/param.h
check-usb-chip.o: /usr/include/linux/param.h /usr/include/asm/param.h
check-usb-chip.o: /usr/include/asm-i386/param.h /usr/include/dirent.h
check-usb-chip.o: /usr/include/bits/dirent.h
gamma4scanimage.o: /usr/include/stdio.h /usr/include/features.h
gamma4scanimage.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
gamma4scanimage.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
gamma4scanimage.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
gamma4scanimage.o: /usr/include/libio.h /usr/include/_G_config.h
gamma4scanimage.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
gamma4scanimage.o: /usr/include/bits/sys_errlist.h /usr/include/math.h
gamma4scanimage.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
gamma4scanimage.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
gamma4scanimage.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
gamma4scanimage.o: /usr/include/bits/mathcalls.h /usr/include/stdlib.h
gamma4scanimage.o: /usr/include/bits/waitflags.h
gamma4scanimage.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
gamma4scanimage.o: /usr/include/bits/endian.h /usr/include/xlocale.h
gamma4scanimage.o: /usr/include/sys/types.h /usr/include/time.h
gamma4scanimage.o: /usr/include/sys/select.h /usr/include/bits/select.h
gamma4scanimage.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
gamma4scanimage.o: /usr/include/sys/sysmacros.h
gamma4scanimage.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
mustek600iin-off.o: ../include/sane/config.h ../include/sane/sanei.h
mustek600iin-off.o: ../include/sane/sane.h /usr/include/stdio.h
mustek600iin-off.o: /usr/include/features.h /usr/include/sys/cdefs.h
mustek600iin-off.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
mustek600iin-off.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
mustek600iin-off.o: /usr/include/bits/typesizes.h /usr/include/libio.h
mustek600iin-off.o: /usr/include/_G_config.h /usr/include/wchar.h
mustek600iin-off.o: /usr/include/bits/stdio_lim.h
mustek600iin-off.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
mustek600iin-off.o: /usr/include/bits/waitflags.h
mustek600iin-off.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
mustek600iin-off.o: /usr/include/bits/endian.h /usr/include/xlocale.h
mustek600iin-off.o: /usr/include/sys/types.h /usr/include/time.h
mustek600iin-off.o: /usr/include/sys/select.h /usr/include/bits/select.h
mustek600iin-off.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
mustek600iin-off.o: /usr/include/sys/sysmacros.h
mustek600iin-off.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
mustek600iin-off.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
mustek600iin-off.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
mustek600iin-off.o: /usr/include/bits/stat.h /usr/include/string.h
mustek600iin-off.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
mustek600iin-off.o: /usr/include/bits/environments.h
mustek600iin-off.o: /usr/include/bits/confname.h ../include/getopt.h
mustek600iin-off.o: /usr/include/sys/io.h
sane-desc.o: ../include/sane/config.h ../include/getopt.h
sane-desc.o: /usr/include/stdio.h /usr/include/features.h
sane-desc.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sane-desc.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sane-desc.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sane-desc.o: /usr/include/libio.h /usr/include/_G_config.h
sane-desc.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
sane-desc.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
sane-desc.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
sane-desc.o: /usr/include/endian.h /usr/include/bits/endian.h
sane-desc.o: /usr/include/xlocale.h /usr/include/sys/types.h
sane-desc.o: /usr/include/time.h /usr/include/sys/select.h
sane-desc.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sane-desc.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sane-desc.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
sane-desc.o: /usr/include/string.h /usr/include/unistd.h
sane-desc.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
sane-desc.o: /usr/include/bits/confname.h /usr/include/errno.h
sane-desc.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
sane-desc.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
sane-desc.o: /usr/include/asm-generic/errno.h
sane-desc.o: /usr/include/asm-generic/errno-base.h /usr/include/sys/stat.h
sane-desc.o: /usr/include/bits/stat.h /usr/include/dirent.h
sane-desc.o: /usr/include/bits/dirent.h /usr/include/bits/posix1_lim.h
sane-desc.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sane-desc.o: /usr/include/limits.h /usr/include/bits/posix2_lim.h
sane-desc.o: /usr/include/bits/xopen_lim.h /usr/include/ctype.h
sane-desc.o: ../include/sane/sane.h ../include/sane/sanei.h
sane-desc.o: ../include/sane/sane.h ../include/sane/sanei_config.h
sane-find-scanner.o: ../include/sane/config.h /usr/include/string.h
sane-find-scanner.o: /usr/include/features.h /usr/include/sys/cdefs.h
sane-find-scanner.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sane-find-scanner.o: /usr/include/gnu/stubs-32.h /usr/include/xlocale.h
sane-find-scanner.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sane-find-scanner.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
sane-find-scanner.o: /usr/include/bits/endian.h /usr/include/sys/types.h
sane-find-scanner.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sane-find-scanner.o: /usr/include/time.h /usr/include/sys/select.h
sane-find-scanner.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sane-find-scanner.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sane-find-scanner.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
sane-find-scanner.o: /usr/include/stdio.h /usr/include/libio.h
sane-find-scanner.o: /usr/include/_G_config.h /usr/include/wchar.h
sane-find-scanner.o: /usr/include/bits/stdio_lim.h
sane-find-scanner.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
sane-find-scanner.o: /usr/include/bits/posix_opt.h
sane-find-scanner.o: /usr/include/bits/environments.h
sane-find-scanner.o: /usr/include/bits/confname.h ../include/getopt.h
sane-find-scanner.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
sane-find-scanner.o: /usr/include/dirent.h /usr/include/bits/dirent.h
sane-find-scanner.o: /usr/include/bits/posix1_lim.h
sane-find-scanner.o: /usr/include/bits/local_lim.h
sane-find-scanner.o: /usr/include/linux/limits.h /usr/include/errno.h
sane-find-scanner.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
sane-find-scanner.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
sane-find-scanner.o: /usr/include/asm-generic/errno.h
sane-find-scanner.o: /usr/include/asm-generic/errno-base.h
sane-find-scanner.o: ../include/sane/sanei.h ../include/sane/sane.h
sane-find-scanner.o: ../include/sane/sanei_scsi.h
sane-find-scanner.o: ../include/sane/sanei_pa4s2.h
sane-find-scanner.o: ../include/sane/sanei_config.h /usr/include/usb.h
sane-find-scanner.o: /usr/include/stdint.h /usr/include/bits/wchar.h
sane-find-scanner.o: /usr/include/limits.h /usr/include/bits/posix2_lim.h
sane-find-scanner.o: /usr/include/bits/xopen_lim.h /usr/include/sys/param.h
sane-find-scanner.o: /usr/include/linux/param.h /usr/include/asm/param.h
sane-find-scanner.o: /usr/include/asm-i386/param.h
sane-find-scanner.o: ../include/sane/sanei_usb.h ../include/sane/sane.h
umax_pp.o: /usr/include/stdlib.h /usr/include/features.h
umax_pp.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
umax_pp.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
umax_pp.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
umax_pp.o: /usr/include/endian.h /usr/include/bits/endian.h
umax_pp.o: /usr/include/xlocale.h /usr/include/sys/types.h
umax_pp.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
umax_pp.o: /usr/include/time.h /usr/include/sys/select.h
umax_pp.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
umax_pp.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
umax_pp.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
umax_pp.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
umax_pp.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
umax_pp.o: ../include/getopt.h /usr/include/string.h /usr/include/stdio.h
umax_pp.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
umax_pp.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
umax_pp.o: ../backend/umax_pp_low.h ../include/sane/config.h
umax_pp.o: ../backend/umax_pp_mid.h /usr/include/linux/parport.h
umax_pp.o: /usr/include/linux/ppdev.h /usr/include/sys/ioctl.h
umax_pp.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
umax_pp.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
umax_pp.o: /usr/include/asm-i386/ioctl.h /usr/include/asm-generic/ioctl.h
umax_pp.o: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
umax_pp.o: ../backend/umax_pp_low.h
