#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,y;
clrscr();
printf("Enter any 4 digit year to know whether it is leap or not");
scanf("%d",&y);
a=y/100;
b=y%100;
if(y%4==0)
{
	if(b==0)
	{
		if(a%4==0)
			{
			printf("This is a LEAP year.");
			}
		else
			{
			printf("This is not a LEAP year.");
			}
	}
	else
		{
		printf("This is a Leap year.");
		}
	}
else
{
printf("This is not a leap year.");
}
getch();
}
