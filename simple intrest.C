/*  a program is designed for find  simple intrest */
#include<stdio.h>
#include<conio.h>
void main()
{
int p,t;
float ra,i;
clrscr();
printf("enter  the  principal amount==");
scanf("%d",&p);
printf("enter the rate  percentage  ==");
scanf("%f",&ra);
printf("enter the time period       ==");
scanf("%d",&t);
i=p*ra*t/100;
printf("your simple intrest is =%f",i);
getch();
}