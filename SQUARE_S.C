#include<stdio.h>
#include<conio.h>
void main()
{
int arr[3][3],i,j,count=0;
clrscr();
printf("\nEnter the elements of the Matrix:\n");
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
		scanf("%d",&arr[i][j]);
}
printf("\nThe matrix form is...\n");
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	printf(" %d ",arr[i][j]);
	printf("\n");
}
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
		if(arr[i][j]==arr[j][i])
		count++;
	}
}
if (count==9)
printf("\n\nThe matrix is symmetric");
else
printf("\n\nThe matrix is not symmetric");
getch();
}
