#include <stdio.h>
int main()
{
	int n,i,j,k,m;
	printf("\nEnter the number of rows:");
	scanf("%d",&n);
	m=n/2;
	for(i=1;i<=n;i++)
	{
		if(i<=m+1)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d",j);
			}
		}
		else
		{
			for(k=1;k<=m;k++)
			{
				printf("%d",k);
			}
			m--;
		}
		printf("\n");
	}
	return 0;
}