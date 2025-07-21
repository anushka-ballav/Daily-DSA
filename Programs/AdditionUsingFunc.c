#include<stdio.h>
int main()
{
	int a,b,p;
	int addition(int,int);
	printf("\nEnter two integers=");
	scanf("%d%d",&a,&b);
	p=addition(a,b);
	printf("\nThe sum  of two integers=%d",p);
	return 0;
}
int addition(int x,int y)
{
	int z;
	z=x+y;
	//printf("\nThe sum of two integers=%d",z);
	return z;
}