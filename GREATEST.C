#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter any value for a,b and c to know greater value.");
scanf("%d %d %d",&a,&b,&c);

if(a>b)
	{
	if(a>c)
		printf("the greatest value= %d",a);
	else
		printf("the greatest value= %d",c);
	}
else if(b>c)
	printf("the greatest value= %d",b);
else
	printf("the greatest value= %d",c);
getch();
}
