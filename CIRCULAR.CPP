#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct cqueue{
   int size;
   int f;
   int r;
   int *arr;
   };

   int isfull(struct cqueue *q)
   {
     if((q->r+1)%q->size ==q->f)
     {
      return 1;
      }
      return 0;
      }


     int isempty(struct cqueue *q)
     {
      if(q->r==q->f)
      {
       return 1;
       }
       return 0;
       }


       void enqueue(struct cqueue*q,int val)
       {
	if(isfull(q))
	{
	 printf("cqueue is full\n");
	 }
	 else{
	  q->r=(q->r+1)%q->size;
	  q->arr[q->r]=val;
	  }
	  }

	  int dequeue (struct cqueue *q)
	  {
	   int a=-1;
	   if(isempty(q))
	   {
	    printf("cqueue is empty\n");
	    }
	    else
	    {
	     q->f=(q->f+1)%q->size;
	     a=q->arr[q->f];
	     return a;
	     }
	     }

	     void main()
	     {

	     clrscr();
	struct cqueue *q=(struct cqueue*)malloc(sizeof(struct cqueue));
	q->r=q->f=0;
	q->size=5;
	q->arr=(int *)malloc(q->size*sizeof(int));

	enqueue(q,12);
		enqueue(q,14);
			enqueue(q,16);
				enqueue(q,18);
					enqueue(q,20);

	printf("popped element : %d\n",dequeue(q));
		printf("popped element : %d\n",dequeue(q));

			enqueue(q,14);
			enqueue(q,16);

			getch();
			}
