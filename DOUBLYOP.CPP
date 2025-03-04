#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

struct node {
   int data;
   struct node *next;
   };

void tra(struct node * p)
{
  while(p!=NULL)
  {
  printf("%d\n",p->data);
  p=p->next;
  }
  }
  struct node *beginn(struct node*head,int info)
  {
   struct node *pr;
   pr=(struct node*)malloc(sizeof(struct node));
   pr->data=info;
   pr->next=head;
   return pr;
   }

  struct node *aftern(struct node * head,int x,int info)
  {
   struct node *p1,*p2;
   p1=(struct node*)malloc(sizeof(struct node));
   p1->data=info;
   p2=head;
   while(p2->data!=x &&p2!=NULL)
   {
   p2=p2->next;
   }
   if(p2->data==x)
   {
   p1->next=p2->next;
   p2->next=p1;
   }
   return head;
   }

  struct node * endn(struct node *head,int info)
  {
  struct node *p3,*p4;
  p3=(struct node*)malloc(sizeof(struct node));
  p3->data=info;
  p3->next=NULL;

  p4=head;
  if(p4->next!=NULL)
  {
     while(p4->next!=NULL)
     {
       p4=p4->next;
       }
       p4->next=p3;
  }else{
  head=p3;
  }
  return head;
  }

struct node * begin(struct node*head)
{
 struct node *p;
 p=head;
 head=head->next;
 free(p);
 return head;
 }

 struct node * end(struct node *head)
 {
 struct node *p=head;
 struct node *q=head->next;
 while(q->next!=NULL)
 {
 p=p->next;
 q=q->next;
 }
 p->next=q->next;
 free(q);
 return head;
 }

 struct node * after(struct node *head,int key)
 {
 struct node *p,*n;
 p=head;
 while(p->next!=NULL)
 {
  if(p->data==key)
  {
   n=p->next;
   p->next=n->next;
   free(n);
   break;
   }
   p=p->next;
   }
   return head;
   }









  void main()
  {
  clrscr();
  struct node * head;
  struct node * second;
  struct node * third;
  struct node * forth;
  head=(struct node*)malloc(sizeof(struct node));
  second=(struct node*)malloc(sizeof(struct node));
  third=(struct node*)malloc(sizeof(struct node));
  forth=(struct node*)malloc(sizeof(struct node));
  head->data=3;
  head->next=second;
  second->data=6;
  second->next=third;
  third->data=9;
  third->next=forth;
  forth->data=12;
  forth->next=NULL;
  tra(head);
  head=after(head,6);
  tra(head);
  getch();
  }