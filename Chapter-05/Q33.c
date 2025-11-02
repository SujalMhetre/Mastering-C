// Q)Print factorial of n using recursion function.
#include <stdio.h>

int fact(int n);

int main()
{

    int n;
    printf("Enter your number :");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        printf("Factorial of your number is %d", fact(n));
    }

    return 0;
}

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}