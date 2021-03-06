#
# Copyright (c) 1983 Regents of the University of California.
# All rights reserved.  The Berkeley software License Agreement
# specifies the terms and conditions for redistribution.
#
#	@(#)Makefile	5.11 (Berkeley) 1/11/88
#
# make file for debugger "dbx"
#
# The file "defs.h" is included by all.
#

.SUFFIXES:
.SUFFIXES: .h .c .s .o

AOUT	= tdbx
DESTDIR	=
DEST	= /usr/ucb/dbx

CC	= cc
AS	= as
#
# if you want gripes
# CFLAGS = -g '-DMAINTAINER="linton@shasta.stanford.edu"'
#
CFLAGS	= -O # -g

LD = cc
LDFLAGS	= # -g
LIBRARIES = # -lPW for IRIS (System V)

OBJ = \
    y.tab.o \
    asm.o \
    events.o \
    c.o \
    cerror.o \
    check.o \
    coredump.o \
    debug.o \
    eval.o \
    fortran.o \
    keywords.o \
    languages.o \
    library.o \
    lists.o \
    machine.o \
    main.o \
    mappings.o \
    modula-2.o \
    names.o \
    object.o \
    operators.o \
    pascal.o \
    printsym.o \
    process.o \
    runtime.o \
    scanner.o \
    source.o \
    stabstring.o \
    symbols.o \
    tree.o \
    ops.o

HDR = \
    asm.h \
    events.h \
    c.h \
    check.h \
    coredump.h \
    debug.h \
    eval.h \
    fortran.h \
    keywords.h \
    languages.h \
    lists.h \
    machine.h \
    main.h \
    mappings.h \
    modula-2.h \
    names.h \
    object.h \
    operators.h \
    pascal.h \
    printsym.h \
    process.h \
    runtime.h \
    scanner.h \
    source.h \
    stabstring.h \
    symbols.h \
    tree.h \
    ops.h

SRC = \
    defs.h \
    commands.y \
    asm.c \
    events.c \
    c.c \
    cerror.${MACHINE}.s \
    check.c \
    coredump.c \
    debug.c \
    eval.c \
    fortran.c \
    keywords.c \
    languages.c \
    library.c \
    lists.c \
    main.c \
    mappings.c \
    modula-2.c \
    names.c \
    object.c \
    operators.c \
    pascal.c \
    printsym.c \
    process.c \
    scanner.c \
    source.c \
    stabstring.c \
    symbols.c \
    tree.c \
    ${MACHINE}.c \
    runtime.${MACHINE}.c \
    ops.${MACHINE}.c

.c.o:
	@echo "compiling $*.c"
	@${CC} ${CFLAGS} -c $*.c

.s.o:
	@echo "assembling $*.s"
	@rm -f tmp
	@/lib/cpp $*.s | grep -v "^#" > tmp
	@${AS} -o $*.o tmp
	@rm -f tmp

.c.h:
	./makedefs -f $*.c $*.h

${AOUT}: makedefs mkdate ${HDR} ${OBJ}
	@rm -f date.c
	@./mkdate > date.c
	@echo "linking"
	@${CC} ${CFLAGS} -c date.c
	@${LD} ${LDFLAGS} date.o ${OBJ} ${LIBRARIES} -o ${AOUT}

profile: ${HDR} ${OBJ}
	@rm -f date.c
	@./mkdate > date.c
	@echo "linking with -p"
	@${CC} ${LDFLAGS} -p date.c ${OBJ} ${LIBRARIES} -o ${AOUT}

y.tab.c: commands.y
	@echo "expect 2 shift/reduce conflicts"
	yacc -d commands.y

cerror.s: cerror.${MACHINE}.s
	@rm -f cerror.s
	@ln -s cerror.${MACHINE}.s cerror.s

machine.c: ${MACHINE}.c
	@rm -f machine.c
	@ln -s ${MACHINE}.c machine.c

ops.c:	ops.${MACHINE}.c
	@rm -f ops.c
	@ln -s ops.${MACHINE}.c ops.c

runtime.c: runtime.${MACHINE}.c
	@rm -f runtime.c
	@ln -s runtime.${MACHINE}.c runtime.c

makedefs: makedefs.c library.o cerror.o
	${CC} -g makedefs.c library.o cerror.o -o makedefs

mkdate: mkdate.c
	${CC} -g ${CFLAGS} mkdate.c -o mkdate

print:
	@echo "don't print it, it's too long"

depend:

#
# Don't worry about the removal of header files, they're created from
# the source files.
#

clean:
	rm -f ${HDR} ${OBJ} y.tab.c y.tab.h ${AOUT} mkdate mkdate.o \
	    makedefs makedefs.o date.c core mon.out prof.out make.out \
	    cerror.s ops.c machine.c runtime.c date.o
	@chdir tests; make clean

cleandefs:
	rm -f ${HDR} y.tab.h

testinstall: ${AOUT} test install

test:
	@cd tests; make

install: ${AOUT}
	install -s ${AOUT} ${DESTDIR}${DEST}

#
# Create a tar file called "tape" containing relevant files.
#

TAPE = f tape

tape:
	@tar c${TAPE} Makefile History READ_ME ${SRC} \
	    makedefs.c mkdate.c tests pc0mods dbx.1 newdbx.1 dbxstab.5

#
# without tests subdirectory
#
srconlytape:
	@tar c${TAPE} Makefile History READ_ME ${SRC} \
	    makedefs.c mkdate.c dbx.1 newdbx.1 dbxstab.5

#
# Header dependencies are purposely incomplete since header files
# are "written" every time the accompanying source file changes even if
# the resulting contents of the header don't change.  The alternative is
# to force a "makedefs" to be invoked for every header file each time dbx
# is made.
#
# Also, there should be a dependency of scanner.o and keywords.o on y.tab.h
# but misfortunately silly make does a "makedefs y.tab.c y.tab.h" which
# destroys y.tab.h.
#

symbols.o tree.o check.o eval.o events.o: operators.h
