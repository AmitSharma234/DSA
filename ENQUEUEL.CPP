#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 struct node *f=NULL;
   struct node *r=NULL;


struct node{
  int data;
    struct node *next;
  };


  void enqueue(int val)
  {
    struct node *n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
    {
    printf("Queue is Full\n");
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
	  r=n;
	  }
       }
  }



  void tra(struct node*ptr)
  {
    printf("\nprinting elements of the linkedlist:\n");
    while(ptr!=NULL)
    {
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    }
    }



  void main()
{
clrscr();

  tra(f);
  printf("after");
 enqueue(4);
 enqueue(7);
 enqueue(34);
     tra(f);
   getch();
   }