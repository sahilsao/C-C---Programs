#include <iostream>
using namespace std;
void display(int age)
{
    cout<<age;
}

int main()
{
    int ageArray[] = { 2, 3, 4 };
    cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\37.passing array to function.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
    display(ageArray[2]); //Passing array element ageArray[2] only.
    return 0;
}
