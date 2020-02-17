#include<stdio.h>
#include<conio.h>
#define PI 3.14159
void main()
{
int r,c;	 /*R-radios of the circle*/
float perimeter;	/* Circumference of a circle*/
float area;	/* Area of a circle */
clrscr();
c=PI;
r=15;
perimeter = 2.0*c*r;
area=c*r*r;
printf("%f %f",perimeter,area);
getch();
}