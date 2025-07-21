#include<stdio.h>
int main()
{
	int a,b;
	void swap(int*,int*);
	printf("Enter the value of a & b:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("After swaping the value of a & b:%d & %d",a,b);
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}