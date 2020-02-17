#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s=0,n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	printf("The sum is:%d",s);
}