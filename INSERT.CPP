#include<stdio.h>
#include<conio.h>
void pa(int a[],int n)
{
 for(int i=0;i<n;i++)
 {
  printf("%d\n",a[i]);
  }
 }

 void insert(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
   int key=a[i];
   int j=i-1;
   while(j>=0 && a[j]>key)
   {
     a[j+1]=a[j];
     j--;
     }
     a[j+1]=key;
     }
     }


void main()
{
clrscr();
 int a[]={26,90,-12,56,78};
  int n=5;
  printf("before :\n");
 pa(a,n);
 insert(a,n);
 printf("After:\n");
 pa(a,n);
 getch();
 }