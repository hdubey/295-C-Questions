#include<stdio.H>
// this is a very challenging question on structure and pointers!
main()
{
	struct s
	{
		char *p;
	};
	static struct s a[]={"RAVI"};
	struct s *pp=a;
	printf("\n%s",++(pp->p));
}
