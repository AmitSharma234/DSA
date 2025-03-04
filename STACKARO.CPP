#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stack{
  int top;
  int size;
  int *arr;
  };

 int isempty(struct stack *ptr)
 {
  if(ptr->top==-1)
  {
   return 1;
   }
   return 0;
   }

   int isfull(struct stack *ptr)
   {
    if(ptr->top==ptr->size-1)
    {
     return 1;
     }
     return 0;
     }


    void push(struct stack *ptr,int val)
    {
     if(isfull(ptr))
     {
      printf("Stack  Overflow\n");
      }
      else{
       ptr->top++;
       ptr->arr[ptr->top]=val;
       }
       }

       int pop(struct stack *ptr)
       {
	 if(isempty(ptr))
	 {
	  printf("Stack Underflow\n");
	  }
	  else{
	  int val=ptr->arr[ptr->top];
	  ptr->top--;
	  return val;
	  }
	  }

	  void main()
	  {
	  clrscr();
	   struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
	   sp->size=5;
	   sp->top=-1;
	   sp->arr=(int *)malloc(sp->size*sizeof(int));

	   push(sp,12);
	   push(sp,14);
	   push(sp,16);
	   push(sp,18);
	   push(sp,20);

	   int a=pop(sp);
	   printf("Popped Element :%d\n",a);
	    int b=pop(sp);
	   printf("Popped Element :%d\n",b);
	    int c=pop(sp);
	   printf("Popped Element :%d\n",c);
	    int d=pop(sp);
	   printf("Popped Element :%d\n",d);
	    int e=pop(sp);
	   printf("Popped Element :%d\n",e);
	      getch();
	      }

