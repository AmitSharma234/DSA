#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct queue {
   int size;
   int f;
   int r;
   int *arr;
   };

void enqueue(struct queue *q,int val)
{
   if(n==NULL)
   {
      printf("Queue is Full");
      }
      else{
	 q->r++;
	 q->arr[q->r]=val;
	 }
      }

   int isfull(struct queue *q)
   {
     if(q->r==q->size-1)
     {
       return 1;
       }
       return 0;
     }
       F
     int isempty(struct queue *q)
     {
	if(q->r == q->f)
	{
	   return 1;
	   }
	   return 0;
	 }


  int dequeue(struct queue *q)
  {
     int a=-1;
     if(isempty(q))
     {
       printf("this is queue is empty");
       }
    else{
      q->f++;
      q=q->arr[q->f];
      }
      return a;
      }

      void main()
      {
      clrscr();

      struct queue q;
      q.size = 100;
      q.f=q.r=-1;
      q.arr=(int *)malloc(q.size*sizeof(int));
      enqueue(&q,12);
      enqueue(&q,17);
      enqueue(&q,9);

      printf("deletion element:%d\n",dequeue(&q));
      printf("deletion element:%d\n",dequeue(&q));

      if(isempty(q))
      {
       printf("queue empty");
       }

       if(isfull(queue))
       {
	printf("queue full");
	}

	getch();
	}
