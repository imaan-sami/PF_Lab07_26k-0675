#include <stdio.h>

int main()
{
    const int PASS_MARK = 40;

    int classes;
    int c, s, sub;
    int school_total = 0;
    int school_subjects = 0;

    printf("Enter number of classes: ");
    scanf("%d", &classes);

    for (c = 1; c <= classes; c++)
    {
        int students;
        int class_total = 0;
        int class_subjects = 0;

        printf("\nEnter number of students in Class %d: ", c);
        scanf("%d", &students);

        for (s = 1; s <= students; s++)
        {
            int subjects;
            int total = 0;
            int failed = 0;          // 0 = pass, 1 = fail
            double average;

            printf("Enter number of subjects for Student %d: ", s);
            scanf("%d", &subjects);

            for (sub = 1; sub <= subjects; sub++)
            {
                int marks;

                printf("Enter marks for subject %d: ", sub);
                scanf("%d", &marks);

                total += marks;
                if (marks < PASS_MARK)
                {
                    failed = 1;
                }
            }

            average = (subjects > 0) ? (double)total / subjects : 0.0;

            printf("Class %d, Student %d: Total Marks = %d, Average = %.2f, Result = %s\n",
                   c, s, total, average, failed ? "Fail" : "Pass");

            class_total += total;
            class_subjects += subjects;
        }

        double class_average = (class_subjects > 0) ? (double)class_total / class_subjects : 0.0;

        printf("\nClass %d Total Marks = %d, Class Average = %.2f\n",
               c, class_total, class_average);

        school_total += class_total;
        school_subjects += class_subjects;
    }

    double school_average = (school_subjects > 0) ? (double)school_total / school_subjects : 0.0;

    printf("\nSchool Total Marks = %d, Overall School Average = %.2f\n",
           school_total, school_average);
    return 0;
}