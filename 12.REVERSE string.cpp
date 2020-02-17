/*WAP to reverse without using library function*/

#include<stdio.h>
#include<conio.h>
main()
{
 int i=0,n=0;
 char st[20];
 clrscr();
 printf("Enter any string: ");
 scanf("%s",st);
while(st[i]!='\0')
 {
   n++;
   i++;
 }

 printf("Reverse String:");

 for(i=n;i>=0;i--)
 {
  printf("%c",st[i]);
 }
 getch();
}