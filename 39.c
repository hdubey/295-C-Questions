#include<stdio.h>
// Challenging question on FILE Handling
main()
{
	FILE *fp1,*fp2;
	fp1=fopen("one","w");
	fp2=fopen("one","w");
	fputc('A',fp1);
	fputc('X',fp1);
	fputc('Y',fp1);
	fputc('B',fp2);
	fclose(fp1);
	fclose(fp2);
}
