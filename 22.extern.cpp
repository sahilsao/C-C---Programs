#include <iostream>
#include "file.cpp"
int count ;
extern void write_extern();

main()
{
     cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\22.extern.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
   count = 5;
   write_extern();
   system("PAUSE");
}
