// Q)Write functions to calculate area of a square, cirle and a rectangle.

#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
float area_square(int side);
float area_circle(int r);
int area_rectangle(int l, int b);

int main()
{
  int side;
  printf("Enter your side to calculate area of square :");
  scanf("%d", &side);

  printf("Area of square = %.2f \n", area_square(side));

  int radius;
  printf("Enter your radius to calculate area of circle :");
  scanf("%d", &radius);

  printf("Area of circle = %.2f \n", area_circle(radius));

  int l, b;
  printf("Enter your lenth and breadth to calculate area of rectangle :");
  scanf("%d %d", &l, &b);

  printf("Area of rectangle = %d \n", area_rectangle(l, b));

  return 0;
}
float area_square(int side)
{
  return pow(side, 2);
}

float area_circle(int radius)
{
  return M_PI * pow(radius, 2);
}

int area_rectangle(int l, int b)
{
  return l * b;
}