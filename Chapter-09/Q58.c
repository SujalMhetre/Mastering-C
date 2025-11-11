// Q) Create a structure to store complex numbers.Use arrow operators.

#include <stdio.h>

typedef struct complex_numbers
{
    int real;
    int img;
} com;

int main()
{

    com number1 = {5, 10};
    com *ptr = &number1;

    printf("Real part is %d\n", ptr->real);
    printf("Img part is %d\n", ptr->img);

    return 0;
}
