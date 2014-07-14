#include<stdio.h>
// automatic type conversions in function calls
main()
{
	extern int i;// What does extern do? Does it have an effect on the output?
	double x=3.00;
	long j=34L;
	f(j,x);
}
f(float f,short p)
{
	printf("%f ",f);
	printf("%d",p);
}

