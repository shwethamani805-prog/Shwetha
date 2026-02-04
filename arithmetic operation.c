#include <stdio.h>
#include<stdlib.h>

struct node{
    char data;
    struct node *left;
    struct node *right;
};

struct node *createnode(char value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("Allocataion failed");
        return NULL;
    }
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
void preorder(struct node* root)
{
    if(root==NULL)
    return;
    printf("%d\n",root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node* root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    printf("%d\n",root->data);
    inorder(root->right);
}

int main() {
    struct node* root = createnode(10);
    root->left = createnode(20);
    root->right = createnode(30);
    root->left->left = createnode(40);
    root->left->right = createnode(50);
    root->right->left = createnode(60);
    root->right->right = createnode(70);
    
    
    printf("preorder traversal:\n");
    preorder(root);
    printf("Inorder traversal:\n");
    inorder(root);
    return 0;
}

