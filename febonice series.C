/* A program for a fibonacci series*/
#include<stdio.h>
#include<conio.h>
int n,count,t1,t2,t3;
int fibo(int a, int b);
void main()
{
clrscr();
printf("how many terms to be print");
scanf("%d",& n);
t1=0;

t2=1;
count=2;
printf("frist term in febonicc series are\n",n);
printf("%d%d%",t1,t2);
fibo(t1,t2);
getch();
}
int fibo(int t1,int t2)
{

if(count>=n)
return(0);
else
{
t3=t1+t2;
printf("%d",t3);
count++;
t1=t2;
t2=t3;
fibo(t1,t2);
}
return(0);

}