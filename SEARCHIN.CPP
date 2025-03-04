#include<stdio.h>
#include<conio.h>

int linear(int a[],int size,int element)
{
 for(int i=0;i<size;i++)
 {
   if(a[i]==element){
     return i;
     }
     }
     return -1;
     }



  int binary(int a[],int size,int element)
  {


   int mid,high,low;
     low=0;
  high=size-1;
   while(low<=high)
   {
   mid=(high+low)/2;
    if(a[mid]==element)
    {
     return mid;
     }
     if(a[mid]<element)
     {
      low=mid+1;
      }
      else{
	high=mid-1;
	}
	}
	return -1;
	}


   void main()
   {
   clrscr();
      int a[]={13,43,34,56,78,89};
      int size=6;
      int element=78;
      int sidx = binary(a,size,element);
      printf("the value %d is at index %d \n",element,sidx);
      getch();
      }