/*Q.WAP to perfform a command line to copy one data file into another*/

#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
main(int argc,char *argv[3])
{
  char ch;
  FILE*fp,*ff;
  clrscr();
  if(argc!=3)
  {
   printf("Can't perform the task due to sufficient arguments:");
   exit(1);
  }
  fp=fopen(argv[1],"r");
  if(fp==NULL)
  {
   printf("Can't open the source file");
   exit(1);
  }
  ff=fopen(argv[2],"w");
  if(ff==NULL)
  {
   printf("Can't open the target file");
   fclose(ff);
   exit(1);
  }
  while(1)
  {
   ch=fgetc(fp);
   if(ch==EOF)
      break;
   else
      fputc(ch,ff);
  }
   printf("File copied successfully.\n");
   fclose(fp);
   fclose(ff);
  getch();
}
