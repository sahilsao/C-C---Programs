/*Q21. Write a program to enter any matrix and print its transpose.
Program:-  */
#include<stdio.h>
#include<conio.h>
main()
{
    int n[3][3],a,b;
    clrscr();
    printf("Enter any no to the Matrix :");
    for(a=0;a<=2;a++)
    {
	for(b=0;b<=2;b++)
	{
	    scanf("%d", &n[a][b]);
	}
    }
    printf("Values int he Transpose order: \n");
    for(a=0;a<=2;a++)
    {
      for(b=0;b<=2;b++)
      {
	  printf("%d \t",n[b][a]);
      }
      printf("\n");
    }
    getch();
}