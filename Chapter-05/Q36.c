// Q)Write a function that  prints n terms of fibonacci sequence.

#include <stdio.h>

int fibonacci(int n);

int main()
{

    int n;
    printf("Enter your number :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", fibonacci(i));
    }

    return 0;
}

int fibonacci(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}