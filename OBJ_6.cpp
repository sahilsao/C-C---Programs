#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class Lib_fn
{
	private:
		int i,j,k,w,s,v,c,c1,c2;
		char b[];
	public:
		char str_rev   (char a[] );
		char count_char(char a[] );
		char copy_str  (char a[] );
		char count     (char a[] );
		~Lib_fn();
};
void main()
{
	char a[100];
	clrscr();
	cout<<":-------:Enter a String of perform Operation based on Library functions:-------:"<<endl;
	cout<<"ENTERED STRING       = ";
	gets(a);
	cout<<endl<<endl;
Lib_fn l;
l.count_char(a);
l.str_rev(a);
l.copy_str(a);
l.count(a);
getch();
}
Lib_fn::~Lib_fn()
{

}
char Lib_fn :: str_rev(char a[])
{
	 cout<<":--------------:  String in Reverse Order  :-----------:\n"<<endl<<endl;
	cout<<"REVERSED STRING      = ";
	for(i=s;i>=0;i--)
	{
	cout<<a[i];
	}
	cout<<endl<<endl<<endl;
	return 0;
}
char Lib_fn :: count_char(char a[])
{
	w=0;s=0;
	cout<<":----------------: Counting the Characters :---------------:"<<endl<<endl;

	for(i=0;a[i]!='\0';i++)
	{
	if (a[i]==' ' && a[i+1]!=' ')
	w++;
	}
	s=i-w;
	cout<<"NUMBER OF CHARACTERS = ";
	cout<<s<<endl<<endl<<endl;
	return 0;
}
char Lib_fn::copy_str(char a[])
{
	cout<<":----------------: Coping the Entered String :--------------:"<<endl<<endl;
	cout<<"COPIED STRING        = ";
	for(i=0;a[i]!='\0';i++)
	{
		b[j]=a[i];
		cout<<b[j];
	}
	cout<<endl<<endl<<endl;
	return 0;
}
char Lib_fn::count(char a[])
{
	v=0;c=0;
	cout<<":----------: Counting the Vowels and Constraints :----------:"<<endl<<endl;
	for(i=0;a[i]!='\0';i++)
	{
	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
{  v++;  }
		else
		
                      {	   c++;	 }
}
	cout<<"VOWEL                = "<<v<<endl<<endl;
	cout<<"CONSONENT            = "<<c-w;
	return 0;
}
