#include<stdio.h>
#include<conio.h>
void main()
{
int Month,Days,x;
clrscr();
printf("Enter total Days");
scanf("%d",&x);
Month=x/30;
Days=x%30;
printf("Months=%d \n Days=%d",Month,Days);
getch();
}
