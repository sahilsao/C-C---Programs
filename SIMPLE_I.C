/* Program for calculating simple interest */
#include<stdio.h>
#include<conio.h>
void main()
{
       long int p,n;
	float r,si;
	clrscr();
printf("Enter any value for p,n,r-->");
scanf("%ld %ld %f",&p,&n,&r);
	si=(p*n*r)/100;
printf("The Simple Interest is:-->Rs.%f/-",si);
getch();
}
