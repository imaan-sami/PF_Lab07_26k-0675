#include <stdio.h>

int main()
{
    int n = 5;
    int i, j, s;



    printf("--- Star triangle ---\n");
    for (i = 1; i <= n; i++)
    {
        for (s = 1; s <= n - i; s++)
            printf("  ");                
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    printf("\n--- Number triangle ---\n");
    for (i = 1; i <= n; i++)
    {
        for (s = 1; s <= n - i; s++)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    printf("\n--- Letter triangle ---\n");
    for (i = 1; i <= n; i++)
    {
        for (s = 1; s <= n - i; s++)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("%c ", 'A' + j - 1);
        printf("\n");
    }



    printf("\n--- Star pyramid ---\n");
    for (i = 1; i <= n; i++)
    {
        for (s = 1; s <= n - i; s++)
            printf("  ");
        for (j = 1; j <= 2 * i - 1; j++)  // 1, 3, 5, 7, 9 elements
            printf("* ");
        printf("\n");
    }

    printf("\n--- Number pyramid ---\n");
    for (i = 1; i <= n; i++)
    {
        for (s = 1; s <= n - i; s++)
            printf("  ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("%d ", j);
        printf("\n");
    }

    printf("\n--- Letter pyramid ---\n");
    for (i = 1; i <= n; i++)
    {
        for (s = 1; s <= n - i; s++)
            printf("  ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("%c ", 'A' + j - 1);
        printf("\n");
    }

    return 0;
}