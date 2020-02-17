#include<stdio.h>
#include<conio.h>
main()
{
int a[3][3],b[3][3],c[3][3],sum,i,j;
int r1,r2,c1,c2,k;
printf("\n enter the row of matrix -A:");
scanf("%d",&r1);
printf("\n enter the column of matrix -A:");
scanf("%d",&c1);
printf("\n enter the row of matrix -B:");
scanf("%d",&r2);
printf("\n enter the column of matrix -B:");
scanf("%d",&c2);
if (r2==c1)
{ printf("\n enter the element of matrix -A");
for (i=0;i<r1;i++)
{ for (j=0;j<c1;j++)
scanf("%2d",&a[i][j]);
}
 printf("\n enter the element of matrix -B");
for (i=0;i<r2;i++)
{ for (j=0;j<c2;j++)
scanf("%2d",&b[i][j]);
}
printf("\n the matrix -A:");
for (i=0;i<r1;i++)
{
 printf("\n");
 for(j=0;j<c1;j++)
 printf("%2d",a[i][j]);
}
printf("\n the matrix -B:");
for (i=0;i<r2;i++)
{
 printf("\n");
 for(j=0;j<c2;j++)
 printf("%2d",b[i][j]);
}
printf("\n after multiplication matrix A and B we get:");
for (i=0;i<r1;i++)
{ for (j=0;j<c2;j++)
{c[i][j]=0 ;
for (k=0;k<c1;k++)
c[i][j]+=(a[i][k]*b[k][j]);
}
}
for(i=0;i<r1;i++)
{
printf("\n");
for (j=0;j<c2;j++)
printf("%2d",c[i][j]);
}
}
else
printf("\nmatrix cannot be multiply");
getch();
return(0);
}
