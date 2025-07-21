#include<stdio.h>
int main()
{
	int n,p=1,i;
	printf("Enter the number=");
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		p=p*n;	
	}
	printf("The power of %d is=%d",n,p);
	return 0;
}