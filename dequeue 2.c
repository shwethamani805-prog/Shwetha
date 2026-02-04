#include <stdio.h>
#include <stdlib.h>

struct Node {
    int orderID;
    struct Node* next;
};

struct Node *front = NULL, *rear = NULL;
int count = 0;

void enqueue(int id) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->orderID = id;
    newNode->next = NULL;

    if (rear == NULL)
        front = rear = newNode;
    else {
        rear->next = newNode;
        rear = newNode;
    }
    count++;
}

void dequeue() {
    if (front == NULL) {
        printf("No orders pending\n");
        return;
    }
    struct Node* temp = front;
    printf("Order processed: %d\n", temp->orderID);
    front = front->next;
    free(temp);
    count--;
}

void showFront() {
    if (front == NULL)
        printf("No pending orders\n");
    else
        printf("Next order: %d\n", front->orderID);
}

int main() {
    enqueue(101);
    enqueue(102);
    enqueue(103);

    dequeue();
    showFront();

    return 0;
}