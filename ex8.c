//Stack implementation using a list (NO fixed size, DYNAMIC MEMORY ALLOCATION)
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

typedef struct
{
    Node* top;
}Stack;

void initialize(Stack* s)
{
    s->top = NULL;
}

int isEmpty(Stack* s)
{
    return s->top == NULL; 
}

void push(Stack* s, int item)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL)
    {
        printf("Stack overflow!\n");
        exit(1);
    }
}
