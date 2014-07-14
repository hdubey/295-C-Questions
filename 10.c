#include<stdio.h>
// In the case of function calls, the values separated by commas are evaluated right to left
int i=2;
main()
{
	void add();
	add(i++,--i);
    	printf("\ni=%d \n",i);
}
void add(int a ,int b)
{
	printf("\na=%d b=%d",a,b);
}
