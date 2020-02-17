#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	long int f=1;
	printf("Enter the value of n:");
	scanf("%d",&n);
	if(n<1)
	{
		printf("f=1");
	}
	else
  		for(i=1;i<=n;i++)
		{
			f=f*i;
			printf("The result is:%ld\n",f);
		}
}