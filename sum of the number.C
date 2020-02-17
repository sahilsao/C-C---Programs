/*A program to take input from user and sum that number*/
# include <stdio.h>
# include <conio.h>
void main()
{
int a,b,c;
clrscr();
c=0;
printf("please enter a number");
scanf("%d",&a);
while(a>0)
{
b=a%10;
c=c+b;
a=a/10;
}
printf("SUM = %1d",c);
getch();
}
