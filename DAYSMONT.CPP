/*Q.WAP to convert number of days into months and remaining number of days*/

#include<stdio.h>
#include<conio.h>
main ()
{
 int D,M;
 clrscr();
 printf("Enter the number of days:");
 scanf("%d",&D);
 M=D/30;
 D=D%30;
 printf("\nMonths:%d",M);
 printf("\nDays:%d",D);
 getch();
}