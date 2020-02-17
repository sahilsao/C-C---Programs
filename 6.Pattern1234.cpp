#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,n[6][6];
   clrscr();
   for(a=0;a<=4;a++)
   {
      for(b=0;b<=a;b++)
      {
	  if(b==0 || a==b)
	  n[a][b]=1;
	  else
	  n[a][b]=n[a-1][b-1]+n[a-1][b];
      }
   }
   for(a=0;a<=4;a++)
   {
      for(b=0;b<=a;b++)
      {
	printf("%d ",n[a][b]);
      }
      printf("\n");
   }
   getch();
   }
