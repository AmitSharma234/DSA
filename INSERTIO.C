#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

struct node {
   int data;
   struct node *next;
   };


/*
struct node * insert(struct node *head,int info)
{
  struct node *n1;
  n1=(struct node*)malloc(sizeof(struct node));
   n1->data=info;
   n1->next=head;
   return n1;
  }

// head=insert(head,1);      calling to insert at begining

struct node * inserte(struct node *head,int info){
struct node *ne1,*ptr;
ne1=(struct node*)malloc(sizeof(struct node));
ne1->data=info;
 ne1->next=NULL;
 ptr=head;

 if(ptr!=NULL){
   while(ptr->next!=NULL) {
     ptr=ptr->next;
     }
     ptr->next=ne1;
     }
     else{
     ne1=head;
     }
     return head;
 }
 //head=insete(head,9);

       calling for insert ending


struct node * after(struct node *head,int x,int info)
{
  struct node *m1,*ptr;
  m1=(struct node*)malloc(sizeof(struct node));
  m1->data=info;
  ptr=head;

  while(ptr->data!=x && ptr!=NULL)
  {
   ptr=ptr->next;
  }
  if(ptr->data==x)
  {
   m1->next=ptr->next;
   ptr->next=m1;
  }
  return head;
  } */


struct node * after(struct node *head,int x,int info)
{
  struct node *mr,*ptr;
  mr=(struct node*)malloc(sizeof(struct node));
  mr->data=info;
  ptr=head;
  while(ptr->data!=x &&ptr!=NULL)
  {
   ptr=ptr->next;
   }
   if(ptr->data==x)
   {
   mr->next=ptr->next;
   ptr->next=mr;
   }
   return head;
   }













 void tra(struct node *ptr)
 {
   while(ptr!=NULL){
      printf("%d\n",ptr->data);
      ptr=ptr->next;
      }
      }

//  tra(head);      calling to traversing


  void main()
  {
  clrscr();

    struct node * head;
    struct node * second;
    struct node * third;
    struct node * forth;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    forth=(struct node *)malloc(sizeof(struct node));

    head->data=2;
    head->next=second;
    second->data=4;
    second->next=third;
    third->data=6;
    third->next=forth;
    forth->data=8;
    forth->next=NULL;
    tra(head);
  //  head=insert(head,1);
   // head=inserte(head,9);
    head=after(head,6,7);
    tra(head);

    getch();
    }
