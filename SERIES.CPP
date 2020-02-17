/*WAP to print the following patterns
ABCDEFG
ABC EFG
AB   FG
A     G   */

#include<stdio.h>
void main()
{
 int a,b,c,d,f='D',r=-1;

 for(a='D';a>'A';a--)
 {
  for(b='A';b<=a;b++)
  printf("%c",b);
  for(c=1;c<=r;c++)
  printf("");
  r+=2;
  for(d=f;d<='G';d++)
  {
   if(d!='D')
    printf("%c",d);
  }
  f++;
  printf("\n");
 }
}