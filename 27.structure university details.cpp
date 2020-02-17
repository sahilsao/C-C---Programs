#include <iostream>
#include<stdlib.h>
using namespace std;

struct university
{
    char name[500];
    int id;
    int contactno;
}u[5];

int main()
{
     cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\27.structure university details.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
    cout << "****Enter information****" << endl;
    for(int i=1;i<=5;i++)
    {
    cout<<"Enter "<<i<<" University name: ";
    cin.getline(u[i].name,500);             //for printing string with white spaces
    cout << "Enter "<<i<<" University ID: ";
    cin >> u[i].id;
    cout << "Enter "<<i<<" Contact No.: ";
    cin >> u[i].contactno;
    cin.ignore();
    system("cls");

    }
         cout << "\n****Displaying Information****" << endl;
         for(int i=1;i<=5;i++)
    {
    cout << "University name: " << u[i].name << endl;
    cout << "University ID: " << u[i].id << endl;
    cout << "Contact No.: " << u[i].contactno << endl;
    }
    return 0;
}
