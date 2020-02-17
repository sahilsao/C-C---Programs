/*WAP to display exponential series*/

#include<stdio.h>
#include<conio.h>
void main()
{
  int n,a,b,power=1,sum=0,x;
  clrscr();

  printf("Enter the value of x:");
  scanf("%d",&x);

  printf("Enter the terms:");
  scanf("%d",&n);

  for(a=1;a<=n;a++)
  {
    printf("%d^%d",x,a);
    if(a<n)
    {
    printf("+");
    }
    else
    {
     printf("+=");
    }
    power=1;
    for(b=1;b<=a;b++)
    {
     power=power*x;
    }
     sum+=power;
   }
     printf("%d",sum);
  getch();
}

