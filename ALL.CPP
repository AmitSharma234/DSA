#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
    int data;
    struct node *next;
    };

 void tra(struct node* p)
 {
   while(p!=NULL)
   {
    printf("%d\n",p->data);
    p=p->next;
    }
    }

   struct node * begin(struct node* head,int info){
    struct node* p1;
    p1 =( struct node *)malloc(sizeof(struct node));
    p1->data=info;
    p1->next=head;
    return p1;
    }

  struct node * delbeg(struct node* head)
  {
  struct node *d1;
  d1=head;
  head=head->next;
  free(d1);
  return head;
  }

   struct node * end(struct node * head,int info)
   {
    struct node * p2,*pr;
    p2=( struct node *)malloc(sizeof(struct node));
    p2->data=info;
    p2->next=NULL;

    pr=head;
    if(pr!=NULL)
    {
       while(pr->next!=NULL)
       {
       pr=pr->next;
       }
    pr->next=p2;
    }
    else{
	head=p2;
       }
    return head;
    }

    struct node * delend(struct node* head)
    {
      struct node *p=head;
      struct node *q=head->next;
      while(q->next!=NULL)
      {
       q=q->next;
       p=p->next;
       }
       p->next=NULL;
       free(q);
       return head;
       }

       struct node * after(struct node* head,int key)
       {
	struct node *ptr,*ptr1;
	ptr= head;
	 while(ptr->next!=NULL)
	 {
	  if(ptr->data==key)
	  {

	  ptr1=ptr->next;
	  ptr->next=ptr1->next;
	  free(ptr1);
	  break;
	  }
	  ptr=ptr->next;
	  }
	  return head;
	  }


    struct node * af(struct node*head,int x,int info)
    {
     struct node *p,*p1;
     p=(struct node*)malloc(sizeof(struct node));
     p->data=info;
     p1=head;
     while(p1->data!=x && p1!=NULL)
     {
      p1=p1->next;
      }
      if(p1->data==x)
      {
      p->next=p1->next;
      p1->next=p;
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
    head=( struct node *)malloc(sizeof(struct node));
    second=( struct node *)malloc(sizeof(struct node));
    third=( struct node *)malloc(sizeof(struct node));
    forth=( struct node *)malloc(sizeof(struct node));
    head->data=3;
    head->next=second;
    second->data=6;
    second->next=third;
    third->data=9;
    third->next=forth;
    forth->data=12;
    forth->next=NULL;
    printf("Before:\n");
    tra(head);
    head=af(head,6,7);
    printf("After:\n");
    tra(head);
    getch();
    }


