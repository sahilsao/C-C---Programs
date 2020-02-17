#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char final[40];
char str1[]={"bharti"};
char str2[]={" & komal"};
char str3[]={" mamta"};
clrscr();
strcpy(final,str1);
strcat(final,str2);
strcat(final,str3);
printf("after concatination yhe string is: %s",final);
getch();
return(0);
}