#include<stdio.h>
#include<string.h>
#include<conio.h>
struct lib
{
char book_name[20];
char author[20];
int page;
float price;
}l1;
main()
{
strcpy(l1.book_name,"VECTOR");
strcpy(l1.author,"H.K.PATHAK");
l1.page=100;
l1.price=150;
clrscr();
printf("\n the name of the book is %s",l1.book_name);
printf("\n author of the book is %s",l1.author);
printf("\n pages in the book is %d",l1.page);
printf("\n price of the book is Rs. %f",l1.price);
getch();
return(0);
}