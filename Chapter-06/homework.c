#include <stdio.h>

void count(int *ptra, int *ptrb);
void alpha(char *ptra, char *ptrz);

int main()
{
    // Q-a)Write a program in c to find maximum number between two numbers using a pointer.
    int a = 10;
    int b = 20;

    int *ptra = &a;
    int *ptrb = &b;

    count(ptra, ptrb);

    // Q-b)Write a program to print all the letters in english in alphabets using pointers.
    char a = 'A';
    char z = 'Z';

    char *ptra = &a;
    char *ptrz = &z;

    alpha(ptra, ptrz);

    return 0;
}

// Q-a)Write a program in c to find maximum number between two numbers using a pointer.
void count(int *ptra, int *ptrb)
{
    if (*ptra > *ptrb)
    {
        printf("Maximim number is %d", *ptra);
    }
    else
    {
        printf("Maximim number is %d", *ptrb);
    }
}

// Q-b)Write a program to print all the letters in english in alphabets using pointers.
void alpha(char *ptra, char *ptrz)
{
    for (char i = *ptra; i <= *ptrz; i++)
    {
        printf("%c \n", i);
    }
}