#include<stdio.h>
main ()
{
	
	int a[]={1,1,2,2,4};
	int i=0;
	a[i++]=a[++i]+i;
	printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);
}
