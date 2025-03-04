#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stack{
  int top;
  int size;
  int *arr;
  };


int isfull(struct stack *p)
{
 if(p->top==p->size-1)
 {
  return 1;
  }
  return 0;
  }


 int isempty(struct stack *p)
 {
 if(p->top==-1)
 {
  return 1;
  }
  return 0;
  }

  void push(struct stack *p,int val)
  {
   if(isfull(p))
   {
    printf("OVERFLOW\n");
   }
   else{
     p->top++;
     p->arr[p->top]=val;
     }
    }


   int pop(struct stack *p)
   {
    if(isempty(p))
    {
     printf("Underflow\n");
     }
     else{
      int val=p->arr[p->top];
      p->top--;
      return val;\
      }
      }


      void main()
      {
      clrscr();
       struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
       sp->size=5;
       sp->arr=(int*)malloc(sp->size*sizeof(int));
       push(sp,2);
       push(sp,4);
       push(sp,6);

       int el=pop(sp);
       printf("Popped element : %d\n",el);
       getch();
       }