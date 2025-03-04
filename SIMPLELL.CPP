#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

struct node {
    int data;
    struct node *ptr;
    };
void main()
{
  struct node * head;
  struct node* second;
  struct node* third;
  struct node* forth;
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*) malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
forth=(struct node*)malloc(sizeof(struct node));

head->data=3;
head->ptr=second;
second->data=6;
second->ptr=third;
third->data=9;
third->ptr=forth;
forth->data=12;
forth->ptr=NULL;
printf("%d\n",head->data);
printf("%d\n",second->data);
printf("%d\n",third->data);
printf("%d\n",forth->data);
getch();
}
