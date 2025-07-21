#include <stdio.h>
int main()
{
	int a,b,c,s,A;
	printf("\n Enter the three sides of a triangle=");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area of the triangle=%d",A);
	return 0;
}