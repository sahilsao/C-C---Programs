/*program to count positive negative odd even numbers in array*/
#include<stdio.h>
#include<conio.h>
void main()
{
int num[7],i,neg=0,pos=0,odd=0,even=0;
clrscr();
printf ("enter 7 elements of array");
for(i=0;i<=6;i++)
scanf("%d",&num[i]);
for(i=0;i<=6;i++)
{
num[i]<0 ? neg++:(pos++);
num[i]%2 ? odd++:(even++);
}
printf("\n negative element=%d",neg);
printf("\n positive element=%d",pos);
printf("\n even element=%d",even);
printf("\n odd element=%d",odd);
getch();
}