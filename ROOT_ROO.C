#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,discriminant,root1,root2;
 clrscr();
printf("include values of a,b,andc\n");
scanf("%f %f %f",&a,&b,&c);
discriminant = b*b-4*a*c;
if(discriminant<0)
	printf("\n\nROOTS ARE IMAGINARY\n");
else
{
	root1=(-b + sqrt(discriminant))/(2.0*a);
	root2=(-b - sqrt(discriminant))/(2.0*a);
	printf("\n\nroot1=%5\n\nroot2=%5.2f\n",root1,root2);
	}
	getch();
}