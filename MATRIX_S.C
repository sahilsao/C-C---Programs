#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],i,j,k,c[3][3];
clrscr();
printf("Enter values for first 3*3 matrix\n ");
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
		scanf("%d",&a[i][j]);
}
printf("enter values for second 3*3 matrix \n");
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
		scanf("%d",&b[i][j]);
}
//Substraction of two matrix
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
			c[i][j]=a[i][j]-b[i][j];
		printf(" %d\t",c[i][j]);
	}
	printf("\n\n");
}
getch();
}

