#include<stdio.h>
void main()
{
	FILE *fptr;
	char c;
	fptr = fopen("Anushka.bin", "wb");
	while((c=getchar())!=EOF)
	{
		putc(c,fptr);
	}
	fclose(fptr);
	printf("The containt of the file------\n");
	fptr = fopen("Anushka.bin", "rb");
	while((c=getc(fptr))!=EOF)
	{
		printf("%c",c);
	}
}