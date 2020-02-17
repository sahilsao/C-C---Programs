#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
  char string[55] ="Sahil Sao";
  char *p;
  p = strchr (string,'i');
  printf("The given string is: %s",string);
  printf ("\nCharacter i is found at position %d\n",p-string+1);
  printf ("\nFirst occurrence of character \"i\" in \"%s\" is" \
            " \"%s\"",string, p);

   getch();
}
