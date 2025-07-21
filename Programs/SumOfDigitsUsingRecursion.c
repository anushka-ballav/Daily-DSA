#include<stdio.h>
int main()
{
	int sumdigits(int);
	int n,z;
	printf("Enter the number=");
	scanf("%d",&n);
	z=sumdigits(n);
	printf("The sum of digits is=%d",z);
	return 0;
}
int sumdigits(int m)
{
	if(m!=0)
	{
		return (m%10+sumdigits(m/10));
	}
	else
	{
		return 0;
	}
}