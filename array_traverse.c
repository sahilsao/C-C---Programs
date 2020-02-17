#include<stdio.h>

int main() {
   int i, arr[50], num;

   printf("Enter no of elements :");
   scanf("%d", &num);

   //Reading values into Array
   printf("\nEnter the values :\n");
   for (i = 0; i < num; i++) {
      scanf("%d", &arr[i]);
   }

   //Printing of all elements of array
   for (i = 0; i < num; i++) {
      printf("\narr[%d] = %d", i, arr[i]);
   }

   return (0);
}
