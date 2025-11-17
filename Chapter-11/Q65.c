// Q) Write a program to allocate memory to store 5 prices.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *prices;
    prices = (int *)malloc(5 * sizeof(int));

    prices[0] = 1;
    prices[1] = 3;
    prices[2] = 5;
    prices[3] = 7;
    prices[4] = 9;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", prices[i]);
    }
    return 0;
}