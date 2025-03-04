#include<iostream.h>
#include<conio.h>
class l{
int m,cm;
public:
   l(){}
   i(int a,int b)
   {
   m=a;
   cm=b;
   }
   void getdata(){
   cout<<"enter m:";
   cin>>m;
   cout<<"enter cm:";
   cin>>cm;
   }
   void putdata(){
   cout<<"m:"<<m<<endl;
   cout<<"cm:"<<cm<<endl;
   }
   operator int(){
   return m;
   }
   };
   void main(){
   l l1;
   l1.getdata();
   int i =11;
   cout<<"i:"<<i<<endl;
   l1.putdata();
   getch();
   }
