/*Call an array
 by value*/
#include<stdio.h>
#include<conio.h>
void display(int);
void main()
{
int i,marks[]={55,67,45,65,87,34,67};
clrscr();
for(i=0;i<=6;i++)
	display(marks[i]);
}
	void display(int m)
{
	printf(" %d",m);
getch();
}
