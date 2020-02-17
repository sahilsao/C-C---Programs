#include<iostream>
using namespace std;

class base {
    int val1, val2;
public:

    void get() {
        cout << "Enter two values:";
        cin >> val1>>val2;
    }
    friend float mean(base ob);
};

float mean(base ob) {
    return float(ob.val1 + ob.val2) / 2;
}

int main() {
    cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\30.friend function.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
    base obj;
    obj.get();
    cout << "\n Mean value is : " << mean(obj);
    return 0;
}
