/*A program for interchange the value*/
# include <stdio.h>
# include <conio.h>
void main()
{
int a,b;
clrscr();
printf("please enter the first number");
scanf("%d",&a);
printf("please enter the second number");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("value of a=%d",a);
printf("\nvalue of b=%d",b);
getch();
}
