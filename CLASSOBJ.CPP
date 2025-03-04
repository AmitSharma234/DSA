#include<iostream.h>
#include<conio.h>
class a{
int x,y;
static int z;
public:
  void get()
  {
  cout<<"enter the value of x,y:";
  cin>>x>>y;
  z++;
  }
  void put()
  {
  cout<<"value of x:"<<x<<endl;
  cout<<"value of y:"<<y<<endl;
  }
  static void print()
  {
  cout<<"z:"<<z;
  }
  };
  void main()
  {
  a a1,a2,a3;
  clrscr();
  a1.get();
  a1.put();
// a::print();
  getch();
  }