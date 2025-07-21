#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int n,i,next;
	struct node *head,*p,*q,*head1;
	head=(struct node*)malloc(sizeof(struct node));
	printf("Enter the no. of node: ");
	scanf("%d",&n);
	p=(struct node*)malloc(sizeof(struct node));
	printf("Enter values into node: ");
	scanf("%d",&p->data);
	head->next=p;
	p->next=NULL;
	for(i=1;i<=n-1;i++)
	{
		q=(struct node*)malloc(sizeof(struct node));
		printf("Enter values into node: ");
		scanf("%d",&q->data);
		p->next=q;
		q->next=NULL;
		p=q;
	}
	head1=head;
	printf("The linked list is: ");
	while(head1->next!=NULL)
	{
		printf("%d->",head1->next->data);
		head1=head1->next;
	}
	printf("NULL");
	return 0;
}