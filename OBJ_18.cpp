#include<iostream.h>
#include<conio.h>
struct student
{
  char name[10];
  char su1[10];
  char su2[10];
  char su3[10];
  int rollno,m,c,ds;
};

 struct student s1;

  void store()
   {
     cout<<"Enter name :";
     cin>>s1.name;
     cout<<"Enter rollno :";
     cin>>s1.rollno;
     cout<<"1. Subject Name:";
     cin>>s1.su1;
     cout<<"Enter mark :";
     cin>>s1.m;
     cout<<"2. Subject Name:";
     cin>>s1.su2;
     cout<<"Enter mark :";
     cin>>s1.c;
     cout<<"3. Subject Name:";
     cin>>s1.su3;
     cout<<"Enter mark :";
     cin>>s1.ds;
   }

 void disp()
 {
    cout<<"\n\n\n"<<"NAME "<<"\t\t"<<"Rollno"<<"\t\t"<<s1.su1<<"\t\t"<<s1.su2<<"\t\t"<<s1.su3;
    cout<<"\n---------------------------------------------------------------------\n";
    cout<<"\n"<<s1.name<<"\t\t"<<s1.rollno<<"\t\t"<<s1.m<<"\t\t"<<s1.c<<"\t\t"<<s1.ds;
 }

void main()
{
 clrscr();
 store();
 disp();
getch();
}
