#include <stdio.h>
#include<stdlib.h>
struct contact{
    long int number;
    struct contact*next;
    
};
int main(){
    
    struct contact *head = NULL,*temp;
    struct contact *ct1 = (struct contact*)malloc(sizeof(struct contact));
    struct contact *ct2 = (struct contact*)malloc(sizeof(struct contact));
    struct contact *ct3 = (struct contact*)malloc(sizeof(struct contact));
    ct1->number = 8756544567;
    ct2->number = 5678945678;
    ct3->number = 9876543218;
    ct1->next = NULL;
    ct2->next = NULL;
    ct3->next = NULL;
   head = ct1;
   
   temp = head;
   while(temp->next != NULL)
    temp = temp->next;
    temp->next=ct2;
    
    temp = head;
   while(temp->next != NULL)
    temp = temp->next;
    temp->next=ct3;
    
    
    printf("Contact:\n");
    temp = head;
   while(temp != NULL){
     printf("%ld ----->",temp->number);  
   
    temp = temp->next;
   }
   printf("finish");
   return 0;
}