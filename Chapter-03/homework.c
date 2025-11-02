#include <stdio.h>
int main(){
//  a) armstrong number
    // int num, a, b, c, result;
    // printf("Enter your number :");
    // scanf("%d",&num);

    // a=num/100;
    // b=(num/10)%10;
    // c=num %10;

    // result=(a*a*a)+(b*b*b)+(c*c*c);

    // if(result==num){
    //     printf("It is an armstrong number");
    // }
    // else{
    //     printf("It is not an armstrong number");
    // }

    // b) natural numbers
    int Num;
    printf("Enter your number :");
    scanf("%d", &Num);

    if(Num>0){
        printf("It is a natural number");
    }
    else{
       printf("It is not a natural number");
    }
    return 0;
}