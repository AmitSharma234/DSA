#include<stdio.h>
#include<conio.h>
void printa(int a[],int n)
{
 for(int i=0;i<n;i++)
 {
 printf("%d\n",a[i]);
 }
 }

 int partion(int a[],int low,int high)
 {
 int temp;
 int pivot=a[low];
 int i=low+1;
 int j=high;

 do{
 while(a[i]<=pivot){
    i++;
    }
 while(a[j]>pivot){
    j--;
    }

    if(i<j){
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
     }
   } while(i<j);


   temp=a[low];
   a[low]=a[j];
   a[j]=temp;
   return j;
    }
void quicksort(int a[],int low,int high)
{
  int partidx;
  if(low<high)
  {
  partidx = partion(a,low,high);
  quicksort(a,low,partidx-1);
  quicksort(a,partidx+1,high);
   }
 }





void main()
{
clrscr();
  int a[]={12,52,67,89,46};
  int n=5;
  printf("Before:\n");
  printa(a,n);
  quicksort(a,0,n-1);
  printf("After:\n");
  printa(a,n);
 getch();
 }