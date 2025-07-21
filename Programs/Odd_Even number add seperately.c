#include<stdio.h>
int main()
{
	int n,i,s1=0,s2=0;
	printf("\nEnter the limit=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			s1=s1+i;
		}
		else
		{
			s2=s2+i;
		}
	}
    printf("The sum of even number=%d",s1);
	printf("\nThe sum of odd number=%d",s2);
	return 0;
}