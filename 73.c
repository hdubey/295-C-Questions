#include<stdio.h>
// Based on POINTER ARITHMETIC
// Remember that the binary operator '-' does not accept operands in case both are different pointer types
// + binary operator does not accept addresses as both operands

main()
{
	long *p1,*p2; // sizeof (p1)=8
	int j;
	char *p3;
    p1=&j; 	// warning
	p2=p1+4;
	j=p2-p1;// p2-p1 is allowed. But p2+p1 is not allowed and gives error
	printf("%u %u %d\n",p1,p2,j);
	p3=p1-1;
	j=p1-p3;
	printf("%u %d\n",p3,j);
	j=p3-p1;
	printf("%d \n",j);
}

