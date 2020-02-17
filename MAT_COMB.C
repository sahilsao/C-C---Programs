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
printf("The substraction of matrix is:\n\n");
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
			c[i][j]=a[i][j]-b[i][j];
		printf(" %d\t",c[i][j]);
	}
	printf("\n\n");
}
printf("The addition of matrix is:\n\n");
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
			c[i][j]=a[i][j]+b[i][j];
		printf(" %d\t",c[i][j]);
	}
	printf("\n\n");
}
printf("The multyplication of matrix is:\n\n");
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
		c[i][j]=0;
		for(k=0;k<=2;k++)
			c[i][j]=c[i][j]+a[i][k]*b[k][j];
		printf("%d\t",c[i][j]);
	}
	printf("\n\n");
}
getch();
}

