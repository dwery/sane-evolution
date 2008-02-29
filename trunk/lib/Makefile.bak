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
INCLUDES = -I. -I$(srcdir) \
	-I$(top_builddir)/include/sane -I$(top_srcdir)/include
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



LIBLIB_OBJS      =   getopt.o getopt1.o md5.o
LIBLIB_LTOBJS    = $(addsuffix .lo,$(basename $(LIBLIB_OBJS)))

TARGETS = liblib.a $(LIBLIB_LTOBJS)

DISTFILES = Makefile.in alloca.c getenv.c getopt.c getopt1.c \
  inet_ntop.c inet_pton.c isfdtype.c md5.c sigprocmask.c snprintf.c strdup.c \
  strndup.c strsep.c usleep.c vsyslog.c

.PHONY: all check clean depend dist distclean install uninstall

.SUFFIXES:
.SUFFIXES: .c .o .lo
.c.o:
	$(COMPILE) $<

.c.lo:
	@$(LIBTOOL) $(MCOMP) $(COMPILE) -static $<

all:	$(TARGETS)

liblib.a: $(LIBLIB_LTOBJS)
	@$(LIBTOOL) $(MLINK) $(CC) -static $(LIBLIB_LTOBJS) -o $@

install:

uninstall:

check:

depend:
	makedepend -I. -I../include *.c 2>/dev/null

clean:
	rm -f *.o *.lo *.a $(TESTPROGRAMS)
	rm -rf .libs

distclean: clean
	rm -f $(DISTCLEAN_FILES)
	rm -f Makefile

dist: $(DISTFILES)
	for file in $(DISTFILES); do \
	  ln $$file $(distdir)/lib 2> /dev/null \
	    || cp -p $$file $(distdir)/lib ; \
	done

# DO NOT DELETE

getenv.o: ../include/sane/config.h
getopt1.o: ../include/getopt.h /usr/include/ctype.h /usr/include/features.h
getopt1.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
getopt1.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
getopt1.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
getopt1.o: /usr/include/endian.h /usr/include/bits/endian.h
getopt1.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
getopt1.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
getopt1.o: /usr/include/bits/sys_errlist.h /usr/include/gnu-versions.h
getopt.o: /usr/include/stdio.h /usr/include/features.h
getopt.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
getopt.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
getopt.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
getopt.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
getopt.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
getopt.o: /usr/include/gnu-versions.h
inet_ntop.o: ../include/sane/config.h
inet_pton.o: ../include/sane/config.h
isfdtype.o: ../include/sane/config.h
md5.o: /usr/include/sys/types.h /usr/include/features.h
md5.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
md5.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
md5.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
md5.o: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
md5.o: /usr/include/sys/select.h /usr/include/bits/select.h
md5.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
md5.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
md5.o: ../include/md5.h /usr/include/stdio.h /usr/include/libio.h
md5.o: /usr/include/_G_config.h /usr/include/wchar.h
md5.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
sigprocmask.o: ../include/sane/config.h /usr/include/errno.h
sigprocmask.o: /usr/include/features.h /usr/include/sys/cdefs.h
sigprocmask.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
sigprocmask.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
sigprocmask.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
sigprocmask.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
sigprocmask.o: /usr/include/asm-generic/errno-base.h
snprintf.o: ../include/sane/config.h
strdup.o: ../include/sane/config.h /usr/include/stdlib.h
strdup.o: /usr/include/features.h /usr/include/sys/cdefs.h
strdup.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
strdup.o: /usr/include/gnu/stubs-32.h /usr/include/sys/types.h
strdup.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
strdup.o: /usr/include/time.h /usr/include/endian.h
strdup.o: /usr/include/bits/endian.h /usr/include/sys/select.h
strdup.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
strdup.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
strdup.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
strdup.o: /usr/include/string.h
strndup.o: ../include/sane/config.h
strsep.o: ../include/sane/config.h /usr/include/string.h
strsep.o: /usr/include/features.h /usr/include/sys/cdefs.h
strsep.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
strsep.o: /usr/include/gnu/stubs-32.h
usleep.o: ../include/sane/config.h
vsyslog.o: ../include/sane/config.h /usr/include/stdio.h
vsyslog.o: /usr/include/features.h /usr/include/sys/cdefs.h
vsyslog.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
vsyslog.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
vsyslog.o: /usr/include/bits/typesizes.h /usr/include/libio.h
vsyslog.o: /usr/include/_G_config.h /usr/include/wchar.h
vsyslog.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
vsyslog.o: /usr/include/syslog.h /usr/include/sys/syslog.h
vsyslog.o: /usr/include/bits/syslog-path.h
