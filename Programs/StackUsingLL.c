#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int n;
	struct node *head;
	head=(struct node*)malloc(sizeof(struct node));
	head->next=NULL;
	struct node* push(struct node*);
	struct node* pop(struct node*);
	void display(struct node*);
	do
	{
		printf("\nPress 1 for push");
		printf("\nPress 2 for pop");
		printf("\nPress 3 for display");
		printf("\nPress 4 for exit");
		printf("\nEnter the choice: ");
		scanf("%d",&n);
		switch(n)
		{
			case 1: head=push(head);
					break;
			case 2: head=pop(head);
					break;
			case 3: display(head);
					break;
			case 4: return 0;
		}
	}
	while(1);
}
struct node* push(struct node *head)
{
	struct node *p,*q;
	if(head->next==NULL)
	{
		p=(struct node*)malloc(sizeof(struct node));
		printf("Enter the value into the node: ");
		scanf("%d",&p->data);
		head->next=p;
		p->next=NULL;
	}
	else
	{
		q=(struct node*)malloc(sizeof(struct node));
		printf("Enter the value into the node: ");
		scanf("%d",&q->data);
		q->next=head->next;
		head->next=q;
	}
	return head;
}
struct node* pop(struct node *head)
{
	struct node *temp;
	if(head->next==NULL)
		printf("Stack is underflow");
	else
	{
		printf("The popped element is: %d",head->next->data);
		temp=head->next;
		head->next=head->next->next;
		free(temp);
	}
	return head;
}
void display(struct node *head)
{
	struct node *head1;
	head1=head;
	if(head1->next==NULL)
		printf("Stack is empty");
	else
	{
		printf("The linked list is: ");
		while(head1->next!=NULL)
		{
			printf("%d->",head1->next->data);
			head1=head1->next;
		}
		printf("NULL");
    }
}