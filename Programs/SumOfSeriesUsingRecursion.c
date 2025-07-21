#include<stdio.h>
int main()
{
	int add(int);
	int n,g;
	printf("Enter the number=");
	scanf("%d",&n);
	g=add(n);
	printf("The sum of the series is=%d",g);
	return 0;
}
int add(int m)
{
	if(m!=0)
	{
		return m+add(m-1);
	}
	else
	{
		return 0;
	}
}