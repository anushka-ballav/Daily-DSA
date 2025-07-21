#include <stdio.h>
int main ()
{
	int a[3][3],i,j,b[9],k=0;
	printf("\nEnter the values into the matrix=");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the original matrix is=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[k]=a[i][j];
			k++;
		}		
	}
	for(i=0;i<k;i++)
	{
		printf("The linear array is=%d ",b[i]);
	}
	return 0;
}