#include<conio.h>
#include<stdio.h>
int linear(int arr[],int size,int element)   {
 for(int i=0;i<size;i++)
   {
       if(arr[i]==element){
		  return i;
		   }
    }
    return -1;
  }
void main()
{
 clrscr();
  int arr[]={1,3,7,65,34};
  int element=34;
  int size=5;
  int searchidx= linear(arr,size,element);
  printf("The element %d was found at index %d\n",element,searchidx);
  getch();
  }