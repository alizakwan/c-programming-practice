// take three inputes and compare them to find greatest
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter value A:");
    scanf("%d", &a);
    printf("Enter value B:");
    scanf("%d", &b);
    printf("Enter value C:");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("A is greatest");
        }
        else
        {
            printf("C is greatest");
        }
    }
    else
    {
        if (b > c)
        {
            printf("B is greatest");
        }
        else
        {
            printf("C is greatest");
        }
    }

    return 0;
}