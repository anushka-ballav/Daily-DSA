struct abc
{
	char name[10];
	float price;
	int page;
};
#include<stdio.h>
void main()
{
	struct abc x1,x2;
	printf("Enter the name of 1st book=");
	gets(x1.name);
	fflush(stdin);
	printf("Enter the price & page no. of 1st book=");
	scanf("%f%d",&x1.price,&x1.page);
	fflush(stdin);
	printf("Enter the name of 2nd book=");
	gets(x2.name);
	fflush(stdin);
	printf("Enter the price & page no. of 2nd book=");
	scanf("%f%d",&x2.price,&x2.page);
	fflush(stdin);
	printf("The details of 1st book=");
	puts(x1.name);
	printf("%.2f %d",x1.price,x1.page);
	printf("The details of 2nd book=");
	puts(x2.name);
	printf("%.2f %d",x2.price,x2.page);
}