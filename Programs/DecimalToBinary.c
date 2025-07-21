#include<stdio.h>
int main()
{
	int n,i,b=0,r=0,p=1;
	printf("Enter the decimal number=");
	scanf("%d",&n);
	while(n)
	{
		r=n%2;
		n=n/2;
		b=b+(r*p);
		p=p*10;	
	}
	printf("The binary number is=%d",b);
	return 0;
}