/*multipcation table*/
#include<stdio.h>
#include<conio.h>
# define ROWS 10
# define COLUMNS 15
void main()
{
int i,j,row,column,product[ROWS][COLUMNS];
clrscr();
printf("multiplication table\n\n");
printf(" ");
for(j=1;j<=COLUMNS;j++)
	printf("%4d",j);
printf("\n");
printf("----------------------------------------------------------------\n");
for (i=0;i<ROWS;i++)
{
	row=i+1;
	printf("%2d|",row);
	for(j=1;j<=COLUMNS;j++)
	{
	column=j;
	product[i][j]=row*column;
	printf("%4d",product[i][j]);
	}
	printf("\n");
}
getch();
}