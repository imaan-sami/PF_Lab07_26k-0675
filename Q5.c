#include <stdio.h>
int main()
{
    int marks[2][3][3] = {};
    int x, y, z;

    // Initialize the Marks Data
    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 3; y++)
        {
            for (z = 0; z < 3; z++)
            {
                printf("Enter marks of student %d subject %d class %d: ", y + 1, z + 1, x + 1);
                scanf("%d", &marks[x][y][z]);
            }
        }
    }

    // Calculate Total Marks per Student
    int total_marks[2][3] = {};
    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 3; y++)
        {
            for (z = 0; z < 3; z++)
            {
                total_marks[x][y] = total_marks[x][y] + marks[x][y][z];
            }
        }
    }

    // Identify the Class Topper
    int class_topper_marks[2] = {};
    int class_topper[2] = {};

    for (x = 0; x < 2; x++)
    {
        int max = -999;
        for (y = 0; y < 3; y++)
        {

            if (total_marks[x][y] > max)
            {
                max = total_marks[x][y];
                class_topper_marks[x] = total_marks[x][y];
                class_topper[x] = y;
            }
        }
    }

    // Identify the Overall Topper
    int overall_topper_class = 0;

    if (class_topper_marks[0] > class_topper_marks[1])
    {
        overall_topper_class = 0;
    }
    else
    {
        overall_topper_class = 1;
    }

    // Display the Final Results

    printf("\n--- Total marks per student ---\n");
    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("Class %d, Student %d: %d\n", x + 1, y + 1, total_marks[x][y]);
        }
    }

    
    for (x = 0; x < 2; x++)
    {
        printf("\nTop Performer of Class %d: Student %d with %d marks", x + 1, class_topper[x] + 1, class_topper_marks[x]);
    }

    printf("\n Overall Top Performer: Class %d Student %d ", overall_topper_class + 1, class_topper[overall_topper_class] + 1);

    return 0;
}