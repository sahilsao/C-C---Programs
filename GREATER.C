#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter first no  :");
	scanf("%d", &a);
	printf("Enter Second no. :");
	scanf("%d", &b);
	if(a>b)
	{
		printf("The first no is greater");
	}
	else
	{
		printf("The second no is greater");
	}
	getch();
}