#include<iostream>
using namespace std;

// Inline function without class
inline float cube(float x) {
    return (x * x * x);
}

int main() {
    float val1, val2;
 cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\29.inline function.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
    cout << "Enter two values:";
    cin >> val1>>val2;

    cout << "\n\nCube value for val1 is: " << cube(val1) << endl;
    cout << "\n\nCube value for val2 is: " << cube(val2) << endl;
    return 0;
}
