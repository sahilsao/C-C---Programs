#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter any no.");
scanf("%d",&n);
switch(n)
{
case 1:
	printf("You are a lucky one");
		break;
case 2:
	printf("You are some time lucky ");
	break;
case 3:
	printf("You are always success");
	break;
case 4:
	printf("You are a lucky one");
	break;
 case 5:
	printf("You are wanted one");
	break;
 default:
	printf("You are bad one");



       break;
	}
getch();
}
