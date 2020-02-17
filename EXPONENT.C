#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int x,fact,i,n;
float Es;
clrscr();
printf("Enter the value of x -->");
scanf("%d",&x);
printf("enter the number of terms  ");
scanf("%d",&n);
fact=1;
Es=1;
for(i=1;i<=n;i++)
{
	fact=fact*i;
	Es=Es+(pow(x,i))/fact;
}
printf(" %f ",Es);
getch();
}
