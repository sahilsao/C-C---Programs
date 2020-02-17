#include<stdio.h>
#include<conio.h>
void main()
{
char n[20],m[20];
clrscr();
printf("Enter any string");
gets(n);
strcpy(m,n);
strrev(m,n);
if(strcmp(m,n)==0)
	printf("entered string in palindrome");
else
	printf("entered string is'nt palindrome");
getch();
}