h59927
s 00009/00001/00023
d D 5.1 85/04/26 12:45:00 dist 2 1
c Add copyright
e
s 00024/00000/00000
d D 4.1 83/03/09 16:23:23 ralph 1 0
c date and time created 83/03/09 16:23:23 by ralph
e
u
U
t
T
I 1
D 2
/*	%M%	%I%	%E%	*/
E 2
I 2
/*
 * Copyright (c) 1980 Regents of the University of California.
 * All rights reserved.  The Berkeley software License Agreement
 * specifies the terms and conditions for redistribution.
 */

#ifndef lint
static char sccsid[] = "%W% (Berkeley) %G%";
#endif not lint
E 2

#include "2648.h"

texton()
{
	sync();
	escseq(TEXT);
}

textoff()
{
	sync();

	/*
	 * The following is needed because going into text mode
	 * leaves the pen where the cursor last was.
	 */
	_penx = -40; _peny = 40;
	escseq(ESCP);
	outchar('a');
	motion(_supx, _supy);
	_penx = _supx; _peny = _supy;
}
E 1
