#ifdef LIBC_SCCS
	.asciz	"@(#)divf.s	1.1 (Berkeley/CCI) 7/2/86"
#endif LIBC_SCCS

#include <tahoemath/fp.h>
#include "DEFS.h"

#define	HIDDEN	23	/* here we count from 0 not from 1 as in fp.h */

XENTRY(divf, R2|R3|R4|R5|R6|R7|R8|R9)
	clrl	r1
	clrl	r3		# r3 - sign: 0 for positive,1 for negative.
	movl	4(fp),r0
	jgeq	1f
	movl	$1,r3
1:	movl	12(fp),r2
	jgeq	2f
	bbc	$0,r3,1f	# seconed operand is negative.
	clrl	r3		# if first was negative, make result positive.
	jmp	2f
1:	movl	$1,r3		# if first was positive, make result negative.
2:	andl2	$EXPMASK,r0	# compute first 'pure'exponent.
	jeql	is_res1
	shrl	$EXPSHIFT,r0,r0
	subl2	$BIAS,r0	
	andl2	$EXPMASK,r2	# compute seconed 'pure'exponent.
	jeql	is_res2
	shrl	$EXPSHIFT,r2,r2
	subl2	$BIAS,r2
	subl3	r2,r0,r2	# subtruct the exponents.
	addl2	$BIAS,r2
	jleq	underf
				# normalization can make the exp. smaller.
 #
 #	We have the sign in r3,the exponent in r2,now is the time to
 # 	perform the division...
 #
	# fetch dividend. (r0)
	andl3	$(0!(EXPMASK | SIGNBIT)),4(fp),r0
	orl2	$(0!CLEARHID),r0
	clrl	r1
 
	# fetch divisor : (r6)
	andl3	$(0!(EXPMASK | SIGNBIT)),12(fp),r6
	orl2	$(0!CLEARHID),r6

	shll	$2,r6,r6	# make the divisor bigger so we will not
				# get overflow at the divission.
	ediv	r6,r0,r0,r7	# quo to r0, rem to r7
	subl2	$6,r2		# to compensate for: normalization (-24),
				# ediv (+32), shifting r6 (-2).
	
over:
	callf	$4,fnorm	# we can use fnorm because we have data
				# at r1 as well.(sfnorm takes care only 
				# of r0).
sign:
1:	bbc	$0,r3,done
	orl2	$SIGNBIT,r0
done:	ret

is_res1:
	bbc 	$31,4(fp),retz
	callf	$4,sfpresop
	ret
is_res2:
	bbc 	$31,12(fp),z_div
	callf	$4,sfpresop
	ret
retz:
	  clrl	r0
	  ret
underf:
	callf	$4,sfpunder
	ret
z_div:
	callf	$4,sfpzdiv
	ret
