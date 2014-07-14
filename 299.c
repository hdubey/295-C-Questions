#include<stdio.h>
main()
{
	
	void *x;
	int y=8;
	x=&y;
	int *temp=(int *)x;
	printf("%d \n",*temp);
	return 0;
}

