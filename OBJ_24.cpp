       #include <iostream.h>
#include<conio.h>
//=========================================================namespace declaration
//=============================================================class declaration
class swapping
{
private:
static int xi, yi;
static float xf, yf;
public:
void getdata(void);
void putdata(void);
static void swap(int*, int*);
static void swap(float*, float*);
};
//============================================================static definitions
int swapping::xi;
int swapping::yi;
float swapping::xf;
float swapping::yf;
//=======================================================================getdata
void swapping::getdata(void)
{ cout << "Enter any integer values :- \n";
cout << "xi = "; cin >> xi;
cout << "yi = "; cin >> yi;
swap(&xi, &yi);
cout << "\nEnter any float values :- \n";
cout << "xf = "; cin >> xf;
cout << "yf = "; cin >> yf;
swap(&xf, &yf); }
//==============================================================swap(int*, int*)
void swapping::swap(int* xi, int* yi)
{ int t;
t = *xi;
*xi = *yi;
*yi = t; }
//==========================================================swap(float*, float*)
void swapping::swap(float* xf, float* yf)
{ float t;
t = *xf;
*xf = *yf;
*yf = t; }
//=======================================================================putdata
void swapping::putdata(void)
{ cout << "\n\nAfter swapping integers : " << "xi = " << xi << " yi = " << yi;
cout << "\nAfter swapping floats : " << "xf = " << xf << " yf = " << yf; }
//==========================================================================main
int main(void)
{
clrscr();
swapping sw;
sw.getdata();
sw.putdata();
return
getch();
}      
