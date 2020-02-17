/*Q.24. Write a program to find whether a given string is Palindrome or not.

Program: -*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char n[20], m[20],diff;
clrscr();
printf("Enter any String:");
gets(n);
strcpy(m,n);
strrev(m);
diff=strcmp(n,m);
if(diff==0)
	printf("String is Palindrome:");
else
	printf("Not a Palindrome:");
getch();
}
 
