#include<stdio.h>
#include<conio.h>
void main()
{
int x,t=0,n,y,i,z,a;
clrscr();
printf("Enter the first term x ->");
scanf("%d",&x);
printf("Enter the second term y ->");
scanf("%d",&y);
printf("Enter the third term z ->");
scanf("%d",&z);
printf("Enter the third term a ->");
scanf("%d",&a);
printf("Enter the no of term");
scanf("%d",&n);
printf("the fibonaccy series is ->%d %d %d %d",x,y,z,a);
for(i=1;i<=n-2;i++)
{
	t=x+y+z+a;
	printf(" %d",t);
	x=y;
	y=z;
	z=t;
	t=a;
}
getch();
}