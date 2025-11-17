#include <stdio.h>

void peri(int l, int w);
void cube(int n);

int main()
{
    // a) write a program to calculate perimeter of a rectangle take sides a & b from the user .
    //  Perimeter formula = 2 × (length + width)
    int l;
    int w;

    printf("Enter the length of the rectangle :");
    scanf("%d", &l);

    printf("Enter the width of the rectangle :");
    scanf("%d", &w);

    peri(l, w);

    // b)Take a number n from the user and give its cube (n*n*n);
    //  Cube formula = n × n × n
    int n;
    printf("Enter a number to get its cube :");
    scanf("%d", &n);

    cube(n);

    // c)write comments for program a & b.

    return 0;
}

// a) write a program to calculate perimeter of a rectangle take sides a & b from the user .
void peri(int l, int w)
{
    printf("Perimeter of the rectange is %d", 2 * (l + w));
}

// b)Take a number n from the user and give its cube (n*n*n);
void cube(int n)
{
    printf("Cube of the number entered is %d", n * n * n);
}