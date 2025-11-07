// Q)Write a code to check if a given charachter is present or not.

#include <stdio.h>
#include <string.h>

int check(char arr[], char n);

int main()
{

    char name[100];
    printf("Enter your string :");
    fgets(name, 100, stdin);

    char n;
    printf("Enter your character to check :");
    scanf("%c", &n);

    if (check(name, n))
    {
        printf("your character is present in the string");
    }
    else
    {
        printf("your character is not-present in the string");
    }

    return 0;
}

int check(char arr[], char n)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == n)
        {
            return 1;
        }
    }
    return 0;
}