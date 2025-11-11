// Q)Make a system that can store information of all students,staff,and teachers form a college in the form of structures .

#include <stdio.h>
#include <string.h>

struct Students
{
    char name[100];
    int rollno;
    char branch[50];
    float CGPA;
};

struct Teachers
{
    char name[100];
    int employee_ID;
    char subject_taught[50];
    int experience;
};

struct Staff
{
    char name[100];
    int employee_ID;
    char department[50];
    int experience;
};

struct college
{
    struct Students s1;
    struct Teachers t1;
    struct Staff staff1;
};
// Input Function Declaring
void inputStudents(struct Students *s1);
void inputTeachers(struct Teachers *t1);
void inputStaff(struct Staff *staff1);

// Output Function Declaring
void outputStudents(struct Students s1);
void outputTeachers(struct Teachers t1);
void outputStaff(struct Staff staff1);

int main()
{
    struct Students s1;
    struct Teachers t1;
    struct Staff staff1;

    // input function calling
    inputStudents(&s1);
    inputTeachers(&t1);
    inputStaff(&staff1);

    // output function calling
    outputStudents(s1);
    outputTeachers(t1);
    outputStaff(staff1);
    return 0;
}

// Input Function Defining
void inputStudents(struct Students *s1)
{
    printf("Students enter your details :\n");

    printf("Enter your name :");
    fgets(s1->name, 100, stdin);
    s1->name[strcspn(s1->name, "\n")] = '\0';

    printf("Enter your Roll-no :");
    scanf("%d", &s1->rollno);
    getchar();

    printf("Enter your Branch :");
    fgets(s1->branch, 100, stdin);
    s1->branch[strcspn(s1->branch, "\n")] = '\0';

    printf("Enter your CGPA :");
    scanf("%f", &s1->CGPA);
    getchar();

    printf("\nStudents details saved successfully!\n\n");
}

void inputTeachers(struct Teachers *t1)

{
    printf("Teachers enter your details :\n\n");

    printf("Enter your name :");
    fgets(t1->name, 100, stdin);
    t1->name[strcspn(t1->name, "\n")] = '\0';

    printf("Enter your Employee-ID :");
    scanf("%d", &t1->employee_ID);
    getchar();

    printf("Enter the Subject you Teach in :");
    fgets(t1->subject_taught, 50, stdin);
    t1->subject_taught[strcspn(t1->subject_taught, "\n")] = '\0';

    printf("Enter your Experience(years) :");
    scanf("%d", &t1->experience);
    getchar();

    printf("\nTeacher details saved successfully!\n\n");
}

void inputStaff(struct Staff *staff1)
{
    printf("Staff members enter your details :\n");

    printf("Enter your name :");
    fgets(staff1->name, 100, stdin);
    staff1->name[strcspn(staff1->name, "\n")] = '\0';

    printf("Enter your Staff-ID :");
    scanf("%d", &staff1->employee_ID);
    getchar();

    printf("Enter your working department :");
    fgets(staff1->department, 50, stdin);
    staff1->department[strcspn(staff1->department, "\n")] = '\0';

    printf("Enter your Experience(years)");
    scanf("%d", &staff1->experience);
    getchar();

    printf("\nStaff details saved successfully!\n\n");
}

// Output Function Defining
void outputStudents(struct Students s1)
{
    printf("Students details are :\n");

    printf("Name:%s\n", s1.name);
    printf("Rollno:%d\n", s1.rollno);
    printf("Branch:%s\n", s1.branch);
    printf("CGPA:%.2f\n", s1.CGPA);
}

void outputTeachers(struct Teachers t1)
{
    printf("Teachers details are :\n");

    printf("Name:%s\n", t1.name);
    printf("Employee-ID:%d\n", t1.employee_ID);
    printf("Subject Taught:%s\n", t1.subject_taught);
    printf("Experience:%d\n", t1.experience);
}

void outputStaff(struct Staff staff1)
{
    printf("Staffs details are :\n");

    printf("Name:%s\n", staff1.name);
    printf("Employee-ID:%d\n", staff1.employee_ID);
    printf("Working Department:%s\n", staff1.department);
    printf("Experience:%d\n", staff1.experience);
}