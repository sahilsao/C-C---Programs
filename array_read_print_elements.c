#include<stdio.h>
int main()
{
int a[10];
int i,n;
printf("enter no of elements:");
scanf("%d",&n);
printf("enter array:");
for(i=1;i<=n;i++)
{
scanf("%d",a[i]);
}
printf("entered array is");
for(i=1;i<=n;i++)
{
printf("%d",a[i]);
}
}
