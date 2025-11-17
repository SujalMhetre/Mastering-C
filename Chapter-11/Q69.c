// Q) Create an array of 5 using calloc and enter its value from the user.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    printf("Enter your numbers :");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Your numbers are %d - %d\n", i, ptr[i]);
    }

    free(ptr);
    return 0;
}