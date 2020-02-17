#include<stdio.h>
#include<conio.h>
void main()
{
	void squ(int);
	int a;
        printf("Enter the value of a:");
	scanf("%d",&a);
	squ(a);
}
void squ(x)
int x;
{
	int y;
	y=x*x;
	printf("The result is:%d",y);
}
