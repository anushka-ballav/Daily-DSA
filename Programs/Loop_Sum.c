#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("\nEnter the limit=");
	scanf("%d",&n);
	for(i=1;i<=100;i++)
	{
		s=s+i;
	}
	printf("The sum of the series=%d",s);
	return 0;
}