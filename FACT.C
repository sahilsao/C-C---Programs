#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,fact=1;
	clrscr();
	printf("Enter any No. to factorial : ");
	scanf("%d", &a);
	for(i=1; i<=a; i++)
	{
		fact=fact*i;
	}
	printf("The Factorail value is : %d", fact);
	getch();
}