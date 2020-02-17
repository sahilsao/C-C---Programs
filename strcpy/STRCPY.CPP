#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
clrscr();
char str1[20],str2[20];
printf("enter a string:");
scanf("%s",&str1);
strcpy(str2,str1);
printf("the copied string is %s",str2);
getch();
return(0);

}
