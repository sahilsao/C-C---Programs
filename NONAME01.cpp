#include<stdio.h>
#include<conio.h>
main(int arg c,char*arg v[3])
{
  char ch;
  FILE*fp,*ff;
  clrscr();
  if(arg c!=3)
  {
   printf("Can't perform the task due to sufficient arguments:");
   exit();
  }
  fp=fopen(arg v[1],"r");
  if(fp==NULL)
  {
   printf("Can't open the source file");
   exit();
  }
  ff=fopen(arg v[2],"w");
  if(ff==NULL)
  {
   printf("Can't open the target file");
   fclose(ff);
   exit();
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
