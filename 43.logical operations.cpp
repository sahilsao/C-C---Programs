#include<iostream>
using namespace std;

int main()
{
   int num1=30;
   int num2=40;
cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\43.logical operations.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
   if(num1>=40 || num2>=40)
      cout<<"OR If Block Gets Executed"<<endl;

   if(num1>=20 && num2>=20)
      cout<<"AND If Block Gets Executed"<<endl;

   if(!(num1>=40))
      cout<<"NOT If Block Gets Executed"<<endl;

   return 0;
}
