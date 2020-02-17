#include <iostream.h>
#include <conio.h>
class PATTERN
{
	public:
	int A_Alpha();
	int B_123();
	int C_Star();
	int D_Pascal();
};
void main ()
{
clrscr();
PATTERN p;
p.A_Alpha();
p.B_123();
p.C_Star();
p.D_Pascal();
getch();
}
PATTERN::A_Alpha()
{
	int k;
	char a,b,c,d,i;
	for (i='A';i<='G';i++)
	cout<<i;
	cout<<endl;
	for(k=1;k<=3;k++)
	{
		for(c='A';c<='D'-k;c++)
		{
			cout<<c;

		}
		for(b=1;b<=2*k-1;b++)
		{
			cout<<" ";	

		}
		for(d='D'+k;d<='G';d++)


		{
			cout<<d;
		}
		cout<<endl;
	}
	cout<<endl<<endl;
}

PATTERN::B_123()
{
	int i,j;
	for (i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	cout<<endl<<endl;
}

PATTERN::C_Star()
{
	int i,j,k;
	for (i=1;i<=3;i++)
	{
		for (k=1;k<=3-i;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<" *";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
}

PATTERN::D_Pascal()
{
	int n[5][5],row,col;
	for (row=0;row<=4;row++)
	{
		for(col=0;col<=row;col++)
	
   	            {
			if (col==0||row==col)
				n[row][col]=1;
			else
				n[row][col]=n[row-1][col-1]+n[row-1][col];

		}
}
	for (row=0;row<=4;row++)
	{
		for(col=0;col<=row;col++)
		{
		 cout<<n[row][col];
		}
		cout<<endl;
	}
} 
