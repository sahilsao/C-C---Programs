#include<stdio.h>
#include<conio.h>
void main()
{
int n[100],i,j,k,a,step;
clrscr();
for(i=0;i<=99;i++)
{
      for(i=0;i<n;i++)
      {
      a=n%i;
      if(a==0)
      break;
      else
      continue;
      }
      if(i==n)
       printf("%d \t ",n);
      }

getch();
}
