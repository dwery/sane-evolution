#
#	Makefile for a Java project with native methods.
#

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

V_MAJOR = 1
V_MINOR = 1
DLL_PRELOAD = 

MKDIR = $(top_srcdir)/mkinstalldirs
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
RANLIB = ranlib
JAVAC=javac
JAVAH=javah -jni

CC = gcc
#	We'll need something in 'configure' for the Java includes.
INCLUDES = -I. -I$(srcdir) -I$(top_builddir)/include -I$(top_srcdir)/include \
	-I${JDK_HOME}/include -I${JDK_HOME}/include/genunix

CPPFLAGS =  -D_REENTRANT -I/usr/include/gphoto2 -I/usr/include/libexif   -DPATH_SANE_CONFIG_DIR=$(configdir) 	  -DPATH_SANE_DATA_DIR=$(datadir) 	  -DPATH_SANE_LOCK_DIR=$(locksanedir) 	  -DV_MAJOR=1 -DV_MINOR=1
CFLAGS = -g -O2 -W -Wall -Wcast-align -Wcast-qual -Wmissing-declarations -Wmissing-prototypes -Wpointer-arith -Wreturn-type -Wstrict-prototypes -pedantic -ansi
LDFLAGS =  
DEFS = -DHAVE_CONFIG_H

LIBTOOL = ../libtool
MCOMP	= --mode=compile
MLINK	= --mode=link
MINST	= --mode=install

COMPILE = $(CC) -c $(CFLAGS) $(DEFS) $(INCLUDES) $(CPPFLAGS)

DISTCLEAN_FILES = *~ .*~ *.log *.bak *.old *.orig *.out *.rej "\#"* ".\#"*



LIBSANE = -L`pwd`/../backend/libs -lsane

# Classes to compile.
CLASSES = SaneDevice.class SaneOption.class SaneRange.class Sane.class \
	SaneParameters.class ScanIt.class ImageCanvas.class \
	ImageCanvasClient.class

DISTFILES = ImageCanvas.java ImageCanvasClient.java Jscanimage.java \
  Makefile.in README.JAVA Sane.c Sane.java SaneDevice.java \
  SaneOption.java SaneParameters.java SaneRange.java ScanIt.java \
  Test.java

.PHONY: all clean dist distclean install uninstall

.SUFFIXES: .c .o .h .la .lo .java .class

.java.class:
	$(JAVAC) $<

.class.h:
	$(JAVAH) $*

%.lo:	%.c
	@$(LIBTOOL) $(MCOMP) $(COMPILE) $<

# Don't delete any intermediate files.
.PRECIOUS: %.h %.lo

all: libsanej.la $(CLASSES) Test.class Jscanimage.class

libsanej.la: Sane.lo
	@$(LIBTOOL) $(MLINK) $(CC) -o $@ $(LDFLAGS) $^ \
		-rpath $(libdir) -version-info \
		$(V_MAJOR):$(V_MINOR):0 $(LIBSANE)

Sane.lo: Sane.h

clean:
	rm -f *.class *.lo *.o *.la *.so
	rm -f Sane.h
	rm -rf .libs

distclean: clean
	rm -f $(DISTCLEAN_FILES)

#	Install library.  Don't know where to install .class files yet.
install:
	$(MKDIR) $(libdir) $(configdir)
	$(LIBTOOL) $(MINST) $(INSTALL_PROGRAM) libsanej.la \
		$(libdir)/libsanej.la || exit 1;
	@$(LIBTOOL) $(MINST) --finish $(libdir)


# fixme
uninstall:

dist: $(DISTFILES)
	for file in $(DISTFILES); do \
	  ln $$file $(distdir)/japi 2> /dev/null \
	    || cp -p $$file $(distdir)/japi ; \
	done

