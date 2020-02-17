#include<iostream>
using namespace std;
int main()
{

int i,j,sp=4;
cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\40.pattern.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
for(i=1;i<=3;i++)
{
	for(j=1;j<=i;j++)
	{
	cout<<j;
	}
	cout<<endl;
	}

for(i=1;i<=3;i++)
{
	for(j=i;j<=sp-1;j++)
	{
	cout<<" ";
	}
	for(j=1;j<=i;j++)
	{
	cout<<"* ";
	}
	cout<<endl;
	}
	return 0;
}
