
VER = 0
REV = 5

TARGET = tiffscan
DISTFILES = tiffscan.c Makefile ChangeLog README TODO

LIBS = -lm -ltiff -lpopt -lsane -lpaper
CFLAGS = -L../backend/.libs $(LIBS) -DVERSION=$(VER) -DREVISION=$(REV) -Wall -I../include

prefix = /usr
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
INSTALL = /usr/bin/install -c

all : $(TARGET)

clean:
	rm -f $(TARGET) *~

DISTNAME = $(TARGET)-$(VER).$(REV)
DISTDIR = /tmp/$(DISTNAME)

dist:
	mkdir -p $(DISTDIR)
	for FILE in $(DISTFILES); do \
		cp $$FILE $(DISTDIR); \
	done
	cd $(DISTDIR)/.. && tar cvzf $(DISTNAME).tar.gz $(DISTNAME)

install:
	${INSTALL} ${TARGET} ${bindir}
