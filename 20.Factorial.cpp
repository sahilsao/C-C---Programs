#include <iostream>
using namespace std;
int factorial(int);

int main()
{
    int num;
    int result;
 cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\20.factorial.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
    cout<<"Enter a number to find it's Factorial: ";
    cin>>num;
    if (num < 0)
    {
        cout<<"Factorial of negative number not possible\n";
    }
    else
    {
        result = factorial(num);
        cout<<"The Factorial of "<<num<<" is "<<result;
    }
    return 0;
}
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return(num * factorial(num - 1));
    }
}
