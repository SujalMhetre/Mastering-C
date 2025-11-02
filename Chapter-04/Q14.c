#include <stdio.h>
int main()
{

    int n;
    printf("Enter your number :");
    scanf("%d", &n);

    // With while loop
    int i = 0;
    while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }

    // With for loop
    for (int i = 0; i <= n; i++)
    {
        printf("%d \n", i);
    }

    return 0;
}