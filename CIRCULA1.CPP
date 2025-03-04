#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct queue {
 int r;
 int f;
 int size;
 int *arr;
 };

 int isempty(struct queue *q)
 {
   if(q->f==q->r)
   {
    return 1;
    }
    return 0;
    }

  int isfull(struct queue *q)
  {
    if((q->r+1)%q->size==q->f)
    {
    return 1;
    }
    return 0;
    }

  void enqueue(struct queue *q,int val)
  {
   if(isfull(q))
   {
    printf("Queue is full\n");
    }
    else{
     q->r=(q->r+1)%q->size;
     q->arr[q->r]=val;
     }
     }

     int dequeue(struct queue *q)
     {
     int a=-1;
      if(isempty(q))
      {
       printf("queue is Empty\n");
       }
       else{
	 q->f=(q->f+1)%q->size;
	 a=q->arr[q->f];
	 }
	 }
	 void main()
	 {
	 clrscr();
	  struct queue *q=(struct queue*)malloc(sizeof(struct queue));
	  q->r=q->f=0;
	  q->size=5;
	  q->arr=(int*)malloc(q->size*sizeof(int));

	  enqueue(q,12);
	  enqueue(q,14);
	  enqueue(q,16);
	  enqueue(q,18);
	  enqueue(q,20);

	  printf("dequeue element :%d\n",dequeue(q));
	   printf("dequeue element :%d\n",dequeue(q));

	    enqueue(q,12);
	  enqueue(q,14);
	  getch();
	  }





