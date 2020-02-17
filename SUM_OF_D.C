//Author Name: Shreyansh Jain BCA-1
//Digit Sum()
#include<stdio.h>
#include<conio.h>
void main()
{
int r,sum=0,n;
clrscr();
printf("enter any no to calculate sum of digit of entered no ");
scanf("%d",&n);
do
{
 r=n%10;
 n=n/10;
 sum=sum+r;
}while(n!=0);
printf("The result is : %d",sum);
getch();
}