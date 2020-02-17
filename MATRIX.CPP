#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,x[2][2],y[2][2],z[2][2];
printf("enter the matrix x");
for(a=0;a<2;a++)
{
for(b=0;b<2;b++)
{
scanf("%d",&x[a][b]);
}
}
printf("enter the matrix y");
for(a=0;a<2;a++)
{
for(b=0;b<2;b++)
{
scanf("%d",&y[a][b]);
}
}
for(a=0;b<2;b++)
{
for(b=0;b<2;b++)
{
z[a][b]=x[a][b]+y[a][b];
}
}
printf("display/show the resultant value");
for(a=0;a<2;a++)
{
for(b=0;b<2;b++)
{
printf("%d",z[a][b]);
}
printf("\n");
}
getch();
}
