#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number :");
    scanf("%d", &num);

    // for loop
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    // while loop
    int i=1;
    while(i<=num){
        fact=fact * i;
          i++;
    }
    printf("Factorial of given number is %d ", fact);

    return 0;
}