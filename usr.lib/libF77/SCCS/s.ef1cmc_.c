h43681
s 00005/00001/00011
d D 5.1 85/06/07 21:54:13 kre 2 1
c Add copyright
e
s 00012/00000/00000
d D 1.1 83/01/21 11:12:12 dlw 1 0
c date and time created 83/01/21 11:12:12 by dlw
e
u
U
t
T
I 1
/*
D 2
 *	"%W%"
E 2
I 2
 * Copyright (c) 1980 Regents of the University of California.
 * All rights reserved.  The Berkeley software License Agreement
 * specifies the terms and conditions for redistribution.
 *
 *	%W%	%G%
E 2
 */

/* EFL support routine to compare two character strings */

long int ef1cmc_(a, la, b, lb)
int *a, *b;
long int *la, *lb;
{
return( s_cmp( (char *)a, (char *)b, *la, *lb) );
}
E 1
