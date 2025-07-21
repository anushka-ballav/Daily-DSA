#include<stdio.h>
int main()
{
	int pow(int,int);
	int n,m,z;
	printf("Enter the base number=");
	scanf("%d",&n);
	printf("Enter the power number=");
	scanf("%d",&m);
	z=pow(n,m);
	printf("The power of %d is=%d",n,z);
	return 0;
}
int pow(int p,int q)
{
	if(q!=0)
		return (p*pow(p,q-1));
	else
		return 1;	
}