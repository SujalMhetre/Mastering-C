// Q)Write a program to count the occurance of vowels in the string.

#include <stdio.h>
#include <string.h>

int dowork(char arr[]);

int main()
{
    char name[100];

    fgets(name, 100, stdin);

    printf("Times vowels occured are %d:", dowork(name));

    return 0;
}

int dowork(char arr[])
{
    int count = 0;
    for (int i = 0; i < arr[i] != '\0'; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
        {
            count++;
        }
    }
    return count;
}