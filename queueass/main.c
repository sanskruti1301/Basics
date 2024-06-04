#include <stdio.h>
#include <stdlib.h>

struct queue{
int priority;
int data;
struct queue *next;
};
struct node *front=0;
struct node *gear=0;

struct queue* newNode(int d, int p)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = d;
    temp->priority = p;
    temp->next = NULL;
    return temp;
}
void pop(Node** head)
{
    Node* temp = *head;
    (*head) = (*head)->next;
    free(temp);
}
void push(queue** head,int p, int i){
queue *start=head;
queue* temp = newNode(i, p);
if ((*head)->priority > p) {
        temp->next = *head;
        *head) = temp;
    }
     else {
        while (start->next != NULL &&
            start->next->priority < p) {
            start = start->next;
        }
        temp->next = start->next;
        start->next = temp;
    }
}
int isEmpty(queue** head)
{
    return (*head) == NULL;
}





int main()
{
    printf("Hello world!\n");
    return 0;
}
