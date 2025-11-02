#include <stdio.h>
int main()
{
    // a)write a program to print the average of three numbers

    int x, y, z;
    int total_no = 3, sum = 0;
    float average = 0;

    printf("Enter your three numbers :");
    scanf("%d %d %d", &x, &y, &z);

    sum = x + y + z;
    printf("Sum of the numbers is: %d \n", sum);

    average = sum / (float)total_no;
    printf("Average of the numbers is: %f \n", average);

    // b)write a program to check if the character is digit or not

    char X;
    printf("Enter your character:");
    scanf("%c", &X);

    printf("Entered character is a digit %d \n", X >= 48 && X <= 57);

    // c)write a program to print the smallest number

    int a, b, c;
    printf("Enter your numbers:");
    scanf("%d %d %d", &a, &b, &c);

    printf("smallest number is a: %d \n", a <= b && a <= c);

    printf("smallest number is b: %d \n", b <= a && b <= c);

    printf("smallest number is c: %d \n", c <= b && c <= a);

    return 0;
}