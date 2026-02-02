#include<stdio.h>
#include<stdlib.h>
struct contact{
    long int number;
    struct contact*next;
    
};
int main(){
    struct contact *head, *temp,*newcontact;
    head = malloc(sizeof(struct contact));
    head->number = 8976546789;
    
    head->next= malloc(sizeof(struct contact));
    head->next->number = 6789056789;
    
    
    head->next->next= malloc(sizeof(struct contact));
    head->next->next->number = 6785435679;
    head->next->next->next = NULL;
    
    
    newcontact = malloc(sizeof(struct contact));
    newcontact->number = 76589467889;
    
    temp=head;
    while(temp !=NULL && temp->number != 6789056789)
    temp=temp->next;
    
    if(temp!=NULL)
    newcontact->next = temp->next;
    temp->next = newcontact;
    
    temp=head;
    while(temp!=NULL){
        printf("%ld --->",temp->number);
        temp = temp->next;
    }
    printf("Finish\n");
    return 0;
    
    
    
}