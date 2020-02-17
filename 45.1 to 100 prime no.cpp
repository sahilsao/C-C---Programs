#include<iostream>
using namespace std;
int main()
{
int i,j,f;
cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\45.1 to 100 prime no.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
cout<<"Prime numbers between 1 to 100 are:\n";
for(i=2;i<=100;i++)
{
f=0;
for(j=2;j<i;j++)
{
if(i%j==0)
{
f=1;
break;
}
}
if(f==0)
cout<<i<<" ";
}
return 0;
}
