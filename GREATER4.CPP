/*Greatest value among 4 no.*/

#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,d;
 clrscr();
 printf("Enter any four no:");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 if(a>b&&a>c&&a>d)
 {
  printf("First value is greater=%d",a);
 }
 else if(b>a&&b>c&&b>d)
 {
  printf("Second value is greater=%d",b);
 }
 else if(c>a&&c>b&&c>d)
 {
  printf("Third value is greater=%d",c);
 }
 else
 {
  printf("Fourth is greater=%d",d);
 }
 getch();
}