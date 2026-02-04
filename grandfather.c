#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Node {
    char name[20];
    struct Node *left;
    struct Node *right;
};


struct Node* createNode(char name[]) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->name, name);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main() {

  
    struct Node* grandparent = createNode("John");

    
    grandparent->left = createNode("Parent1");
    grandparent->right = createNode("Parent2");


    grandparent->left->left = createNode("Child1");
    grandparent->left->right = createNode("Child2");


    printf("Grandparent: %s\n", grandparent->name);
    printf("First Child: %s\n", grandparent->left->name);
    printf("Second Grandchild of First Child: %s\n",
           grandparent->left->right->name);

    return 0;
}
