#include<stdio.h>
#include<conio.h>
void pa(int a[],int n)
{
 for(int i=0;i<n;i++)
 {
 printf("%d\n",a[i]);
 }
 }

void in(int a[],int n)
{
  int key,j;
   for(int  i=0;i<n;i++) {
    key=a[i];
    j=i-1;
    while(j>=0 && a[j]>key){
    a[j+1]=a[j];
    j--;
    }
    a[j+1]=key;
    }
    }


void main()
{
clrscr();
 int a[]={27,57,-12,79,23};
 int n=5;

 pa(a,n);
 in(a,n);
 pa(a,n);
 getch();
 }