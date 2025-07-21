#include<stdio.h>
int main()
{
	int n,s=0;
	int prime(int);
	printf("\nEnter the number=");
	scanf("%d",&n);
	s=prime(n);
	if(s==2)
		printf("The number is prime");
	else
		printf("The number is not prime");
	return 0;
}
int prime(int x)
{
	int j,c=0;
	for(j=1;j<=x;j++)
	{
		if(x%j==0)
		{
			c++;
		}
	}
	return c;
}

