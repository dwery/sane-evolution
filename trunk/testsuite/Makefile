
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

SCANIMAGE = ../frontend/scanimage
TESTFILE  = testfile.pnm
OUTFILE   = outfile.pnm
DEVICE    = test
OPTIONS   = --mode Color --depth 16 --test-picture "Color pattern" --resolution 50 -y 20 -x 20 > $(OUTFILE)

DISTCLEAN_FILES = *~ .*~ *.log *.bak *.old *.orig *.out *.rej "\#"* ".\#"*

DISTFILES = Makefile.in README testfile.pnm 

.PHONY: all clean dist distclean test test.local 

all: Makefile
	@echo "Use 'make test' to run the tests."

test: Makefile test.local

test.local: 
	@echo "**** Testing $(SCANIMAGE) with device $(DEVICE)"
	@if echo "---> Trying flatbed scanner" && \
	  $(SCANIMAGE) -d $(DEVICE) -T && \
	  echo "<--- Flatbed scanner succeded" && \
	  echo "---> Trying three pass flatbed scanner" && \
	  $(SCANIMAGE) -d $(DEVICE) --mode Color --three-pass=yes   -T && \
	  echo "<--- Three pass scanner succeded" && \
	  echo "---> Trying hand scanner" && \
	  $(SCANIMAGE) -d $(DEVICE) --hand-scanner=yes -T && \
	  echo "<--- Hand scanner succeded" && \
	  echo "---> Checking 16 bit color mode" && \
	  $(SCANIMAGE) -d $(DEVICE) $(OPTIONS) && \
	  cmp -s $(TESTFILE) $(OUTFILE) && \
	  echo "<--- 16 bit color mode succeded" && \
	  rm $(OUTFILE) ; \
	then echo ; echo ; echo "**** All tests passed" ; \
	else echo ; echo; \
	echo "**** Something failed (maybe test backend not enabled by configure?)";\
	fi

# Generate new Makefile when something changes
Makefile: Makefile.in ../config.status
	cd .. \
	  && CONFIG_FILES=testsuite/Makefile CONFIG_HEADERS= /bin/sh ./config.status

clean:
	rm -f $(OUTFILE)

distclean: clean
	rm -f $(DISTCLEAN_FILES)
	rm -f Makefile

dist: $(DISTFILES)
	for file in $(DISTFILES); do \
	  ln $$file $(distdir)/testsuite 2> /dev/null \
	    || cp -p $$file $(distdir)/testsuite ; \
	done

