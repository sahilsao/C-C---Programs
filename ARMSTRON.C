#include<stdio.h>
#include<conio.h>
void main()
{
int n,t,f,m,s,val;
clrscr();
for(n=-1000;n<=999;n++)
{
t = n % 10;
s=n/10;
m = s % 10;
f=s/10;
val=(f*f*f)+(m*m*m)+(t*t*t);
if (val==n)
	printf("The armstrong no. is =  %d\n",n);
}
getch();
}
