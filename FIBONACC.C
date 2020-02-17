#include<stdio.h>
#include<conio.h>
void main()
{
int x,t=0,n,y,i,s,m;
clrscr();
printf("Enter the first term x ->");
scanf("%d",&x);
printf("Enter the second term y ->");
scanf("%d",&y);
printf("Enter the no of term");
scanf("%d",&n);
printf("the fibonaccy series is ->%d %d",x,y);
for(i=1;i<=n-2;i++)
{
	t=x+y;
	printf("\n%d",t);
	x=y;
	y=t;
}
getch();
}