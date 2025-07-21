#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *tree;
void createTree(struct node*);
struct node *insertElement(struct node*,int);
void preorderTraversal(struct node*);
void inorderTraversal(struct node*);
void postorderTraversal(struct node*);
int main()
{
	int ch,val;
	struct node *ptr;
	//createTree(tree);
	//clrscr();
	do
	{
		printf("\nPress 1 for Insertion");
		printf("\nPress 2 for Preorder Traversl");
		printf("\nPress 3 for Inorder Traversal");
		printf("\nPress 4 for Postorder Traversal");
		printf("\nPress 5 for exit");
		printf("\nEnter the choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the value of the new node: ");
				scanf("%d",&val);
				tree=insertElement(tree,val);
				break;
			case 2:
				printf("The elements of the tree are: ");
				preorderTraversal(tree);
				break;
			case 3:
				printf("The elements of the tree are: ");
				inorderTraversal(tree);
				break;
			case 4:
				printf("The elements of the tree are: ");
				postorderTraversal(tree);
				break;
			case 5: return 0;
			default: printf("\nWrong choice!!"); 
		}
	}
	while(1);
}
void createTree(struct node *tree)
{
	tree=NULL;
}
struct node *insertElement(struct node *tree,int val)
{
	struct node *ptr,*nodeptr,*parentptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=val;
	ptr->left=NULL;
	ptr->right=NULL;
	if(tree==NULL)
	{
		tree=ptr;
		tree->left=NULL;
		tree->right=NULL;
	}
	else
	{
		parentptr=NULL;
		nodeptr=tree;
		while(nodeptr!=NULL)
		{
			parentptr=nodeptr;
			if(val<nodeptr->data)
				nodeptr=nodeptr->left;
			else
				nodeptr=nodeptr->right;
		}
		if(val<parentptr->data)
			parentptr->left=ptr;
		else
			parentptr->right=ptr;
	}
	return tree;
}
void preorderTraversal(struct node *tree)
{
	if(tree!=NULL)
	{
		printf("%d\t",tree->data);
		preorderTraversal(tree->left);
		preorderTraversal(tree->right);
	}
}
void inorderTraversal(struct node *tree)
{
	if(tree!=NULL)
	{
		inorderTraversal(tree->left);
		printf("%d\t",tree->data);
		inorderTraversal(tree->right);
	}
}
void postorderTraversal(struct node *tree)
{
	if(tree!=NULL)
	{
		postorderTraversal(tree->left);
		postorderTraversal(tree->right);
		printf("%d\t",tree->data);
	}
}