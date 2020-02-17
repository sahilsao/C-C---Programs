#include <iostream>
using namespace std;

int main () {
   int  var;
   int  *ptr;
   int  **pptr;
cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\48.pointer to pointer.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
   var = 3000;

   // take the address of var
   ptr = &var;

   // take the address of ptr using address of operator &
   pptr = &ptr;

   // take the value using pptr
   cout << "Value of var :" << var << endl;
   cout << "Value available at *ptr :" << *ptr << endl;
   cout << "Value available at **pptr :" << **pptr << endl;

   return 0;
}
