#include <iostream>
using namespace std;
// Function declaration
void func(void);

static int count = 10; /* Global variable */

main() {
    cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\12.static storage class.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
   while(count--) {
      func();
   }

   return 0;
}

// Function definition
void func( void ) {
   static int i = 5; // local static variable
   i++;
   std::cout << "i is " << i ;
   std::cout << " and count is " << count << std::endl;
}
