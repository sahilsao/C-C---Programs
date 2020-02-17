#include<stdio.h>
#include<conio.h>
main()
{
int year;
clrscr();
printf("enter the year");
scanf("%d",&year);
if(year%4==0)
printf("this is a leap year.");
else
printf("this is not a leap year");
getch();
return(0);
}
