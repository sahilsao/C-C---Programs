#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,r;
int x,y,m;
clrscr();
printf("Enter any value for a & b-->");
scanf("%f %f",&a,&b);
r=a+b;
printf("\nThe added result is :--->%f",r);
r=a*b;
printf("\nThe multy result is :--->%f",r);
r=a-b;
printf("\nThe subtraction  result is :--->%f",r);
r=a/b;
printf("\nThe division result is :--->%f",r);
printf("\n\nEnter any value for x & y-->");
scanf("%d %d",&x,&y);
m=x%y;
printf("\n\nThe mod result is :--->%d",m);
getch();
}