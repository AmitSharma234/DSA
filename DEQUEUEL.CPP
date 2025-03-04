#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 struct node *f=NULL;
   struct node *r=NULL;


struct node{
  int data;
    struct node *next;
  };

  void tra(struct node*ptr)
  {
    printf("\nprinting elements of the linkedlist:\n");
    while(ptr!=NULL)
    {
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    }
    }

int dequeue()
{
 int val=-1;
 struct node* ptr=f;
 if(f==NULL)
 {
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

  tra(f);
  printf("Dequeue Element:%d\n",dequeue());
 enqueue(4);
 enqueue(7);
 enqueue(34);
  printf("Dequeue Element:%d\n",dequeue());
     tra(f);
   getch();
   }