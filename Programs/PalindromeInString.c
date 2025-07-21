#include<stdio.h>
int main()
{
	char a[100],b[k];
	int i,j,l;
	printf("Enter the sentence=");
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]!=" ")
		{
			b[k]=a[i];
			k++;
		}	
		else
		{
			printf(b[k]="\0");
		}		
	}
	return 0;
}