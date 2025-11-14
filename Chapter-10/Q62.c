// Q)Make a program to input students information and enter it in a file

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Student-info.txt", "w");

    char name[100];
    printf("Enter your name :");
    fgets(name, 100, stdin);

    int student_id;
    printf("Enter your Student-ID:");
    scanf("%d", &student_id);

    float CGPA;
    printf("Enter your CGPA:");
    scanf("%f", &CGPA);
    getchar();

    char address[100];
    printf("Enter your address :");
    fgets(address, 100, stdin);

    fprintf(fptr, "Name =%s", name);
    fprintf(fptr, "Student-ID=%d\n", student_id);
    fprintf(fptr, "CGPA=%.2f\n", CGPA);
    fprintf(fptr, "Address=%s\n", address);

    fclose(fptr);

    return 0;
}