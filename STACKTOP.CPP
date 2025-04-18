#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct stack{
    int size;
    int top;
    int * arr;
};

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

 int stacktop(struct stack *sp)
 {
 return sp->arr[sp->top];
 }

 int stackbottom(struct stack *sp)
 {
  return sp->arr[0];
  }


void main()
{
clrscr();
  struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
  sp->size=10;
  sp->top=-1;
  sp->arr=(int*)malloc(sp->size*sizeof(int));

  printf("%d\n",isfull(sp));
  printf("%d\n",isempty(sp));

  push(sp,56);
   push(sp,96);
    push(sp,86);
     push(sp,89);
       push(sp,92);
	push(sp,89);
	push(sp,78);
		push(sp,26);
		push(sp,36);
	    push(sp,96);
		push(sp,56);

  printf("%d\n",isfull(sp));
  printf("%d\n",isempty(sp));


/*  printf("popped elemnet is:%d \n",pop(sp));
   printf("popped elemnet is:%d \n",pop(sp));
    printf("popped elemnet is:%d \n",pop(sp));
     printf("popped elemnet is:%d \n",pop(sp));
       printf("popped elemnet is:%d \n",pop(sp));
     printf("popped elemnet is:%d \n",pop(sp));
      printf("popped elemnet is:%d \n",pop(sp));
      printf("popped elemnet is:%d \n",pop(sp));
	printf("popped elemnet is:%d \n",pop(sp));
	  printf("popped elemnet is:%d \n",pop(sp));
							*/

  printf("the topmost values is %d\n",stacktop(sp));
  printf("the bottom values is %d\n",stackbottom(sp));




  getch();
  }

