//Circular
#include <stdio.h>
#include <stdlib.h>
typedef struct node 
{
    int item;
    struct node *next;
} node;

node *first = NULL, *last = NULL;

void insertFirst()
{
	int item;
    node *temp = (node *)malloc(sizeof(node));
    printf("\n Enter the data: ");
    scanf("%d", &temp->item);
    temp->next = NULL;
    
    if (first == NULL)
    {
        first = temp;
        last = temp;
        temp->next = temp;
    }
    else
    {
        temp->next = first;
        first = temp;
        last->next = temp;
    }
}

void insertLast()
{
    int item;
    node *temp = (node *)malloc(sizeof(node));
    printf("\n Enter the data: ");
    scanf("%d", &item);
    temp->item = item;
    temp->next = NULL;
    
    if (first == NULL)
    {
        first = temp;
        last = temp;
        temp->next = temp;
    }
    else
    {
        last->next = temp;
        temp->next = first;
        last = temp;
    }
}

void deleteFirst()
{
    node *temp;
    if (first == NULL)
    {
        printf("List is empty");
    }
    else if (first->next == first)
    {
        temp = first;
        first = NULL;
        last = NULL;
        free(temp);
    }
    else
    {
        temp = first;
        first = first->next;
        last->next = first;
        free(temp);
    }
}

void deleteLast()
{
    node *temp, *p;
    if (first == NULL)
    {
        printf("List is empty");
    }
    else if (first->next == first)
    {
        temp = first;
        first = NULL;
        last = NULL;
        free(temp);
    }
    else
    {
        temp = first;
        while (temp->next != first)
        {
            p = temp;
            temp = temp->next;
        }
        p->next = first;
        last = p;
        free(temp);
    }
}

void display() 
{
    node *temp = first;
    if (temp == NULL)
    {
        printf("List is empty\n");
        return;
    }
    
    printf("First");
    printf("-->%d", temp->item);
    while (temp->next != first)
    {
        temp = temp->next;
        printf("-->%d", temp->item);
    }
    printf("-->Last\n");
}

int main()
{
    int ch;
    while (1)
    {
        printf("\n 1 for Insert First ");
        printf("\n 2 for Insert Last ");
        printf("\n 3 for Delete First ");
        printf("\n 4 for Delete Last ");
        printf("\n 5 for Display ");
        printf("\n 6 for Exit ");
        printf("\n Enter choice: ");
        scanf("%d", &ch);
        
        switch (ch)
        {
            case 1:
                insertFirst();
                display();
                break;
            
            case 2:
                insertLast();
                display();
                break;
            
            case 3:
                deleteFirst();
                display();
                break;
            
            case 4:
                deleteLast();
                display();
                break;
            
            case 5:
                display();
                break;
            
            case 6:
                exit(1);
            
            default:
                printf("\n Invalid choice ");
        }
    }
}
