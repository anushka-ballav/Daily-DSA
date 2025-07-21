#include<stdio.h>
#include<malloc.h>
struct node
{
	int coeff,exp;
	struct node *next;
};
struct node* Createlink(struct node*);
struct node* poly_add(struct node *,struct node *);
int main()
{
	struct node *head1,*head2,*head3;
	head1=(struct node*)malloc(sizeof(struct node));
	head1->next=NULL;
	printf("Enter the first equation\n");
	head1=Createlink(head1);
	display(head1);
	printf("\nEnter the second equation\n");
	head2=Createlink(head2);
	display(head2);
	printf("\nAfter addition of polynomial ---\n");
	head3=poly_add(head1,head2);
	display(head3);
}
struct node *Createlink(struct node *head1)
{
	int n;
	printf("Enter the no. of nodes: ");
	scanf("%d",&n);
	struct node *p,*q;
	for(int i=1;i<=n;i++)
	{
		if(head1->next==NULL)
		{
			p=(struct node*)malloc(sizeof(struct node));
			printf("Enter the coeff & exp: ");
			scanf("%d%d",&p->coeff,&p->exp);
			head1->next=p;
			p->next=NULL;
		}
		else
		{
			q=(struct node*)malloc(sizeof(struct node));
			printf("Enter the coeff & exp: ");
			scanf("%d%d",&q->coeff,&q->exp);
			p->next=q;
			q->next=NULL;
			p=q;
		}
	}
	return head1;
}
void display(struct node *head)
{
	printf("The polynomial equation is: ");
	while(head->next!=NULL)
	{
		printf("%d | %d | -> ",head->next->coeff,head->next->exp);
		head=head->next;
	}
	printf("NULL");
}
struct node* poly_add(struct node *head1,struct node *head2)
{
	struct node *head3,*p,*temp;
	int s=0;
	head3=(struct node*)malloc(sizeof(struct node));
	head3->next=NULL;
	temp=head3;
	while(head1->next!=NULL && head2->next!=NULL)
	{
		if(head1->exp==head2->exp)
		{
			s=head1->next->coeff+head2->next->coeff;
			p=(struct node*)malloc(sizeof(struct node));
			p->coeff=s;
			temp->next=p;
			p->next=NULL;
			head1=head1->next;
			head2=head2->next;
			temp=temp->next;
		}
		else if(head1->exp>head2->exp)
		{
			temp->next=head1;
			temp=temp->next;
			head1=head1->next;
		}
		else if(head1->exp<head2->exp)
		{
			temp->next=head2;
			temp=temp->next;
			head2=head2->next;
		}
	}
	return head3;
}