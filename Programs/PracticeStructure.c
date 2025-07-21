#include<stdio.h>
struct student
{
	char name[50];
	int roll;
	float marks;
} s[5];
int main()
{
	int i;;
	printf("Enter the students' information\n\n");
	for(i=0;i<5;i++)
	{
		printf("Enter the roll no.: ");
		scanf("%d",&s[i].roll);
		s[i].roll=i+1;
		fflush(stdin);
		printf("Enter the name: ");
		gets(s[i].name);
		fflush(stdin);
		printf("Enter the marks: ");
		scanf("%f",&s[i].marks);
		fflush(stdin);
	}
	printf("\nDisplay the details\n\n");
	for(i=0;i<5;i++)
	{
		printf("Roll no.: %d\n",i+1);
		printf("Name: ");
		puts(s[i].name);
		printf("Marks: %.2f\n",s[i].marks);
		printf("\n");
	}
	return 0;
}