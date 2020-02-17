#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,g;
	clrscr();
	printf("enter any 3 numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			g=a;
		else
			g=c;
	}
	else
	{
		if(b>c)
			g=b;
		else
			g=c;
	}

	printf("Greatest value is %d",g);
	getch();
}
