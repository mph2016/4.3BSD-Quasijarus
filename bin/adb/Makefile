#
# Copyright (c) 1988 Regents of the University of California.
# All rights reserved.
#
# Redistribution and use in source and binary forms are permitted
# provided that the above copyright notice and this paragraph are
# duplicated in all such forms and that any documentation,
# advertising materials, and other materials related to such
# distribution and use acknowledge that the software was developed
# by the University of California, Berkeley.  The name of the
# University may not be used to endorse or promote products derived
# from this software without specific prior written permission.
# THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
# WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
#
#	@(#)Makefile	5.3 (Berkeley) 7/9/88
#
SUBDIR=	scripts scripts.${MACHINE} adb.${MACHINE}

all: FRC
	for i in ${SUBDIR}; do (cd $$i; make ${MFLAGS}); done

depend: FRC
	for i in ${SUBDIR}; do (cd $$i; make ${MFLAGS} depend); done

SCRIPTDIR=	/usr/lib/adb
install: FRC
	rm -rf ${SCRIPTDIR}
	mkdir ${DESTDIR}/${SCRIPTDIR}
	chown bin.bin ${DESTDIR}/${SCRIPTDIR}
	chmod 755 ${DESTDIR}/${SCRIPTDIR}
	for i in ${SUBDIR}; do (cd $$i; make ${MFLAGS} install); done

clean: FRC
	for i in ${SUBDIR}; do (cd $$i; make ${MFLAGS} clean); done

FRC:
