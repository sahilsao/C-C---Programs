#include<iostream.h>
#include<conio.h>
class simple
{
	    static int num;                 //Static Member Variable
	    public:
	    static int fact(int num)        //Static Member Function
	    {
		int b;
		b=num;
		if(num>1)
		{
			b=b*fact(num-1);
		}
		return b;
	    }
	    static prime()                  //Static Member Function
	    {
		int a=0,n;
		cout<<"Enter number to check for prime number:";
		cin>>num;
		for(int i=2 ;i<num ;i++)
		{
			if(num%i==0)
			{
				a++;
			}
		}
		if(a>0)
		{
			cout<<"Not a Prime Number"<<endl;
		}
		else
		{
			cout<<"Prime Number"<<endl;
		}
		return 0;
		}
	    static fibo()                  //Static Member Function
	    {
		cout<<"Enter number to generate fibonacci series:";
		cin>>num;
		int i,a=0,b=1,c;
		for(i=1;i<=num;i++)
		{
			cout<<a<<" ";
			c=a+b;
			a=b;
			b=c;
		}
		return 0;
		}
};
int simple :: num;           //Definition of static data member
void main()
{
	simple A;
	int a,n;
	clrscr();
	cout<<"Enter number to find factorial:";
	cin>>n;
	a=simple :: fact(n);          //Calling a
	cout<<a<<endl;
	simple :: prime();            //static member
	simple ::fibo();              //function
	getch();
}
