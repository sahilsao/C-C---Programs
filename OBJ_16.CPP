#include<conio.h>
#include<iostream.h>
class mother
{
   int a;
   public:
      mother()
      {
      cout<<"\nEnter mothers salary : ";
      cin>>a;
      }
      friend class father;
};
class father
{
   int b;
   public:
      father()
      {
      cout<<"\nEnter fathers salary : ";
      cin>>b;
      }
      void add(mother a1)
      {
              cout<<"\nSum of the salary of mother and father is = "<<a1.a+b;
       }
};
void main()
{
   clrscr();
   mother A;
   father B;
   B.add(A);
   getch();
}
