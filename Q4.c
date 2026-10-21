#include <stdio.h>
int main()
{
    int temp_data[3][3][3] = {};
    int x, y, z;
    int layer_total[3] = {0};

    // Initialize the Temperature Data
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            for (z = 0; z < 3; z++)
            {
                printf("\nEnter temperature value at point[%d][%d][%d]: ", x, y, z);
                scanf("%d", &temp_data[x][y][z]);

                layer_total[z] = layer_total[z] + temp_data[x][y][z];
            }
        }
    }

    // Calculate Average Temperature per Layer

    float avg_per_layer[3] = {};

    for (z = 0; z < 3; z++)
    {
        avg_per_layer[z] = (layer_total[z] / 9.0);
    }

    // Identify the Hottest Layer
    float max_val_layer = -99999.999;
    int max_index_layer = 0;

    for (x = 0; x < 3; x++)
    {
        if (avg_per_layer[x] > max_val_layer)
        {
            max_val_layer = avg_per_layer[x];
            max_index_layer = x;
        }
    }

    // Find the Maximum Temperature Point

    int max_val_point = -9999;
    int max_index_point_x = 0;
    int max_index_point_y = 0;
    int max_index_point_z = 0;

    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            for (z = 0; z < 3; z++)
            {
                if (max_val_point < temp_data[x][y][z])
                {
                    max_val_point = temp_data[x][y][z];
                    max_index_point_x = x;
                    max_index_point_y = y;
                    max_index_point_z = z;
                }
            }
        }
    }

    // Display the Final Results

    printf("\n\t --Average temperature of each layer--\n\n");

    printf("%-22s ", "Layers");
    for (z= 0; z < 3; z++)
    {
        printf("%10d", z+1);
    }
    printf("\n");

    printf("%-22s ", "Average Temperature \t ");
    for (z = 0; z < 3; z++)
    {
        printf("%10.2f", avg_per_layer[z]);
    }

    printf("\n");
    printf("\n Hottest layer: Layer %d with average temperature %.2f C\n",max_index_layer+1,max_val_layer);

    printf("Maximum temperature: %d C at (x , y , z) = (%d , %d, %d)\n", max_val_point, max_index_point_x, max_index_point_y, max_index_point_z);
    return 0;
}