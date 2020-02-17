#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{

char str1[20],str2[20];
int x;
clrscr();
printf("enter first string:");
scanf("%s",&str1);
printf("enter second string");
scanf("%s",&str2);
x = strcmp(str2,str1);
if(x==0)
printf("the string are same");
else
printf("the string are not same");
getch();
return(0);

}
