#include <iostream.h>
#include<conio.h>
//=========================================================namespace-declaration
//=============================================================class-declaration
class Polar
{
private:
int radius, angle;
public:
Polar() {} //constructor
Polar(int); //overloaded construtor
~Polar() {} //destructor
Polar(Polar &); //copy constructor
Polar & catch_data(void);
void display_radius(void);
void display_angle(void);
};
//==============================================================Polar-Overloaded
Polar::Polar(int radiusx)
{ radius = radiusx; }
//==============================================================Copy Constructor
Polar::Polar(Polar & p1)
{ angle = p1.radius*12; }
//====================================================================catch_data
Polar & Polar::catch_data(void)
{ return *this; }
//================================================================display_radius
void Polar::display_radius(void)
{ cout << "radius of polar : " << radius << endl; }
//=================================================================display_angle
void Polar::display_angle(void)
{ cout << "angle of polar : " << angle << endl; }
//==========================================================================main
int main(void)
{
clrscr();
Polar p1(5);
Polar p2(p1);
Polar p;
p = p1.catch_data();
p.display_radius();
p = p2.catch_data();
p.display_angle();
getch();
return 0;
}





