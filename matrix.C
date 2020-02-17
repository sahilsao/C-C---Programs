# include <stdio.h>
# include <conio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],d,e;
clrscr();
printf("enter the first matrix");
for(d=1;d<=3;d++)
{
for(e=1;e<=3;e++)
{
scanf("%d\n\t",&a[d][e]);
}
printf("\n");
}
printf("enter the second matrix");
for(d=1;d<=3;d++)
{
for(e=1;e<=3;e++)
{
scanf("%d\n\t",&b[d][e]);
}
printf("\n");
}
for(d=1;d<=3;d++)
{
for(e=1;e<=3;e++)
{
c[d][e]=a[d][e]+b[d][e];
printf("%d%d\t",a[d][e],b[d][e]);
}
printf("\n");
}
for(d=1;d<=3;d++)
{
for(e=1;e<=3;e++)
{
scanf("%d\t",c[d][e]);
}
printf("\n");
}
getch();
}
