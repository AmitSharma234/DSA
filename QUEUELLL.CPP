#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node *f=NULL;
struct node *r=NULL;

struct node{
   int data;
   struct node *next;
   };


  void tra(struct node *ptr)
  {
   printf("\n printing an element of linked list:\n");
   while(ptr!=NULL)
   {
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    }
   }


void enqueue(int val)
{
 struct node *n=(struct node*)malloc(sizeof(struct node*));
 if(n==NULL){
  printf("Queue Is Full\n");
  }
  else{
   n->data=val;
   n->next=NULL;
  if(f==NULL){
   f=r=n;
   }
   else{
   r->next=n;
   r=n;
   }
   }
   }

int dequeue()
{
 int val=-1;
 struct node *ptr=f;
 if(f==NULL){
   printf("Queue is empty\n");
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
   clrscr();
   printf("Dequeue Element : %d\n",dequeue());
   enqueue(4);
    enqueue(7);
     enqueue(17);
      enqueue(47);

      printf("deletion element :%d\n",dequeue());
	printf("deletion element :%d\n",dequeue());
	  printf("deletion element :%d\n",dequeue());

	  tra(f);
	  getch();
	  }


