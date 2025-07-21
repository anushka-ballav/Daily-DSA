#include<stdio.h>
#define size1 5
int ch,arr[size1],top=-1;
void PUSH();
void POP();
void display();
int main()
{
	do
	{
		printf("\nPress 1 for PUSH");
		printf("\nPress 2 for POP");
		printf("\nPress 3 for display");
		printf("\nPress 4 for exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: PUSH();
				    break;
			case 2: POP();
				    break;
			case 3: display();
				    break;
			case 4: return 0;
			default:printf("Wrong choice");
		}
	}
	while(1);
	return 0;	
}
void PUSH()
{
	int item,i;
	if(top==size1-1)
		printf("The stack is overflow\n");
	else
	{
		printf("Enter push element: ");
		scanf("%d",&item);
		top++;
		arr[top]=item;
	}
}
void POP()
{
	if(top==-1)
		printf("Stack is underflow\n");
	else
	{
		printf("The popped element is: %d",arr[top]);
		top--;
	}
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
		printf("%d\n",arr[i]);
}