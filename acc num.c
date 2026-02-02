#include <stdio.h>
#include <stdlib.h>

struct Contact {
    long phone;
};

struct Customer {
    int accNo;
    struct Contact c;
    struct Customer *next;
};

int main() {
    
    struct Customer *c1 = (struct Customer *)malloc(sizeof(struct Customer));
    c1->accNo = 101;
    c1->c.phone = 9876543210;
    c1->next = NULL;

    struct Customer *c2 = (struct Customer *)malloc(sizeof(struct Customer));
    c2->accNo = 102;
    c2->c.phone = 9123456789;
    c2->next = NULL;

    c1->next = c2;

    struct Customer *temp = c1;
    while (temp != NULL) {
        printf("%d - %ld -> ", temp->accNo, temp->c.phone);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}