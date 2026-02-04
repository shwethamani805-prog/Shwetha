#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int value){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
   
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    
    
    return newnode;
}

int main(){
    struct node* root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    
    root->right->left =createNode(60);
    root->right->right =createNode(60);
    
    
    printf("value at root->left->right; %d\n",root->left->right);
    
    return 0;
}
