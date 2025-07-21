#include <stdio.h>
int main ()
{
	int a[10],i,s1=0,s2=0;
	printf("\nEnter the values into the array=");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
		//	printf("\nEven");
			s1=s1+a[i];
		}
		else
		{
	//		printf("\nOdd");
			s2=s2+a[i];
		}
	}
		printf("\nThe sum of even numbers=%d",s1);
		printf("\nThe sum of odd numbers=%d",s2);
	return 0;	
}
