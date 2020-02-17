#include<stdio.h>
#include<conio.h>
void main()
{
int a,marks[5];
clrscr();
printf("enter the student marks");
for(a=0;a<5;a++)
{
scanf("%d",&marks[a]);
}
for(a=0;a<5;a++)
printf("%d",marks[a]);
getch();
}