#include<stdio.h>
#include<conio.h>
void main()
{
int num[]={10,12,45,86,25,23};
int i;
clrscr();
for(i=0;i<=5;i++)
{
printf("\nAddress = %u ",&num[i]);
printf("\tElement = %d %d",num[i], *(num+i));
printf(" %d %d ",*(i+num),i[num]);
}
getch();
}
