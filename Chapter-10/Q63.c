// Q)Write a program to write all the odd numbers from 1-n in a file

#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number to decide what max range you want the odd numbers till be :");
    scanf("%d", &n);

    FILE *fptr;
    fptr = fopen("ODD-Number.txt", "w");

    char ch[] = "Odd Numbers are :";
    fprintf(fptr, "%s", ch);

    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(fptr, "%d\t", i);
        }
    }

    fclose(fptr);
    return 0;
}