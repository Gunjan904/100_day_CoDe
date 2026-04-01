//Stack implementation using a array (FIXED SIZE, CONTIGUOUS MEMORY ALLOCATION)

#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 5 //define max size of array 
typedef struct //create a structure 
{
    int arr[MAX_SIZE];
    int top;
}Stack;

void initialize(Stack *s) //func to initiallize stack
{
    s->top = -1;
}

int isEmpty(Stack *s){
    return s->top == -1;
}

int isFull(Stack *s){
    return s->top == MAX_SIZE -1;
}

void push(Stack *s, int item){
    if(isFull(s))  //calling func to check 
    {
     printf("Stack is Full!\n");
     return;
    }
    s->arr[++(s->top)] = item;  //inserts element
}

int pop(Stack *s)
{    
    if (isEmpty(s))
    {
        printf("Stack is Empty!\n");
        return -1;
    }
    return s->arr[(s->top)--];  //remove and return top element
}


int main()
{
    Stack s;
    initialize(&s); //initializing stack arr 
    //now perform as many push and pop as required
    push(&s, 10); //index 0
    push(&s, 20); //index 1
    push(&s, 30); //index 2
    push(&s, 40); //index 3
    push(&s, 50); //index 4 (has reached MAX_SIZE -1)
    push(&s, 60);  // will return "Stack is Full!"
    printf("Top element: %d", s.arr[s.top]); //gives top element (only accessible element in stack)

    return 0;
}
