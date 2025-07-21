#include<stdio.h>
int main()
{
	int n,i,r,s;
	printf("Enter the number=");
	scanf("%d",&n);
	do
	{
		s=0;
		for(i=n;i>0;i=i/10)
		{
			r=i%10;
			s=s+r;
		}
		if(s>9)
		{
			n=s;
		}
		else
			break;	
	}
	while(s>9);
	if(s==1)
		printf("The number is magic");
	else
		printf("The number is not magic");
	return 0;
}