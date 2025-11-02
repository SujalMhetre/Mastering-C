#include <stdio.h>
int main()
{

    // for loop
    for(int i=1; i<=10; i++ ){

        if( i == 6){
            continue;
        }
        printf("%d \n",i);
    }

    // while loop
    int i = 1;
    while(i<=10){
        if (i == 6){
            i++;
            continue;
        }
        printf("%d \n",i);
        i++;
    }

    // do-while loop
    int i = 1;
    do
    {
        if (i == 6)
        {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    return 0;
}