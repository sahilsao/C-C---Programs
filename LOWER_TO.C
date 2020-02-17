#include<stdio.h>
#include<conio.h>
char lower_to_upper(char c1)
{
char c2;
c2=(c1>='a' && c1<='z') ? ('A'+c1-'a'):c1;
return(c2);
}
void main()
{
char lower,upper;
clrscr();
printf("pleas enter a lower case character:");
scanf("%c",&lower);
upper=lower_to_upper(lower);
printf("\nThe upper case equivalent is %c\n\n",upper);
getch();
}