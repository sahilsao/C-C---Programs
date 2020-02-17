#include <iostream.h>
#include <conio.h>
//=========================================================namespace declaration
//=============================================================class declaration
class ArraySort
{
private:
static float _arrf[5];
static int _arri[5];
public:
static void getdata(void);
static void sort(int arri[], int x);
static void sort(float arrf[], int y);
void display(void);
};
//=======================================================================getdata
void ArraySort::getdata(void)
{ cout << "Enter 5 integer values to sort : ";
for(int i = 0; i < 5; i++)
{ cin >> _arri[i]; }
sort(_arri, 5);
cout << "Enter 5 float values to sort : ";
for(int f = 0; f < 5; f++)
{ cin >> _arrf[f]; }
sort(_arrf, 5); }
//================================================================sort(int, int)
void ArraySort::sort(int arri[], int x)
{ int temp ;
for ( int i = 0 ; i <= x - 2 ; i++ )
{ for ( int j = 0 ; j <= x - 2 - i ; j++ )
{ if ( arri[j] > arri[j + 1] )
{ temp = arri[j] ;
arri[j] = arri[j + 1] ;
arri[j + 1] = temp ; } } } }
/*---bubble sort---------------*/
//==============================================================sort(int, float)
void ArraySort::sort(float arrf[], int y)
{ float temp ;
for ( int i = 0 ; i <= y - 2 ; i++ )
{ for ( int j = 0 ; j <= y - 2 - i ; j++ )
{ if ( arrf[j] > arrf[j + 1] )
{ temp = arrf[j] ;
arrf[j] = arrf[j + 1] ;
arrf[j + 1] = temp ; } } } }
/*---bubble sort---------------*/
//=======================================================================display
void ArraySort::display(void)
{ cout << "\n\nAfter sorting integer values : ";
for(int i = 0; i < 5; i++)
{ cout << _arri[i] << ", "; }
cout << "\nAfter sorting float values : ";
for(int j = 0; j < 5; j++)
{ cout << _arrf[j] << ", "; } }
//=============================================================static definition
int ArraySort::_arri[];
float ArraySort::_arrf[];
//==========================================================================main
void main()
{
clrscr();
ArraySort arr;
arr.getdata();
arr.display();
getch();
}




