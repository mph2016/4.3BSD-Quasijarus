h50502
s 00007/00001/00017
d D 5.1 85/05/07 11:50:33 dist 2 1
c Add copyright notice
e
s 00018/00000/00000
d D 4.1 83/11/10 16:04:16 ralph 1 0
c date and time created 83/11/10 16:04:16 by ralph
e
u
U
t
T
I 2
/*
 * Copyright (c) 1980 Regents of the University of California.
 * All rights reserved.  The Berkeley software License Agreement
 * specifies the terms and conditions for redistribution.
 */

E 2
I 1
#ifndef lint
static char sccsid[] = "%W% (Berkeley) %G%";
D 2
#endif
E 2
I 2
#endif not lint
E 2

#include <signal.h>
#include "gigi.h"

closepl()
{
	/* recieve interupts */
	signal(SIGINT, SIG_IGN);

	/* exit graphics mode */
	putchar( ESC );
	putchar('\\');

	exit(0);
}
E 1
