// Q)Salting : write a program to find the salted form of a password entered by the user if the salt is "123" & added at the end.

#include <stdio.h>
#include <string.h>

void salting(char arr[]);

int main()
{
    char userpassword[100];

    scanf("%s", userpassword);

    printf("Your new password is :");
    salting(userpassword);
    return 0;
}

void salting(char arr[])
{
    char salt[] = "123";
    char newpassword[100];

    strcpy(newpassword, arr);

    puts(strcat(newpassword, salt));
}