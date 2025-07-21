#include <stdio.h>
int main()
{
	int a[4][4],i,j;
	printf("\nEnter the values of the matrix=");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==0 || i==3 || j==0 || j==3)
			{
			
			printf("%d",a[i][j]);
	     	}
	     	else
	     	{
	     		printf(" ");
			 }
		}
		printf("\n");
	}
	
}