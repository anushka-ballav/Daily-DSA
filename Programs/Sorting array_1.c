#include <stdio.h>
int main ()
{
	int a[100],n,i,j,temp;
	printf("\nEnter the size of the array=");
	scanf("%d",&n);
	printf("\nEnter the values into the array=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("The sorted array is ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}