#include<stdio.h>
#include<conio.h>
#include<abcd.h>
void main()
{
int i= 5,a;
clrscr();
a=i++ + ++i + --i + i++ + ++i + ++i;
printf("a=%d i=%d",a,i);
abc();
xyz();
getch();
}