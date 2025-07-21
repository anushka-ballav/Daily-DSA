#include<stdio.h>
int main()
{
	char a[100],b[20],i,k,l;
	printf("Enter your name in small letter=");
	gets(a);
	printf("\nThe name is=");
	puts(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		{
			b[k]='*';
			k++;
		}
		else
		{
			b[k]=a[i];
			k++;
		}
		b[k]='\0';
	}
	puts(b);
	return 0;
}