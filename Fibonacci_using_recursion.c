/*
 * C Program to find the nth number in Fibonacci series using recursion
 */
#include <stdio.h>
int fibo(int);

int main()
{
    int num;
    int result;

    printf("Enter the nth number in fibonacci series: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Fibonacci of negative number is not possible.\n");
    }
    else
    {
        result = fibo(num-1);
        printf("The %d number in fibonacci series is %d\n", num, result);
        printf("Fibonacci of %d: " , num);
        for(int i = 0;i<num;i++){
        printf("%d ",fibo(i));
        }
    }
    return 0;
}
int fibo(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return(fibo(num - 1) + fibo(num - 2));
    }
}

