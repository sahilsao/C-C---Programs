/*Q22. Write a program to enter values for two matrices and print their multiplication.

Program:-
Multiplication of two Matrix 3x3 */
#include<stdio.h>
#include<conio.h>
main()
{
   int mat1[3][3], mat2[3][3], mat3[3][3], i ,j;
   clrscr();
   printf("Enter the value for I Matrix :\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
	   scanf("%d" , &mat1[i][j]);
       }
   }
   printf("Enter the value for II matrix: \n");
   for(i=0; i<3; i++)
   {
       for(j=0;j<3;j++)
       {
	   scanf("%d" , &mat2[i][j]);
       }
   }
   for(i=0;i<3;i++)
   {
       for(j=0;j<3; j++)
       {
	   mat3[i][j]= mat1[i][j]*mat2[i][j];
       }
   }
   printf("The Multiplication of two Matrix is:\n ");
    for(i=0; i<3;i++)
    {
      for(j=0; j<3; j++)
      {
	  printf("\t %d", mat3[i][j]);
      }
      printf("\n");
    }
     getch();
}
