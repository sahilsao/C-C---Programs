/*WAP to determine whether a number is even or odd using conditional operator*/
#include<stdio.h>
#include<conio.h>
void  main()
{
 int a;
 clrscr();
 printf("Enter the value of a:");
 scanf("%d",&a);
 a%2==0?printf("a is even"):printf("a is odd");
 getch();
}
