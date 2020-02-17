#include<stdio.h>
#include<conio.h>
void main()
{
int leapdays,firstday,yr;
long int normaldays,totaldays;
clrscr();
printf("Enter year");
scanf("%d",&yr);
normaldays=(yr-1)*365L;
leapdays= (yr-1)/4 - (yr-1)/100 + (yr-1)/400;
totaldays=normaldays+leapdays;
firstday= totaldays %7;
if(firstday==0)
		printf("\n monday");
if(firstday==1)
		printf("\n tuesday");
if(firstday==2)
		printf("\n wednusday");
if(firstday==3)
		printf("\n thirsday");
if(firstday==4)
		printf("\n friday");
if(firstday==5)
		printf("\n suterday");
if(firstday==6)
		printf("\n sunday");
getch();
}
