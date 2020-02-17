#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char word[20];
clrscr();
printf("enter the word");
scanf("%s",&word);
{
printf("%s",strrev(word));
}
getch();
}