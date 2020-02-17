/*A program for reverse number*/
# include <stdio.h>
# include <conio.h>
void main()
{
int a,x;
clrscr();
printf("Enter a number");
scanf("%d",&a);
while(a>0)
{
x=a%10;
printf("%d",x);
a=a/10;
}
getch();
}


