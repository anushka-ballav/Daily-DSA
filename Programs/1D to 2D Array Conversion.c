#include<stdio.h>
int main()
{
	int a[9],b[3][3],i,j,k=0;
	printf("\nEnter the values into the array=");
	for(i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe original array is=");
	for(i=0;i<9;i++)
	{
		printf("%d ",a[i]);
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[i][j]=a[k];
			k++;
		}			
	}
	printf("\nAfter conversion the array is=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
	   printf("\n");
	}
	return 0;
}