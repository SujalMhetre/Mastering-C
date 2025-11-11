// Q)Write a program to store the data of three students.

#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int rollno;
    float cgpa;
};

int main()
{
    char name1[] = "Sujal";
    char name2[] = "Satyam";
    char name3[] = "Gayatri";

    struct student s1, s2, s3;

    strcpy(s1.name, name1);
    s1.rollno = 1;
    s1.cgpa = 7.07;

    strcpy(s2.name, name2);
    s2.rollno = 2;
    s2.cgpa = 8.07;

    strcpy(s3.name, name3);
    s3.rollno = 3;
    s3.cgpa = 9.07;

    printf("Student 1-> Name=%s   |Rollno=%d | CGPA=%.2f\n", s1.name, s1.rollno, s1.cgpa);
    printf("Student 2-> Name=%s  |Rollno=%d | CGPA=%.2f\n", s2.name, s2.rollno, s2.cgpa);
    printf("Student 3-> Name=%s |Rollno=%d | CGPA=%.2f\n", s3.name, s3.rollno, s3.cgpa);

    return 0;
}