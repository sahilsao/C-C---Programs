#include<stdio.h>
#include<conio.h>
#define pi 3.14
main()
{
float radius ,area ,cf;
printf("\n enter the radius of circle:");
scanf("%f",&radius);
area = pi * (radius * radius );
cf= 2 * pi * radius;
printf("\n the area of circle is %f",area);
printf("\n and circumference of the circle is %f ",cf);
getch();
return(0);
}