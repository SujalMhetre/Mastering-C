// Q)Ask the user to enter their first name and print it back to them.

#include<stdio.h>
 
void printstring(char arr[]);

int main(){
    char firstname[50];
    printf("Enter your name :");

    scanf("%s",firstname);

    printf("Your name is %s",firstname);
    
}