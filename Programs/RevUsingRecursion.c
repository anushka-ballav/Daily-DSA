#include<stdio.h>
int s=0;
int main()
{
	int rev(int);
	int n,z;
	printf("Enter the number=");
	scanf("%d",&n);
	z=rev(n);
	printf("The reverse of %d is = %d",n,z);
	return 0;
}
int rev(int m)
{
	int r;
	if(m!=0)
	{
		r=m%10;
		s=s*10+r;
		rev(m/10);
	}
	else
	{
		return s;
	}
}