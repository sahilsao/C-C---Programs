/*A program for a particular pattern*/
# include <stdio.h>
# include <conio.h>
void main()
{
int a,b;
clrscr();
for (a=1;a<=4;a++)
{
for (b=1;b<=a;b++)
{
printf(" %d ",b);
}
printf("\n");
}
getch();
}

