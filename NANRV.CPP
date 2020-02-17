#include<stdio.h>
#include<conio.h>
void add();
void main()
{
clrscr();
add();
getch();
}
void add()
{
int a,b,c;
printf("enter two no");
scanf("%d%d",&a,&b);
c=a+b;
printf("sum=%d",c);
}
