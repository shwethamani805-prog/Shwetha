#include<stdio.h>
#include<stdlib.h>

struct Node {
    int songID;
    struct Node *prev;
    struct Node *next;
    
};

struct Node* insertBeginning(struct Node *head, int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->songID = data;
    newNode->prev = NULL;
    newNode->next = head;
    
    if(head != NULL) {
        head->prev = newNode;
    }

return newNode;
}

void display(struct Node *head){
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d <-> ",temp->songID);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    struct Node *head = NULL;
    
    head = insertBeginning(head, 30);
    head = insertBeginning(head, 20);
    head = insertBeginning(head, 10);
    
    printf("Playlist:\n");
    display(head);
    
    return 0;
    
    
    
    
}