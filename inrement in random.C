/*A program for a particular pattern
1
2 3
4 5 6
7 8 9 10
*/
# include <stdio.h>
# include <conio.h>
void main()
{
int a,b,c;
clrscr();
c=1;
for(a=1;a<=4;a++)
{
for(b=1;b<=a;b++)
{
printf(" %d ",c);
c++;
}
printf("\n");
}
getch();
}
