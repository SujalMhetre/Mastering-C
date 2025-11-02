#include <stdio.h>
int main()
{
    // Check if number is even or odd
    // true=1 ; false=0;
  
    int x;
    printf("Enter your number");
    scanf("%d", &x);

    printf("%d number is even \n", x % 2 == 0);

    printf("%d number is odd \n", x % 2 != 0);
    
    return 0;
}