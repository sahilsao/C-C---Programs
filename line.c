#include<stdio.h>
#include<conio.h>
void main()
{
char line[81],character;
int c;
c=0;
printf("enter text press<enter>at end\n");
do
{
character=getchar();
line[c]=character;
c++;
}
while(character!='\n');
c=c-1;
line[c]='\o';
printf("\n%\n",line);
}
