// Q)Swap 2 numbers of a and b.

#include <stdio.h>

void swap(int a, int b);
void swap_address(int *ptra, int *ptrb);

int main()
{

    int a = 10;
    int b = 20;

    int *ptra = &a;
    int *ptrb = &b;

    // swap(a, b);
    swap_address(ptra,ptrb);

    printf("before swap a=%d  b=%d \n", a, b);
    return 0;
}

// call by value
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    printf("after swap a=%d b=%d \n", a, b);
}

// call by address
void swap_address(int *ptra, int *ptrb)
{
    int temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;

    printf("after swap with address a=%d b=%d \n", *ptra, *ptrb);
}