# include <stdio.h>
# include <conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
b=0;
c=0 ;
d=0;
e=0;
printf("please enter the number");
scanf("%d",&a);
e=a;
while (a>0)
{
b=a%10;
c=b*b*b;
d=d+c;
a=a/10;
}
if(d==e)
printf("%d is a armstrong number",e);
else
printf("%d is not a armstrong number",e);
getch();
}


