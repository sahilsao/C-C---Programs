/*WAP to find out fibbannocci series */

#include<stdio.h>
void main()
{
  int n,i,a,b,c;
  a=0,b=1;

  printf("Enter the range:");
  scanf("%d",&n);

  printf("%d",a);
  printf("%d",b);
  i=2;

  while(i<n)
  {
    c=a+b;
    printf("%d",c);
    a=b;
    b=c;
    i=i+1;
  }
 }