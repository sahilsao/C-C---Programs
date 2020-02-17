#include<stdio.h>
#include<conio.h>
main()
{
 int i,n,m, multi=0;
clrscr();
printf("Enter any to Check whether it is Armstrong or not : ");
scanf("%d", &n);
 m=n;
 do
 {
       i=n%10;
       n=n/10;
       multi= multi+(i*i*i);
    }
    while(n>0);
    if(multi==m)
    {
	printf("It is an Armstrong No.");
    }
    else
    {
	printf("It is not an  Armstrong No.");
    }
    getch();
}
