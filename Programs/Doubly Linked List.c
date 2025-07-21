#include<stdio.h>
#include<malloc.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
int main()
{
	int n;
	struct node *head;
	head=(struct node*)malloc(sizeof(struct node));
	head->next=NULL;
	head->prev=NULL;
	struct node* createdouble(struct node*);
	void display(struct node*);
	do
	{
		printf("\nPress 1 for createdouble");
		printf("\nPress 2 for display");
		printf("\nEnter your choice: ");
		scanf("%d",&n);
		switch(n)
		{
			case 1: head=createdouble(head);
				    break;
			case 2: display(head);
				    break;		
			case 3: return 0;
		}
	}
	while(1);
}
struct node *createdouble(struct node *head)
{
	int n,i;
	printf("Enter the no. of nodes: ");
	scanf("%d",&n);
	struct node *p,*q;
	for(i=1;i<=n;i++)
	{
		if(head->next==NULL)
		{
			p=(struct node*)malloc(sizeof(struct node));
			printf("Enter value into node: ");
			scanf("%d",&p->data);
			head->next=p;
			p->prev=head;
			p->next=NULL;
		}
		else
		{
			q=(struct node*)malloc(sizeof(struct node));
			printf("Enter value into node: ");
			scanf("%d",&q->data);
			p->next=q;
			q->prev=p;
			q->next=NULL;
			p=q;
		}
    }
    return head;
}
void display(struct node *head)
{
	if(head->next==NULL)
		printf("No linked list available");
	else
	{
		printf("The linked list from left to right is: ");
		while(head->next!=NULL)
		{
			printf("%d->",head->next->data);
			head=head->next;
		}
		printf("NULL");
		printf("\nThe linked list from right to left is: ");
		while(head->prev!=NULL)
		{
			printf("%d->",head->prev->data);
			head=head->prev;
		}
		printf("NULL");
	}
}