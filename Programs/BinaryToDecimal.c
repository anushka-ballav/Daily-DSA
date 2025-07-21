#include<stdio.h>
#include<math.h>
int main()
{
	int n,i=0,s=0;
	printf("Enter the binary number=");
	scanf("%d",&n);
	while(n>0)
	{
		s=s+(n%10)*(pow(2,i));
		n=n/10;
		i++;	
	}
	printf("The decimal number is=%d",s);
	return 0;
}