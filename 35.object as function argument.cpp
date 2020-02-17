#include <iostream>
using namespace std;
class Convert
{
	float cm, m;
	public :
		void input()
		{
			cout << "\nPlease enter value in meter to convert in centimeter : ";
			cin >> m;
		}
		void conv_cm(Convert obj)
		{
			obj.cm=obj.m*100;
			cout << "\nIn centimeter : " << obj.cm<<endl;
		}
};
int main ()
{
    cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\35.object as function argument.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
	Convert obj1, obj2;
	obj1.input();
	obj1.conv_cm(obj1);
	obj2.input();
	obj2.conv_cm(obj2);
	cout << "\n";
	return 0;
}
