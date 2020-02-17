#include<stdio.h>
#include<conio.h>
main()
{
int n,fact =1,i;
clrscr();
printf("enter the number whose factorial you want:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("the factorial is %d",fact);
getch();
return(0);
}