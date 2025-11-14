// Q)Make a program to read 5 integers from a file.

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Hello.txt", "r");

    char A;
    A = fgetc(fptr);
    while (A != EOF)
    {
        printf("%c", A);
        A = fgetc(fptr);
    }
    printf("\n");

    fclose(fptr);
    return 0;
}