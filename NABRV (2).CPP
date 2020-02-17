#include<stdio.h>
#include<conio.h>
int sum();
void main()
{
clrscr();
a=sum();
printf("sum=%d",a);
getch();
}
int sum()
{
int a,b,c;
printf("enter two no");
scanf("%d%d",&a,&b);
c=a+b;
return(c);
}