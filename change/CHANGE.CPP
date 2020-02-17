#include<stdio.h>
#include<conio.h>
void main()
{
int a,b, temp;
clrscr();
printf("enter a no:") ;
scanf("%d",&a);
printf("enter another no:");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("after enter changing A=%d,B=%d",a,b);
getch();
}