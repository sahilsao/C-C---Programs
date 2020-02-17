#include<stdio.h>
#include<conio.h>
void main()
{
	int y;
	clrscr();
	printf("Enter any year to check whether leap or not :");
	scanf("%d", &y);
	if(y%4==0)
	{
		printf("This is leap year");
	}
	else
	{
		printf("This is not a leap year ");
	}
	getch();
}