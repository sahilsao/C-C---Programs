#include<stdio.h>

int main() {
   int a[30], search, num, i;

   printf("\nEnter no of elements :");
   scanf("%d", &num);

   printf("\nEnter the values :");
   for (i = 0; i < num; i++) {
      scanf("%d", &a[i]);
   }

   //Read the element to be searched
   printf("\nEnter the elements to be searched :");
   scanf("%d", &search);

   //Search starts from the zeroth location
   i = 0;
   while (i < num && search != a[i]) {
      i++;
   }

   //If i < num then Match found
   if (i < num) {
      printf("Number found at the location = %d", i + 1);
   } else {
      printf("Number not found");
   }

   return (0);
}
