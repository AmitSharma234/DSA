#include<iostream.h>
#include<conio.h>
 int a=10;
 void main()
 {
 clrscr();
 int a=5;
 cout<<"local variable;"<<a<<endl;
 cout<<"global variable:"<<::a<<endl;
 getch();
 }