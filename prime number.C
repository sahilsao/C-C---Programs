/*A program to find the given number is prime or not*/
# include <stdio.h>
# include <conio.h>
void main()
{
int a,b,c,d;
clrscr();
c=0;
b=1;
printf("Please enter the number ");
scanf("%d",&a);
while (b<=a)
{
if ((a%b)==0)
{
c++;
}
b++;
}
if (c==2)
{
printf("%d is a prime number",a);
}
else
{
printf("%d is not a prime number",a);
}
getch();
}



