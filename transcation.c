#include <stdio.h>
#include <stdlib.h>


struct Node {
    int amount;
    struct Node *next;
};


struct Node* insert(struct Node *head, int amount) {
    struct Node*newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->amount = amount;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;

    struct Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

struct Node* deleteLatest(struct Node *head) {
    if (head == NULL)
        return NULL;

    struct Node *temp = head;
    head = head->next;
    free(temp);

    return head;
}

// Function to display list
void display(struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->amount);
        head = head->next;
    }
    printf("NULL");
}

int main() {
    struct Node *head = NULL;

    // Test case input
    head = insert(head, 500);
    head = insert(head, 1000);

    // Delete latest transaction
    head = deleteLatest(head);

    // Display result
    display(head);

    return 0;
}