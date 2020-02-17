#include <string.h>
#include <stdio.h>
#include<conio.h>

void find_str(char *str, char *substr)
{
    char* pos = strstr(str,substr);
    if(pos) {
        printf("found the string '%s' in '%s' at position: %ld\n", substr, str, pos - str);
    } else {
        printf("the string '%s' was not found in '%s'\n", substr, str);
    }
}

int main(void)
{
    char* str = "my name is sahil";
    clrscr();
    find_str(str,"name");
    find_str(str,"sahil");

    getch();
}