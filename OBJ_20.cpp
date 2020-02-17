#include <iostream.h>
#include <conio.h>
//using namespace std;
//class-declaration
class Polar
{
      private:
              int radius, angle;
      public:      
              Polar(int);                                          //constructor              
             ~Polar() {}                                            //destructor              
              Polar(Polar &);                                 //copy constructor
              Polar & catch_data(void);
              void display_radius(void);
              void display_angle(void);
};

//Polar
Polar::Polar(int radiusx=5)
 { radius = radiusx; }   
 
//Copy Constructor 
Polar::Polar(Polar & p1)
 { angle = p1.radius*12; }
   
//catch_data
Polar & Polar::catch_data(void)
 { return *this; }

//display_radius
void Polar::display_radius(void)
 { cout << "radius of polar  : " << radius << endl; }

//display_angle
void Polar::display_angle(void)
 { cout << "angle  of polar  : " << angle  << endl; }

//main
void main()
{
      Polar p1;
      Polar p2(p1);
      Polar p;
      p = p1.catch_data();
      p.display_radius();
      p = p2.catch_data();
      p.display_angle();

      getch();
}
