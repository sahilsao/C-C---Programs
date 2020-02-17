#include<stdio.h>
#include<conio.h>
void main()
{
int smarks[10][5],a,b;
printf("enter student marks");
for(a=0;a<10;a++)
{
for(b=0;b<5;b++)
{
scanf("%d",&smarks[a][b]);
}
}
for(a=0;a<10;a++)
{
for(b=0;b<5;b++)
printf("%d",smarks[a][b]);
}
getch();
}
