#include <stdio.h>
int main ()
{
	int a[3][3],i,j,k,max;
	printf("\nEnter the values into the array=");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);	
		}
	}
		max=a[0][0];
		for(i=0;i<3;i++)
		{
			for(k=0;k<3;k++)
			{
				if(a[i][j]>max)
				{
					max=a[i][j];
				}
			}
		}
	printf("The matrix is=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nThe maximum number is=%d",max);
	return 0;
}