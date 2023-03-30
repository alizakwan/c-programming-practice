#include <stdio.h>

int main()
{
    char sub1[20];
    char sub2[20];
    char sub3[20];
    char sub4[20];
    int sub1marks, sub2marks, sub3marks, sub4marks, sum;
    float percentage;
    printf("Enter your Subjects : ");
    scanf("%s %s %s %s", &sub1, &sub2, &sub3, &sub4);
    printf("\nEnter your marks for %s:", sub1);
    scanf("%d", &sub1marks);
    printf("\nEnter your marks for %s:", sub2);
    scanf("%d", &sub2marks);
    printf("\nEnter your marks for %s:", sub3);
    scanf("%d", &sub3marks);
    printf("\nEnter your marks for %s:", sub4);
    scanf("%d", &sub4marks);

    sum = sub1marks + sub2marks + sub3marks + sub4marks;
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
    return 0;
}
