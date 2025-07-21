#include<stdio.h>
int main()
{
	int fibonacci(int);
	int n,z;
	printf("Enter the number of elements to be in the series=");
	scanf("%d",&n);
	z=fibonacci(n);
	for(int i=0;i<n;i++)
		printf("%d ",fibonacci(i));
	return 0;
}
int fibonacci(int m)
{
	if(m==0)
		return 0;
	else if(m==1)
		return 1;
	else
		return fibonacci(m-1)+fibonacci(m-2);
}