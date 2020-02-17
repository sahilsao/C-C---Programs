/*(b) Call by Reference*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
printf("Enter the value of a :\t ");
scanf("%d", &a);
printf(" \n ");
printf("Enter the value of b :\t ");
scanf("%d", &b);
printf(" \n ");
swap(&a,&b);
getch();
}
swap(int *n, int *m)
{
int temp;
temp=*n;
*m=*n;
*n= temp;
printf("The swaped value of a is: %d", *m);
printf(" \n ");
printf(" \n ");
printf("The swaped value of b is: %d\n", *n);
}

