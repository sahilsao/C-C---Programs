#include<stdio.h>
#include<conio.h>
void main()
{
int sal;
float it;
clrscr();
printf("enter your monthly income");
scanf("%d",&sal);
if ( sal <= 7499)
it = sal*0.2;
else if( sal >= 7500 && sal < 9000)
it =  sal * 0.3;
else
//( sal >= 9000)
it =  sal * 0.4;
printf("income tax= %f",it);
getch();
}

