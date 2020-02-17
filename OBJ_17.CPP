#include <iostream.h>
#include<conio.h>
//=========================================================namespace-declaration
//=============================================================class-declaration
class counter
{
private:
static int count;
static int count_inc, count_dec;
public:
counter();
~counter() {}
static void increase(void);
static void decrease(void);
static void display(void);
};
//============================================================static data-member
int counter::count;
int counter::count_inc = 5;
int counter::count_dec = 10;
//===================================================================constructor
counter::counter()
{ ++count; //keeps track of no: of objects being created
increase(); }
//======================================================================increase
void counter::increase(void)
{ count_inc++; //Increase the value of static data-member
decrease(); }
//======================================================================decrease
void counter::decrease(void)
{ count_dec--; //decrease the value of static data-member
display(); }
//=======================================================================display
void counter::display(void)
{ cout << "No: of objects created : " << count << "\t";
cout << "count_inc : " << count_inc << "\t";
cout << "count_dec : " << count_dec << endl; }
//==========================================================================main
int main(void)
{
clrscr();
counter obj1, obj2, obj3, obj4, obj5;
return
getch();
}
