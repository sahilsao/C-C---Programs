#include <stdio.h>
#include <conio.h>
void main()
{
char word1[40],word2[40],word3[40],word4[40];
clrscr();
printf("enter text:\n");
scanf("%s%s",word1,word2);
scanf("%s",&word3);
scanf("%s",&word4);
printf("\n");
printf("word1=%s\nword2=%s\n",word1,word2);
printf("word3=%s\nword4=%s\n",word3,word4);
getch();
}
