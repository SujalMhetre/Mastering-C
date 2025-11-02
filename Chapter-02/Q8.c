#include <stdio.h>
int main()
{
    // a) if its sunday and its snowing =true(1)
    int its_sunday = 1;
    int its_snowing = 1;

    printf("%d \n", its_sunday && its_snowing == 1);

    // b) if its sunday and its snowing =true(1)
    int its_monday = 1;
    int its_raining = 0;

    printf("%d \n", its_monday || its_raining == 1);

    // c) if a number is greater than 9 and less than 100 =true(1)[it should be two digit number]
    int x;
    printf("enter your number:");
    scanf("%d", &x);

    printf("%d \n", x > 9 && x < 100);

    return 0;
}