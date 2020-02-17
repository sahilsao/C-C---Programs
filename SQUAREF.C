#include<stdio.h>
#include<conio.h>
void main()
{
	int a,c;
	int squ(int);
	printf("Enter the value of a:");
	scanf("%d",&a);
	c=squ(a);
	printf("%d",c);
}
int squ(x)
int x
{
	int y;
	y=x*x;
	return (y);
}