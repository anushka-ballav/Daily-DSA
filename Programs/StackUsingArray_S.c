#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top;
void push(int stk[])
{
	int num;
	if(top==MAX-1)
		printf("\nO V E R F L O W");
	else
	{
		printf("\nEnter the number:");
		scanf("%d",&num);
		stk[++top]=num;
	}
}
void pop(int stk[])
{
	if(top==-1)
		printf("\nU N D E R F L O W");
	else
	{
		printf("\nDeleted Element is: %d",stk[top]);
	}
}
void peep(int stk[])
{
	if(top==-1)
		printf("\nNO ELEMENT");
	else
		printf("\nElement %d",stk[top]);
}
void display(int stk[])
{
	if(top==-1)
		printf("\nNo Element");
	else
	{
		for(int i=top;i>=0;i--)
			printf("\n%d",stk[i]);
	}	
}
void reverse(int stk1[])
{
	stk1[++top]=pop();
	printf("%d",stk1[++top]);
	if(top>=0)
	{
		printf("\nThe element in stack");
		for(int i=top;i>=0;i--)
			printf("\n%d",stk1[i]);
	}
}
int main()
{
	int stack[MAX],stack1[MAX],ch;
	top=-1;
	while(1)
	{
		printf("\n\nEnter 1 for PUSH");
		printf("\nEnter 2 for POP");
		printf("\nEnter 3 for PEEP");
		printf("\nEnter 4 for DISPLAY");
		printf("\nEnter 5 for REVERSE");
		printf("\nEnter 6 for EXIT");
		printf("\nEnter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push(stack);
					break;
			case 2: pop(stack);
					break;
			case 3: peep(stack);
					break;
			case 4: display(stack);
					break;
			case 5: reverse(stack);
					break;
			case 6: exit(1);
			default: printf("Wrong Choice");
		}
	}
}