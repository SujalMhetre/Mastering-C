// Q)Use library functions to calculate the square of a number given by user.

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter your number :");
    scanf("%d", &n);

    printf("%.2f", pow(n, 2));

    return 0;
}