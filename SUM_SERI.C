#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int x,i;
float result=0;
clrscr();
printf("\nEnter the value of x :");
scanf("%d",&x);
for(i=1;i<=7;i++)
{
	if(i==1)
		result=result+pow((x-1.0)/x , i);
	else
		result=result + (1.0/2) * pow((x-1.0)/x , i);
}
printf("\n\nThe result is : LOG(%d)=%f",x,result);
getch();
}
