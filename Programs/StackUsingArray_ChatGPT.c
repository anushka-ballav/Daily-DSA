#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int top = -1; // Initialize top to -1 to indicate an empty stack

// Function prototypes
void push(int stk[], int num);
int pop(int stk[]);
void peep(int stk[]);
void display(int stk[]);
void reverse(int stk[]);

int main()
{
    int stack[MAX], ch, num;

    while(1)
    {
        printf("\n\nEnter 1 for PUSH");
        printf("\nEnter 2 for POP");
        printf("\nEnter 3 for PEEP");
        printf("\nEnter 4 for DISPLAY");
        printf("\nEnter 5 for REVERSE");
        printf("\nEnter 6 for EXIT");
        printf("\nEnter the choice:");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                if (top == MAX - 1)
                    printf("\nOVERFLOW");
                else
                {
                    printf("\nEnter the number:");
                    scanf("%d", &num);
                    push(stack, num);
                }
                break;

            case 2:
                if (top == -1)
                    printf("\nUNDERFLOW");
                else
                    pop(stack);
                break;

            case 3:
                if (top == -1)
                    printf("\nNO ELEMENT");
                else
                    peep(stack);
                break;

            case 4:
                if (top == -1)
                    printf("\nNo Element");
                else
                    display(stack);
                break;

            case 5:
                if (top == -1)
                    printf("\nNo Element");
                else
                    reverse(stack);
                break;

            case 6:
                exit(0); // Use exit(0) to exit the program normally
                break;

            default:
                printf("Wrong Choice");
        }
    }
    return 0;
}

void push(int stk[], int num)
{
    stk[++top] = num;
}

int pop(int stk[])
{
    printf("\nDeleted Element is: %d", stk[top]);
    return stk[top--];
}

void peep(int stk[])
{
    printf("\nElement %d", stk[top]);
}

void display(int stk[])
{
    printf("\nThe elements in the stack:");
    for(int i = top; i >= 0; i--)
        printf("\n%d", stk[i]);
}

void reverse(int stk[])
{
    int stack1[MAX];
    int temp;
    int i = 0;

    while (top >= 0)
    {
        temp = pop(stk);
        stack1[i++] = temp;
    }

    printf("\nThe elements in the reversed stack:");
    for (i = 0; i <= top; i++)
        printf("\n%d", stack1[i]);
}