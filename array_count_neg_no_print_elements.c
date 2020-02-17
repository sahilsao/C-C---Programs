#include <stdio.h>

int main()
{
    int arr[100]; //Declares an array of size 100
    int i, n, count=0;

    /* Input size of the array */
    printf("Enter size of the array : ");
    scanf("%d", &n);


    /* Input array elements */
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /*
     * Counts total number of negative elements in array
     */
    for(i=0; i<n; i++)
    {
        /* Increment count if current array element is negative */
        if(arr[i]<0)
        {
            count++;
        }
    }

    printf("\nTotal number of negative elements = %d", count);

    return (0);
}
