// Q)Write a program to enter price of three items and print their final price with gst.

#include <stdio.h>

int main()
{
    int price[3], final_price[3];
    ;

    printf("Enter your price for 1'st item :");
    scanf("%d", &price[0]);

    printf("Enter your price for 2'st item :");
    scanf("%d", &price[1]);

    printf("Enter your price for 3'st item :");
    scanf("%d", &price[2]);

    final_price[0] = price[0] + (0.18 * price[0]);
    final_price[1] = price[1] + (0.18 * price[1]);
    final_price[2] = price[2] + (0.18 * price[2]);

    printf("final price: \n 1st item = %d\n 2nd item= %d\n  3rd item =%d\n", final_price[0], final_price[1], final_price[2]);

    return 0;
}