#include<stdio.h>

int main() {
   int a[30], i, num, smallest,largest;

   printf("\nEnter no of elements :");
   scanf("%d", &num);

   //Read n elements in an array
   printf("\nEnter the elements :\n");
   for (i = 0; i < num; i++)
      scanf("%d", &a[i]);


   //Consider first element as smallest
   smallest = a[0];

   for (i = 0; i < num; i++) {
      if (a[i] < smallest) {
         smallest = a[i];
      }
   }
         //Consider first element as largest
   largest = a[0];

   for (i = 0; i < num; i++) {
      if (a[i] > largest) {
         largest = a[i];
      }
   }

   // Print out the Result
   printf("\nSmallest Element : %d", smallest);
   printf("\nLargest Element : %d", largest);
   return (0);
}
