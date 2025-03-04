#include<stdio.h>
#include<conio.h>
#include<conio.h>

struct node {
 int data;
 struct node *next;
 };

 void enqueue (struct node *f,struct node *r ,int val)
 {
 struct node *n=(struct node*)malloc(sizeof(struct node));
 if(n==NULL)
 {
    printf("full\n");
    }
    else{
    n->data=val;
    n->next=NULL;
    if(f==NULL)
    {
      f=r=n;
      }
      else{
      r->next=n;
      r-n;
      }
    }
 }

  int dequeue()
 {
 int val=-1;
 struct node *ptr=f;
 if(f==NULL)
 {
    printf("empty\n");
    }
    else{
    f=f->next;
    val=ptr->data;
    free(ptr);
    }
    return val;
 }

 void main()
 {
   struct node *f=NULL;
   struct node *r=NULL;
   enqueue(f,r,34);
   enqueue(f,r,76);
   int ii=dequeue();
   printf("popped element:%d\n",ii);

   getch();
   }

