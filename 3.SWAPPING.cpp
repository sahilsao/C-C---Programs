#include <stdio.h>
#include <conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter values for a: ");
	scanf("%d",&a);
	printf("Enter values for b: ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The Swapped value of a: %d",a);
	   printf("\nThe Swapped value of b: %d",b);
 getch();
}

