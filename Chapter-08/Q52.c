// Q)Write a function named slice which takes a string and return a sliced string form index n to m.

#include <stdio.h>
#include <string.h>

void slice(char arr[], int n, int m);

int main()
{
    char fullname[] = "Sujal Mhetre";
    int n, m;

    printf("Enter your range for slicing (0-?) :");
    scanf("%d %d", &n, &m);

    if (n >= 0 && m >= 0 && m <= strlen(fullname))
    {
        printf("Your sliced string is :");
        slice(fullname, n, m);
    }
    else
    {
        printf("Enter a valid range");
    }

    return 0;
}

void slice(char arr[], int n, int m)
{
    char firstname[100];
    int j = 0;
    for (int i = n; i < m && arr[i] != '\0'; i++)
    {
        firstname[j] = arr[i];
        j++;
    }
    firstname[j] = '\0';

    puts(firstname);
}