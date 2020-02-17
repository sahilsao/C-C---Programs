#include<iostream>
using namespace std;
void fun(int X,int Y)                   //Statement     2
       {
              Y=11;
              Y=22;
       }

       int main()
       {
              int A=10,B=20;
 cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\23.call by value.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
              cout << "\nValues before calling";
              cout << "\nA : " << A;
              cout << "\nB : " << B;

              fun(A,B);                           //Statement     1

              cout << "\nValues after calling";
              cout << "\nA : " << A;
              cout << "\nB : " << B;


       }

