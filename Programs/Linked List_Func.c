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
	struct node* Createlist(struct node*);
	void display(struct node*);
	struct node* insertfirst(struct node*);
	struct node* insertlast(struct node*);
	struct node* insertinter(struct node*);
	struct node* deletefirst(struct node*);
	struct node* deletelast(struct node*);
	struct node* deleteinter(struct node*);
	do
	{
		printf("\nPress 1 for Createlist");
		printf("\nPress 2 for display");
		printf("\nPress 3 for insertfirst");
		printf("\nPress 4 for insertlast");
		printf("\nPress 5 for insertinter");
		printf("\nPress 6 for deletefirst");
		printf("\nPress 7 for deletelast");
		printf("\nPress 8 for deleteinter");
		printf("\nPress 9 for exit");
		printf("\nEnter your choice: ");
		scanf("%d",&n);
		switch(n)
		{
			case 1: head=Createlist(head);
					break;
			case 2: display(head);
					break;
			case 3: head=insertfirst(head);
					break;
			case 4: head=insertlast(head);
					break;
			case 5: head=insertinter(head);
					break;
			case 6: head=deletefirst(head);
					break;
			case 7: head=deletelast(head);
					break;
			case 8: head=deleteinter(head);
					break;
			case 9: return 0;
		}
	}
	while(1);
}
struct node *Createlist(struct node *head)
{
	int n,i;
	printf("Enter the no. of  nodes: ");
	scanf("%d",&n);
	struct node *p,*q;
	for(i=1;i<=n;i++)
	{
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
			p->next=q;
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
		printf("The linked list is: ");
		while(head->next!=NULL)
		{
			printf("%d->",head->next->data);
			head=head->next;
		}
		printf("NULL");
	}
}
struct node *insertfirst(struct node *head)
{
	struct node* item;
	item=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value into node: ");
	scanf("%d",&item->data);
	item->next=head->next;
	head->next=item;
	return head;
}
struct node *insertlast(struct node *head)
{
	struct node* head1,*item;
	item=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value into node: ");
	scanf("%d",&item->data);
	head1=head;
	while(head1->next!=NULL)
		head1=head1->next;
	head1->next=item;
	item->next=NULL;
	return head;
}
struct node *insertinter(struct node *head)
{
	struct node *head1,*temp;
	int pos,i;
	head1=head;
	printf("Enter the position: ");
	scanf("%d",&pos);
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value into node: ");
	scanf("%d",&temp->data);
	for(i=1;i<pos;i++)
		head1=head1->next;
	temp->next=head1->next;
	head1->next=temp;
	return head;
}
struct node *deletefirst(struct node *head)
{
	struct node *temp;
	temp=head->next;
	printf("The deleted node is: %d",temp->data);
	head->next=head->next->next;
	free(temp);
	return head;
}
struct node *deletelast(struct node *head)
{
	struct node *head1;
	head1=head;
	while(head1->next->next!=NULL)
		head1=head1->next;
	printf("The deleted node: %d",head1->next->data);
	free(head1->next);
	head1->next=NULL;
	return head;	
}
struct node *deleteinter(struct node *head)
{
	struct node *head1,*temp;
	int pos,i;
	head1=head;
	printf("Enter the position: ");
	scanf("%d",&pos);
	for(i=1;i<pos;i++)
		head1=head1->next;
	temp=head1->next;
	printf("The deleted node: %d",temp->data);
	head1->next=head1->next->next;
	free(temp);
	return head;	
}