#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number :");
    scanf("%d", &num);

    int table;
    for (int i = 10; i >=1; i--)
    {
        table = num * i;
        printf(" %d \n", table);
    }

    return 0;
}