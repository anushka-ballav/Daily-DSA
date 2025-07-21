#include<stdio.h>
int main()
{
	int n,i,s=0;
    printf("\nEnter a positive inetger=");
    scanf("%d & n");
    for(i=1; i<=n; i++)
    {
		if(n%i==0)
		{
    		s=s+1;
		}
    }
	if(s==2)
	{
	    printf("The number is prime");
	}
	else
	{
		printf("The number is not prime");
	}
    return 0;
}	