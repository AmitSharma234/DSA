#include<stdio.h>
#include<conio.h>
//#include<stdlib.h>

void dis(int a[],int size)
{                                     //traversal
 for(int i=0;i<size;i++)
 {
  printf("element:%d\n",a[i]);
   }
 }

 int insertion(int a[],int size,int element,int capacity,int index)
 {
  if(size>=capacity)

  {
   return -1;                    //insertion at array
  }
  for(int i=size-1;i>=index;i--)
  {
   a[i+1]=a[i];
   }
   a[index]=element;
   return 1;
   }

void deletion(int a[],int size,int index)
 {
  for(int i=index;i<size-1;i++)
  {                                //deleteion array
   a[i]=a[i+1];
   }
   }

void main()
{
clrscr();
 int a[100]={2,4,6,8,89};
 int size=5, element=98, index=0;
 int capacity=100;
 dis(a,size);
 deletion(a,size,index);
 size-=1;
 printf("AFTER\n");
 dis(a,size);
 getch();
 }