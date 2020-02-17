#include<stdio.h>
#include<conio.h>
void main()
{
	int num[100],i,j,k,step;
	clrscr();
	for(i=0;i<=99;i++)
		num[i]=i+1;
	for(i=1;i<=99;i++)
	{
	if(num[i]!=0)
	{
	k=num[i]*2-1;
	step=num[i];
	for(j=k;i<=99;j=j+step)
	num[j]=0;
	}
}
printf("\nprime numbers between 1 and100 are:\n");
for(i=0;i<=99;i++)
{
if(num[i]!=0)
printf("%d\t",num[i]);
}
getch();
}
