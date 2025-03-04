#include<stdio.h>
#include<conio.h>

int binarysearch(int a[],int size,int element)
{
  int mid,high,low;
  low=0;
  high=size-1;
  while(low<=high)
  {
  mid=(low+high)/2;
  if(a[mid]==element)
  {
   return mid;
   }
   if(a[mid]<element){  //less than
     low=mid+1;
     }
   else{
      high = mid-1;
      }
      }
      return -1;
      }

  void main()
  {
   clrscr();

   int a[]={12,45,79,89,347,678,799,999};
   int size=8;
   int element=678;
   int seidx=binarysearch(a,size,element);
  printf("The element %d was at index %d\n",element,seidx);
  getch();
  }