#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter your number :");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
      sum=sum+i;
    }
    printf("%d \n",sum);

    for(int i=n; i>=1; i--){
         printf("%d \n",i);
    }

    for (int j = n; j >= 1; j--)
    {
        sum = sum + j;
        printf("%d \n", j);
    }
    printf("Sum is %d", sum);

        return 0;
}