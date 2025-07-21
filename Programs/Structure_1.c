//To create a structure and calculate total numbers & average of 10 students.
struct marks
{
	int m;
};
#include<stdio.h>
int main()
{
	int i,s=0,avg;
	struct marks x[10];
	printf("Enter the marks of 10 students=");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i].m);
		s=s+x[i].m;
	}
	avg=s/10;
	printf("The marks of 10 students=%d",s);
	printf("\nThe average is=%d",avg);
}