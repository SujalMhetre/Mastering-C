// Q)Take a string input form the user using '%c'.

#include <stdio.h>
#include <string.h>

int main()
{

    char name[100];
    char ch;
    int i = 0;

    while (1)
    {
        scanf("%c", &ch);
        if (ch == '\n')
        {
            break;
        }
        name[i] = ch;
        i++;
    }
    name[i] = '\0';

    printf("Your name is :");
    puts(name);
    printf("Length of the string is :%d", strlen(name));
    return 0;
}