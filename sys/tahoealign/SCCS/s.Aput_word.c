h51530
s 00025/00000/00000
d D 1.1 86/07/20 11:14:37 sam 1 0
c date and time created 86/07/20 11:14:37 by sam
e
u
U
t
T
I 1
/*	%M%	%I%	%E%	*/


#include	"../tahoealign/align.h"

put_word (infop, word, where)
register	process_info	*infop;
register	char		*where;
register	long		word;
/*
/*	Put the word at the given address in memory.
/*	Caveat: It's quite difficult to find a pte reference
/*		fault.  So I took the easy way out and just signal
/*		an illegal access.
/*	
/**************************************************/
{
	register long code;

	code = writeable(infop, where, 2);
	if ( code == TRUE ) {
		*where = word>>8;
		*(where+1) = word;
	} else exception (infop, ILL_ACCESS, where, code);
}
E 1
