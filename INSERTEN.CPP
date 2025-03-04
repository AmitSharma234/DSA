#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
struct node *pre;
   int data;
   struct node *next;
   };



   void tra(struct node * p)
   {
    while(p!=NULL)
    {
    printf("element : %d\n",p->data);
    p=p->next;
    }
    }


  struct node * begin(struct node * head,int info)
  {
   struct node *p=(struct node *)malloc(sizeof(struct node ));
    p->data=info;
    p->next=head;
    return p;
    }

  struct node * after(struct node * head,int x,int info)
  {
   struct node *ptr=(struct node *)malloc(sizeof(struct node ));
    ptr->data=info;
    struct node *p=head;

    while(p->data!=x && p!=NULL)
    {
     p=p->next;
     }
     if(p->data==x)
     {
      ptr->next=p->next;
      p->next=ptr;
      }
    return head;
    }

      struct node * end(struct node * head,int info)
  {
   struct node *ptr=(struct node *)malloc(sizeof(struct node ));
    ptr->data=info;
    struct node *p=head;

    while( p->next!=NULL)
    {
     p=p->next;
     }
      p->next=ptr;
      ptr->next=NULL;
    return head;
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
head = end(head,7);
printf("------ AFTER-----\n");
  tra(head);


  getch();
}