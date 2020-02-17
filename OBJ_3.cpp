#include<iostream.h>
#include<conio.h>
class odh
{
	private:
		int i,k,r,q,c;
		char j;
	public:
		int output()
		{
			cout<<"    "<<"DECIMAL" <<"  "<<" OCTAL " <<" HEXADECIMAL" <<endl<<endl;

			for (i=1;i<=10;i++)
			{
			if (i==10)
			{
				cout<<"\t"<<i;
			}
			else
				cout<<"\t"<<i;
				if (i<8)
				{
					cout<<"\t"<<i;
				}
				else
				{
					r=i%8;
					q=i/8;
					cout<<"\t"<<q<<r;
				}
				if(i==9)
				{
					i=65;
					j=i;
					cout<<"\t"<<j<<endl<<endl;
				}
				else
					cout<<"\t"<<i<<endl<<endl;

			}
		}
};
void main()
{
clrscr();
odh g;
g.output();
getch();
}
