#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j=0,a,arr[100];
clrscr();
for(n=2;n<=100;n++)
{
      for(i=2;i<n;i++)
      {
      a=n%i;
      if(a==0)
      break;
      else
      continue;
      }
      if(i==n)
      {
       arr[j]=n;
       printf("%d \t ",arr[j]);
      }
}
getch();
}
