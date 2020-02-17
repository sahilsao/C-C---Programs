#include<stdio.h>
/*#include<conio.h>*/
int main()
{
int i;
char s[100];
//clrscr();
printf("Enter the string:");
scanf("%s", s);
printf("All characters of string:\n");

for(i=0; s[i]!='\0'; i++)
{

    printf("%c\n", s[i]);

}
 getch();
 //return(0);
}
