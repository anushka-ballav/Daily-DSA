//38.Write a program in C to find the pivot element of a sorted and rotated array using binary search.
#include<stdio.h>
void main()
{
	int a[100],n,i,lb,ub,mid,s,flag=0;
	printf("Enter the size of the array=");
	scanf("%d",&n);
	printf("Enter the values into ascending array=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search element=");
	scanf("%d",&s);
	lb=0;
	ub=n-1;
	while(lb<=ub)
	{
		mid=((lb+ub)/2);
		if(a[mid]==s)
		{
			flag=1;
			break;
		}
		else if(s>a[mid])
		{
			lb=mid+1;
		}
		else
		{
			ub=mid-1;
		}
	}
	if(flag==1)
	{
		printf("The search element is=%d",mid+1);
	}
	else
	{
		printf("\nElement is not present.");
	}
}