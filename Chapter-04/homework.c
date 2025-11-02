#include <stdio.h>
int main()
{
    // a)star pattern
    char ch = '*';

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    // b)prime number or not
    int num, isprime = 1;
    printf("Enter your number :");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("It is not a prime number");
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isprime = 0;
            break;
        }

        // with while loop

        int i = 2;
        while (i < num)
        {
            if (num % i == 0)
            {
                isprime = 0;
                break;
            }
            i++;
        }

        if (isprime == 1)
        {
            printf("It is a prime number");
        }
        else
        {
            printf("It is not a prime number");
        }

        // c)print the number in a range

        int n1, n2;
        printf("Enter your numbers range :");
        scanf("%d %d", &n1, &n2);

        for (int i = n1; i <= n2; i++)
        {
            printf("%d \n", i);
        }
        return 0;
    }
}