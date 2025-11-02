// Q)Print Hello World 5 times using recursion function.

#include <stdio.h>
void printHW(int count);

int main()
{

    printHW(2);
    return 0;
}

void printHW(int count)
{

    if (count == 0)
    {
        return;
    }
    printf("Hello World \n");
    printHW(count - 1);
}