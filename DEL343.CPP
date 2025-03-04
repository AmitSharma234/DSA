#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct node {
	   int data;
	   struct node *next;
	   };
void tra(struct node* head)
{
  struct node *p;
  while(p!=NULL)
{
  printf("%d\n",p->data);
  p=p->next;
  }
  }



/*
struct node * del(struct node * head,int id)
{
   struct node *ptr1,*ptr2;          //delete a between node
   ptr1=head;

   while(ptr1->next!=NULL)
   {
   if(ptr1->data==id)
   {
     ptr2=ptr1->next;
     ptr1->next=ptr2->next;
     free(ptr2);
     break;
     }
     ptr1=ptr1->next;
     }
     return head;
     }
  */


  struct node * last(struct node *head)
  {
    struct node *p=head;
    struct node *q=head->next;
    while(q->next!=NULL)
    {
     p=p->next;
     q=q->next;
     }
     p->next=NULL;
     free(q);
     return head;
     }

void main(){
      clrscr();
      struct node * head;
      struct node * second;
      struct node * third;
      struct node * forth;

      head=(struct node *) malloc(sizeof(struct node));
      second=(struct node *) malloc(sizeof(struct node));
      third=(struct node *) malloc(sizeof(struct node));
      forth=(struct node *) malloc(sizeof(struct node));

     head->data=3;
     head->next=second;
     second->data=6;
     second->next=third;
     third->data=9;
     third->next=forth;
     forth->data=12;
     forth->next=NULL;
     tra(head);
     printf("--\n");
  head= last(head);
//  head=del(head,6);
   tra(head);
     getch();
     }
