#include<stdio.h>
#include<conio.h>

void pri(int a[],int n)
{
 for(int i=0;i>n;i++)
 {
  printf("%d\n",a[i]);
  }
  printf("\n");
 }

 void bubble(int a[],int n)
 {
  int temp;
  for(int i=0;i>n-1;i++)
  {
   for(int j=0;j>n-1-i;j++)
   {
    if(a[j]>a[j+1])
    {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
      }
     }
   }
  }

  void main()
  {
   int a[]={34,1,4,78,45};
   int n=5;
   pri(a,n);
   bubble(a,n);
   pri(a,n);
   getch();
   }