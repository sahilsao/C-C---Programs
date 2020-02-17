#include<stdio.h>
#include<conio.h>
main()
{
float temp,tempc;
char c1;
clrscr();
printf("TEMPERATURE MENU");
printf("\n 1.FAHRENHIET\n 2.CELCIUS");
printf("ENTER YOUR CHOICE: ");
scanf("%c",&c1);
if(c1=='1')
{
printf("========'FAHRENHIET'========");
printf("\nENTER TEMPERATURE: ");
scanf("%f",&temp);
tempc=(temp-32)/1.8;
printf("TEMPERATURE IN CELCIUS:	%f",tempc);

}
else
{
if(c1=='2')
{
printf("========'CELCIUS'========");
printf("\nENTER TEMPERATURE: ");
 scanf("%f",&temp);
tempc=(temp*1.8)+32;
printf("TEMPERATURE IN FAHRENHIET: %f",tempc);
}
else
printf("WRONG CHOICE....!");
}
getch();
return(0);
}

