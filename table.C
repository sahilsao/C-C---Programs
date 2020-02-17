# include <stdio.h>
# include <conio.h>
void main()
{
int a,b,c;
clrscr();
c=0;
for (a=02;a<=10;a++)
{printf("\n\n");
for(b=01;b<=10;b++)
{
c=a*b;
printf("    %d",c);
}
printf("\n");
}
getch();
}
