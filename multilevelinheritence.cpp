#include<iostream.h>
#include<conio.h>
  class abc
  {
   public:
   void display1()
     {
      cout<<"class abc method"<<endl;
      }
     };
     class bcd: public abc
     {
     public:
     void display2()
     {
      cout<<"class bcd method"<<endl;
      }
     };
     class cde: public bcd
     {
      public:
       void display3()
       {
        cout<<"class cde method"<<endl;
        }
        };
        void main()
        {
         cde c;
         c.display1();
         c.display2();
         c.display3();
         getch();
         }
