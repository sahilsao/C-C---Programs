#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a[]={12,52,48,65,35,15,75};
clrscr();
printf("enter the no of terms which you want to display");
scanf("%d",&n);
    for(i=0;i<7;i++)
	{
	if (n-1==i)
	printf("this is the element which you want to search: \n%d",a[i]);

       printf("\n%d",a[i]);
	}
getch();
}

