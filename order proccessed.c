#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char orderID[10];
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;
int count = 0;

// Enqueue operation
void enqueue(char id[]) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->orderID, id);
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    count++;
    printf("Order %s placed successfully\n", id);
}

// Dequeue operation
void dequeue() {
    if (front == NULL) {
        printf("No orders to process\n");
        return;
    }
    struct Node* temp = front;
    printf("Order processed: %s\n", temp->orderID);
    front = front->next;

    if (front == NULL)
        rear = NULL;

    free(temp);
    count--;
}

// Display front order
void displayFront() {
    if (front == NULL) {
        printf("No pending orders\n");
    } else {
        printf("Next order to process: %s\n", front->orderID);
    }
}

// Check if queue is empty
void isEmpty() {
    if (front == NULL)
        printf("All orders are completed\n");
    else
        printf("Orders are still pending\n");
}

// Display size
void size() {
    printf("Number of pending orders: %d\n", count);
}

// Main function
int main() {
    enqueue("O101");
    enqueue("O102");
    enqueue("O103");

    dequeue();
    displayFront();
    size();
    isEmpty();

    return 0;
}
