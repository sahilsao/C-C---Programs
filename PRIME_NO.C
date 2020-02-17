#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a;
clrscr();
for(n=2;n<=1000;n++)
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
       printf("%d \t ",n);
      }

getch();
}
