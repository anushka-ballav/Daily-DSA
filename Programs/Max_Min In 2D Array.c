#include <stdio.h>
int main()
{
	int a[10],i,max,min;
	printf("\nEnter the values into the array=");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\nThe maximum number=%d",max);
	printf("\nThe minimum number=%d",min);
	return 0;
}