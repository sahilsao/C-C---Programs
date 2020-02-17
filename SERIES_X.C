//Author Name: Shreyansh Jain BCA-1
//sereisSum()
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int x,n,i,f=1;
float r=1;
clrscr();
printf("enter the value of x and n for the series 1+x+(x^2)/2!+.....+(x^n)/n! \n");
scanf("%d %d",&x,&n);
for(i=1;i<=n;i++)
{
f=f*i;
  r = r + (pow(x,i))/f;
}
printf("The result is : %f",r);
getch();
}