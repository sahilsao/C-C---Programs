#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	int a,r;
	printf("The radius of the circle is:");
	scanf("%d",&r);
	a=PI*r*r;
	printf("the area of the circle is:%d",a);
        getch();
}