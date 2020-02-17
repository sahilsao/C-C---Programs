#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[4][4],k;
clrscr();
printf("Enter value for 4*4 matrix:");
scanf("%d",&a[i][j]);
for(i=1;i<=4;i++)
{
	for(j=1;j<=4;j++)
	{
	if(a[i][j]<a[i+1][j+1])
	{
	      a[i][j]=a[i-1][j-1];
	}
	printf(" %d ",a[i][j]);
	i++,j++;
	}
      printf("\n");
}
printf("The 4*4 matrix after sorting is:\n\n");
for(i=1;i<=4;i++)
{
	for(j=1;j<=4;j++)
	{
	printf(" %d ",a[i][j]);
	}
  printf("\n");
  }
getch();
}























































































































































































































































