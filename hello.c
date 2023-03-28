#include <stdio.h>
#include <conio.h>
void main()
{
    int english, physics, math, geography, sum;
    float percentage;
    printf("Enter marks out of 100\n");
    printf("English:");
    scanf("%d", &english);
    printf("Physics:");
    scanf("%d", &physics);
    printf("Math:");
    scanf("%d", &math);
    printf("Geography:");
    scanf("%d", &geography);
    // printf("English : %d \nPhysics : %d\nMath : %d\nGeography : %d\n", english, physics, math, geography);
    sum = english + physics + math + geography;
    printf("Total: %d\n", sum);
    percentage = (sum * 100) / 400;
    printf("Percentage: %f\n", percentage);
    if (percentage >= 95)
    {
        printf("Grade:A+");
    }
    else if (percentage >= 80)
    {
        printf("Grade:A");
    }
    else if (percentage >= 70)
    {
        printf("Grade:B+");
    }
    else if (percentage >= 50)
    {
        printf("Grade:B");
    }
    else if (percentage >= 30)
    {
        printf("Grade:c");
    }
    getch();
}
