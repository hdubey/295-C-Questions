#include<stdio.h>
// Based on signed/unsigned and range limits on char/integers
// Because unsigned char has an upper limit of 2^(no of bits)-1, all computations in which value overflows will result in 
// answers with modulo 2^(n) applied (n=no of bits)
// warning: large integer implicitly truncated to unsigned type
// in case of unsigned 256 becomes 0, 257 becomes 1...etc
main ()
{
	unsigned char x;
	signed char y;
	y=5001;
	x=5001;
	printf("%d %d\n",x,y);	
}
