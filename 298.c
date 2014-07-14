#include<stdio.h>
// Based on how printf works: the argument it expects and how they are printed
main ()
{
	char *s="%d %d\n";
	int x=3;
	int y=9;
	printf(s,x,y);
}
