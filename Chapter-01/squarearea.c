#include <stdio.h>

int main()
{
    int side, area;
    printf("Enter your value for side");
    scanf("%d", &side);

    area=side*side;
    printf("Area of the square is%d",area);
    return 0;
}