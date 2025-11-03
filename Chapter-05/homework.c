#include <stdio.h>
#include <math.h>

int sum(int a, int b);
float square_root(int n);
void hotorcold(int temp);
int mypow(int base, int exp);

int main()
{
    // a)Write a function to write some of digits of a number.
    int a, b;
    printf("Enter your numbers :");
    scanf("%d %d", &a, &b);

    printf("Sum of the numbers is :%d \n", sum(a, b));

    // b)Write a function to find square root of a number.
    int n;
    printf("Enter your number :");
    scanf("%d", &n);

    printf("Square root is : %.2f", square_root(n));

    // c)Write a function to print "hot" or "cold" depending on the temperature user enters.
    int temp;
    printf("Enter your temperature(deg celsius):");
    scanf("%d", &temp);

    hotorcold(temp);

    // d)write your own pow function.
    int base, exp;
    printf("Enter your base and exponent :");
    scanf("%d %d", &base, &exp);

    printf("%d raised to %d is %d\n", base, exp, mypow(base, exp));
    return 0;
}

// a)Write a function to write some of digits of a number.
int sum(int a, int b)
{
    return a + b;
}

// b)Write a function to find square root of a number.
float square_root(int n)
{
    return sqrt(n);
}

// c)Write a function to print "hot" or "cold" depending on the temperature user enters.
void hotorcold(int temp)
{
    if (temp >= 40)
    {
        printf("It is hot");
    }
    else if (temp <= 10)
    {
        printf("It is cold");
    }
    else
    {
        printf("The temperature is moderate");
    }
}

// d)write your own pow function.
int mypow(int base, int exp)
{
    int result = 1;
    for (int i = 1; i <= exp; i++)
    {
        result = result * base;
    }
    return result;
}