#include <iostream>
using namespace std;
int main () {

   int  var[] = {10, 100, 200};
   int i, *ptr[3];
cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\38.access array using pointer.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
   for ( i = 0; i < 3; i++) {
      ptr[i] = &var[i]; /* assign the address of integer. */
   }

   for ( i = 0; i < 3; i++) {
      cout<<"Value of var = "<< i<<" is "<< *ptr[i]<<endl;
   }

   return 0;
}
