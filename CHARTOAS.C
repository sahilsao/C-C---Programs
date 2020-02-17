#include <stdio.h>
#include <conio.h>
void main(){
     int chasc,i,cnt=0;
     char ch,str[40]="";
     clrscr();
     printf("*****Vowels*****\n\n");
     printf("enter string : ");
     scanf("%[^\n]s",str);
     for(i=0;str[i]!='\0';i++)
     {
     chasc = str[i];
     switch(chasc){
          case'a' :
          case'A' :
          case'e' :
          case'E' :
          case'i' :
          case'I' :
          case'o' :
          case'O' :
          case'u' :
          case'U' :
          cnt++;
     }
     }

     printf("\nTotal number of vowels is %d",cnt);
getch();
}
