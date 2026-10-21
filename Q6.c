#include <stdio.h>
int main()
{
    // Initialize the Data Matrix
    int Data[3][3] = {};

    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter Data value[%d][%d]: ", i, j);
            scanf("%d", &Data[i][j]);
        }
    }

    // Initialize the Key Matrix
    int Key[3][3] = {};

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter Key value[%d][%d]: ", i, j);
            scanf("%d", &Key[i][j]);
        }
    }

    // Apply the Encryption Rule

    int Encrypted[3][3] = {};

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            Encrypted[i][j] = (Data[i][j] * Key[i][j]) + (i + j);
        }
    }

    // Display the Encrypted Matrix

    printf("\n --Encrypted Matrix--\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%-6d", Encrypted[i][j]);
        }
        printf("\n");
    }

    // Identify the Maximum Encrypted Value
    int max = -999;
    int max_i=0, max_j=0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (Encrypted[i][j] > max)
            {
                max = Encrypted[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    printf("Maximum Encrypted Value: [%d][%d]=%d", max_i, max_j, max);

        return 0;
}