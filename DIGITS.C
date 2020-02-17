#include<stdio.h>
#include<conio.h>
void main()
{
long int n,a,b,c,d,e,rev;
clrscr();
printf("\nEnter a five digit no to display reverse of the digit-->");
scanf("%ld",&n);
e=n/10000;
n=n%10000;
a=n/1000;
n=n%1000;
b=n/100;
n=n%100;
c=n/10;
d=n%10;
rev=d*10000+c*1000+b*100+a*10+e;
printf("Reverse of the digit is=%ld",rev);
printf("\n\n\n\n\npress any key to exit...");
getch();
}

