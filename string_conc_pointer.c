#include<stdio.h>
#include<conio.h>

int main(){

  int i=0;

  char *str1,*str2,*str3;
   clrscr();
  puts("Enter first string");

  gets(str1);

  puts("Enter second string");

  gets(str2);

  printf("Before concatenation the strings are\n");

  puts(str1);

  puts(str2);

  while(*str1){

      str3[i++]=*str1++;

  }

  while(*str2){

      str3[i++]=*str2++;

  }

  str3[i]='\0';

  printf("After concatenation the strings are\n");

  puts(str3);

  getch();

}