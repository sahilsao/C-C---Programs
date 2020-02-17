# include <stdio.h>
# include <conio.h>
void main()
{
int a,b,c;
clrscr();
b=1;
printf("please enter the number");
scanf("%d",&a);
c=a;
while(a>0)
{
b=b*a;
a--;
}
printf("factorial %d == %d",c,b);
getch();
}
