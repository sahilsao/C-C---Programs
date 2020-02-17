#include<stdio.h>

int main() {
   int arr[30], num, i, loc;

   printf("Enter no of elements :");
   scanf("%d", &num);

   //Read elements in an array
   printf("\nEnter %d elements :\n", num);
   for (i = 0; i < num; i++) {
      scanf("%d", &arr[i]);
   }

   //Read the location
   printf("\nlocation of the element to be deleted :");
   scanf("%d",&loc);

   /* loop for the deletion  */
   while (loc < num) {
      arr[loc - 1] = arr[loc];
      loc++;
   }
   num--;  // No of elements reduced by 1

   //Print Array
   for (i = 0; i < num; i++)
      printf("\n%d", arr[i]);

   return (0);
}
