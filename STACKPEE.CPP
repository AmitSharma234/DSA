#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct stack{
    int size;
    int top;
    int * arr;
};



int peek(struct stack *sp,int i)
{
  if(sp->top-i+1<0)
  {
   printf("invaild position");
   return -1;
   }
   else{
   return sp->arr[sp->top-i+1];
   }
   }



int isempty(struct stack *ptr)
{
  if(ptr->top==-1)
  {
    return 1;
    }
    else{
    return 0;
    }
  }

int isfull(struct stack *ptr)
{
 if(ptr->top==ptr->size-1){
  return 1;
  }
  else{
  return 0;
    }
  }


 void push(struct stack *ptr,int val)
 {
 if(isfull(ptr))
 {
  printf("stack is overflow\n");
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
   printf("stack underflow\n");
   return -1;
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
  sp->arr=(int*)malloc(sp->size*sizeof(int));

  printf("%d\n",isfull(sp));
  printf("%d\n",isempty(sp));

  push(sp,56);
   push(sp,96);
    push(sp,86);
     push(sp,89);
       push(sp,92);


  printf("%d\n",isfull(sp));
  printf("%d\n",isempty(sp));


 // printf("popped elemnet is:%d \n",pop(sp));
  // printf("popped elemnet is:%d \n",pop(sp));
  //  printf("popped elemnet is:%d \n",pop(sp));
   //  printf("popped elemnet is:%d \n",pop(sp));
   //    printf("popped elemnet is:%d \n",pop(sp));

       for(int j=0;j< sp->top+1;j++)
       {
	printf("the value at index %d is %d\n",j,peek(sp,j));
       }


  getch();
  }
