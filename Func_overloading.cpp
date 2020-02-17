#include<iostream.h>
#include<conio.h>

  class abc
  {
   public:

   void show(int i)
    {
     cout<<"value of a="<<i<<endl;
    }
     void show(int j,int k)

      {
         cout<<"value of a="<<j<<",b="<<k;
       }
    };
        void main()
        {
         abc ab;
         int a,b;
         cout<<"enter the value of a and b=";
          cin>>a>>b;
         ab.show(a);
         ab.show(a,b);
         getch();
      }