#ifndef lint
static char sccsid[] = "@(#)koi8e2iso.c	5.1 (Berkeley) 10/5/04";
#endif

#include <sys/param.h>
#include <stdio.h>

u_char xlatbl[96] = {
	0xA0, 0xF2, 0xF3, 0xF1, 0xF4, 0xF5, 0xF6, 0xF7,
	0xF8, 0xF9, 0xFA, 0xFB, 0xFC, 0xAD, 0xFE, 0xFF,
	0xF0, 0xA2, 0xA3, 0xA1, 0xA4, 0xA5, 0xA6, 0xA7,
	0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0x24, 0xAE, 0xAF,
	0xEE, 0xD0, 0xD1, 0xE6, 0xD4, 0xD5, 0xE4, 0xD3,
	0xE5, 0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0xDD, 0xDE,
	0xDF, 0xEF, 0xE0, 0xE1, 0xE2, 0xE3, 0xD6, 0xD2,
	0xEC, 0xEB, 0xD7, 0xE8, 0xED, 0xE9, 0xE7, 0xEA,
	0xCE, 0xB0, 0xB1, 0xC6, 0xB4, 0xB5, 0xC4, 0xB3,
	0xC5, 0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE,
	0xBF, 0xCF, 0xC0, 0xC1, 0xC2, 0xC3, 0xB6, 0xB2,
	0xCC, 0xCB, 0xB7, 0xC8, 0xCD, 0xC9, 0xC7, 0xCA};

main(argc, argv)
	char **argv;
{
	register int ch;

	if (argc > 3) {
		fprintf(stderr, "usage: %s [infile [outfile]]\n", argv[0]);
		exit(1);
	}
	if (argc > 1) {
		if (freopen(argv[1], "r", stdin) == NULL) {
			perror(argv[1]);
			exit(1);
		}
	}
	if (argc > 2) {
		if (freopen(argv[2], "w", stdout) == NULL) {
			perror(argv[2]);
			exit(1);
		}
	}
	while ((ch = getchar()) != EOF) {
		if (ch >= 0xA0)
			ch = xlatbl[ch-0xA0];
		putchar(ch);
	}
	return(0);
}