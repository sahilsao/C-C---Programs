#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int a;
float srt;
clrscr();
printf("enter the number whose square root you want:");
scanf("%d",&a);
srt = sqrt (a);
printf(" the square root is %f",srt);
getch();
return(0);
}