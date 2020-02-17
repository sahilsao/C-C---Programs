#include<iostream.h>
#include<conio.h>

class FATHER;
class MOTHER
{
	private:
		float s_m;
	public:
		float Input()
		{
			cout<<"Input Salary of Mother = ";
			cin>>s_m;

			return 0;
		}
		~MOTHER();

		friend  float Sum(MOTHER M , FATHER F);
};

class FATHER
{
	private:
		float s_f;
	public:
		float Input()
		{
			cout<<"Input Salary of Father = ";
			cin>>s_f;

			return 0;
		}
		~FATHER();

		friend  float Sum(MOTHER M ,FATHER F);
};
float Sum(MOTHER M, FATHER F)
{
	int c;
	c=M.s_m+F.s_f;
return c;
}

MOTHER :: ~MOTHER()
{
};

FATHER :: ~FATHER()
{
};

void main()
{
clrscr();

MOTHER M;
FATHER F;
M.Input();
F.Input();

cout<<endl<<"Sum of Salary = "<<Sum(M,F);
getch();
}
