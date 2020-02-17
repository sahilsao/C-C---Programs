#include<stdio.h>
//#include<conio.h>
 main()
{
char word[40];
int i;
puts("enter the string:");
gets(word);
for(i=0;word[i]!='\0';i++);
puts("length of string is:");
printf("%d",i);
//getch();
return(0);
}
