#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node * next;
   };

 void tgb(struct node *p)
 {
    while(p!=null){
    printf("%d\n",p->data);
    p=p->next;
   }
   }
void main(){
   struct node *head;
   struct node *second;
   struct node * third;
   struct node * forth

 head = (struct node*) malloc(sizeof(struct node));
 second = (struct node*) malloc(sizeof(struct node));
 third = (struct node*) malloc(sizeof(struct node));
 forth = (struct node*) malloc(sizeof(struct node));

head->data=3;
head->next=6;

second->data=6;
second->next=9;

third->data=9;
third->next=12;

forth->data=12;
forth->next=null;
tgb(head);

getch();
}
