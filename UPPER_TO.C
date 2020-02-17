#include<stdio.h>
#include<conio.h>
char lower_to_upper(char c1)
{
char c2;
c2=(c1>='A' && c1<='Z') ? (c1+32):c1;
return(c2);
}
void main()
{
char lower,upper;
clrscr();
printf("please enter a lower case character:");
scanf("%c",&lower);
upper=lower_to_upper(lower);
printf("\nThe upper case equivalent is %c\n\n",upper);
printf("\n\n\n\n\npress any key to exit.....");
getch();
}