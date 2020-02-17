
/*Q25. Write a program to swapping two numbers and demonstrates call by value and call by Reference.

Program:-

 (a) Call by Value 
 Swapping throug call by value */
#include<stdio.h>
#include<conio.h>
swap(int,int);
void main()
{
  int a,b;
  clrscr();
  printf("Enter any two no.\n ");
  scanf("%d %d" ,&a,&b);
  printf("\nBefore swapping number are : %d and %d",a,b);
  swap(a,b);
  getch();
  }
  swap(int x, int y)
  {
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nAfter swapping no. are : %d and %d" ,x, y);
  }
