#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("\nEnter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf(" ");
		}
		for(k=i;k>=1;k--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}