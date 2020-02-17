#include<stdio.h>
#include<conio.h>
int main()
{
float temp,tempc;
clrscr();
{
printf("========'FAHRENHIET TO CELCIUS'========");
printf("\nENTER TEMPERATURE: ");
scanf("%f",&temp);
tempc=(temp-32)/1.8;
printf("TEMPERATURE IN CELCIUS:	%f",tempc);
getch();
}
}

