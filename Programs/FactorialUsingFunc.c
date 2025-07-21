#include<stdio.h>
int main()
{
	int n,i,s=0;
	int factorial(int);
	printf("\nEnter the number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+factorial(i);
	}
	printf("The sum of the factorial series=%d",s);
	return 0;	
}
int factorial(int x)
{
	int f=1,j;
	for(j=1;j<=x;j++)	
	{
	    f=f*j;	
	}
	return f;
}