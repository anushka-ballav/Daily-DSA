#include <stdio.h>
int main ()
{
	int a[5][5],i,j;
	printf("The pattern is=\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==j || i+j==4)
			{
				a[i][j]=1;
			}
			else
			{
				a[i][j]=0;
			}
		}	
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");	
	}
	return 0;
}