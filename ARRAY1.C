#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i;
	int sum=0;
	printf("Enter the value of n:\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
}