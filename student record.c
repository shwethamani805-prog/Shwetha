#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct StudentDetails {
    char name[50];
    char dept[50];
};


struct Node {
    int roll;
    struct StudentDetails details;
    struct Node *next;
};


struct Node* createNode(int roll, char name[], char dept[]) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->roll = roll;
    strcpy(newNode->details.name, name);
    strcpy(newNode->details.dept, dept);
    newNode->next = NULL;
    return newNode;
}


void insertEnd(struct Node **head, int roll, char name[], char dept[]) {
    struct Node *newNode = createNode(roll, name, dept);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}


void displayList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d %s %s -> ", temp->roll, temp->details.name, temp->details.dept);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;

    
    insertEnd(&head, 1, "Arun", "CSE");
    insertEnd(&head, 2, "Meena", "IT");

    
    displayList(head);

    return 0;
}

