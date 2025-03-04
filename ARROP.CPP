#include<stdio.h>
#include<conio.h>

void deletion(int a[],int size,int index)
{
 for(int i=index;i<size-1;i++)
 {
  a[i+1]=a[i];
  }
  }

 int insertion(int a[],int size,int element,int capacity,int index)
 {
  if(size>=capacity)
  {
   return -1;
   }
   for(int i=size-1;i>=index;i--)
   {
    a[i+1]=a[i];
    }
    a[index]=element;
    return 1;
    }

    void dis(int a[],int size)
    {
     for(int i=0;i<size;i++)
     {
      printf("Elemnet : %d\n",a[i]);
      }
      }


    void main()
    {
    clrscr();
    int a[100]= {21,23,43,45,67};
    int size=5;
    int element=78;
    int capacity=100;
    int index=5;
    dis(a,size);
   // insertion(a,size,element,capacity,index);
   // size+=1;
//   deletion(a,size,index);
  // size-=1;
    printf("\n");
    dis(a,size);
    getch();
    }
