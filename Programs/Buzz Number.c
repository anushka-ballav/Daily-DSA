#include<stdio.h>
int main()
{
	int a,b,m;
	printf("\n Enter the number=");
	scanf("%d",&a);
	b=a%7;
	m=a%10;
	if(b==0||m==7)
	{
		printf("%d is buzz number",a);
	}
	else
	{
		printf("%d is not buzz number",a);
	}
	return 0;
}