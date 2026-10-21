#include <stdio.h>
int main()
{
    int row=10,col=4;

    int seating_plan[row][col];
    int i,j;

    for (i=0;i<row;i++){
        for (j=0;j<col;j++){

           seating_plan[i][j]=0;

        }
    }

    int reserve_seats;

    printf("Enter number of seats to reserve: ");
    scanf("%d",&reserve_seats);

    while (reserve_seats < 0 || reserve_seats > 40)
    {
        printf("Invalid input. Enter number of seats (0-40): ");
        scanf("%d", &reserve_seats);
    }   

    int row_num,col_num;

    for (i = 0; i < reserve_seats; i++)
    {
        int booked = 0;


        while (booked == 0)
        {
            printf("Enter row number to book (1-10): ");
            scanf("%d", &row_num);

            while (row_num < 1 || row_num > 10)
            {
                printf("Invalid row. Re-enter row number (1-10): ");
                scanf("%d", &row_num);
            }

            printf("Enter seat number to book (1-4): ");
            scanf("%d", &col_num);

            while (col_num < 1 || col_num > 4)
            {
                printf("Invalid seat. Re-enter seat number (1-4): ");
                scanf("%d", &col_num);
            }

            if (seating_plan[row_num - 1][col_num - 1] == 1)
            {
                printf("Seat already booked. Please select another seat.\n");
            }
            else
            {
                seating_plan[row_num - 1][col_num - 1] = 1;
                booked = 1;
            }
        }
    }


    int total_booked_seats=0;
    int booked_seats_per_row[row]={};

    for (i=0;i<row;i++){
        for (j=0;j<col;j++)
        {
            if(seating_plan[i][j]==1)
            {
            
                booked_seats_per_row[i]++;
                total_booked_seats++;
            }              
        }

    } 
    
    printf("\n--Seating Arrangement--\n");
    printf("\t");

    for (j=0;j<col;j++)
    {
        printf(" %d ",j+1);
    }
    printf("\n");



    for (i=0;i<row;i++)
    {   printf("R%d\t",i+1);
        for (j=0;j<col;j++)
        {
            if (seating_plan[i][j]==0)
            {
                printf(" 0 ");

            }
            else
            {   
                printf(" 1 ");

            }
        }
        printf("\n");
    }


    printf("Total booked seats: %d\n",total_booked_seats);   
    printf("Fully booked rows: ");

    int booked_row_count=0;
    for (i=0;i<row;i++)
    {
        if (booked_seats_per_row[i]==4)
        {
            printf(" %d ",i+1); 
            booked_row_count= booked_row_count+1;
        } 
       
    }

    if (booked_row_count==0)
    {
        printf("none");
    }
    printf("\nTotal fully booked rows: %d\n", booked_row_count);
    return 0;
}