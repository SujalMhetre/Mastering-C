#include <stdio.h>

void count(int arr[], int size, int X);
int largestno(int arr[], int size);
void insert(int arr[], int *size, int element);

int main()
{
    // Q1)In a array of numbers find how many times does a number 'x' occurs.
    int X;
    printf("Enter your number :");
    scanf("%d", &X);

    int arr[] = {1, 2, 5, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    count(arr, size, X);

    // Q2)Write a program to print the largest number in an array.
    int arr[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = largestno(arr, size);
    printf("Largets number in the array is %d\n", largest);

    // Q3)Write a program to insert an element at the end of of an array.
    int arr[5] = {1, 2, 3, 4};
    int size = 4;
    int element;

    printf("Enter your element to insert in the list: ");
    scanf("%d", &element);

    insert(arr, &size, element);

    return 0;
}

// Q1)In a array of numbers find how many times does a number 'x' occurs.
void count(int arr[], int size, int X)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == X)
        {
            count++;
        }
    }
    printf("Number %d occurs %d times in the array", X, count);
}

// Q2)Write a program to print the largest number in an array.
int largestno(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

// Q3)Write a program to insert an element at the end of of an array.
void insert(int arr[], int *size, int element)
{
    {
        arr[*size] = element;
        (*size)++;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
}