#include<iostream>
#include<stdlib.h>
 using namespace std;
int main() {
   FILE *fp1, *fp2;
   char ch;
cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\47.copy file content to another file.cpp"<<endl;
cout<<"---------------------------------------"<<endl;

   fp1 = fopen("Sample.txt", "r");
   fp2 = fopen("Output.txt", "w");

   while (1) {
      ch = fgetc(fp1);

      if (ch == EOF)
         break;
      else
         putc(ch, fp2);
   }

   cout<<"File copied Successfully!";
   fclose(fp1);
   fclose(fp2);
}
