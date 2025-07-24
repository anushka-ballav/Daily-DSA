#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int top;
    int capacity;
} Stack;

void initStack(Stack *s) {
    s->capacity=1;
    s->top=-1;
    s->data=(int*)malloc(sizeof(int)*s->capacity);
}

void push(Stack *s, int value) {
    if(s->top+1>=s->capacity) {
        s->capacity*=2;
        s->data=(int*)realloc(s->data, sizeof(int)*s->capacity);
    }
    s->data[++s->top]=value;
}

int pop(Stack *s) {
    if(s->top==-1) return -1;
    return s->data[s->top--];
}

int peek(Stack *s) {
    if(s->top==-1) return -1;
    return s->data[s->top];
}

void freeStack(Stack *s) {
    free(s->data);
}

int MaxArea(int arr[], int n) {
    Stack stack;
    initStack(&stack);
    int max_area=0;
    int i=0;
    while(i<n) {
        if(stack.top==-1 || arr[i]>=arr[peek(&stack)]) {
            push(&stack, i++);
        } else {
            int top_index=pop(&stack);
            int height=arr[top_index];
            int width;
            if(stack.top==-1) {
                width=i;
            } else {
                width=i-peek(&stack)-1;
            }
            int area=height*width;
            if(area>max_area)
                max_area=area;
        }
    }
    while(stack.top!=-1) {
        int top_index=pop(&stack);
        int height=arr[top_index];
        int width;
        if(stack.top==-1) {
            width=i;
        } else {
            width=i-peek(&stack)-1;
        }
        int area=height*width;
        if(area>max_area)
            max_area=area;
    }
    freeStack(&stack);
    return max_area;
}

int main() {
    int arr[]={3,5,1,7,5,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max_area=MaxArea(arr, n);
    printf("Max Area = %d\n", max_area);
    return 0;
}