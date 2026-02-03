#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;


int isEmpty() {
    return front == -1;
}


int size() {
    if (isEmpty())
        return 0;
    return rear - front + 1;
}


void enqueue(int customerID) {
    if (rear == MAX - 1) {
        printf("Queue is full! Cannot add customer %d\n", customerID);
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = customerID;
  
}


void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty! No customer to serve\n");
        return;
    }
    printf("Customer served: %d\n", queue[front]);
    front++;

    if (front > rear) {
        front = rear = -1; // Reset queue
    }
}


void showFront() {
    if (isEmpty()) {
        printf("No customer is being served\n");
        return;
    }
    printf("Current customer being served: %d\n", queue[front]);
}


int main() {
    enqueue(101);
    enqueue(102);
    enqueue(103);

    dequeue();    
    showFront();    

    printf("Customers waiting: %d\n", size());

    return 0;
}
