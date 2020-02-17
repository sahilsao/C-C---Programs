#include<stdio.h>
#include<conio.h>
main()
{
char ch;
clrscr();
printf(" enter a character:");
scanf("%c",&ch);
if(ch>='a'&&ch<='z')
printf("the character is in lower case");
else
{
if(ch>='A'&&ch<='Z')
printf("the character is in upper case");
else
if(ch>='0'&&ch<='9')
printf("this is a digit");
else
printf("it is a special character");
}
getch();
return(0);
}