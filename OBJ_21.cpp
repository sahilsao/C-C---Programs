#include <iostream.h>
#include<math.h>
#include<conio.h>
//=========================================================namespace declaration
//=============================================================class declaration
class Calculate	
{	
private:
static double area;
public:
static void cal(double);
static void cal(int, int);
static void cal(int, double);
};
//===================================================================cal(double)
void Calculate::cal(double r)
{ area = 3.14 * pow(r, 2);
cout << "area of circle : " << area << endl; }
//=================================================================cal(int, int)
void Calculate::cal(int b, int h)
{ area = 0.5 * b * h;
cout << "area of triangle : " << area << endl; }
//==============================================================cal(int, double)
void Calculate::cal(int l, double b)
{ area = l * b;
cout << "area of rectangle : " << area << endl; }
//=============================================static member variable definition
double Calculate::area;
//==========================================================================main
int main(void)
{
clrscr();
Calculate cir, tri, rect;
cir.cal (5.0);
tri.cal (6, 7.5);
rect.cal (7, 8);
return
getch();
}
