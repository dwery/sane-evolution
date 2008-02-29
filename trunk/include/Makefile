SHELL = /bin/sh


srcdir = .
top_srcdir = ..
top_builddir = .

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

MKDIR = $(top_srcdir)/mkinstalldirs
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644

DISTCLEAN_FILES = *~ .*~ *.log *.bak *.old *.orig *.out *.rej "\#"* ".\#"*



INSTALLED_INCLUDES = sane.h saneopts.h

SANE_INCLUDES = $(addprefix $(top_srcdir)/include/sane/,$(INSTALLED_INCLUDES)) \
		$(addprefix $(top_srcdir)/include/sane/,config.h.in sanei.h \
		sanei_ab306.h sanei_access.h sanei_auth.h sanei_backend.h \
		sanei_cderror.h sanei_codec_ascii.h sanei_codec_bin.h \
		sanei_config.h sanei_debug.h sanei_jinclude.h sanei_jpeg.h \
		sanei_lm983x.h sanei_net.h sanei_pa4s2.h \
		sanei_pio.h sanei_pp.h sanei_pv8630.h sanei_scsi.h sanei_tcp.h \
		sanei_thread.h sanei_udp.h sanei_usb.h sanei_wire.h )

OTHER_INCLUDES = $(addprefix $(top_srcdir)/include/,Makefile.in getopt.h \
                lalloca.h lassert.h md5.h font_6x11.h)

DISTFILES = $(SANE_INCLUDES) $(OTHER_INCLUDES)

.PHONY: all clean depend dist distclean install uninstall 

all:

clean:

distclean: clean
	rm -f $(DISTCLEAN_FILES)
	rm -f $(addprefix sane/,$(DISTCLEAN_FILES))
	rm -f Makefile
	rm -f sane/config.h

install:
	$(MKDIR) $(DESTDIR)$(includedir)/sane
	@list="$(INSTALLED_INCLUDES)"; for file in $$list; do \
	  echo installing sane/$${file} in $(includedir)/sane/$${file}...; \
	  $(INSTALL_DATA) $(srcdir)/sane/$${file} $(DESTDIR)$(includedir)/sane/$${file} \
            || exit 1; \
	done

uninstall:
	rm -rf $(includedir)/sane

depend:

dist: $(DISTFILES)
	$(MKDIR) $(distdir)/include/sane
	for file in $(OTHER_INCLUDES); do \
	  ln $$file $(distdir)/include 2> /dev/null \
	    || cp -p $$file $(distdir)/include; \
	done
	for file in $(SANE_INCLUDES); do \
	  ln $$file $(distdir)/include/sane 2> /dev/null \
	    || cp -p $$file $(distdir)/include/sane; \
	done
