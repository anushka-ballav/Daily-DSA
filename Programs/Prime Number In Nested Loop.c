#include<stdio.h>
int main()
{
	int i,j,m,n,s;
	printf("\nEnter the range=");
	scanf("%d%d",&m,&n);
	printf("\nThe prime numbers are=");
	for(i=m;i<=n;i++)
	{
		s=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				s++;
			}
		}
		if(s==2)
		{
			printf("%d, ",i);
		}
	}
	return 0;
}