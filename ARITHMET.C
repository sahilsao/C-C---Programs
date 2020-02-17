#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,f,g;
        printf("Enter the values of a and b:");
	scanf("%d %d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
        g=a%b;
	printf("%d %d %d %d %d",c,d,e,f,g);
}