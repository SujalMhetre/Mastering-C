// Q)write a program to store the first n fibonacci numbers.

#include <stdio.h>

void fibo(int arr[], int n);

int main()
{
    int n;
    printf("Enter how many fibonacci numbers you want :");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("enter a positive number");
        return 0;
    }

    int arr[n];
    fibo(arr, n);

    return 0;
}

void fibo(int arr[], int n)
{
    if (n >= 1)
    {
        arr[0] = 0;
    }
    if (n >= 2)
    {
        arr[1] = 1;
    }

    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    printf("Your fibonacci numbers are:");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}