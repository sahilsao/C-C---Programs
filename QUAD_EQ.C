#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,x1,x2,d;
clrscr();
printf("Enter the values of a,b,c for the equation: a*x^2 + b*x + c = 0 --> ");
scanf("%f %f %f",&a,&b,&c);
d=b*b-4*a*c;
if (d>0)
{
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	printf("Roots are real and distinct and equal to %f , %f",x1,x2);
}
else if(d==0)
{
	x1=-b/(2*a);
	 printf("Roots are real and  equal and equal to %f ",x1);
}
else
{
	x1=(-b/(2*a));
	x2=(sqrt(-d))/(2*a);
	printf("Roots are imaginery and are equal to:\n (%f + i %f) and\n (%f - i %f)",x1,x2,x1,x2);
}
getch();
}
