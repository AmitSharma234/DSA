#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct queue{
   int size;
   int f;
   int r;
   int *arr;
};


int isempty(struct queue *q)
{
  if(q->r==q->f)
  {
    return 1;
    }
    return 0;
    }


 int isfull(struct queue *q)
 {
 if(q->r=size-1)
 {
  return 1;
  }
  return 0;
  }

  void enqueue(struct queue*q,int val)
{
    if(isfull(q){
	printf("queue is full");
	}

	else{
	    q->r++;
	    q->arr[q->r]=val;
	    }
	}




  int dequeue(struct queue *q)
  {
    int a=-1;
    if(isempty(q)){
      printf("queue is empty");
      }
      else{
	  q=f++;
	  q=q->arr[q->f];
	  }
	  return a;
      }

 void main()
 {
    clrscr();
     struct queue q;
     q.size=10;
     q.r=q.f=-1;
     q.arr=(int *)malloc(q.size*sizeof(int));

     enqueue(&q,12);
     enqueue(&q,17);

     printf("deletion element:%d\n",dequeue(&q));
     printf("deletion element:%d\n",dequeue(&q));

    if(isempty(q)){
      printf("empty");
      }

      if(isfull(q)){
	printf("full");
	}

	getch();
	}



