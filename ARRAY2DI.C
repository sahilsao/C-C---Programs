#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4][3];
	int r,c,j,i;
	
	printf("Enter the value of rows & coloumn:\t");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
                        printf("\t");
		}
                printf("\n");
	}
}                