#include<stdio.h>
// Check whether "HelloWorld" gets stored in local stack or read-only memory
// Output: garbage values
char *func()
{
	char tmp[]={'H','e','l','l','o',' ','W','o','r','l','d','\0'};	
	char *ptr=tmp;
	return ptr;
}
main()
{	
	printf("%s \n",func());
	return 0;
}
