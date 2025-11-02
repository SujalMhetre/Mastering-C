#include <stdio.h>
int main()
{
    int radius, area;
    float pi = 3.14;

    printf("Enter radius");
    scanf("%d", &radius);

    area=pi*radius*radius;
    printf("Area of circle is:%d",area);

    return 0;
}