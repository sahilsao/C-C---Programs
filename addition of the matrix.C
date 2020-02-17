/*A program for addion of matrixs*/
# include <stdio.h>
# include <conio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],d,e;
clrscr();
printf("enter the first matrix");
for(d=1;d<=3;d++)
{
printf("\n");
for(e=1;e<=3;e++)
{
printf("\t");
scanf("%d",&a[d][e]);
}
}
printf("enter the second matrix");
for(d=1;d<=3;d++)
{
printf("\n");
for(e=1;e<=3;e++)
{
printf("\t");
scanf("%d",&b[d][e]);
}
}
printf("\n");
for(d=1;d<=3;d++)
{
for(e=1;e<=3;e++)
{
c[d][e]=a[d][e]+b[d][e];
printf("%d+%d\t",a[d][e],b[d][e]);
}
printf("\n");
}
printf("\n");
printf("sum of the two array\n");
for(d=1;d<=3;d++)
{
for(e=1;e<=3;e++)
{
printf("%d\t",c[d][e]);
}
printf("\n");
}
getch();
}
