/*A program for leap year*/
# include <stdio.h>
# include <conio.h>
main()
{
int year;
clrscr();
printf("Please enter the year= ");
scanf("%d",&year);
if ((year%4)==0)
{
printf("This is leap year");
}
else
{
printf("This is not a leap year");
}
getch();
}
