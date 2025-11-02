#include <stdio.h>
int main()
{

    int num;

    // do-while loop
    do
    {
        printf("Enter your number :");
        scanf("%d", &num);

        if (num % 2 != 0)
        {
            break;
        }
    } while (1);


    // for loop
    for (;;)
    {
        printf("Enter your number :");
        scanf("%d", &num);

        if (num % 2 != 0)
        {
            break;
        }
    }

    // while loop
    while (1)
    {
        printf("Enter your number :");
        scanf("%d", &num);

        if (num % 2 != 0)
        {
            break;
        }
    }
    printf("Enter a even number only");

    return 0;
}