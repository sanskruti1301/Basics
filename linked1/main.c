#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct New {
    int data;
    struct New* next;
};
int main()
{   struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node*fourth = NULL;
    struct Node*fifth = NULL;


    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    fifth = (struct Node*)malloc(sizeof(struct Node));
    head->next=  second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    head->data= 6;
    second->data =8;
    third->data = 9;
    fourth->data =2;
    fifth->data = 1;
    printf("Orignal list\n");
    struct Node *temp = head;
    while(temp != NULL) {
    printf("%d \n",temp->data);
    temp = temp->next;}

    struct New* head = NULL;
    struct New* second = NULL;
    struct New* third = NULL;
    struct New*fourth = NULL;
    struct New*fifth = NULL;
    head = (struct New*)malloc(sizeof(struct New));
    second = (struct New*)malloc(sizeof(struct New));
    third = (struct New*)malloc(sizeof(struct New));
    fourth = (struct New*)malloc(sizeof(struct New));
    fifth = (struct New*)malloc(sizeof(struct New));




    return 0;
}
