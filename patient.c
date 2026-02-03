#include <stdio.h>
#include <stdlib.h>

struct Node {
    int patientID;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;


int isEmpty() {
    return front == NULL;
}


void enqueue(int patientID) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->patientID = patientID;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    
}


void dequeue() {
    if (isEmpty()) {
        printf("No patients waiting\n");
        return;
    }

    struct Node* temp = front;
    printf("Patient attended: %d\n", front->patientID);

    front = front->next;
    if (front == NULL)
        rear = NULL;

    free(temp);
}


void showFront() {
    if (isEmpty()) {
        printf("No patient is being attended\n");
        return;
    }

    printf("Current patient being attended: %d\n", front->patientID);
}


int size() {
    int count = 0;
    struct Node* temp = front;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}

int main() {
    enqueue(1);  
    enqueue(2);  
    enqueue(3);  

    dequeue();      
    showFront();    
    printf("Total patients waiting: %d\n", size());

    return 0;
}


