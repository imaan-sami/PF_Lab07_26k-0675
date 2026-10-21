#include <stdio.h>
int main()
{
    // Entering value

    int sales_data[4][5] = {0};
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Enter value representing the sales amount in rupees earned by a salesman %d for product %d: ", i + 1, j + 1);
            scanf("%d", &sales_data[i][j]);
        }
    }

    // calculating total sales per salesman

    int total_sales_per_salesman[4] = {0};

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            total_sales_per_salesman[i] = total_sales_per_salesman[i] + sales_data[i][j];
        }
    }

    // calculating total sales per product

    int total_sales_per_product[5] = {0};
    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 4; i++)
        {
            total_sales_per_product[j] = total_sales_per_product[j] + sales_data[i][j];
        }
    }

    // calculating most expensive product

    int highest = -99999;
    int expensive_product = 0;

    for (j = 0; j < 5; j++)
    {
        if (total_sales_per_product[j] > highest)
        {
            highest = total_sales_per_product[j];
            expensive_product = j;
        }
    }

    // calculating bonus
    float final_amount[4] = {};
    int bonus_applied[4] = {0};
    int bonus_per_salesman[4] = {};
    for (i = 0; i < 4; i++)
    {
        if (total_sales_per_salesman[i] > 10000)
        {
            final_amount[i] = total_sales_per_salesman[i] + (total_sales_per_salesman[i] * 0.10);
            bonus_applied[i] = 1;
        }
        else
        {
            final_amount[i] = total_sales_per_salesman[i];
        }
    }

    // summary
    printf("\n                --Summary--           ");
    printf("\n\n\n ");


    printf("%-12s", "Salesman");
    for (j = 0; j < 5; j++)
    {
        printf("%8s%d", "P", j + 1);
    }
    printf("\n");


    for (i = 0; i < 4; i++)
    {
        printf("Salesman %-3d", i + 1);
        for (j = 0; j < 5; j++)
        {
            printf("%9d", sales_data[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++)
    {
        printf("Total sales of salesman %d: Rs. %d \n", i + 1, total_sales_per_salesman[i]);
    }

    printf("\n ");

    for (j = 0; j < 5; j++)
    {

        printf("Total sales of product %d: Rs. %d \n", j + 1, total_sales_per_product[j]);
    }

    printf("\n ");

    printf("High revenue product: Product %d \n", expensive_product + 1);

    for (i = 0; i < 4; i++)
    {

        printf("Final amounts after bonus of salesman %d: Rs. %.2f (%s) \n", i + 1, final_amount[i],
               bonus_applied[i] ? "10% bonus applied" : "no bonus");
    }
    return 0;
}
