

#include <stdio.h>
#include <conio.h>

 main()
{
   char text[100];
   printf("enter the string :");
   int begin, middle, end, length = 0;

   gets(text);

   while ( text[length] != '\0' )
      length++;

   end = length - 1;
   middle = length/2;

   for( begin = 0 ; begin < middle ; begin++ )
   {
      if ( text[begin] != text[end] )
      {
         printf("Not a palindrome.\n");
         break;
      }
      end--;
   }
   if( begin == middle )
      printf("Palindrome.\n");

   getch();
}