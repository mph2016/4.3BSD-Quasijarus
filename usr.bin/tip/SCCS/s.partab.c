h41068
s 00007/00001/00024
d D 5.1 85/04/30 12:35:40 dist 3 2
c Add copyright
e
s 00006/00005/00019
d D 4.2 83/06/25 01:14:00 sam 2 1
c so much...clean up after ralph's merge of wendel and mo code;
c purge VMUNIX include since changes for signals make it no longer portable 
c to systems other than 4.2; fix ventel for no echo strapping; do setjmps 
c instead of assuming interrupted system calls; purge lcmd, if people use 
e
s 00024/00000/00000
d D 4.1 83/06/15 12:01:30 ralph 1 0
c date and time created 83/06/15 12:01:30 by ralph
e
u
U
t
T
I 3
/*
 * Copyright (c) 1983 Regents of the University of California.
 * All rights reserved.  The Berkeley software License Agreement
 * specifies the terms and conditions for redistribution.
 */

E 3
I 1
D 2
/*	%M%	%I%	%E%	*/
E 2
I 2
#ifndef lint
static char sccsid[] = "%W% (Berkeley) %G%";
D 3
#endif
E 3
I 3
#endif not lint
E 3

E 2
/*
 * Even parity table for 0-0177
 */
D 2


char chartab[] = {
E 2
I 2
char evenpartab[] = {
E 2
	0000,0201,0202,0003,0204,0005,0006,0207,
	0210,0011,0012,0213,0014,0215,0216,0017,
	0220,0021,0022,0223,0024,0225,0226,0027,
	0030,0231,0232,0033,0234,0035,0036,0237,
	0240,0041,0042,0243,0044,0245,0246,0047,
	0050,0251,0252,0053,0254,0055,0056,0257,
	0060,0261,0262,0063,0264,0065,0066,0267,
	0270,0071,0072,0273,0074,0275,0276,0077,
	0300,0101,0102,0303,0104,0305,0306,0107,
	0110,0311,0312,0113,0314,0115,0116,0317,
	0120,0321,0322,0123,0324,0125,0126,0327,
	0330,0131,0132,0333,0134,0335,0336,0137,
	0140,0341,0342,0143,0344,0145,0146,0347,
	0350,0151,0152,0353,0154,0355,0356,0157,
	0360,0161,0162,0363,0164,0365,0366,0167,
	0170,0371,0372,0173,0374,0175,0176,0377,
D 2
	};
E 2
I 2
};
E 2
E 1
