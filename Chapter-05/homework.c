#include <stdio.h>

int sum(int a, int b);
int square_root(int n);

int main()
{
    // a)Write a function to write some of digits of a number.
    // int a, b;
    // printf("Enter your numbers :");
    // scanf("%d %d", &a, &b);

    // printf("Sum of the numbers is :%d \n", sum(a, b));

    // b)Write a function to find square of a number.
    int n;
    printf("Enter your number :");
    scanf("%d", &n);

    printf("Square root is : %d", square_root(n));

    return 0;
}

// a)Write a function to write some of digits of a number.
// int sum(int a, int b)
// {
//     return a + b;
// }

// b)Write a function to find square root of a number.
