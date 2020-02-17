
#include<iostream.h>
#include<conio.h>

class complex
{
	private:
		float x; float y;

	public:
		void input(float real, float imag)
		 { x = real; y = imag; }

		complex sum(complex, complex);
		complex sub(complex, complex);
		complex mul(complex, complex);
		complex div(complex, complex);

		void show_add(complex);
		void show_sub(complex);
		void show_mul(complex);
		void show_div(complex);
};

complex complex::sum(complex c1, complex c2)
 { complex c3;
   c3.x = c1.x + c2.x;
   c3.y = c1.y + c2.y;
   return c3; }

complex complex::sub(complex c1, complex c2)
 { complex c3;
   c3.x = c1.x - c2.x;
   c3.y = c1.y - c2.y;
   return c3; }

complex complex::mul(complex c1, complex c2)
 { complex c3;
   c3.x = (c1.x * c2.x) - (c1.y * c2.y);
   c3.y = (c1.x * c2.y) + (c1.y * c2.x);
   return c3; }

complex complex::div(complex c1, complex c2)
 { complex c3;
   float temp;
   temp =  (c2.x * c2.x) + (c2.y * c2.y);
   c3.x = ((c1.x * c2.x) + (c1.y * c2.y)) / temp;
   c3.y = ((c2.x * c1.y) - (c1.x * c2.y)) / temp;
   return c3; }

void complex::show_add(complex c)
 { cout << c.x << " + j" << c.y << endl; }

void complex::show_sub(complex c)
 { cout << c.x << " - j" << c.y << endl; }

void complex::show_mul(complex c)
 { cout << c.x << " * j" << c.y << endl; }

void complex::show_div(complex c)
 { cout << c.x << " / j" << c.y << endl; }

int main(void)
{
   complex A, B, C;

   A.input(3.1, 5.65);
   B.input(2.75, 1.2);

   cout << endl << "Sum of two complex numbers :"            << endl;
   C = C.sum(A, B);
   cout << "A = "; A.show_add(A);
   cout << "B = "; B.show_add(B);
   cout << "C = "; C.show_add(C);

   cout << endl << "Subtraction of two complex numbers :"    << endl;
   C = C.sub(A, B);
   cout << "A = "; A.show_sub(A);
   cout << "B = "; B.show_sub(B);
   cout << "C = "; C.show_sub(C);

   cout << endl << "Multiplication of two complex numbers :" << endl;
   C = C.mul(A, B);
   cout << "A = "; A.show_mul(A);
   cout << "B = "; B.show_mul(B);
   cout << "C = "; C.show_mul(C);

   cout << endl << "Division of two complex numbers :"       << endl;
   C = C.div(A, B);
   cout << "A = "; A.show_div(A);
   cout << "B = "; B.show_div(B);
   cout << "C = "; C.show_div(C);
   getch();

}



