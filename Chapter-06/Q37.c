// Q)Print the value of i form pointer to pointer.

#include <stdio.h>
int main()
{
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;


    printf("Value of i = %d",**pptr);

    return 0;
}