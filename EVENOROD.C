#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter any no to check even or odd  :");
	scanf("%d", &n);
	if(n%2==0)
	{
		printf("The Enter no is EVEN");
	}
	else
	{
		printf("The enter no is ODD ");
	}
	getch();
}

