#include<stdio.h>
#include<conio.h>
void main()
{
int p,n,count;
float r,si;
clrscr();
for(count=1;count<=3;count=count+1)
{
	printf("enter the entry no. %d :\n",count);
	printf("Enter values of p-->");
	scanf("%d",&p);
	printf("Enter values of n-->");
	scanf("%d",&n);
	printf("Enter values of r-->");
	scanf("%f",&r);
	si=p/100*n*r;
	printf("Simple interest=Rs.%f\n\n\n",si);
}
	printf("press any key to exit.....");
getch();
}
