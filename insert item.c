#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL;
    struct node *newnode;
    int n, value, i;

    
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        
        scanf("%d", &value);

        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = head;
        head = newnode;
    }

    

    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");

    return 0;
}