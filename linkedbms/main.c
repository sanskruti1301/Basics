#include <stdio.h>
#include <stdlib.h>

struct list{
  int data;
  struct list* next;
};

void printlist(struct list *head){
 struct list *ptr=head;
 while(ptr){
    printf("%d",ptr->data);
    ptr=ptr->next;
 }
 printf("NULL");
}

int main(){
 struct list *head,*prev,*p;
 int n,i;
 printf("Enter the number of elements ");
 scanf("%d",&n);
 head=NULL;
 for(i=0;i<n;i++){
    printf("Enter %d element ",i+1);
    p=(struct list*)malloc(sizeof(struct list));
    scanf("%d",p->data);
    p->next=NULL;
    if(head=NULL){
        head=p;
    }
    else{
        prev->next=p;
    }
    prev=p;
}
 printlist(head);

}
