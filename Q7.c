#include <stdio.h>

int main()
{
    int i, j;
    int n = 5;


    printf("--- Triangle ---\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }


    printf("\n--- Reversed ---\n");
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n--- Multiplication Triangle ---\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%-4d", i * j);
        }
        printf("\n");
    }


    printf("\n--- Multiplication Reversed ---\n");
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%-4d", i * j);
        }
        printf("\n");
    }

    return 0;
}