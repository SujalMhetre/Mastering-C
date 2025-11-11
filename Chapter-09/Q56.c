// Q) Write a program to enter address (houseno,block,city,state)of 5 people.

#include <stdio.h>
#include <string.h>

typedef struct address
{
    int House_no;
    char block;
    char city[100];
    char state[100];
} add;

void store(add p);
void Enter(add person[]);

int main()
{
    // add p1 = {100, 'A', "Pune", "Maharashtra"};
    // add p2 = {200, 'B', "Nagur", "Maharashtra"};
    // add p3 = {300, 'C', "Sambhaji Nagar", "Maharashtra"};
    // add p4 = {400, 'D', "Akola", "Maharashtra"};
    // add p5 = {500, 'E', "Mumbai", "Maharashtra"};

    // store(p1);
    // store(p2);
    // store(p3);
    // store(p4);
    // store(p5);

    add person[5] = {{100, 'A', "Pune", "Maharashtra"},
                     {200, 'B', "Nagpur", "Maharashtra"},
                     {300, 'C', "Sambhaji Nagar", "Maharashtra"},
                     {400, 'D', "Akola", "Maharashtra"},
                     {500, 'E', "Mumbai", "Maharashtra"}};

    Enter(person);

    return 0;
}

// void store(add p)
// {
//     printf("Address of person 1 is: House-no=%d | Block=%c | City=%s | State=%s\n", p.House_no, p.block, p.city, p.state);
// }

void Enter(add person[])
{
    printf("Address of person 1 is: House-no=%d | Block=%c | City=%s | State=%s\n", person[0].House_no, person[0].block, person[0].city, person[0].state);
    printf("Address of person 2 is: House-no=%d | Block=%c | City=%s | State=%s\n", person[1].House_no, person[1].block, person[1].city, person[1].state);
    printf("Address of person 3 is: House-no=%d | Block=%c | City=%s | State=%s\n", person[2].House_no, person[2].block, person[2].city, person[2].state);
    printf("Address of person 4 is: House-no=%d | Block=%c | City=%s | State=%s\n", person[3].House_no, person[3].block, person[3].city, person[3].state);
    printf("Address of person 5 is: House-no=%d | Block=%c | City=%s | State=%s\n", person[4].House_no, person[4].block, person[4].city, person[4].state);
}