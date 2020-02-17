#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],i,j,r,c;
	printf("ENTER THE ROWS & COLOUMNS:");
	scanf("%d %d",&c,&r);
	for(i=0;i<r;i++)
	{	for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<r;i++)
	{	for(j=0;j<c;j++)
		printf("\t%d",a[i][j]);
		printf("\n");
        }
	
}                                             