#include<stdio.h>
int main()
{
	int reversenum(int);
	int m,n,i,t,z;
	printf("Enter starting and ending point=");
	scanf("%d%d",&m,&n);
	if(m>n)
	{
		t=m;
		m=n;
		n=t;
	}
	printf("\nThe palindrome numbers are=");
	for(i=m;i<=n;i++)
	{
		z=reversenum(i);
		if(z==i)
		{
			printf("%d ",z);
		}
	}
	return 0;
}
int reversenum(int x)
{
	int i,r=0;
	for(i=x;i>0;i=i/10)
	{
		r=r*10+i%10;
	}
	return r;
}