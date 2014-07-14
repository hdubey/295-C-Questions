#include<stdio.h>
// Based on the persistence of local variables, scope, returning string via char *
// Successful compilation: Segmentation fault at runtime
main()
{	
	char *s="mankind";
	*(s+1)='p';// Attempt to change value in read-only memory
	printf("%c \n",*(s+1));

	return 0;
}
