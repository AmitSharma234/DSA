#include<stdio.h>
#include<conio.h>

int linearsearch(int a[],int size,int element)
{
   for(int i=0; i<size;i++)
   {
    if(a[i]==element){
       return i;
       }
     }
     return -1;
  }
 void main()
 {
  clrscr();
   int a[]={23,43,53,745,78,89};
  int size=6;
  int element=745;
   int searchidx =linearsearch(a,size,element);
   printf("the element %d is found at %d index\n",element ,searchidx);
   getch();
   }

