#include<stdio.h>
int main()
{
	int palin(int)
	int n,z;
	printf("Enter the number=");
	scanf("%d",&n);
	z=palin(n);
	printf("The palindrome is=%d",z);
	return 0;
}
int palin(int m)
{
	if(n==m)
	{
		return m+(n%10 || n/10);
	}
	else
	{
		return 0;
	}
}