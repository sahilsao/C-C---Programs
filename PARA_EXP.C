#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	a=9; b=12; c=3;

	printf("x= %d\n",a-b/3+c*2-1);
	printf("y= %d\n",a-b/(3+c)*(2-1));
	printf("z= %d\n",a-(b/(3+c)*2)-1);
	printf("\npress any button to exit....");
	getch();
}
