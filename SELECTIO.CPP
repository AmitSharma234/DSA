#include<stdio.h>
#include<conio.h>
void pa(int a[],int n)
{
 for(int i=0;i<n;i++)
 {
  printf("%d\n",a[i]);
  }
 }

 void selection(int a[],int n)
{
  int idxmin,temp;
  for(int i=0;i<n-1;i++)  //pass=n-1
     {
      idxmin=i;     //minimum
      for(int j=i+1;j<n;j++)
      {
       if(a[j] < a[idxmin]){
	 idxmin=j;
     }
     }
     temp=a[i];
     a[i]=a[idxmin];
     a[idxmin]=temp;
     }
    }

void main()
{
clrscr();
 int a[]={26,90,-12,56,78};
  int n=5;
  printf("before :\n");
 pa(a,n);
 selection(a,n);
 printf("After:\n");
 pa(a,n);
 getch();
 }