#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k;
//   clrscr();
	for(i=1;i<=5;i+=2)
	{
	   for(j=i;j<=3;j+=2)
	     printf(" ");
	   for(k=1;k<=i;k++)
	     printf("*");
	     printf("\n");
	}
	getch();
}
