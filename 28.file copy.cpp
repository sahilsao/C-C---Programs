
#include<stdio.h>
#include<conio.h>
int main(int arg c,char*arg v[3])
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
 /*Note:
This question will need to perform following steps to solve:

(A)	Create a C program
(B)make it executable file
(C)move to command prompt and run the executable file.



  STEPS FOR COMMAND LINE OPERATION

 STEP 1:Create a program
             STEP 2: By preassing F9 key the compiler will Create  executable file name "file copy.exe".

 STEP 3: use the ecutable file (by either moving to path or defining file path)

   	 STEP 4: copy any file at command prompt as below:*/
