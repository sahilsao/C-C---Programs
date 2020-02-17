#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "My name is ", str2[] = "Sahil Sao";
     printf("The first string is : %s",str1);
     printf("\nThe second string is : %s",str2);
    //concatenates str1 and str2 and resultant string is stored in str1.
    printf("\nThe Concatenate string is:");
    strcat(str1,str2);
    puts(str1);
    return 0;
}
