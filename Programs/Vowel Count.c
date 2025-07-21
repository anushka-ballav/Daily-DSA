#include<stdio.h>
int main()
{
	char a[100],i,l,count=0;
	printf("\nEnter your name in small letter=");
	gets(a);
	printf("The name is=");
	puts(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		{
			i++;
			count++;
		}	
	}
	printf("The no. of vowels=%d",count);
	return 0;
}