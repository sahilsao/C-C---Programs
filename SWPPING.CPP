/*WAP to enter any two number and swap them without using third variable*/
#include<stdio.h>
void main()
{
   int a,b;

   printf("Enter the values for a: ");
   scanf("%d",&a);
   
   printf("Enter the value for b: ");
   scanf("%d",&b);

   a=a+b;
   b=a-b;
   a=a-b;

   printf("\nAfter swaping a=%d",a);
   printf("\nAfter swaping b=%d",b);
}