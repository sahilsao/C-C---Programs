#include<conio.h>
#include<iostream.h>
class student
{
	public:
		int rn,max[3],min[3],obt[3];
		char nm[20],sub[3][10];
		void input()

		{
			int i;
			cout<<"Enter the roll no and name of student = "<<endl;
			cin>>rn>>nm;
			for(i=0;i<=2;i++)
			{
				cout<<"Enter the name of subject = "<<endl;
				cin>>sub[i];
				cout<<"Enter the maximum and minimum mark = "<<endl;

				cin>>max[i]>>min[i];
				cout<<"Enter the Marks Obtained = "<<endl;
				cin>>obt[i];
			}
		}
		void display()
		{
			int total,i,a;
			float per;
			total=0;a=0;
			cout<<"Name ="<<nm<<endl;
			cout<<"Roll no. ="<<rn<<endl;
			for (i=0;i<3;i++)
			{
cout<<"Subject ="<<sub[i]<<" ,  Max ="<<max[i]<<" ,  Min ="<<min[i]<<" ,  Mark Obt ="<<obt[i];
if (obt[i]>=min[i])
				{

					cout<<" ,   Pass"<<endl;
				}
				else
				{
					cout<<" ,   Fail"<<endl;
				}
				total=total+obt[i];
				a=a+max[i];
			}
			per=(total*100)/a;
			cout<<"Total ="<<total<<endl;
			cout<<"Percentage ="<<per<<endl;
		}
};
void main()
{
	student A[2];
	clrscr();
	for(int a=0;a<=2;a++)
	{
		A[a].input();
	}
	clrscr();
	for(int a=0;a<=2;a++)
	{
		A[a].display();

	}
	getch();
}

