#include <stdio.h>
int main(){

    int marks;
    printf("Enter your marks :");
    scanf("%d",&marks);

    if(marks>30 && marks ==100){
       printf("student is passed");
    }
    else if(marks<=30){
        printf("stduent is failed");
    }
    else{
        printf("invalid marks");
    }
    // marks>30 ? printf("student is passed") : printf("stduent is failed");

    return 0;
}