#include<stdio.h>
int main() 
{
	int n,i,s=0;
	printf("\nEnter the number=");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
	    }
	}
	if(s==n)
	{
		printf("%d is the perfect number",s);
	}
	else
	{
		printf("%d is not the perfect number",s);
	}
	return 0; 
}