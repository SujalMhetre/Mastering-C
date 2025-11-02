#include <stdio.h>
int main()
{

    for(int i=5;i<=50;i++){
        if (i % 2 ==0){
            continue;
        }
        printf("%d \n",i);
    }

    int i = 5;
    while (i <= 50)
    {
        if (i % 2 != 0)
        {
            printf("%d \n", i);
        }
         i++;
    }
}