// Q)Make a structure to store a bank account info of a customer of ABC bank also make an alias for it.

#include <stdio.h>
#include <string.h>

typedef struct bank_account_info
{
    char name[100];
    long long int account_no;
    int age;
    char address[100];
} bank;

void print(bank arr[]);

int main()
{
    bank customer[3];

    strcpy(customer[0].name, "Sujal Mhetre");
    customer[0].account_no = 102030405060;
    customer[0].age = 22;
    strcpy(customer[0].address, "Pune,Maharashtra");

    strcpy(customer[1].name, "Satyam Verma");
    customer[1].account_no = 112233445566;
    customer[1].age = 23;
    strcpy(customer[1].address, "Badlapur,Maharashtra");

    strcpy(customer[2].name, "Gayatri Pardeshi");
    customer[2].account_no = 123456654321;
    customer[2].age = 21;
    strcpy(customer[2].address, "Jalgaon,Maharashtra");

    print(customer);
    return 0;
}

void print(bank arr[])
{
    printf("Bank Account info:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Customer: Name=%s | Age=%d | Account-no=%lld |Address=%s |\n", arr[i].name, arr[i].age, arr[i].account_no, arr[i].address);
    }
}
