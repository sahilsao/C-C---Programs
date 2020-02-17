#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0,avg,marks[6];
clrscr();
for(i=0;i<=5;i++)
{
	printf("\nEnter marks\t");
	scanf("%d",marks[i]);
	sum=sum+marks[i];
}
avg=sum/6;
printf("\n\nSUM=%d AVERAGE=%d",sum,avg);
printf("\n\n\n\n\nPress any key to exit.......");
getch();
}
