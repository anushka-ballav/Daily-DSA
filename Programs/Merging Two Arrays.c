#include <stdio.h>
int main()
{
	int a[4],b[3],i,j,c[7],k=0;
	printf("\nEnter the values into the 1st array=");
	for(i=0;i<4;i++)
	{
		scanf("%d ",&a[i]);
		c[k]=a[i];
		k++;
	}
	printf("\nEnter the values into the 2nd array=");
	for(j=0;j<3;j++)
	{
		scanf("%d ",&b[j]);
		c[k]=b[j];
		k++;
	}
	printf("\nAfter merging two array=");
	for(i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}