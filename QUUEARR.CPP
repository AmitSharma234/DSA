#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct queue {
  int size;
  int r;
  int f;
  int *arr;
  };

  int isepmty(struct queue *q)
  {
   if(q->f==q->r)
   {
     return 1;
     }
     return 0;
     }

    int isfull(struct queue * q)
    {
     if(q->r==q->size-1)
     {
       return 1;
       }
       return 0;
       }

       void enqueue(struct queue *q,int val)
       {
	if(isfull(q)){
	  printf("Overflow\n");
	  }
	  else{
	     q->r++;
	     q->arr[q->r]=val;
	     }
	     }

	     int dequeue(struct queue *q)
	     {
	      if(isempty(q)){
	       printf("Underflow\n");
	       }
	       else{
		 q->f++;
		 int a=q->arr[q->f];
		 }
		 return a;
		 }

	       void main()
	       {
		struct queue *q1=(struct queue*)malloc(sizeof(struct queue));
		q1->size=5;
		q1->f=-1;
		q1->r=-1;
		q1->arr=(int *)malloc(q->size * size(int ));
		enqueue(q1,56);
		enqueue(q1,77);
		enqueue(q1,78);

		int de=dequeue(q1);
		printf("dequeue element :%d",de);
		getch();
		}