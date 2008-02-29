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

MKDIR = $(top_srcdir)/mkinstalldirs
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644

CC = gcc
INCLUDES = -I. -I$(srcdir) -I$(top_builddir)/include -I$(top_srcdir)/include \
	 -I/usr/local/include
DEFS = -DHAVE_CONFIG_H
CPPFLAGS =  -D_REENTRANT -I/usr/include/gphoto2 -I/usr/include/libexif   -DPATH_SANE_CONFIG_DIR=$(configdir) 	  -DPATH_SANE_DATA_DIR=$(datadir) 	  -DPATH_SANE_LOCK_DIR=$(locksanedir) 	  -DV_MAJOR=1 -DV_MINOR=1
CFLAGS = -g -O2 -W -Wall -Wcast-align -Wcast-qual -Wmissing-declarations -Wmissing-prototypes -Wpointer-arith -Wreturn-type -Wstrict-prototypes -pedantic -ansi
LDFLAGS =  
LIBS = -lusb -lpthread -lm  -ljpeg -ltiff -lieee1284  -lgphoto2 -lgphoto2_port -lexif -lm -lusb

LIBTOOL = ../libtool
MINST	= --mode=install
MLINK	= --mode=link
SANED	= saned

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS)
LINK = $(CC) $(LDFLAGS) -o $@

DISTCLEAN_FILES = *~ .*~ *.log *.bak *.old *.orig *.out *.rej "\#"* ".\#"*



BINPROGS = scanimage # tstbackend
SBINPROGS = $(SANED)
PROGRAMS = $(BINPROGS) $(SBINPROGS)
TESTPROGRAMS = test
LIBLIB = ../lib/liblib.a
LIBSANE = ../backend/libsane.la
LIBSANEI = ../sanei/libsanei.a

SCAN_OBJS = scanimage.o stiff.o

DISTFILES = Makefile.in saned.c scanimage.c stiff.c stiff.h test.c tstbackend.c

.PHONY: all clean depend dist distclean install uninstall

.c.o:
	$(COMPILE) $<

all: $(PROGRAMS)

install: $(PROGRAMS)
	$(MKDIR) $(DESTDIR)$(bindir) $(DESTDIR)$(sbindir) $(DESTDIR)$(datadir)
	@for program in $(BINPROGS); do \
	  $(LIBTOOL) $(MINST) $(INSTALL_PROGRAM) $${program} \
	    $(DESTDIR)$(bindir)/$${program}; \
	done
	@for program in $(SBINPROGS); do \
	  $(LIBTOOL) $(MINST) $(INSTALL_PROGRAM) $${program} \
	    $(DESTDIR)$(sbindir)/$${program}; \
	done

uninstall:
	@for program in $(BINPROGS); do \
	  rm -f $(bindir)/$${program}; \
	done
	@for program in $(SBINPROGS); do \
	  rm -f $(sbindir)/$${program}; \
	done

test: test.o $(LIBSANE) $(LIBLIB)
	@$(LIBTOOL) $(MLINK) $(LINK) test.o $(LIBLIB) $(LIBSANE) $(LIBS)

saned: saned.o $(LIBSANEI) $(LIBSANE) $(LIBLIB)
	@$(LIBTOOL) $(MLINK) $(LINK) saned.o $(LIBSANEI) $(LIBLIB) $(LIBSANE)  \
		$(LIBS)

scanimage: $(SCAN_OBJS) $(LIBSANE) $(LIBLIB)
	@$(LIBTOOL) $(MLINK) $(LINK) $(SCAN_OBJS) $(LIBLIB) $(LIBSANE)  $(LIBS)

# tstbackend is not compiled by default. 
# To compile it, add tstbackend to BINPROGS.
tstbackend: tstbackend.o $(LIBSANE) $(LIBLIB)
	@$(LIBTOOL) $(MLINK) $(LINK) tstbackend.o $(LIBLIB) $(LIBSANE) $(LIBS)

clean:
	rm -f *.o tstbackend
	rm -rf .libs

distclean: clean
	rm -f $(DISTCLEAN_FILES)
	rm -f Makefile $(PROGRAMS) $(TESTPROGRAMS)

depend:
	makedepend $(INCLUDES) *.c 2>/dev/null

dist: $(DISTFILES)
	for file in $(DISTFILES); do \
	  ln $$file $(distdir)/frontend 2> /dev/null \
	    || cp -p $$file $(distdir)/frontend ; \
	done

# DO NOT DELETE

saned.o: ../include/sane/config.h ../include/lalloca.h
saned.o: /usr/include/sys/types.h /usr/include/features.h
saned.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
saned.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
saned.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
saned.o: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
saned.o: /usr/include/sys/select.h /usr/include/bits/select.h
saned.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
saned.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
saned.o: /usr/include/assert.h /usr/include/errno.h /usr/include/bits/errno.h
saned.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
saned.o: /usr/include/asm-i386/errno.h /usr/include/asm-generic/errno.h
saned.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
saned.o: /usr/include/bits/fcntl.h /usr/include/bits/uio.h
saned.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
saned.o: /usr/include/netdb.h /usr/include/netinet/in.h /usr/include/stdint.h
saned.o: /usr/include/bits/wchar.h /usr/include/sys/socket.h
saned.o: /usr/include/sys/uio.h /usr/include/bits/socket.h
saned.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
saned.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
saned.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
saned.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sockaddr.h
saned.o: /usr/include/asm/socket.h /usr/include/asm-i386/socket.h
saned.o: /usr/include/asm/sockios.h /usr/include/asm-i386/sockios.h
saned.o: /usr/include/bits/in.h /usr/include/bits/byteswap.h
saned.o: /usr/include/rpc/netdb.h /usr/include/bits/siginfo.h
saned.o: /usr/include/bits/netdb.h /usr/include/signal.h
saned.o: /usr/include/bits/signum.h /usr/include/bits/sigaction.h
saned.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
saned.o: /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
saned.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
saned.o: /usr/include/wchar.h /usr/include/bits/sys_errlist.h
saned.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
saned.o: /usr/include/bits/waitstatus.h /usr/include/xlocale.h
saned.o: /usr/include/alloca.h /usr/include/string.h /usr/include/syslog.h
saned.o: /usr/include/sys/syslog.h /usr/include/bits/syslog-path.h
saned.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
saned.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
saned.o: ../include/getopt.h /usr/include/sys/param.h
saned.o: /usr/include/linux/param.h /usr/include/asm/param.h
saned.o: /usr/include/asm-i386/param.h /usr/include/sys/time.h
saned.o: /usr/include/arpa/inet.h /usr/include/sys/poll.h
saned.o: /usr/include/bits/poll.h ../include/sane/sane.h
saned.o: ../include/sane/sanei.h ../include/sane/sane.h
saned.o: ../include/sane/sanei_net.h ../include/sane/sanei_wire.h
saned.o: ../include/sane/sanei_codec_bin.h ../include/sane/sanei_config.h
saned.o: ../include/sane/sanei_auth.h
scanimage.o: ../include/sane/config.h ../include/lalloca.h
scanimage.o: /usr/include/assert.h /usr/include/features.h
scanimage.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
scanimage.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
scanimage.o: ../include/getopt.h /usr/include/signal.h
scanimage.o: /usr/include/bits/sigset.h /usr/include/bits/types.h
scanimage.o: /usr/include/bits/typesizes.h /usr/include/bits/signum.h
scanimage.o: /usr/include/time.h /usr/include/bits/siginfo.h
scanimage.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
scanimage.o: /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h
scanimage.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/sigthread.h
scanimage.o: /usr/include/stdio.h /usr/include/libio.h
scanimage.o: /usr/include/_G_config.h /usr/include/wchar.h
scanimage.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
scanimage.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
scanimage.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
scanimage.o: /usr/include/bits/endian.h /usr/include/xlocale.h
scanimage.o: /usr/include/sys/types.h /usr/include/sys/select.h
scanimage.o: /usr/include/bits/select.h /usr/include/bits/time.h
scanimage.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
scanimage.o: /usr/include/string.h /usr/include/unistd.h
scanimage.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
scanimage.o: /usr/include/bits/confname.h /usr/include/sys/stat.h
scanimage.o: /usr/include/bits/stat.h ../include/sane/sane.h
scanimage.o: ../include/sane/sanei.h ../include/sane/sane.h
scanimage.o: ../include/sane/saneopts.h stiff.h ../include/md5.h
scanimage.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
scanimage.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
scanimage.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
stiff.o: /usr/include/stdlib.h /usr/include/features.h
stiff.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
stiff.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h
stiff.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
stiff.o: /usr/include/endian.h /usr/include/bits/endian.h
stiff.o: /usr/include/xlocale.h /usr/include/sys/types.h
stiff.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
stiff.o: /usr/include/time.h /usr/include/sys/select.h
stiff.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
stiff.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
stiff.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
stiff.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
stiff.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
stiff.o: /usr/include/bits/sys_errlist.h ../include/sane/config.h
stiff.o: ../include/sane/sane.h stiff.h
test.o: /usr/include/ctype.h /usr/include/features.h /usr/include/sys/cdefs.h
test.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
test.o: /usr/include/gnu/stubs-32.h /usr/include/bits/types.h
test.o: /usr/include/bits/typesizes.h /usr/include/endian.h
test.o: /usr/include/bits/endian.h /usr/include/xlocale.h
test.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
test.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
test.o: /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h
test.o: /usr/include/bits/stdio_lim.h /usr/include/stdio.h
test.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
test.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
test.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
test.o: /usr/include/sys/types.h /usr/include/time.h
test.o: /usr/include/sys/select.h /usr/include/bits/select.h
test.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
test.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
test.o: /usr/include/alloca.h /usr/include/string.h /usr/include/unistd.h
test.o: /usr/include/bits/posix_opt.h /usr/include/bits/environments.h
test.o: /usr/include/bits/confname.h ../include/getopt.h
test.o: /usr/include/sys/socket.h /usr/include/sys/uio.h
test.o: /usr/include/bits/uio.h /usr/include/bits/socket.h
test.o: /usr/include/bits/sockaddr.h /usr/include/asm/socket.h
test.o: /usr/include/asm-i386/socket.h /usr/include/asm/sockios.h
test.o: /usr/include/asm-i386/sockios.h /usr/include/netdb.h
test.o: /usr/include/netinet/in.h /usr/include/stdint.h
test.o: /usr/include/bits/wchar.h /usr/include/bits/in.h
test.o: /usr/include/bits/byteswap.h /usr/include/rpc/netdb.h
test.o: /usr/include/bits/siginfo.h /usr/include/bits/netdb.h
test.o: ../include/sane/sane.h
tstbackend.o: ../include/sane/config.h /usr/include/assert.h
tstbackend.o: /usr/include/features.h /usr/include/sys/cdefs.h
tstbackend.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
tstbackend.o: /usr/include/gnu/stubs-32.h ../include/getopt.h
tstbackend.o: /usr/include/stdio.h /usr/include/bits/types.h
tstbackend.o: /usr/include/bits/typesizes.h /usr/include/libio.h
tstbackend.o: /usr/include/_G_config.h /usr/include/wchar.h
tstbackend.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
tstbackend.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
tstbackend.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
tstbackend.o: /usr/include/bits/endian.h /usr/include/xlocale.h
tstbackend.o: /usr/include/sys/types.h /usr/include/time.h
tstbackend.o: /usr/include/sys/select.h /usr/include/bits/select.h
tstbackend.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
tstbackend.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
tstbackend.o: /usr/include/alloca.h /usr/include/string.h
tstbackend.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
tstbackend.o: /usr/include/bits/environments.h /usr/include/bits/confname.h
tstbackend.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
tstbackend.o: ../include/sane/sane.h ../include/sane/sanei.h
tstbackend.o: ../include/sane/sane.h ../include/sane/saneopts.h
