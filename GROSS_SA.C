#include<stdio.h>
#include<conio.h>
void main()
{
float bs,hra,da,gs;
clrscr();
printf("Enter your basic salary:-");
scanf("%f",&bs);
hra=bs*0.2;
da=bs*0.4;
gs=bs+hra+da;
printf("Your Gross salary is=%f",gs);
getch();
}
