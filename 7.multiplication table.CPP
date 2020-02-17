#include<iostream>
using namespace std;
int main()
{
  int num,i,table=1;
  cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\7.multiplication table.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
  cout<<"Enter the number: ";
  cin>>num;
  for(i=1;i<=10;i++)
 {
  table=num*i;
  cout<<num<<"*"<<i<<"="<<table<<endl;
 }
    return 0;
    }
