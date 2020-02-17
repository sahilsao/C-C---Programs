# include <stdio.h>
# include <conio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
void main()
{
int a,b,c,d;
clrscr();
d=0;
printf("\npress 1 for addition");
printf("\npress 2 for substraction");
printf("\npress 3 for multiplication");
printf("\npress 4 for division");
scanf("%d",&c);
switch(c)
{
case 1:
printf("please enter the first number");
scanf("%d",&a);
printf("please enter the second number");
scanf("%d",&b);
d=add(a,b);
printf("addition= %d",d);
break;
case 2:
printf("please enter the first number");
scanf("%d",&a);
printf("please enter the second number");
scanf("%d",&b);
d=sub(a,b);
printf("substraction= %d",d);
break;
case 3:
printf("please enter the first number");
scanf("%d",&a);
printf("please enter the second number");
scanf("%d",&b);
d=mul(a,b);
printf("multiply= %d",d);
break;
case 4:
printf("please enter the first number");
scanf("%d",&a);
printf("please enter the second number");
scanf("%d",&b);
d=div(a,b);
printf("division= %d",d);
break;
default:
printf("please enter the right choice");
}
getch();
}
int add(int a,int b)
{
int x;
x=a+b;
return(x);
}
int sub(int a,int b)
{
int x;
x=a-b;
return(x);
}
int mul(int a,int b)
{
int x;
x=a*b;
return(x);
}
int div(int a,int b)
{
int x;
x=a/b;
return(x);
}
