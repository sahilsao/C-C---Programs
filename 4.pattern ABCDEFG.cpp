#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,c,d,f='D',r=-1;
   clrscr();
   for(a='D';a>='A';a--)
   {
     for(b='A';b<=a;b++)
     printf("%c", b);
for(c=1;c<=r;c++)
	printf(" ");
	 r+=2;
	  for(d=f;d<='G';d++)
	  {
	       if(d!='D')
               printf("%c", d);
	  }
	     f++;
	     printf("\n");
      }
            getch();
  }
