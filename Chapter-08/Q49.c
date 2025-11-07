// Q)Write a program that inputs users name and prints its length.

#include <stdio.h>

int print(char arr[]);
int main()
{
    char name[100];
    printf("Enter your name :");
    fgets(name, 100, stdin);
    printf("Your name is:");
    puts(name);

    printf("Lenght of the string is %d", print(name));

    return 0;
}

int print(char arr[])
{
    int length = 0;
    for (int i = 0; arr[i] != 0; i++)
    {
        length = length + 1;
    }
    return length - 1;
}