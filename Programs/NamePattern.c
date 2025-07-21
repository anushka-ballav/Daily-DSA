#include<stdio.h>
int main()
{
	char a[30];
	int i,j,l;
	printf("Enter the name: ");
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",a[j]);
		}
	printf("\n");
	}
}