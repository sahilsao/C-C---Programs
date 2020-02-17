#include<iostream.h>
#include<conio.h>
  class abc
  {
   public:
   int a;
   void get()
   {
    cout<<"enter the value of a=";
    cin>>a;
    }
  };
  class bcd: public abc
     {
      public:
      void display()
      {
       cout<<"value of a="<<a;
     }
     };
      void main()
      {
       bcd b;
       b.get();
       b.display();
       getch();
     }
