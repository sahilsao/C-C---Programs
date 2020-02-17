
#include <iostream>
using namespace std;
int fibo(int);

int main()
{
    int num;
    int result;
 cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\19.Fibonacci_using_recursion.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
    cout<<"Enter the nth number in fibonacci series: ";
    cin>>num;
    if (num < 0)
    {
        cout<<"Fibonacci of negative number is not possible.\n";
    }
    else
    {
        result = fibo(num-1);
        cout<<"The "<<num<<" number in fibonacci series is "<<result;
        cout<<"\nFibonacci of "<<num<<" is ";
        for(int i = 0;i<num;i++){
        cout<<fibo(i)<<" ";
        }
    }
    return 0;
}
int fibo(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return(fibo(num - 1) + fibo(num - 2));
    }
}

