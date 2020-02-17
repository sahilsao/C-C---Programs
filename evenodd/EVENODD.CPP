#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
printf("enter the value of A:");
scanf("%d",&a);
if (a%2==0)
printf(" A is even...!");
else
printf("A is odd...!");

getch();
return(0);
}