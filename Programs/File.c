#include<stdio.h>
void main()
{
	FILE *fptr;
	char c;
	fptr = fopen("Anushka.txt", "w");
	while((c=getchar())!=EOF)
	{
		putc(c,fptr);
	}
	fclose(fptr);
	printf("The containt of the file------\n");
	fptr = fopen("Anushka.txt", "r");
	while((c=getc(fptr))!=EOF)
	{
		printf("%c",c);
	}
}