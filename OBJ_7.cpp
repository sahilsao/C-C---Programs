#include <iostream.h>
#include <iomanip.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
class student
{
	private:
			int rn, max[3], min[3], len;
			char name[50], sub[3][15];
			float om[3], tmax, tmin, tobtain, per, div, p[3];

	    public:

			student();
			~student() {}
			void info();
			void subjects();
			void marks();
			void display();
			void result();
			void design();
};
student::student()
{
    tmax    = 0.0;

    tmin    = 0.0;
    tobtain = 0.0;
    per     = 0.0;
    p[3]    = 0.0;
}
void student::info()
{
	cout << "Enter student name    : ";
	cin.getline(name, 50);
	cout << "Enter student roll no : ";
	cin  >> rn;

	cout << endl << endl;
}
void student::subjects()
{
	cout << "Enter name of three subjects : " << endl;
	for(int i = 0; i < 3; i++)
		cin >> sub[i];

	cout << endl << endl;
}
void student::marks()
{
    for(int i = 0; i < 3; i++)
    {
		cout << "Enter maximum marks of : " << sub[i] << " ";
		cin  >> max[i];
		cout << "Enter minimum marks of : " << sub[i] << " ";
		cin  >> min[i];
		cout << "Enter Obtained marks of : " << sub[i] << " ";
		cin  >> om[i];
		cout << endl << endl;
    }
}
void student::display()
{
    design();
	cout << "| " << "Student Information :-" << setw(44) << "|" << endl;
	design();

	cout << "| " << "Name of student :" << setw(15) << name << setw(34) << "|";
    cout << endl;
	cout << "| " << "Student rollno  :" << setw(15) << rn   << setw(34) << "|";
    cout << endl;
    design();
    cout << "|" << setw(67) << "|" << endl;
    cout << "|" << setw(67) << "|" << endl;
    design();
    cout << "| " << "Name of subject";
    cout << " | " << "Maximum marks";
    cout << " | " << "Minimum marks";
	cout << " | " << "Obtained marks" << " |";
    cout << endl;

    design();
    cout << "|" << setw(18) << "|" << setw(16) << "|" << setw(16) << "|";
    cout << setw(17) << "|";
    cout << endl;
    design();
    for(int i = 0; i < 3; i++)
    {

	  cout << "| ";
	  len = strlen(sub[i]);
	  cout.write(sub[i], len);
	  cout << setw(17-len) << "|";
      cout << setw(10)     << max[i];
	  cout << setw(6) << "|";
      cout << setw(9) << min[i];
      cout << setw(7) << "|";
      p[i] =  om[i]/max[i] * 100;
      if( p[i] < 33 )    {
	  cout << setw(10) << om[i] << " *";
	  cout << setw(5)  << "|";
      }
      else     {
	  cout << setw(10) << om[i];
	  cout << setw(7) << "|";
      }
      cout << endl;
    }
    design();
}
void student::result()
{
     cout << "| ";
     cout.write("TOTAL", 5);
     for(int i = 0; i < 3; i++)
     {
	     tmax    +=  max[i];
	     tmin    +=  min[i];
	     tobtain +=  om[i];
     }

   cout << setw(12) << "|";
     cout << setw(10)     << tmax    << setw(6) << "|";
     cout << setw(9)      << tmin    << setw(7) << "|";
     cout << setw(10)     << tobtain << setw(7) << "|";;
     cout << endl;
     design();
     cout << "| ";
     per = (tobtain/tmax) * 100;
     cout.write("PERCENT", 7);
     cout << setw(10) << "|" << setw(16) << "|" << setw(16)     << "|";
     cout.width(9);
     cout.setf(ios::fixed, ios::floatfield);
     cout << setprecision(1) << per << "%";
     cout << setw(7) << "|";

     cout << endl;
     design();
     cout << "| ";

     cout.write("DIVISION", 8);
     cout << setw(9) << "|" << setw(16) << "|" << setw(16)     << "|";
     if(p[0] > 32 && p[1] > 32 && p[2] > 32)
     {
	     if( per >= 60)
		 cout << setw(10) << "1ST" << setw(7) << "|";
	     else if(per >= 45)
		 cout << setw(10) << "2ND" << setw(7) << "|";
	     else if(per >= 33)
		 cout << setw(10) << "3RD" << setw(7) << "|";
     }
     else
		 cout << setw(10) << "--" << setw(7) << "|";
     cout << endl;
     design();
      cout << "| ";
     cout.write("RESULT", 6);
     cout << setw(11) << "|" << setw(16) << "|" << setw(16)     << "|";
     if(p[0] > 32 && p[1] > 32 && p[2] > 32)
	      cout << setw(10) << "PASSED" << setw(7) << "|";
     else
	       cout << setw(10) << "FAILED" << setw(7) << "|";
     cout << endl;
     design();
}
void student::design()
{
     cout << "|";
     cout.fill('-');
     cout.width(67);
     cout << "-|";
     cout.fill(' ');
     cout << endl;
}

void main()
{
clrscr();
	 student tc;
	 tc.info();
	 tc.subjects();
	 tc.marks();
	 tc.display();
	 tc.result();

	 getch();
}

