#include<stdio.h>
#include<conio.h>
void fib(int,int,int,int);
main()
{
int a,b,i,j,n;
clrscr();
n=1, a=1, b=1;
printf("fibonacci series:");
printf("\n%d\n%d",a,b);
i=3;
fib(a,b,n,i);
printf("\n.\n.\n.\n.\n");
getch();
return(0);
}

void fib(int a,int b,int n,int i)
{
int k;
if(i<=10)
{
k=a+b;
printf("\n%d",k);
a=b; b=k; i++;
fib(a,b,n,i);
}
}
