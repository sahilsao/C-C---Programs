#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,m;
printf("Enter the no.");
scanf("%d",&n);
for(i=1;i<=10;i++)
m=m*i;
printf("%d*%d=%d",n,i,m);
getch();
} 