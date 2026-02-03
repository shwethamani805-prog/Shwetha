#include <stdio.h>
#include <string.h>

#define MAX 5

char queue[MAX][10];   
int front = -1, rear = -1;

int isEmpty() {
    return front == -1;
}


void enqueue(char job[]) {
    if (rear == MAX - 1) {
        printf("Queue is Full. Cannot add job %s\n", job);
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    strcpy(queue[rear], job);
    
}


void dequeue() {
    if (isEmpty()) {
        printf("No print jobs available\n");
        return;
    }
    printf("Job printed: %s\n", queue[front]);
    front++;
    if (front > rear) {   
        front = rear = -1;
    }
}


void showFront() {
    if (isEmpty()) {
        printf("No pending jobs\n");
        return;
    }
    printf("Next job to be printed: %s\n", queue[front]);
}


void size() {
    if (isEmpty())
        printf("Pending jobs: 0\n");
    else
        printf("Pending jobs: %d\n", rear - front + 1);
}

int main() {
    enqueue("J1");
    enqueue("J2");
    enqueue("J3");

    dequeue();       
    showFront();     
    size();          

    return 0;
}

