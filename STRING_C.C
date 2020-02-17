#include<stdio.h>
#include<conio.h>
void main()
{
char n,m,temp;
clrscr();
printf("Enter any two string");
scanf("%s%s",n,m);
temp=n;
m=n;
m=temp;
printf("the result after coping the strings %s %s",m);
getch();
}