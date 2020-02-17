#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
   char n[5][30], temp[30];
   int a,b;
   clrscr();
   printf("Enter any five string \n");
   for(a=0;a<=4;a++)
   {
      gets(n[a]);
   }
   for(a=0;a<=4;a++)
   {
      for(b=0;b<=3;b++)
      {
	 if(strcmp(n[b],n[b+1])>0)
	 {
	 strcpy(temp,n[b]);
	 strcpy(n[b],n[b+1]);
	 strcpy(n[b+1], temp);
	 }
      }
   }
   printf("sorted strings are : \n");
   for(a=0;a<=4;a++)
   {
      printf("%s\n", n[a]);
   }

   getch();
}
