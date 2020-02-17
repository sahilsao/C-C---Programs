/*WAP to print lucas series upto n*/

#include<stdio.h>
void main()
{
  int a=0,b=1,c=0;

  for(a=0;a<=13;a++)
  {
   printf("%d\t%d\t%d",a,b,c);
   a=a+b+c;
   b=a+b+c;
   c=a+b+c;
  }
}