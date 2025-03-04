 #include<stdio.h>
 #include<conio.h>
 int li(int a[],int n,int element)
 {
   for(int i=0;i<n;i++)
   {
    if(a[i]==element)
    {
      return i;
      }
       }
      return -i;
}

      void main()
      {
      clrscr();
      int a[]={89,567,45,23,-1,56};
      int n=6;
      int element=56;
   int sea =li(a,n,element);
   printf("the %d element is an %d index",element,sea);
      getch();
      }