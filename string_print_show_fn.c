#include <stdio.h>
#include<conio.h>
void show(char str[]);

int main()
{
    char str[50];
    printf("Enter string: ");
    gets(str);
    show(str);     // Passing string c to function.
    getch();
}
void show(char str[])
{
    printf("String Output: ");
    puts(str);
}