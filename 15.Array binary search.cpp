#include<stdio.h>
#include<conio.h>
void main()
{
int a, n[10],sk,loc;
clrscr();
printf("enter any 10 no.");
for (a=0; a<=9;a++)
scanf("%d",&n[a]);
printf ("enter the search key:");
scanf("%d", &sk);
for(a=0;a<=9;a++)
{
if(n[a]== sk)
loc=a+1;
}
if (loc!=0)
printf("item found at %d location", loc);
else
printf("item not found:");
getch();
}
