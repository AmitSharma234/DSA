#include<stdio.h>
#include<conio.h>

void pf(int a[],int n)
{
 for(int i=0;i<n;i++)
 {
  printf("%d\n",a[i]);
  }
 }

 void pa(int a[],int n)
 {
  int key,j;
  for(int i=0;i<n;i++)
  {
  key=a[i];
  j=i-1;

  while(j>=0  && a[j]>key)
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
 int a[]={68,89,57,90,-1,567};
 int n=6;
 printf("Before:\n");
 pf(a,n);
 pa(a,n);
 printf("After:\n");
 pf(a,n);
 getch();
 }


