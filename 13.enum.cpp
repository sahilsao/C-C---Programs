#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\13.enum.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
    week today;
    today = Wednesday;
    cout << "Day " << today+1;
    return 0;
}
