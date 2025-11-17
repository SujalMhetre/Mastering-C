// Q)Allocate memory for 5 numbers then dynamically increase it or decrease it to 8 numbers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    printf("Enter your numbers(5) :");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8);

    printf("Enter your numbers(8) :");

    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &ptr[i]);
    }
    // print
    for (int i = 0; i < 8; i++)
    {
        printf("your numbers are :%d\n", ptr[i]);
    }

    free(ptr);
    return 0;
}