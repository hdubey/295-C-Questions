#include<stdio.h>
// Based on the persistence of local variables, scope, returning int * via func()
// Output is 
// 10
//
// Why does the program not give error, when x is a local variable, stored in stack, and ptr has address of this local variable?
int *func()
{
	int x=10;
	int *ptr=&x;
	return ptr;
}
main()
{	
	printf("%d \n", *(func()) );
	return 0;
}

