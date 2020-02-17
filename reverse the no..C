/* write a programme to reverse the number*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,x;
clrscr();
printf("enter the number which you want to reverse");
scanf("%d",&a);
while(a>0)
{
x=a%10;
a=a/10;
printf("%d",x);
}
getch();
}