#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter any character to know whether it is in uppercase or lowercase\n");
scanf("%c",&c);
if(c<91 && c>64)
	printf("The character is in upper case.");
else if(c>96 && c<123)
	printf("The character is in lower case.");
else
	printf("this is not an alphabet");
getch();
}
