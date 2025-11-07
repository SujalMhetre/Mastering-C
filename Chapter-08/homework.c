#include <stdio.h>
#include <string.h>

void convert(char arr[]);
void freq(char arr[]);
void removeblackspace(char arr[]);
void replace(char arr[]);

int main()
{
    // Q-a)write a program to convert all lowercase vowels to uppercas in a string.
    char str[] = "AEIOU";

    printf("Original string is:%s\n", str);

    convert(str);

    printf("\nConverted string is: %s\n", str);

    // Q-b)Write a program to print the highest frequency character in a string.
    char str[] = "sssSSSSSSs";

    freq(str);

    // Q-c)Write a program to remove blank spaces in a string.

    char str[] = "S u j a l M h e t r e";

    removeblackspace(str);

    // Q-d)Write a program to replace lower case letters with uppercase and wise vera in a string.
    char str[] = "SUJAL sujal";

    replace(str);
    return 0;
}

// Q-a)write a program to convert all lowercase vowels to uppercas in a string.
void convert(char arr[])
{
    for (int i = 0; arr[i] != 0; i++)
    {
        switch (arr[i])
        {
        case 'a':
            arr[i] = 'A';
            break;
        case 'e':
            arr[i] = 'E';
            break;
        case 'i':
            arr[i] = 'I';
            break;
        case 'o':
            arr[i] = 'O';
            break;
        case 'u':
            arr[i] = 'U';
            break;

        default:
            break;
        }
    }
}

// Q-b)Write a program to print the highest frequency character in a string.
void freq(char arr[])
{
    int maxcount = 0;
    char maxchar;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        int count = 0;
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            continue;
        }
        for (int j = 0; arr[j] != '\0'; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxcount)
        {
            maxcount = count;
            maxchar = arr[i];
        }
    }
    printf("The highest frequency of character is :%d\n", maxcount);
    printf("The charachter with highest frequency is :%c", maxchar);
}

// Q)Write a program to remove blank spaces in a string.
void removeblackspace(char arr[])
{
    int j = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] != ' ')
        {
            arr[j] = arr[i];
            j++;
        }
    }
    arr[j] = '\0';
    printf("%s", arr);
}

// Q-d)Write a program to replace lower case letters with uppercase and wise vera in a string.
void replace(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 32;
        }
        else if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] = arr[i] + 32;
        }
    }
    printf("%s", arr);
}