#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node * next;
  };

  void tra(struct node *p)
  {
   while(p!=NULL)
   {
    printf("Element : %d\n",p->data);
    p=p->next;
    }
    }

    struct node * begin(struct node *head,int info)
    {
      struct node *p=(struct node*)malloc(sizeof(struct node));
      p->data=info;
      p->next=head;
      return p;
      }


     struct node *delbeg(struct node *head)
     {
      struct node *p=head;
      head=head->next;
      free(p);
      return head;
      }


     struct node * after(struct node * head,int x,int info)
     {
       struct node * p=head;
       struct node *ptr=(struct node*) malloc(sizeof(struct node));
       ptr->data=info;

       while(p->data!=x && p!=NULL)
       {
	p=p->next;
	}
	ptr->next=p->next;
	p->next=ptr;
	return head;
	}


	struct node * end(struct node * head,int info)
	{
	 struct node * p=head;
	 struct node*ptr=(struct node*)malloc(sizeof(struct node));
	 ptr->data=info;
	 while(p->next!=NULL)
	 {
	  p=p->next;
	  }
	  p->next=ptr;
	  ptr->next=NULL;
	  return head;
	  }


	struct node * delaf1(struct node* head,int index)
	{
	 struct node *p=head;
	 struct node *q=head->next;

	 for(int i=0;i>index-1;i++)
	 {
	  q=q->next;
	  p=p->next;
	  }
	  p->next=q->next;
	  free(q);
	  return head;
	  }



















	struct node * delaf(struct node * head,int index)
	{
	 struct node * p=head;
	 struct node *q=head->next;

	 for(int i=0;i<index-1;i++)
	 {
	  p=p->next;
	  q=q->next;
	  }
	  p->next=q->next;
	  free(q);
	  return head;
	  }


	  struct node * delend1(struct node *head)
	  {
	   struct node * p=head;
	   struct node * q=head->next;

	   while(q->next!=NULL)
	   {
	    p=p->next;
	    q=q->next;
	    }
	    p->next=NULL;
	    free(q);
	    return head;
	    }


void main()
{
clrscr();
 struct node * head;
 struct node * second;
 struct node * third;
 struct node * forth;

 head=(struct node*)malloc (sizeof (struct node));
 second=(struct node*)malloc(sizeof(struct node));
 third=(struct node*)malloc(sizeof(struct node));
 forth=(struct node*)malloc(sizeof(struct node));

 head->data=2;
 head->next=second;
 second->data=4;
 second->next=third;
 third->data=6;
 third->next=forth;
 forth->data=8;
 forth->next=NULL;
 tra(head);
 printf("AFTER:\n");
 head=delend1(head);
 tra(head);
 getch();
 }