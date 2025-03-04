#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

 struct node * top=NULL;

struct node{
   int data;
   struct node *next;
   };

void tra(struct node*ptr)
{
 while(ptr!=NULL)
 {
   printf("element: %d\n",ptr->data);
   ptr=ptr->next;
   }
 }

int isempty(struct node *top)
{
 if(top==NULL)
   {
    return 1;
   }
 else{
   return 0;
   }
}

int isfull(struct node *top)
{
  struct node *p=(struct node *)malloc(sizeof(struct node*));
  if(p==NULL)
  {
   return 1;
   }
    else{
     return 0;
   }
}



struct node* push(struct node *top,int x)
{
 if(isfull(top)){
  printf("stack overflow\n");
  }
  else{
     struct node *n =(struct node*)malloc(sizeof(struct node*));
     n->data=x;
     n->next=top;
     top=n;
     return n;
     }
   }

  int pop(struct node*tp)
  {
    if(isempty(tp))
    {
     printf("underflow");
     }
     else{
      struct node * n=tp;
      top=(tp)->next;
      int x=n->data;
      free(n);
      return x;
      }
    }





   void main()
   {
   clrscr();

      top = push(top,78);
      top = push(top,7);
     top = push(top,89);
      // tra(top);
     int element = pop(top);
     printf("popped element: %d\n",element);
      tra(top);

    getch();
    }



