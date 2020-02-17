#include<iostream>
using namespace std;
int main()
{
int n1, n2, n3, n4;
cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\15.ternary operator.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
cout<<"Enter the 4 numbers: ";
cin>>n1>>n2>>n3>>n4;
int t1, t2, largest;

t1 = (n1 > n2? n1 : n2);
t2 = (n3 > n4? n3 : n4);
largest = (t1 > t2? t1 : t2);
printf("largest = %d",largest);
}
