#include <stdio.h>

int main()
{
    int age, diff;
    const int ELIGLIBLE_AGE = 18;
    printf("Enter your age:");
    scanf("%d", &age);
    if (age >= ELIGLIBLE_AGE)
    {
        printf("You are eligible to vote");
    }
    else
    {
        diff = ELIGLIBLE_AGE - age;
        printf("You are not eligible to vote ,please wait %d years before you can vote", diff);
    }
    return 0;
}