#
# Copyright (c) 1987 Regents of the University of California.
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
#	@(#)Makefile	5.7 (Berkeley) 6/18/88
#
CFLAGS=	-O
LIBC=	/lib/libc.a
LIBS=	-lcurses -ltermlib
HDRS=	cribbage.h deck.h cribcur.h
SRCS=	extern.c crib.c support.c cards.c score.c io.c
OBJS=	extern.o crib.o support.o cards.o score.o io.o
TOBJS=	test.o cards.o score.o io.o extern.o

all: cribbage crib.instr

cribbage: ${OBJS} ${LIBC}
	${CC} -o $@ ${CFLAGS} ${OBJS} ${LIBS}

test: ${TOBJS} ${LIBC}
	${CC} -o $@ ${CFLAGS} ${TOBJS} ${LIBS}

crib.instr: cribbage.n macro
	nroff cribbage.n > crib.instr

clean: FRC
	rm -f ${OBJS} core crib.instr cribbage test

depend: FRC
	mkdep ${CFLAGS} ${SRCS}

install: FRC
	install -o games -g bin -m 400 crib.instr ${DESTDIR}/usr/games/lib/crib.instr
	install -s -o games -g bin -m 4700 cribbage ${DESTDIR}/usr/games/hide
	(cd ${DESTDIR}/usr/games; rm -f cribbage; ln -s dm cribbage; chown games.bin cribbage)

lint: FRC
	lint ${CFLAGS} ${SRCS}

tags: FRC
	ctags ${SRCS}

FRC:

# DO NOT DELETE THIS LINE -- mkdep uses it.
# DO NOT PUT ANYTHING AFTER THIS LINE, IT WILL GO AWAY.

extern.o: extern.c /usr/include/curses.h /usr/include/stdio.h
extern.o: /usr/include/sgtty.h /usr/include/sys/ioctl.h
extern.o: /usr/include/sys/ttychars.h /usr/include/sys/ttydev.h deck.h
extern.o: cribbage.h
crib.o: crib.c /usr/include/curses.h /usr/include/stdio.h /usr/include/sgtty.h
crib.o: /usr/include/sys/ioctl.h /usr/include/sys/ttychars.h
crib.o: /usr/include/sys/ttydev.h /usr/include/signal.h
crib.o: /usr/include/machine/trap.h deck.h cribbage.h cribcur.h
support.o: support.c /usr/include/curses.h /usr/include/stdio.h
support.o: /usr/include/sgtty.h /usr/include/sys/ioctl.h
support.o: /usr/include/sys/ttychars.h /usr/include/sys/ttydev.h deck.h
support.o: cribbage.h cribcur.h
cards.o: cards.c /usr/include/stdio.h deck.h
score.o: score.c /usr/include/stdio.h deck.h cribbage.h
io.o: io.c /usr/include/curses.h /usr/include/stdio.h /usr/include/sgtty.h
io.o: /usr/include/sys/ioctl.h /usr/include/sys/ttychars.h
io.o: /usr/include/sys/ttydev.h /usr/include/ctype.h /usr/include/signal.h
io.o: /usr/include/machine/trap.h deck.h cribbage.h cribcur.h

# IF YOU PUT ANYTHING HERE IT WILL GO AWAY
