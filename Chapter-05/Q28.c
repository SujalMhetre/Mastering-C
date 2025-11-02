// Q)Write a function that prints "Namaste" if the user is indian and "Bonjour" if the user is French.

#include <stdio.h>

void printnamaste();
void printbonjour();

int main()
{

    int indian;
    printf("Enter your nationality 1 for Indian, 0 for French :");
    scanf("%d", &indian);
    if (indian == 1)
    {
        printnamaste();
    }
    else if (indian == 0)
    {
        printbonjour();
    }
    else
    {
        printf("Enter valid input");
    }

    return 0;
}

void printnamaste()
{
    printf("Namaste");
}

void printbonjour()
{
    printf("Bonjour");
}