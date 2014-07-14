#include<stdio.h>
// What does puts return? remember that it has a \n character appended in the end
// What does putchar return? Putchar returns the ASCII VALUE of the corresponding character
// Significance of comma in while condition? Difference b/w a comma and && to separate conditions?
// check when loop is infinite and when it doesn't run: while(0,0), while(0,1),while (1,0), while(1,1)
// while is infinite for 0,1 and 1,1. Same result in for(; _ , _ ;) case
// Explanation: the value after the comma is taken. Generalize for more values after commas, but only the last matters
// Similarly, int x=(1,2,3,4); => x contains 4
//     int x=1,2;   will give error
main()
{
	int i=1,x;
	while(i++<3,putchar(puts("paul")-puts("ball")))
		printf("very");
	printf("easy");
}
