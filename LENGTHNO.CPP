#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node {
 int data;
struct node *next;
 };

 void print();

void main()
{
      clrscr();
      struct node * head;
      struct node * second;
      struct node * third;
      struct node * forth;
      struct node * ev;
      head=(struct node *) malloc(sizeof(struct node));
      second=(struct node *) malloc(sizeof(struct node));
      third=(struct node *) malloc(sizeof(struct node));
      forth=(struct node *) malloc(sizeof(struct node));
      ev=(struct node*)malloc(sizeof(struct node));
     head->data=3;
     head->next=second;
     second->data=6;
     second->next=third;
     third->data=9;
     third->next=forth;
     forth->data=12;
     forth->next=ev;
     ev->data=15;
     ev->next=NULL;
     print();
     getch();
}

void print()
{
  struct node * temp;
  int count=0;
//  temp=head;
  while(temp!=NULL)
  {
    temp=temp->next;
    count++;
    }
    printf("The Length Of Nodes :%d",count);
  }