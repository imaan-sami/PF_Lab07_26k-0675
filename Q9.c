#include <stdio.h>

int main()
{
    const int DAILY_WAGE = 500;
    const int BONUS = 2000;
    const int BONUS_DAYS = 25;

    int departments;
    int d, e;
    int grand_total = 0;

    printf("Enter number of departments: ");
    scanf("%d", &departments);

    for (d = 1; d <= departments; d++)
    {
        int employees;
        int dept_total = 0;

        printf("\nEnter number of employees in Department %d: ", d);
        scanf("%d", &employees);

        for (e = 1; e <= employees; e++)
        {
            int days, salary;

            printf("Enter days worked by Employee %d: ", e);
            scanf("%d", &days);

            salary = days * DAILY_WAGE;
            if (days > BONUS_DAYS)
            {
                salary += BONUS;
            }

            printf("Department %d, Employee %d: Days Worked = %d, Salary = Rs. %d\n",
                   d, e, days, salary);

            dept_total += salary;
        }

        printf("\nTotal salary paid in Department %d: Rs. %d\n", d, dept_total);

        grand_total += dept_total;
    }

    printf("\nTotal salary paid across all departments: Rs. %d\n", grand_total);
    return 0;
}