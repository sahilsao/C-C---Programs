#include<iostream>
using namespace std;
class student
{
    private:
    char name[20],reg[20],branch[20];
    int sem;
    public:
    void input();
    void display();
};
    void student::input()
    {
      cout<<"Enter Name: ";
      cin>>name;
      cout<<"Enter Registration no: ";
      cin>>reg;
      cout<<"Enter Branch: ";
      cin>>branch;
      cout<<"Enter Semester: ";
      cin>>sem;
    }
      void student::display()
     {
         cout<<"\n****Details of student****";
      cout<<"\nName: "<<name;
      cout<<"\nRegistration No: "<<reg;
      cout<<"\nBranch: "<<branch;
      cout<<"\nSemester: "<<sem;
     }
      int main()
      {
          cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\9.class_stu_det.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
       student s;
       s.input();
       s.display();
       return 0;
    }
