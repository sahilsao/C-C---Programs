#include <stdio.h>
#include<conio.h>
#include <string.h>
int main()
{
    char c[20];

    printf("Enter string: ");
    gets(c);
    //calculates the length of string before null charcter.
    printf("Length of string is= %d \n",strlen(c));

    getch();
}