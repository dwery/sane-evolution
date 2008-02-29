SHELL = /bin/sh


srcdir = .
top_srcdir = ..
top_builddir = ..

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
locksanedir = ${prefix}/var/lock/sane
libdir = ${exec_prefix}/lib
infodir = ${datarootdir}/info
mandir = ${datarootdir}/man
includedir = ${prefix}/include
oldincludedir = /usr/include
configdir = ${sysconfdir}/sane.d

INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
RANLIB = ranlib

CC = gcc
INCLUDES = -I. -I$(srcdir) -I$(top_builddir)/include -I$(top_srcdir)/include
CPPFLAGS =  -D_REENTRANT -I/usr/include/gphoto2 -I/usr/include/libexif   -DPATH_SANE_CONFIG_DIR=$(configdir) 	  -DPATH_SANE_DATA_DIR=$(datadir) 	  -DPATH_SANE_LOCK_DIR=$(locksanedir) 	  -DV_MAJOR=1 -DV_MINOR=1
CFLAGS = -g -O2 -W -Wall -Wcast-align -Wcast-qual -Wmissing-declarations -Wmissing-prototypes -Wpointer-arith -Wreturn-type -Wstrict-prototypes -pedantic -ansi
LDFLAGS =  
LIBS = -lusb -lpthread -lm  -ljpeg -ltiff -lieee1284  -lgphoto2 -lgphoto2_port -lexif -lm -lusb
DEFS = -DHAVE_CONFIG_H

 COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS)
LIBTOOL = ../libtool
MCOMP	= --mode=compile
MLINK	= --mode=link

DISTCLEAN_FILES = *~ .*~ *.log *.bak *.old *.orig *.out *.rej "\#"* ".\#"*



LIBSANEI_OBJS = sanei_ab306.o sanei_constrain_value.o sanei_init_debug.o \
	sanei_net.o sanei_wire.o sanei_codec_ascii.o sanei_codec_bin.o \
	sanei_scsi.o sanei_config.o sanei_config2.o sanei_pio.o sanei_pa4s2.o \
	sanei_auth.o sanei_usb.o sanei_thread.o sanei_pv8630.o sanei_pp.o \
	sanei_lm983x.o sanei_access.o sanei_jpeg.o sanei_tcp.o sanei_udp.o

LIBSANEI_LTOBJS = sanei_ab306.lo sanei_constrain_value.lo sanei_init_debug.lo \
	sanei_net.lo sanei_wire.lo sanei_codec_ascii.lo sanei_codec_bin.lo \
	sanei_scsi.lo sanei_config.lo sanei_config2.lo sanei_pio.lo \
	sanei_pa4s2.lo sanei_auth.lo sanei_usb.lo sanei_thread.lo \
	sanei_pv8630.lo sanei_lm983x.lo sanei_pp.lo sanei_access.lo sanei_jpeg.lo \
	sanei_tcp.lo sanei_udp.lo

TARGETS = libsanei.a $(LIBSANEI_LTOBJS)
TESTPROGRAMS = test_wire

DISTFILES = Makefile.in linux_sg3_err.h os2_srb.h sanei_DomainOS.c \
  sanei_DomainOS.h sanei_ab306.c sanei_auth.c sanei_codec_ascii.c \
  sanei_codec_bin.c sanei_config.c sanei_config2.c \
  sanei_constrain_value.c sanei_init_debug.c sanei_jpeg.c \
  sanei_net.c sanei_pa4s2.c sanei_pio.c sanei_pv8630.c sanei_lm983x.c \
  sanei_scsi.c sanei_thread.c sanei_usb.c sanei_pp.c \
  sanei_wire.c test_wire.c sanei_access.c sanei_tcp.c sanei_udp.c

.PHONY: all check clean depend dist distclean install uninstall

.SUFFIXES:
.SUFFIXES: .c .o .lo

.c.o:
	$(COMPILE) $<

.c.lo:
	@$(LIBTOOL) $(MCOMP) $(COMPILE) -static $<

all:	$(TARGETS)

libsanei.a: $(LIBSANEI_LTOBJS)
	@$(LIBTOOL) $(MLINK) $(CC) -static $(LIBSANEI_LTOBJS) -o $@

install:

uninstall:

check: test_wire
	./test_wire

test_wire: test_wire.o libsanei.a
	@$(LIBTOOL) $(MLINK) $(CC) -o $@ test_wire.o $(LDFLAGS) libsanei.a

test_wire.o: test_wire.c
	$(COMPILE) $<

depend:
	makedepend -I. -I../include *.c 2>/dev/null

clean:
	rm -f *.o *.lo *.a $(OBJS) $(TESTPROGRAMS)
	rm -rf .libs

distclean: clean
	rm -f $(DISTCLEAN_FILES)
	rm -f Makefile

dist: $(DISTFILES)
	for file in $(DISTFILES); do \
	  ln $$file $(distdir)/sanei 2> /dev/null \
	    || cp -p $$file $(distdir)/sanei ; \
	done

# DO NOT DELETE

sanei_ab306.o: ../include/sane/config.h /usr/include/unistd.h
sanei_ab306.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_ab306.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_ab306.o: /usr/include/gnu/stubs-32.h /usr/include/bits/posix_opt.h
sanei_ab306.o: /usr/include/bits/environments.h /usr/include/bits/types.h
sanei_ab306.o: /usr/include/bits/typesizes.h /usr/include/bits/confname.h
sanei_ab306.o: ../include/getopt.h /usr/include/sys/types.h
sanei_ab306.o: /usr/include/time.h /usr/include/endian.h
sanei_ab306.o: /usr/include/bits/endian.h /usr/include/sys/select.h
sanei_ab306.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sanei_ab306.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sanei_ab306.o: /usr/include/bits/pthreadtypes.h /usr/include/sys/io.h
sanei_ab306.o: ../include/sane/sane.h ../include/sane/sanei.h
sanei_ab306.o: ../include/sane/sanei_ab306.h /usr/include/errno.h
sanei_ab306.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
sanei_ab306.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
sanei_ab306.o: /usr/include/asm-generic/errno.h
sanei_ab306.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
sanei_ab306.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
sanei_ab306.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
sanei_ab306.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sanei_ab306.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sanei_ab306.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sanei_ab306.o: /usr/include/bits/stdio_lim.h /usr/include/signal.h
sanei_ab306.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
sanei_ab306.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
sanei_ab306.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
sanei_ab306.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
sanei_ab306.o: /usr/include/libio.h /usr/include/_G_config.h
sanei_ab306.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
sanei_ab306.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sanei_ab306.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
sanei_ab306.o: /usr/include/alloca.h /usr/include/string.h
sanei_ab306.o: /usr/include/sys/wait.h /usr/include/sys/resource.h
sanei_ab306.o: /usr/include/bits/resource.h ../include/sane/saneopts.h
sanei_ab306.o: ../include/sane/sanei_debug.h
sanei_access.o: ../include/sane/config.h /usr/include/stdio.h
sanei_access.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_access.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_access.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
sanei_access.o: /usr/include/bits/typesizes.h /usr/include/libio.h
sanei_access.o: /usr/include/_G_config.h /usr/include/wchar.h
sanei_access.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
sanei_access.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sanei_access.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
sanei_access.o: /usr/include/bits/endian.h /usr/include/xlocale.h
sanei_access.o: /usr/include/sys/types.h /usr/include/time.h
sanei_access.o: /usr/include/sys/select.h /usr/include/bits/select.h
sanei_access.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
sanei_access.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
sanei_access.o: /usr/include/alloca.h /usr/include/string.h
sanei_access.o: /usr/include/errno.h /usr/include/bits/errno.h
sanei_access.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
sanei_access.o: /usr/include/asm-i386/errno.h
sanei_access.o: /usr/include/asm-generic/errno.h
sanei_access.o: /usr/include/asm-generic/errno-base.h /usr/include/signal.h
sanei_access.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
sanei_access.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
sanei_access.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
sanei_access.o: /usr/include/bits/sigthread.h /usr/include/limits.h
sanei_access.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
sanei_access.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
sanei_access.o: /usr/include/bits/xopen_lim.h /usr/include/unistd.h
sanei_access.o: /usr/include/bits/posix_opt.h
sanei_access.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
sanei_access.o: ../include/getopt.h /usr/include/fcntl.h
sanei_access.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
sanei_access.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
sanei_access.o: ../include/sane/sane.h ../include/sane/sanei_debug.h
sanei_access.o: ../include/sane/sanei.h ../include/sane/sane.h
sanei_access.o: ../include/sane/sanei_access.h
sanei_auth.o: ../include/sane/config.h /usr/include/stdlib.h
sanei_auth.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_auth.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_auth.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
sanei_auth.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
sanei_auth.o: /usr/include/bits/endian.h /usr/include/xlocale.h
sanei_auth.o: /usr/include/sys/types.h /usr/include/bits/types.h
sanei_auth.o: /usr/include/bits/typesizes.h /usr/include/time.h
sanei_auth.o: /usr/include/sys/select.h /usr/include/bits/select.h
sanei_auth.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
sanei_auth.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
sanei_auth.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
sanei_auth.o: /usr/include/_G_config.h /usr/include/wchar.h
sanei_auth.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
sanei_auth.o: /usr/include/string.h /usr/include/unistd.h
sanei_auth.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
sanei_auth.o: /usr/include/bits/confname.h ../include/getopt.h
sanei_auth.o: ../include/sane/sanei_backend.h ../include/sane/sanei_debug.h
sanei_auth.o: ../include/sane/sanei.h ../include/sane/sane.h
sanei_auth.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
sanei_auth.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
sanei_auth.o: /usr/include/bits/stat.h /usr/include/limits.h
sanei_auth.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
sanei_auth.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
sanei_auth.o: /usr/include/bits/xopen_lim.h ../include/sane/sanei_debug.h
sanei_auth.o: ../include/sane/sane.h ../include/sane/sanei.h
sanei_auth.o: ../include/sane/sanei_auth.h ../include/sane/sanei_config.h
sanei_auth.o: ../include/md5.h
sanei_codec_ascii.o: ../include/sane/config.h /usr/include/ctype.h
sanei_codec_ascii.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_codec_ascii.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_codec_ascii.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
sanei_codec_ascii.o: /usr/include/bits/typesizes.h /usr/include/endian.h
sanei_codec_ascii.o: /usr/include/bits/endian.h /usr/include/xlocale.h
sanei_codec_ascii.o: /usr/include/errno.h /usr/include/bits/errno.h
sanei_codec_ascii.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
sanei_codec_ascii.o: /usr/include/asm-i386/errno.h
sanei_codec_ascii.o: /usr/include/asm-generic/errno.h
sanei_codec_ascii.o: /usr/include/asm-generic/errno-base.h
sanei_codec_ascii.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sanei_codec_ascii.o: /usr/include/bits/waitstatus.h /usr/include/sys/types.h
sanei_codec_ascii.o: /usr/include/time.h /usr/include/sys/select.h
sanei_codec_ascii.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sanei_codec_ascii.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sanei_codec_ascii.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
sanei_codec_ascii.o: /usr/include/string.h ../include/sane/sane.h
sanei_codec_ascii.o: ../include/sane/sanei_wire.h
sanei_codec_ascii.o: ../include/sane/sanei_codec_ascii.h
sanei_codec_bin.o: ../include/sane/config.h /usr/include/errno.h
sanei_codec_bin.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_codec_bin.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_codec_bin.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
sanei_codec_bin.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
sanei_codec_bin.o: /usr/include/asm-i386/errno.h
sanei_codec_bin.o: /usr/include/asm-generic/errno.h
sanei_codec_bin.o: /usr/include/asm-generic/errno-base.h
sanei_codec_bin.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sanei_codec_bin.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
sanei_codec_bin.o: /usr/include/bits/endian.h /usr/include/xlocale.h
sanei_codec_bin.o: /usr/include/sys/types.h /usr/include/bits/types.h
sanei_codec_bin.o: /usr/include/bits/typesizes.h /usr/include/time.h
sanei_codec_bin.o: /usr/include/sys/select.h /usr/include/bits/select.h
sanei_codec_bin.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
sanei_codec_bin.o: /usr/include/sys/sysmacros.h
sanei_codec_bin.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
sanei_codec_bin.o: /usr/include/string.h ../include/sane/sane.h
sanei_codec_bin.o: ../include/sane/sanei_wire.h
sanei_codec_bin.o: ../include/sane/sanei_codec_bin.h
sanei_config2.o: ../include/sane/config.h /usr/include/ctype.h
sanei_config2.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_config2.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_config2.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
sanei_config2.o: /usr/include/bits/typesizes.h /usr/include/endian.h
sanei_config2.o: /usr/include/bits/endian.h /usr/include/xlocale.h
sanei_config2.o: /usr/include/stdio.h /usr/include/libio.h
sanei_config2.o: /usr/include/_G_config.h /usr/include/wchar.h
sanei_config2.o: /usr/include/bits/stdio_lim.h
sanei_config2.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
sanei_config2.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
sanei_config2.o: /usr/include/sys/types.h /usr/include/time.h
sanei_config2.o: /usr/include/sys/select.h /usr/include/bits/select.h
sanei_config2.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
sanei_config2.o: /usr/include/sys/sysmacros.h
sanei_config2.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
sanei_config2.o: /usr/include/string.h ../include/sane/sanei.h
sanei_config2.o: ../include/sane/sane.h ../include/sane/sanei_config.h
sanei_config2.o: ../include/sane/sanei_scsi.h
sanei_config.o: ../include/sane/config.h /usr/include/ctype.h
sanei_config.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_config.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_config.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
sanei_config.o: /usr/include/bits/typesizes.h /usr/include/endian.h
sanei_config.o: /usr/include/bits/endian.h /usr/include/xlocale.h
sanei_config.o: /usr/include/stdio.h /usr/include/libio.h
sanei_config.o: /usr/include/_G_config.h /usr/include/wchar.h
sanei_config.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
sanei_config.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sanei_config.o: /usr/include/bits/waitstatus.h /usr/include/sys/types.h
sanei_config.o: /usr/include/time.h /usr/include/sys/select.h
sanei_config.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sanei_config.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sanei_config.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
sanei_config.o: /usr/include/string.h /usr/include/sys/param.h
sanei_config.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sanei_config.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sanei_config.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sanei_config.o: /usr/include/linux/param.h /usr/include/asm/param.h
sanei_config.o: /usr/include/asm-i386/param.h ../include/sane/sanei.h
sanei_config.o: ../include/sane/sane.h ../include/sane/sanei_config.h
sanei_config.o: ../include/sane/sanei_debug.h
sanei_constrain_value.o: ../include/sane/config.h /usr/include/string.h
sanei_constrain_value.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_constrain_value.o: /usr/include/bits/wordsize.h
sanei_constrain_value.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sanei_constrain_value.o: /usr/include/xlocale.h /usr/include/sys/types.h
sanei_constrain_value.o: /usr/include/bits/types.h
sanei_constrain_value.o: /usr/include/bits/typesizes.h /usr/include/time.h
sanei_constrain_value.o: /usr/include/endian.h /usr/include/bits/endian.h
sanei_constrain_value.o: /usr/include/sys/select.h /usr/include/bits/select.h
sanei_constrain_value.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
sanei_constrain_value.o: /usr/include/sys/sysmacros.h
sanei_constrain_value.o: /usr/include/bits/pthreadtypes.h
sanei_constrain_value.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sanei_constrain_value.o: /usr/include/bits/waitstatus.h /usr/include/alloca.h
sanei_constrain_value.o: /usr/include/stdio.h /usr/include/libio.h
sanei_constrain_value.o: /usr/include/_G_config.h /usr/include/wchar.h
sanei_constrain_value.o: /usr/include/bits/stdio_lim.h
sanei_constrain_value.o: /usr/include/bits/sys_errlist.h
sanei_constrain_value.o: ../include/sane/sane.h ../include/sane/sanei.h
sanei_DomainOS.o: /usr/include/assert.h /usr/include/features.h
sanei_DomainOS.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
sanei_DomainOS.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
sanei_DomainOS.o: /usr/include/ctype.h /usr/include/bits/types.h
sanei_DomainOS.o: /usr/include/bits/typesizes.h /usr/include/endian.h
sanei_DomainOS.o: /usr/include/bits/endian.h /usr/include/xlocale.h
sanei_DomainOS.o: /usr/include/stdio.h /usr/include/libio.h
sanei_DomainOS.o: /usr/include/_G_config.h /usr/include/wchar.h
sanei_DomainOS.o: /usr/include/bits/stdio_lim.h
sanei_DomainOS.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
sanei_DomainOS.o: /usr/include/bits/waitflags.h
sanei_DomainOS.o: /usr/include/bits/waitstatus.h /usr/include/sys/types.h
sanei_DomainOS.o: /usr/include/time.h /usr/include/sys/select.h
sanei_DomainOS.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sanei_DomainOS.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sanei_DomainOS.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
sanei_DomainOS.o: /usr/include/string.h ../include/sane/config.h
sanei_DomainOS.o: ../include/sane/sanei_scsi.h ../include/sane/sane.h
sanei_DomainOS.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
sanei_DomainOS.o: sanei_DomainOS.h
sanei_init_debug.o: ../include/sane/config.h /usr/include/ctype.h
sanei_init_debug.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_init_debug.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_init_debug.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
sanei_init_debug.o: /usr/include/bits/typesizes.h /usr/include/endian.h
sanei_init_debug.o: /usr/include/bits/endian.h /usr/include/xlocale.h
sanei_init_debug.o: /usr/include/stdio.h /usr/include/libio.h
sanei_init_debug.o: /usr/include/_G_config.h /usr/include/wchar.h
sanei_init_debug.o: /usr/include/bits/stdio_lim.h
sanei_init_debug.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
sanei_init_debug.o: /usr/include/bits/waitflags.h
sanei_init_debug.o: /usr/include/bits/waitstatus.h /usr/include/sys/types.h
sanei_init_debug.o: /usr/include/time.h /usr/include/sys/select.h
sanei_init_debug.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sanei_init_debug.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sanei_init_debug.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
sanei_init_debug.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
sanei_init_debug.o: /usr/include/bits/environments.h
sanei_init_debug.o: /usr/include/bits/confname.h ../include/getopt.h
sanei_init_debug.o: /usr/include/string.h /usr/include/syslog.h
sanei_init_debug.o: /usr/include/sys/syslog.h /usr/include/bits/syslog-path.h
sanei_init_debug.o: /usr/include/sys/socket.h /usr/include/sys/uio.h
sanei_init_debug.o: /usr/include/bits/uio.h /usr/include/bits/socket.h
sanei_init_debug.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sanei_init_debug.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sanei_init_debug.o: /usr/include/bits/posix2_lim.h
sanei_init_debug.o: /usr/include/bits/xopen_lim.h
sanei_init_debug.o: /usr/include/bits/sockaddr.h /usr/include/asm/socket.h
sanei_init_debug.o: /usr/include/asm-i386/socket.h /usr/include/asm/sockios.h
sanei_init_debug.o: /usr/include/asm-i386/sockios.h /usr/include/sys/stat.h
sanei_init_debug.o: /usr/include/bits/stat.h ../include/sane/sanei_debug.h
sanei_init_debug.o: ../include/sane/sanei.h ../include/sane/sane.h
sanei_jpeg.o: ../include/sane/sanei_jpeg.h ../include/sane/sanei_jinclude.h
sanei_jpeg.o: /usr/include/jconfig.h /usr/include/stdio.h
sanei_jpeg.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_jpeg.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_jpeg.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
sanei_jpeg.o: /usr/include/bits/typesizes.h /usr/include/libio.h
sanei_jpeg.o: /usr/include/_G_config.h /usr/include/wchar.h
sanei_jpeg.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
sanei_jpeg.o: /usr/include/string.h /usr/include/xlocale.h
sanei_jpeg.o: /usr/include/jpeglib.h /usr/include/jmorecfg.h
sanei_jpeg.o: /usr/include/jerror.h ../include/sane/sanei_cderror.h
sanei_lm983x.o: ../include/sane/config.h /usr/include/sys/types.h
sanei_lm983x.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_lm983x.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_lm983x.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
sanei_lm983x.o: /usr/include/bits/typesizes.h /usr/include/time.h
sanei_lm983x.o: /usr/include/endian.h /usr/include/bits/endian.h
sanei_lm983x.o: /usr/include/sys/select.h /usr/include/bits/select.h
sanei_lm983x.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
sanei_lm983x.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
sanei_lm983x.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sanei_lm983x.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
sanei_lm983x.o: /usr/include/alloca.h /usr/include/unistd.h
sanei_lm983x.o: /usr/include/bits/posix_opt.h
sanei_lm983x.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
sanei_lm983x.o: ../include/getopt.h /usr/include/string.h
sanei_lm983x.o: /usr/include/errno.h /usr/include/bits/errno.h
sanei_lm983x.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
sanei_lm983x.o: /usr/include/asm-i386/errno.h
sanei_lm983x.o: /usr/include/asm-generic/errno.h
sanei_lm983x.o: /usr/include/asm-generic/errno-base.h ../include/sane/sane.h
sanei_lm983x.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
sanei_lm983x.o: ../include/sane/sane.h ../include/sane/sanei_usb.h
sanei_lm983x.o: ../include/sane/sanei_lm983x.h
sanei_net.o: ../include/sane/config.h /usr/include/errno.h
sanei_net.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_net.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_net.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
sanei_net.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
sanei_net.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
sanei_net.o: /usr/include/asm-generic/errno-base.h /usr/include/stdlib.h
sanei_net.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
sanei_net.o: /usr/include/endian.h /usr/include/bits/endian.h
sanei_net.o: /usr/include/xlocale.h /usr/include/sys/types.h
sanei_net.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sanei_net.o: /usr/include/time.h /usr/include/sys/select.h
sanei_net.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sanei_net.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sanei_net.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
sanei_net.o: ../include/sane/sane.h ../include/sane/sanei_net.h
sanei_net.o: ../include/sane/sane.h ../include/sane/sanei_wire.h
sanei_pa4s2.o: ../include/sane/config.h ../include/sane/sanei_backend.h
sanei_pa4s2.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
sanei_pa4s2.o: ../include/sane/sane.h /usr/include/fcntl.h
sanei_pa4s2.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_pa4s2.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_pa4s2.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
sanei_pa4s2.o: /usr/include/sys/types.h /usr/include/bits/types.h
sanei_pa4s2.o: /usr/include/bits/typesizes.h /usr/include/time.h
sanei_pa4s2.o: /usr/include/endian.h /usr/include/bits/endian.h
sanei_pa4s2.o: /usr/include/sys/select.h /usr/include/bits/select.h
sanei_pa4s2.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
sanei_pa4s2.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
sanei_pa4s2.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
sanei_pa4s2.o: /usr/include/bits/stat.h /usr/include/limits.h
sanei_pa4s2.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
sanei_pa4s2.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
sanei_pa4s2.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
sanei_pa4s2.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
sanei_pa4s2.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
sanei_pa4s2.o: ../include/getopt.h /usr/include/ieee1284.h
sanei_pa4s2.o: /usr/include/sys/time.h ../include/sane/sanei_pa4s2.h
sanei_pa4s2.o: /usr/include/errno.h /usr/include/bits/errno.h
sanei_pa4s2.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
sanei_pa4s2.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
sanei_pa4s2.o: /usr/include/asm-generic/errno-base.h /usr/include/stdio.h
sanei_pa4s2.o: /usr/include/libio.h /usr/include/_G_config.h
sanei_pa4s2.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
sanei_pa4s2.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sanei_pa4s2.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
sanei_pa4s2.o: /usr/include/alloca.h /usr/include/string.h
sanei_pa4s2.o: ../include/sane/saneopts.h
sanei_pio.o: ../include/sane/config.h ../include/sane/sanei_backend.h
sanei_pio.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
sanei_pio.o: ../include/sane/sane.h /usr/include/fcntl.h
sanei_pio.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_pio.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_pio.o: /usr/include/gnu/stubs-32.h /usr/include/bits/fcntl.h
sanei_pio.o: /usr/include/sys/types.h /usr/include/bits/types.h
sanei_pio.o: /usr/include/bits/typesizes.h /usr/include/time.h
sanei_pio.o: /usr/include/endian.h /usr/include/bits/endian.h
sanei_pio.o: /usr/include/sys/select.h /usr/include/bits/select.h
sanei_pio.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
sanei_pio.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
sanei_pio.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
sanei_pio.o: /usr/include/bits/stat.h /usr/include/limits.h
sanei_pio.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
sanei_pio.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
sanei_pio.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
sanei_pio.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
sanei_pio.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
sanei_pio.o: ../include/getopt.h /usr/include/sys/io.h
sanei_pio.o: ../include/sane/sanei_pio.h /usr/include/errno.h
sanei_pio.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
sanei_pio.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
sanei_pio.o: /usr/include/asm-generic/errno.h
sanei_pio.o: /usr/include/asm-generic/errno-base.h /usr/include/signal.h
sanei_pio.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
sanei_pio.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
sanei_pio.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
sanei_pio.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
sanei_pio.o: /usr/include/libio.h /usr/include/_G_config.h
sanei_pio.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
sanei_pio.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sanei_pio.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
sanei_pio.o: /usr/include/alloca.h /usr/include/string.h
sanei_pio.o: /usr/include/sys/wait.h /usr/include/sys/resource.h
sanei_pio.o: /usr/include/bits/resource.h ../include/sane/saneopts.h
sanei_pp.o: ../include/sane/config.h /usr/include/unistd.h
sanei_pp.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_pp.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_pp.o: /usr/include/gnu/stubs-32.h /usr/include/bits/posix_opt.h
sanei_pp.o: /usr/include/bits/environments.h /usr/include/bits/types.h
sanei_pp.o: /usr/include/bits/typesizes.h /usr/include/bits/confname.h
sanei_pp.o: ../include/getopt.h /usr/include/sys/time.h /usr/include/time.h
sanei_pp.o: /usr/include/bits/time.h /usr/include/sys/select.h
sanei_pp.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sanei_pp.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sanei_pp.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sanei_pp.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sanei_pp.o: /usr/include/bits/stdio_lim.h /usr/include/ieee1284.h
sanei_pp.o: /usr/include/sys/types.h /usr/include/endian.h
sanei_pp.o: /usr/include/bits/endian.h /usr/include/sys/sysmacros.h
sanei_pp.o: /usr/include/bits/pthreadtypes.h ../include/sane/sane.h
sanei_pp.o: ../include/sane/sanei.h ../include/sane/sanei_debug.h
sanei_pp.o: ../include/sane/sanei.h ../include/sane/sane.h
sanei_pp.o: ../include/sane/sanei_pp.h /usr/include/errno.h
sanei_pp.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
sanei_pp.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
sanei_pp.o: /usr/include/asm-generic/errno.h
sanei_pp.o: /usr/include/asm-generic/errno-base.h /usr/include/stdio.h
sanei_pp.o: /usr/include/libio.h /usr/include/_G_config.h
sanei_pp.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
sanei_pp.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sanei_pp.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
sanei_pp.o: /usr/include/alloca.h /usr/include/string.h
sanei_pv8630.o: ../include/sane/config.h /usr/include/stdlib.h
sanei_pv8630.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_pv8630.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_pv8630.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
sanei_pv8630.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
sanei_pv8630.o: /usr/include/bits/endian.h /usr/include/xlocale.h
sanei_pv8630.o: /usr/include/sys/types.h /usr/include/bits/types.h
sanei_pv8630.o: /usr/include/bits/typesizes.h /usr/include/time.h
sanei_pv8630.o: /usr/include/sys/select.h /usr/include/bits/select.h
sanei_pv8630.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
sanei_pv8630.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
sanei_pv8630.o: /usr/include/alloca.h /usr/include/unistd.h
sanei_pv8630.o: /usr/include/bits/posix_opt.h
sanei_pv8630.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
sanei_pv8630.o: ../include/getopt.h ../include/sane/sane.h
sanei_pv8630.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
sanei_pv8630.o: ../include/sane/sane.h ../include/sane/sanei_usb.h
sanei_pv8630.o: ../include/sane/sanei_pv8630.h
sanei_scsi.o: ../include/sane/config.h ../include/lalloca.h
sanei_scsi.o: ../include/lassert.h /usr/include/assert.h
sanei_scsi.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_scsi.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_scsi.o: /usr/include/gnu/stubs-32.h /usr/include/ctype.h
sanei_scsi.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sanei_scsi.o: /usr/include/endian.h /usr/include/bits/endian.h
sanei_scsi.o: /usr/include/xlocale.h /usr/include/errno.h
sanei_scsi.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
sanei_scsi.o: /usr/include/asm/errno.h /usr/include/asm-i386/errno.h
sanei_scsi.o: /usr/include/asm-generic/errno.h
sanei_scsi.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
sanei_scsi.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
sanei_scsi.o: /usr/include/time.h /usr/include/sys/select.h
sanei_scsi.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sanei_scsi.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sanei_scsi.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/uio.h
sanei_scsi.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
sanei_scsi.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sanei_scsi.o: /usr/include/bits/waitstatus.h /usr/include/alloca.h
sanei_scsi.o: /usr/include/string.h /usr/include/unistd.h
sanei_scsi.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
sanei_scsi.o: /usr/include/bits/confname.h ../include/getopt.h
sanei_scsi.o: /usr/include/sys/ioctl.h /usr/include/bits/ioctls.h
sanei_scsi.o: /usr/include/asm/ioctls.h /usr/include/asm-i386/ioctls.h
sanei_scsi.o: /usr/include/asm/ioctl.h /usr/include/asm-i386/ioctl.h
sanei_scsi.o: /usr/include/asm-generic/ioctl.h
sanei_scsi.o: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
sanei_scsi.o: /usr/include/sys/param.h /usr/include/limits.h
sanei_scsi.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
sanei_scsi.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
sanei_scsi.o: /usr/include/bits/xopen_lim.h /usr/include/bits/stdio_lim.h
sanei_scsi.o: /usr/include/linux/param.h /usr/include/asm/param.h
sanei_scsi.o: /usr/include/asm-i386/param.h /usr/include/scsi/sg.h
sanei_scsi.o: ../include/sane/sanei.h ../include/sane/sanei_config.h
sanei_scsi.o: /usr/include/stdio.h /usr/include/libio.h
sanei_scsi.o: /usr/include/_G_config.h /usr/include/wchar.h
sanei_scsi.o: /usr/include/bits/sys_errlist.h ../include/sane/sanei_scsi.h
sanei_scsi.o: ../include/sane/sane.h ../include/sane/sanei_debug.h
sanei_scsi.o: ../include/sane/sanei.h linux_sg3_err.h /usr/include/signal.h
sanei_scsi.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
sanei_scsi.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
sanei_scsi.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
sanei_scsi.o: /usr/include/bits/sigthread.h /usr/include/sys/time.h
sanei_tcp.o: ../include/sane/config.h /usr/include/errno.h
sanei_tcp.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_tcp.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_tcp.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
sanei_tcp.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
sanei_tcp.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
sanei_tcp.o: /usr/include/asm-generic/errno-base.h /usr/include/unistd.h
sanei_tcp.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
sanei_tcp.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sanei_tcp.o: /usr/include/bits/confname.h ../include/getopt.h
sanei_tcp.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sanei_tcp.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
sanei_tcp.o: /usr/include/bits/endian.h /usr/include/xlocale.h
sanei_tcp.o: /usr/include/sys/types.h /usr/include/time.h
sanei_tcp.o: /usr/include/sys/select.h /usr/include/bits/select.h
sanei_tcp.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
sanei_tcp.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
sanei_tcp.o: /usr/include/alloca.h /usr/include/string.h
sanei_tcp.o: /usr/include/sys/socket.h /usr/include/sys/uio.h
sanei_tcp.o: /usr/include/bits/uio.h /usr/include/bits/socket.h
sanei_tcp.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sanei_tcp.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sanei_tcp.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sanei_tcp.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sockaddr.h
sanei_tcp.o: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
sanei_tcp.o: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
sanei_tcp.o: ../include/sane/sane.h ../include/sane/sanei_debug.h
sanei_tcp.o: ../include/sane/sanei.h ../include/sane/sane.h
sanei_tcp.o: ../include/sane/sanei_tcp.h /usr/include/netinet/in.h
sanei_tcp.o: /usr/include/stdint.h /usr/include/bits/wchar.h
sanei_tcp.o: /usr/include/bits/in.h /usr/include/bits/byteswap.h
sanei_tcp.o: /usr/include/netdb.h /usr/include/rpc/netdb.h
sanei_tcp.o: /usr/include/bits/siginfo.h /usr/include/bits/netdb.h
sanei_thread.o: ../include/sane/config.h /usr/include/stdio.h
sanei_thread.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_thread.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_thread.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
sanei_thread.o: /usr/include/bits/typesizes.h /usr/include/libio.h
sanei_thread.o: /usr/include/_G_config.h /usr/include/wchar.h
sanei_thread.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
sanei_thread.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sanei_thread.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
sanei_thread.o: /usr/include/bits/endian.h /usr/include/xlocale.h
sanei_thread.o: /usr/include/sys/types.h /usr/include/time.h
sanei_thread.o: /usr/include/sys/select.h /usr/include/bits/select.h
sanei_thread.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
sanei_thread.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
sanei_thread.o: /usr/include/alloca.h /usr/include/string.h
sanei_thread.o: /usr/include/errno.h /usr/include/bits/errno.h
sanei_thread.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
sanei_thread.o: /usr/include/asm-i386/errno.h
sanei_thread.o: /usr/include/asm-generic/errno.h
sanei_thread.o: /usr/include/asm-generic/errno-base.h /usr/include/signal.h
sanei_thread.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
sanei_thread.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
sanei_thread.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
sanei_thread.o: /usr/include/bits/sigthread.h /usr/include/unistd.h
sanei_thread.o: /usr/include/bits/posix_opt.h
sanei_thread.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
sanei_thread.o: ../include/getopt.h /usr/include/sys/wait.h
sanei_thread.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
sanei_thread.o: ../include/sane/sane.h ../include/sane/sanei_debug.h
sanei_thread.o: ../include/sane/sanei.h ../include/sane/sane.h
sanei_thread.o: ../include/sane/sanei_thread.h
sanei_udp.o: ../include/sane/config.h /usr/include/errno.h
sanei_udp.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_udp.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_udp.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
sanei_udp.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
sanei_udp.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
sanei_udp.o: /usr/include/asm-generic/errno-base.h /usr/include/unistd.h
sanei_udp.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
sanei_udp.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sanei_udp.o: /usr/include/bits/confname.h ../include/getopt.h
sanei_udp.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
sanei_udp.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
sanei_udp.o: /usr/include/bits/endian.h /usr/include/xlocale.h
sanei_udp.o: /usr/include/sys/types.h /usr/include/time.h
sanei_udp.o: /usr/include/sys/select.h /usr/include/bits/select.h
sanei_udp.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
sanei_udp.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
sanei_udp.o: /usr/include/alloca.h /usr/include/string.h
sanei_udp.o: /usr/include/sys/socket.h /usr/include/sys/uio.h
sanei_udp.o: /usr/include/bits/uio.h /usr/include/bits/socket.h
sanei_udp.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sanei_udp.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sanei_udp.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sanei_udp.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sockaddr.h
sanei_udp.o: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
sanei_udp.o: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
sanei_udp.o: /usr/include/netinet/in.h /usr/include/stdint.h
sanei_udp.o: /usr/include/bits/wchar.h /usr/include/bits/in.h
sanei_udp.o: /usr/include/bits/byteswap.h /usr/include/netdb.h
sanei_udp.o: /usr/include/rpc/netdb.h /usr/include/bits/siginfo.h
sanei_udp.o: /usr/include/bits/netdb.h /usr/include/arpa/inet.h
sanei_udp.o: ../include/sane/sane.h ../include/sane/sanei_debug.h
sanei_udp.o: ../include/sane/sanei.h ../include/sane/sane.h
sanei_udp.o: ../include/sane/sanei_udp.h
sanei_usb.o: ../include/sane/config.h /usr/include/stdlib.h
sanei_usb.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_usb.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_usb.o: /usr/include/gnu/stubs-32.h /usr/include/bits/waitflags.h
sanei_usb.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
sanei_usb.o: /usr/include/bits/endian.h /usr/include/xlocale.h
sanei_usb.o: /usr/include/sys/types.h /usr/include/bits/types.h
sanei_usb.o: /usr/include/bits/typesizes.h /usr/include/time.h
sanei_usb.o: /usr/include/sys/select.h /usr/include/bits/select.h
sanei_usb.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
sanei_usb.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
sanei_usb.o: /usr/include/alloca.h /usr/include/sys/stat.h
sanei_usb.o: /usr/include/bits/stat.h /usr/include/fcntl.h
sanei_usb.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
sanei_usb.o: /usr/include/errno.h /usr/include/bits/errno.h
sanei_usb.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
sanei_usb.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
sanei_usb.o: /usr/include/asm-generic/errno-base.h /usr/include/string.h
sanei_usb.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
sanei_usb.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
sanei_usb.o: ../include/getopt.h /usr/include/sys/ioctl.h
sanei_usb.o: /usr/include/bits/ioctls.h /usr/include/asm/ioctls.h
sanei_usb.o: /usr/include/asm-i386/ioctls.h /usr/include/asm/ioctl.h
sanei_usb.o: /usr/include/asm-i386/ioctl.h /usr/include/asm-generic/ioctl.h
sanei_usb.o: /usr/include/bits/ioctl-types.h /usr/include/sys/ttydefaults.h
sanei_usb.o: /usr/include/stdio.h /usr/include/libio.h
sanei_usb.o: /usr/include/_G_config.h /usr/include/wchar.h
sanei_usb.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
sanei_usb.o: /usr/include/dirent.h /usr/include/bits/dirent.h
sanei_usb.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
sanei_usb.o: /usr/include/linux/limits.h /usr/include/usb.h
sanei_usb.o: /usr/include/stdint.h /usr/include/bits/wchar.h
sanei_usb.o: /usr/include/limits.h /usr/include/bits/posix2_lim.h
sanei_usb.o: /usr/include/bits/xopen_lim.h /usr/include/sys/param.h
sanei_usb.o: /usr/include/linux/param.h /usr/include/asm/param.h
sanei_usb.o: /usr/include/asm-i386/param.h ../include/sane/sane.h
sanei_usb.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
sanei_usb.o: ../include/sane/sane.h ../include/sane/sanei_usb.h
sanei_usb.o: ../include/sane/sanei_config.h
sanei_wire.o: ../include/sane/config.h /usr/include/errno.h
sanei_wire.o: /usr/include/features.h /usr/include/sys/cdefs.h
sanei_wire.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sanei_wire.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
sanei_wire.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
sanei_wire.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
sanei_wire.o: /usr/include/asm-generic/errno-base.h /usr/include/stdlib.h
sanei_wire.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
sanei_wire.o: /usr/include/endian.h /usr/include/bits/endian.h
sanei_wire.o: /usr/include/xlocale.h /usr/include/sys/types.h
sanei_wire.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
sanei_wire.o: /usr/include/time.h /usr/include/sys/select.h
sanei_wire.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
sanei_wire.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
sanei_wire.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
sanei_wire.o: /usr/include/string.h ../include/sane/sane.h
sanei_wire.o: ../include/sane/sanei_wire.h ../include/sane/sanei_backend.h
sanei_wire.o: ../include/sane/sanei_debug.h ../include/sane/sanei.h
sanei_wire.o: ../include/sane/sane.h /usr/include/fcntl.h
sanei_wire.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
sanei_wire.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
sanei_wire.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
sanei_wire.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
sanei_wire.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
sanei_wire.o: /usr/include/bits/stdio_lim.h
test_wire.o: ../include/sane/config.h /usr/include/stdio.h
test_wire.o: /usr/include/features.h /usr/include/sys/cdefs.h
test_wire.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
test_wire.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
test_wire.o: /usr/include/bits/typesizes.h /usr/include/libio.h
test_wire.o: /usr/include/_G_config.h /usr/include/wchar.h
test_wire.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
test_wire.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
test_wire.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
test_wire.o: /usr/include/bits/endian.h /usr/include/xlocale.h
test_wire.o: /usr/include/sys/types.h /usr/include/time.h
test_wire.o: /usr/include/sys/select.h /usr/include/bits/select.h
test_wire.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
test_wire.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
test_wire.o: /usr/include/alloca.h /usr/include/string.h
test_wire.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
test_wire.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
test_wire.o: ../include/getopt.h /usr/include/sys/fcntl.h
test_wire.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
test_wire.o: /usr/include/bits/uio.h /usr/include/sys/stat.h
test_wire.o: /usr/include/bits/stat.h ../include/sane/sane.h
test_wire.o: ../include/sane/sanei.h ../include/sane/sanei_wire.h
test_wire.o: ../include/sane/sanei_codec_ascii.h
test_wire.o: ../include/sane/sanei_codec_bin.h
