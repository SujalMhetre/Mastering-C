// Q)Write a program to store tables of 2 and 3 in a 2D array.

#include <stdio.h>

void tables(int arr[][10], int a, int b);

int main()
{
    int arr[2][10];
    int a;
    int b;

    printf("Enter 2 numbers to print their tables\n:");
    scanf("%d %d", &a, &b);

    tables(arr, a, b);

    return 0;
}

void tables(int arr[][10], int a, int b)
{
    for (int j = 0; j < 10; j++)
    {
        arr[0][j] = a * (j + 1);
        arr[1][j] = b * (j + 1);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("Table of %d: ", (i == 0) ? a : b);
        for (int j = 0; j < 10; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}