#include<stdio.h>
int main()
{
	int gcd(int,int);
	int a,b,z;
	printf("Enter the value of a,b=");
	scanf("%d%d",&a,&b);
	z=gcd(a,b);
	printf("The gcd is=%d",z);
	return 0;
}
int gcd(int m,int n)
{
	if((m%n)!=0)
	{
		return gcd(n,m%n);
	}
	else
	{
		return n;
	}
}