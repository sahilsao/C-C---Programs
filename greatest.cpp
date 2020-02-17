/*WAP to enter any 4 numbers and print the greatest value using if statement and conditional operator*/
#include<stdio.h>
void main()
{
 int a,b,c,d;

 printf("Enter a value for a: ");
 scanf("%d",&a);

 printf("Enter a value for b: ");
 scanf("%d",&b);

 printf("Enter a value for c: ");
 scanf("%d",&c);

 printf("Enter a value for d: ");
 scanf("%d",&d);

 if(a>b)
 {
   if(a>c)
   {
    if(a>d)
    {
      printf("Greatest number is:%d",a);
    }
    else
    {
      printf("Greatest number is:%d",d;
    }
   }
  else
  {
    if(c>d)