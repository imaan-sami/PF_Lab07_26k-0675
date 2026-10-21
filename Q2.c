#include <stdio.h>
int main() 
{
    int sudoku[3][3] = {0};
    int i, j, num;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter any number (1-9 where 0 is empty) number cannot be repeated: ");
            scanf("%d", &sudoku[i][j]);
        }
    }

    int valid = 1; /* 1 = valid, 0 = invalid */
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (sudoku[i][j] < 0 || sudoku[i][j] > 9)
            {
                valid = 0;
            }
        }
    }

    int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (sudoku[i][j] == 0)
            {
                continue;
            }
            else if (sudoku[i][j] == 1)
            {
                count1++;
            }
            else if (sudoku[i][j] == 2)
            {
                count2++;
            }
            else if (sudoku[i][j] == 3)
            {
                count3++;
            }
            else if (sudoku[i][j] == 4)
            {
                count4++;
            }
            else if (sudoku[i][j] == 5)
            {
                count5++;
            }
            else if (sudoku[i][j] == 6)
            {
                count6++;
            }
            else if (sudoku[i][j] == 7)
            {
                count7++;
            }
            else if (sudoku[i][j] == 8)
            {
                count8++;
            }
            else if (sudoku[i][j] == 9)
            {
                count9++;
            }
            else
            {
                valid = 0;
            }
        }
    }

    if (count1 > 1 || count2 > 1 || count3 > 1 || count4 > 1 || count5 > 1 || count6 > 1 || count7 > 1 || count8 > 1 || count9 > 1)
    {
        valid = 0;
    }

    if (valid == 1)
    {
        printf("Valid Grid\n");
    }
    else
    {
        printf("Invalid Grid\n");
    }
    return 0;
}
