#include <iostream.h>
#include<conio.h>
#include <string.h>
//=========================================================namespace declaration

//=============================================================class declaration
class String
{
private:
char *str1, *str2, *str3;
public:
String(); //default constructor
String(String& s); //copy constructor
~String(); //destructor
void showdata(void);
void operator= (const String &);
void operator+ (const String &s);
int operator< (const String &s);
int operator> (const String &s);
int operator<= (const String &s);
int operator>= (const String &s);
int operator== (const String &s);
int operator!= (const String &s);
friend istream & operator >> (istream &, String &);
friend ostream & operator << (ostream &, String &);
};
//===========================================================default constructor
String::String()
{ str1 = new char[50];
str2 = new char[50];
str3 = new char[50]; }
//====================================================================destructor
String::~String()
{ delete str1;
delete str2;
delete str3; }
//==============================================================copy constructor
String::String(String& s)
{ strcpy(str1, s.str1); }
//====================================================================operator>>
istream & operator >> (istream &sin, String &io)
{ sin >> io.str1;
return sin; }
//====================================================================operator<<
ostream & operator << (ostream &sout, String &io)
{ sout << io.str1;
return sout; }
//=====================================================================operator=
void String::operator= (const String & rhs)
{ cout << "\n\noperator=() called...\n";
cout << "(q1=p1) => ";
strcpy(str2, rhs.str1); }
//=====================================================================operator+
void String::operator+ (const String &s)
{ cout << "\n\noperator+() called...\n";
strcpy(str3, str1);
strcat(str3, s.str1);
cout << "(p1+p2) => " << str3; }
//====================================================================operator<=
int String::operator<= (const String &s)
{ cout << "\n\noperator<=() called...\n";
int m = strlen(str1);
int n = strlen(s.str1);
if( m <= n )
{ return 1; }
else
{ return 0; } }
//====================================================================operator>=
int String::operator>= (const String &s)
{ cout << "\n\noperator>=() called...\n";
int m = strlen(str1);
int n = strlen(s.str1);
if( m >= n )
{ return 1; }
else
{ return 0; } }
//====================================================================operator==
int String::operator== (const String &s)
{ cout << "\n\noperator==() called...\n";
int m = strlen(str1);
int n = strlen(s.str1);
if( m == n )
{ return 1; }
else
{ return 0; } }
//====================================================================operator!=
int String::operator!= (const String &s)
{ cout << "\n\noperator!=() called...\n";
int m = strlen(str1);
int n = strlen(s.str1);
if( m != n )
{ return 1; }
else
{ return 0; } }
//=====================================================================operator<
int String::operator< (const String &s)
{ cout << "\n\noperator<() called...\n";
int m = strlen(str1);
int n = strlen(s.str1);
if( m < n )
{ return 1; }
else
{ return 0; } }
//=====================================================================operator>
int String::operator> (const String &s)
{ cout << "\n\noperator>() called...\n";
int m = strlen(str1);
int n = strlen(s.str1);
if( m > n )
{ return 1; }
else
{ return 0; } }
//======================================================================showdata
void String::showdata(void)
{ cout << str2; }
//==========================================================================main
int main(void)
{
clrscr();
String s1, s2, q1, q2;
//invoking operator<<
cout << "Enter string1 : ";
//invoking operator>>
cin >> s1;
//invoking operator<<
cout << "Enter string2 : ";
//invoking operator>>
cin >> s2;
cout << "s1 = " << s1 << "\n";
cout << "s2 = " << s2 << "\n";
//invoking copy constructor
String p2 = s2, p1 = s1;
cout << "s1 = p1 = " << p1 << "\n";
cout << "s2 = p2 = " << p2 << "\n";
//invoking operator=()
(q1 = p1);
q1.showdata();
//invoking operator+()
(p1 + p2);
//invoking operator<=()
if(p1 <= p2)
{ cout << "p1 is smaller than or equal to p2\n"; }
else
{ cout << "p2 is smaller than or equal to p3\n"; }
//invoking operator>=()
if(p1 >= p2)
{ cout << "p1 is greater than or equal to p2\n"; }
else
{ cout << "p2 is greater than or equal to p1\n"; }
//invoking operator==()
if(p1 == p2)
{ cout << "p1 is equal to p2"; }
if(p1 != p2)
{ cout << "p1 is not equal to p2"; }
if(p1 < p2)
{ cout << "p1 is less than p2"; }
if(p1 > p2)
{ cout << "p1 is greater than p2"; }
return
getch();
}

