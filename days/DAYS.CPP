#include<stdio.h>
#include<conio.h>
#define pi 5.1437
void main()
{
int m,d;
clrscr();
printf("enter days");
scanf("%d",&d);
m=d/30;
d=d%30;
printf("month =%d,days =%d",m,d);
getch();
}

