#include<stdio.h>
#include<conio.h>
main()
{
void mul(int);
  int n;
	clrscr();
	printf("Enter the no you want to generate multiplication table : ");
	scanf("%d",&n);
	mul(n);
    getch();
}
void mul(int i)
{
	int a,multi=1;
	for(a=1;a<=10;a++)
	{
		multi=a*i;
		printf("\n%d", multi);
	}
}
