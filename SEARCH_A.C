/**/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,k,j,r[5];
clrscr();
printf(" Enter the elements of array\n");
for(k=1;k<=5;k++)
{
	scanf("%d",&r[k]);
}
printf("Enter the element to be searched ");
scanf("%d",&j);
for(i=1;i<=5;i++)
{
	if(r[i]==j)
	{
		printf("The no. is found in %d position\n",i);
	}
	else if(i>5)
		printf("The no. is not found.");
}
getch();
}