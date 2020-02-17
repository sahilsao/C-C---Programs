#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],i,j,r,c,sum[10][10];
	printf("ENTER THE ROWS & COLOUMNS:");
	scanf("%d %d",&c,&r);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d %d",&a[i][j],&b[i][j]);
		
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		sum[i][j]=a[i][j]+b[i][j];
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("\t%d",sum[i][j]);
		printf("\n");
        }
	
}                                             