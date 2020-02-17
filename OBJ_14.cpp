
#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

//=========================================================namespace-declaration
//=============================================================class-declaration
class Distance
{
private:
int feet; double inch;
public:
void input(void);
void display_add(Distance);
void display_sub(Distance);
friend Distance Add(Distance, Distance);
friend Distance Subtract(Distance, Distance);
};
//=========================================================================input
void Distance::input(void)
{ cout << "Enter feet : "; cin >> feet;
cout << "Enter inch : "; cin >> inch; }
//===================================================================display_add
void Distance::display_add(Distance DZ)
{ cout << setw(2) << DZ.feet << " + i" << DZ.inch << endl; }
//==============================================================display_subtract
void Distance::display_sub(Distance DZ)
{ cout << setw(2) << DZ.feet << " - j" << DZ.inch << endl; }
//===========================================================================Add
Distance Add(Distance D1, Distance D2)
{ Distance D3;
D3.feet = D1.feet + D2.feet;
D3.inch = D1.inch + D2.inch;
return D3; }
//======================================================================Subtract
Distance Subtract(Distance D1, Distance D2)
{ Distance D3;
D3.feet = D1.feet - D2.feet;
D3.inch = D1.inch - D2.inch;
return D3; }
//==========================================================================main
int main(void)
{
clrscr();
Distance DX, DY, DZ;
DX.input(); //object that stores feet and inches
DY.input(); //object that stores feet and inches
DZ = Add(DX, DY); //Send both the objects for addition
cout << endl;
cout << "DX = "; DX.display_add(DX);
cout << "DY = "; DY.display_add(DY);
cout << "DZ = "; DZ.display_add(DZ);
DZ = Subtract(DX, DY); //Send both the objects for subtraction
cout << endl;
cout << "DX = "; DX.display_sub(DX);
cout << "DY = "; DY.display_sub(DY);
cout << "DZ = "; DZ.display_sub(DZ);
return
getch();
}

