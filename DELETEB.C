				      #include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node {  int data;
	     struct node *next;
	   };

void tra(struct node *)
{
struct node *p;
  while(p!=NULL){
  printf("%d\n",p->data);
  p=p->next;

  }
  }


struct node* df(struct node* head)
{
  struct node *ptr;
   if(head==NULL){
   printf("list is empty");
   }else{
     ptr=head;
     head=head->next;
     free(ptr);
     }
     return head;
  }
void main(){
      clrscr();
      struct node * head;
      struct node * second;
      struct node * third;
      struct node * forth;

      head=(struct node *) malloc(sizeof(struct node));
      second=(struct node *) malloc(sizeof(struct node));
      third=(struct node *) malloc(sizeof(struct node));
      forth=(struct node *) malloc(sizeof(struct node));

     head->data=3;
     head->next=second;
     second->data=6;
     second->next=third;
     third->data=9;
     third->next=forth;
     forth->data=12;
     forth->next=NULL;
     tra(head);
   head= df(head);
   tra(head);
     getch();
     }
