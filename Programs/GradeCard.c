#include<stdio.h>
int main()
{
	int P,C,B,T,A;
	printf("Enter the marks:");
	scanf("%d%d%d",&P,&C,&B);
	T=(P+C+B);
	A=((P+C+B)/3);
	printf("The total number of three subjects:%d",T);
	printf("\nThe average marks of three subjects:%d",A);
	if(A>=80)
	{
	 	printf("\nYour grade is A+");
	}
	else if(A>=60 && A<80)
	{
	 	printf("\nYour grade is B+");
	}
	else if(A>=40 && A<60)
	{
		printf("\nYour grade is C+");
	}
	else
	{
	 	printf("\nYour grade is fail");
	}
	return 0;
}