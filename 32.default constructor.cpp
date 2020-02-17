#include <iostream>
using namespace std;
class Defalt
{
public:
int x;
int y;
Defalt()
  {
    x=y=0;
  }
};
int main()
{
    cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\32.default constructor.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
Defalt A;
cout << "Default constructs x,y value::"<<
A.x <<" , "<< A.y << "\n";
return 0;
}
