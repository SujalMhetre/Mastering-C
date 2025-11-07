// Q)Write a string Firstname & Lastname to store inside to store details of user and print all the character using a loop.

#include <stdio.h>

void printstring(char arr[]);

int main()
{

    char Firstname[] = "Sujal";
    char Lastname[] = "Mhetre";

    printstring(Firstname);
    printstring(Lastname);

    return 0;
}

void printstring(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\t");
}