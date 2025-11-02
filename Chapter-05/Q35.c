// Q)Write a function to calculate percentage of a student from marks in science,maths and history.

#include <stdio.h>

float percentage(int sum, int total_marks);

int main()
{

    int science_marks;
    printf("Enter your marks obtained in science subject :");
    scanf("%d", &science_marks);

    int maths_marks;
    printf("Enter your marks obtained in maths subject :");
    scanf("%d", &maths_marks);

    int history_marks;
    printf("Enter your marks obtained in history subject :");
    scanf("%d", &history_marks);

    int sum;
    sum = science_marks + maths_marks + history_marks;

    int total_marks = 300;

    printf("Percentage is : %.2f%% \n", percentage(sum, total_marks));

    return 0;
}

float percentage(int sum, int total_marks)
{
    float percent = ((float)sum / total_marks) * 100;

    return percent;
}
