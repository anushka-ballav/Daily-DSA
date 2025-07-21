#include <stdio.h>
int main()
{
	int i,n,r,s=0;
	printf("Enter the number=");
	scanf("%d",&n);
	for(i=n;i>0;i=i/10)
	{
		r=i%10;
		s=s+r*r*r;
	}
	if(n==s)
	printf("The given number is armstrong number");
	else
	printf("The given number is not armstrong number");
	return 0;
}