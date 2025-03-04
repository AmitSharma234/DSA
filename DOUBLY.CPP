#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
struct node *pre;
   int data;
   struct node *next;
   };


struct node * beg(struct node *head,int info)
{
  struct node * new1 ;
  new1 = (struct node*)malloc(sizeof(struct node));
  new1->pre=NULL;
  new1-> data = info;
  new1-> next = head;
    return new1;
  }
 struct node * insertend(struct node *head,int info) {
  struct node *new1,*ptr;
  new1=(struct node*)malloc(sizeof(struct node));
  new1->data=info;
  new1->next=NULL;
 ptr=head;
  if(ptr!=NULL){
    while(ptr->next!=NULL) {
	 ptr=ptr->next;
      }
      ptr->next=new1;
      }
   else{
    head=new1;
    }
    return head;
    }

    struct node *after(struct node * head,int x,int info)
    {
    struct node *p,*pr;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=info;
    pr=head;
     while(pr->data!=x && pr!=NULL)
     {
     pr=pr->next;
     }
     if(pr->data==x)
     {
     pr->next=p;
    // p->pre=pr->next;
     }
     return head;
     }








void tra(struct node *head)
{
   if(head==NULL){
   printf("Lined list is NULL");
   }
   struct node *ptr;
   ptr=head;
   while(ptr!=NULL)
   {
     printf("%d\n",ptr->data);
     ptr=ptr->next;
      }
     }


void main()     {
  clrscr();
  struct node * head;
  struct node * second;
  struct node * third;
  struct node * forth;
  head=(struct node*)malloc(sizeof(struct node));
  second=(struct node*)malloc(sizeof(struct node));
  third=(struct node*)malloc(sizeof(struct node));
  forth=(struct node*)malloc(sizeof(struct node));
  head->pre=NULL;
  head->data=2;
  head->next=second;
  second->pre=head;
  second->data=4;
  second->next=third;
  third->pre=second;
  third->data=6;
  third->next=forth;
  forth->pre=third;
  forth->data=8;
  forth->next=NULL;
  tra(head); //calling
head = after(head,4,5);
printf(" ||\n");
  tra(head);


  getch();
}