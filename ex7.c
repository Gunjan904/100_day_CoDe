/*
Write a menu driven program to implement a queue using linked list
and perform qinsert (), q delete (), q display ()
*/
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Queue structure
struct Queue {
    struct Node* front;
    struct Node* rear;
};

// Function to initialize queue
void initQueue(struct Queue* q) {
    q->front = q->rear = NULL;
}

// Function to initialize queue
void initQueue(struct Queue* q) {
    q->front = q->rear = NULL;
}

// Function to insert an element into the queue
void qinsert(struct Queue* q, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;

    if (q->rear == NULL) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
    printf("%d inserted into the queue.\n", value);
}

// Function to delete an element from the queue
void qdelete(struct Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty! Cannot delete.\n");
        return;
    }
    struct Node* temp = q->front;
    printf("%d deleted from the queue.\n", temp->data);
    q->front = q->front->next;

    if (q->front == NULL) {
        q->rear = NULL;
    }
    free(temp);
}

// Function to display the queue
void qdisplay(struct Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty.\n");
        return;
    }
    struct Node* temp = q->front;
    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main menu-driven program
int main() {
    struct Queue q;
    initQueue(&q);
    int choice, value;

    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                qinsert(&q, value);
                break;
            case 2:
                qdelete(&q);
                break;
            case 3:
                qdisplay(&q);
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
