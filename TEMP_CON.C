#include<stdio.h>
#include<conio.h>
void main()
{
float f,c,k;
clrscr();
printf("Enter any farenhite tempraure.\n");
scanf("%f",&f);
c=5*(f+32)/9;
k=c+273;
printf("The temp in Centigrade = %f \n the temp in kelvin = %f",c,k);
getch();
}
