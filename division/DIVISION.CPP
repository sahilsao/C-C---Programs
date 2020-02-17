#include<stdio.h>
#include<conio.h>
void main()
{
float m1,m2,m3,m4,m5,m6,per;
clrscr();
printf("enter the marks of full sub");
printf("enter the marks of 1st sub");
scanf("%f",&m1);
printf("enter the marks of 2nd sub");
scanf("%f",&m2);
printf("enter the marks of 3rd sub");
scanf("%f",&m3);
printf("enter the marks of 4th sub");
scanf("%f",&m4);


printf("enter the marks of 5th sub");
scanf("%f",&m5);
per =(m1+m2+m3+m4+m5)/5;
if(per<=40)
{
printf("fail");
}
else
if(per<=50)
{
printf("3rd div");
}
else
if(per<=60)
{
printf("2nd div");
}
else
{
printf("1st div");
}
getch();
}
