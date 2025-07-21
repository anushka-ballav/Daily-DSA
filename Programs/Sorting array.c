#include <stdio.h>
int main()
{
	int a[10],i,j,temp;
	printf("\nEnter the values into the array=");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i;j++)
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
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}