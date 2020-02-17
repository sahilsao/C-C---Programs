#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b;
	clrscr();
	printf("Enter the prices of Rice&Sugar: ");
	scanf("%f %f",&a,&b);
	printf("******List Of Items******\n");
	printf("Items\t\t\t\tPrice\n");
	printf("\nRice\t\t\t\tRs.%f",a);
	printf("\nSugar\t\t\t\tRs.%f",b);
}