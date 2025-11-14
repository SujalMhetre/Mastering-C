// Q) 2 numbers a and b are written in a file write a program to replace them with their sum.

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Numbers.txt", "r");

    int a, b, sum = 0;

    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    sum = a + b;
    fptr = fopen("Numbers.txt", "w");

    fprintf(fptr, "%d", sum);

    fclose(fptr);

    return 0;
}