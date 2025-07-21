//Linear Queue.
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void insert(int Q[], int *f, int *r)
{
	int num;
	if(*r==MAX-1)
	 printf("\n O V E R F L O W");
	else
	{
		printf("\n Enter the number ");
		scanf("%d",&num);
		if(*r==-1)
		{
			*f=0;
			*r=0;
			Q[*r]=num;
		}
		else
		{
			*r=*r+1;
			Q[*r]=num;
		}
	}
}
void Delete(int Q[], int *f, int *r)
{
	if(*f==-1)
	 printf("\n U N D E R F L O W");
	else
	{
		printf("\n Delete %d",Q[*f]);
		
		if(*f==*r)//single element
		{
			*f=-1;
			*r=-1;
		}
		else
		{
			*f=*f+1;
		}
	}
}
void display(int Q[], int f, int r)
{
	int i;
	if(f==-1)
	 printf("\n List is Empty ");
	else
	{
		for(i=f;i<=r;i++)
		{
			printf("\n %d",Q[i]);
		}
	}
}
int main()
{
	int Q[MAX];
	int f=-1,r=-1,ch;
	while(1)
	{
		printf("\n 1 for Insert ");
		printf("\n 2 for Delete ");
		printf("\n 3 for Display ");
		printf("\n 4 for Exit ");
		printf("\n Enter the choice ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			insert(Q,&f,&r);
			break;
			
			case 2:
			Delete(Q,&f,&r);
			break;
			
			case 3:
			display(Q,f,r);
			break;
			
			case 4:
			exit(1);
			
			default:
			printf("\n Oops! Wrong choice ");
		}
		
	}
}