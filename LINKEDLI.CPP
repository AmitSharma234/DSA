#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#include<malloc.h>

struct node {
  int data;
  struct node *next;
  };

  void tra(struct node *p)
  {
   while(p!=NULL)
   {
     printf("Elemenet : %d\n",p->data);
     p=p->next;
     }
    }


 struct node * begin(struct node *head,int info)
 {
   struct node *p=(struct node *)malloc(sizeof(struct node));
   p->data=info;
   p->next=head;
   return p;
   }

   struct node * after(struct node * head,int x,int info)
   {
     struct node  *p,*ptr;
      ptr=(struct node *)malloc(sizeof(struct node));
      p=head;
     ptr->data=info;

     while(p->data!=x && p!=NULL)
     {
      p=p->next;
      }

      if(p->data==x)
      {
       ptr->next=p->next;
       p->next=ptr;
       }
       return head;
       }

  struct node * end(struct node * head,int info)
   {
     struct node  *p,*ptr;
      ptr=(struct node *)malloc(sizeof(struct node));
      p=head;
     ptr->data=info;

     while(p->next!=NULL)
     {
      p=p->next;
      }
       p->next=ptr;
       ptr->next=NULL;

       return head;
       }


       struct node * delbeg(struct node * head)
	{
	  struct node *p=head;
	  head=head->next;
	  free(p);
	  return head;
	  }

      struct node * delaf(struct node * head,int index)
      {
       struct node *p=head;
       struct node * q=head->next;

       for(int i=0;i<index-1;i++)
       {
	 p=p->next;
	 q=q->next;
	 }
	 p->next=q->next;
	 free(q);
	 return head;
	 }

	    struct node * delend(struct node * head)
      {
       struct node *p=head;
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
 struct node *head =(struct node*)malloc(sizeof(struct node));
  struct node *second =(struct node*)malloc(sizeof(struct node));
   struct node *third =(struct node*)malloc(sizeof(struct node));
    struct node *forth =(struct node*)malloc(sizeof(struct node));

   head->data=2;
   head->next=second;
   second->data=4;
   second->next=third;
   third->data=6;
   third->next=forth;
   forth->data=8;
   forth->next=NULL;
   int ch=0;

    printf(" 1.begin insert\n");
      printf(" 2.after insert\n");
	printf(" 3.end insert\n");
	  printf(" 4.begin deletion\n");
	    printf(" 5.after deletion\n");
	      printf(" 6.end deletion \n");
		 printf("Enter THE OPERATIONS\n");
		 scanf("%d\n",&ch);

   switch(ch)
   {
      case 1: tra(head);
	       head=begin(head,2);
		 printf("AFTER\n");
		  tra(head);
	       break;
       case 2: tra(head);
	      head=after(head,2,5);
	       printf("AFTER\n");
		  tra(head);
	      break;
       case 3: tra(head);
	       head=end(head,9);
		printf("AFTER\n");
		  tra(head);
	       break;
	 case 4: tra(head);
	       head=delbeg(head);
		printf("AFTER\n");
		  tra(head);
	       break;
       case 5: tra(head);
	      head=delaf(head,2);
	       printf("AFTER\n");
		  tra(head);
	      break;
       case 6: tra(head);
	       head=delend(head);
		printf("AFTER\n");
		  tra(head);
	       break;
       default: printf("no any operatiions");
	   break;
	   }

   getch();
   }