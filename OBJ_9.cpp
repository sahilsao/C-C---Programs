#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class Sarray
{
	private:
		int i,j,t,n[5];
	public:
		int Input();
		int Find();
		int Sort();
		int Search();
};
int Sarray :: Input()
{
	cout<<"ENTER NUMBERS:: "<<endl<<endl;
	for(i=0;i<=4;i++)
		{
			cin>>n[i];
}
	cout<<endl<<endl;
	return 0;
}
int Sarray::Sort()
{			t=0;
			cout<<"SORTED ELEMENTS::"<<endl;
			for(i=0;i<=3;i++)
			{
			              for(j=0;j<=3-i;j++)
				{
					if(n[j]<n[j+1])
				{
				 t=n[j];
						 n[j]=n[j+1];
					 n[j+1]=t;
					}
				}
			}
			for(i=0;i<=4;i++)
			{
			cout<<endl;
			cout<<n[i];
			}
			return 0;
}
int Sarray::Find()
{
cout<<endl<<endl<<"LARGEST ELEMENT = ";	
             cout<<n[0]<<endl<<endl;
	 return 0;
}
int Sarray::Search()
{
             int a,b=0;
	cout<<"ENTER THE NUMBER WHICH TO BE SEARCHED = ";
	cin>>a;cout<<endl;
	cout<<"             "<<"RESULT"<<endl<<endl;
	for (i=0;i<=4;i++)
	{
	  if (n[i]==a)
		  {
		  b=b+1;
		  cout<<"FOUND AT POSITION NO.=";
        i++;
		  cout<<i<<endl;
                          }
	}
	if (b<1)
	cout<<"NO MATCH, TRY LATER BUDDY";
	return 0;
}
void main()
{
clrscr();
Sarray S;
S.Input();	
 S.Sort ();
S.Find ();
S.Search();
getch();
}
