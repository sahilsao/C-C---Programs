
#include <iostream.h>
#include <conio.h>
class Matrix
{
		private:
		int i,j,k;
public:
		int Add(int a[3][3],int b[3][3],int c[3][3]);
		int Sub(int a[3][3],int b[3][3],int c[3][3]);
		int Mul(int a[3][3],int b[3][3],int c[3][3]);
};

int  Matrix::Add(int a[3][3],int b[3][3],int c[3][3])
{
	cout<<"Addition of both Matrix = Matrix C::"<<endl;
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout<<"\t"<<c[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}

int Matrix::Sub(int a[3][3],int b[3][3],int c[3][3])
{
	cout<<"Subtraction of both the Matrix = Matrix C::"<<endl;
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			cout<<"\t"<<c[i][j];
		}
	cout<<endl;
	}
	return 0;
}
int  Matrix::Mul(int a[3][3],int b[3][3],int c[3][3])
{
	cout<<"Multiplication of both the Matrix=Matrix C::"<<endl;
	for (i=0;i<=2;i++)
	{
for (j=0;j<=2;j++)
		{
			c[i][j]=0;
			for(k=0;k<=2;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
			cout<<"\t"<<c[i][j];
		}
	cout<<endl;
	}
	return 0;
}

void main ()
{
int a[3][3],b[3][3],c[3][3],i,j;
clrscr();
cout<<"Enter the elements of Matrix A::"<<endl;
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			cin>>a[i][j];
		}
	}
cout<<"Enter the elements of Matrix B::"<<endl;
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			cin>>b[i][j];
		}
}
Matrix Z;
Z.Add (a,b,c);
Z.Sub (a,b,c);
Z.Mul (a,b,c);
getch();
}


