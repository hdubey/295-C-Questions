#include<stdio.h>
// Based on the persistence of local variables, scope, returning string via char *
// output:
// HelloWorld
//
char *func()
{
	char tmp[]={'H','e','l','l','o',' ','W','o','r','l','d','\0'};// Stack or read-only memory
	// char tmp[]="HelloWorld"; Output remains same
	char *ptr=tmp;
	return ptr;
}
main()
{	
	printf("%s \n",func());
	return 0;
}
