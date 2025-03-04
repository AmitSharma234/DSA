#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<malloc.h>


struct node {
 int data;
struct node *next;
 };

 void tra(struct node *p){
    while(p!=NULL){
    printf("%d\n",p->data);
    p=p->next;
    }
 }



 struct node * end(struct node *head,int info)
 {
  struct node *p1,*p2;
  p1=(struct node*)malloc(sizeof(struct node));
  p1->next=NULL;
  p1->data=info;
  p2=head;
  if(p2!=NULL)
  {
   while(p2->next!=NULL)
   {
   p2=p2->next;
   }
   p2->next=p1;
   }
  else{
   head=p1;
   }
   return head;
   }


  struct node * after(struct node * head,int x,int info)
  {
   struct node *pp,*pp1;
   pp=(struct node*)malloc(sizeof(struct node));
   pp->data=info;
   pp1=head;

   while(pp1->data!=x && pp1!=NULL)
   {
    pp1=pp1->next;
    }
    if(pp1->data==x)
    {
     pp->next=pp1->next;
     pp1->next=pp;
     }
     return head;
     }

   struct node * delbeg(struct node * head)
   {
     struct node * p;
     p=head;
     head=head->next;
     free(p);
     return head;
     }

   struct node* delend(struct node*head)
   {
    struct node* p=head;
    struct node* q=head->next;
    while(q->next!=NULL)
    {
    p=p->next;
    q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
    }

    struct node* delaf(struct node* head,int key)
    {
     struct node * p=head;
     struct node * n;
     while(p->next!=NULL)
     {
     if(p->data==key){
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
     head=delaf(head,3);
     tra(head);

     getch();
     }
