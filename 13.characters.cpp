/*Q17. Write a program to find no of vowels, Consonents, blanks, no. of characters  and its length.

Program:-*/
 #include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
   int pun=0,len,a,vowel=0,ch,cons;
   char n[50];
   clrscr();
   printf("Enter any String :");
   gets(n);
   len=strlen(n);
   for(a=0;a<len;a++)
   {
       ch=n[a];
       switch(ch)
       {
	   case 'a':
	   case 'A':
	   case 'e':
	   case 'E':
	   case 'i':
	   case 'I':
	   case 'o':
	   case 'O':
	   case 'u':
	   case 'U':
	   vowel ++;
	   break;
	   case ',':
	   case '.':
	   case '!':
	   case ';':
	   case '?':
	   pun++;
	   break;
	   }
	   }
	   cons=len-(vowel+pun);
	   ch=len-pun;
	   printf("\n No. of Vowels= %d", vowel);
	   printf("\n No of Consonents= %d", cons);
	   printf("\n No of Characters= %d", ch);
      printf("\n No of Punctations = %d", pun);
	   getch();
       }
