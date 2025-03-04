#include<iostream.h>
#include<conio.h>
class b{
public:   void fun1(){          //base class
    cout<<"Amit in A"<<endl;
    }
    };
class p1:public b{                //derived1 class inherit with base
public: void fun2(){
      cout<<"Amit in B"<<endl;
      }
      };
class p2:public b{                //derived2 class inherit with base
public:void fun3(){
   cout<<"Amit in C"<<endl;
   }
   };
   void main() {
   clrscr();
    p1 s1;             //derive1 obj
    p2 s2;             //derive2 obj
    s1.fun1();    //base
    s1.fun2();    //derived1
    cout<<endl;
    s2.fun1();    //base
    s2.fun3();    //derived2
    getch();
    }
