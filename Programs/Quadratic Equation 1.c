#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,z;
	float y1,y2;
	printf("\n Enter the values of a,b,c=");
	scanf("%d%d%d",&a,&b,&c);
	z=b*b-4*a*c;
	if(z>=0)
	{
		y1=(-b+(b*b-4*a*c))/2*a;
		y2=(-b-(b*b-4*a*c))/2*a;
		printf("The first root is=%f",y1);
		printf("The second root is=%f",y2);
    }
	else
	{
    	printf("\n The roots are imaginary");
    }
	return 0;
}