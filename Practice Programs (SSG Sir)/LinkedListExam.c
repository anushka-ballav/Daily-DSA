#include <stdio.h>
#include <malloc.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    int n;
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));
    head->next=NULL;
    struct node* createList(struct node*);
    void display(struct node*);
    int getMiddle(struct node *head);
    struct node* reverseList(struct node*);
    struct node* deleteMiddle(struct node*);
    do {
        printf("\nMenu:");
        printf("\nPress 1 for Create List");
        printf("\nPress 2 for Display List");
        printf("\nPress 3 for Get the Middle Element");
        printf("\nPress 4 for Reverse the List");
        printf("\nPress 5 for Delete the Middle Node");
        printf("\nPress 6 for Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &n);
        switch(n) {
            case 1: head=createList(head);
                    break;
            case 2: display(head);
                    break;
            case 3:
                if(head->next==NULL) {
                    printf("List is empty!\n");
                } else {
                    printf("Middle element: %d\n", getMiddle(head->next));
                }
                break;
            case 4: head->next=reverseList(head->next);
                    printf("The Reversed List is: ");
                    display(head);
                    break;
            case 5: head->next=deleteMiddle(head->next);
                    printf("Middle node deleted\n");
                    display(head);
                    break;
            case 6: return 0;
            default: printf("Invalid choice!\n"); 

        }
    } while(1); 
}

struct node *createList(struct node *head) {
    int n, i;
    printf("Enter the no. of nodes: ");
    scanf("%d", &n);
    struct node *p, *q;
    for(int i=1;i<=n;i++) {
        if(head->next==NULL) {
            p=(struct node*)malloc(sizeof(struct node*));
            printf("Enter the value into the node: ");
            scanf("%d", &p->data);
            head->next=p;
            p->next=NULL;
        } else {
            q=(struct node*)malloc(sizeof(struct node*));
            printf("Enter the value into the node: ");
            scanf("%d", &q->data);
            p->next=q;
            q->next=NULL;
            p=q;
        }
    }
    return head;
}

void display(struct node *head) {
    if(head->next==NULL) {
        printf("No linked list is available");
    } else {
        printf("The linked list is: ");
        while(head->next!=NULL) {
            printf("%d->", head->next->data);
            head=head->next;
        }
        printf("NULL");
    }
}

int getLength(struct node *head) {
    int length=0;
    while(head) {
        length++;
        head=head->next;
    }
    return length;
}

int getMiddle(struct node *head) {
    int length=getLength(head);
    int midIndex=length/2;
    while(midIndex--) {
        head=head->next;
    }
    return head->data;
}

struct node* reverseList(struct node *head) {
    struct node *curr=head, *prev=NULL, *next;
    while(curr!=NULL) {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

struct node* deleteMiddle(struct node* head) {
    if(head->next==NULL) {
        return NULL;
    }
    int count=0;
    struct node *p1=head, *p2=head;
    while(p1!=NULL) {
        count++;
        p1=p1->next;
    }
    int middleIndex=count/2;
    for(int i=0;i<middleIndex-1;++i)
        p2 = p2->next;
    p2->next = p2->next->next;
    return head;
}