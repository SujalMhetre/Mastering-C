// Q)Write a function to convert celsius to farenhiet .

#include <stdio.h>

float convert(float cel);

int main()
{

    float cel;
    printf("Enter your value to convert celsius to farenhiet :");
    scanf("%f", &cel);

    printf("In Farenhiet is %.2f", convert(cel));
    return 0;
}

float convert(float cel)
{
    float farenhiet = (cel * 9 / 5) + 32;
    return farenhiet;
}