#include<stdio.h>
int main()
{
	int fact(int);
	int n,z;
	printf("Enter the number=");
	scanf("%d",&n);
	z=fact(n);
	printf("The factorial is=%d",z);
	return 0;
}
int fact(int m)
{
	if(m==0)
	{
		return 1;
	}
	else
	{
		return m*fact(m-1);
	}
}