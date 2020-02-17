#include <iostream>
using namespace std;
                    // function definition to swap the values.
void swap(int &x, int &y)
{
int temp;
    temp = x;       /* save the value at address x */
    x = y;          /* put y into x */
    y = temp;       /* put x into y */
return;
}
                    // function declaration
void swap(int &x, int &y);
int main ()
{
                    // local variable declaration:
    int a = 100;
    int b = 200;
     cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\26.call by reference.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
    cout << "Before swap, value of a :" << a << endl;
    cout << "Before swap, value of b :" << b << endl;
                /* calling a function to swap the values using variable reference.*/
    swap(a, b);
    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;
return 0;
}
