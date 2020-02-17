#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[15],j,t;
clrscr();
printf("Enter 1 numbers:");
for(i=0;i<=4;i++)
scanf("%d",&a[i]);
for (i=0;i<=4;i++)
{
for (j=i+1;j<=4;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}}}
printf("\n sorted numbers are:");
for (i=0;i<=4;i++)
printf("\n%d",a[i]);
getch();
}