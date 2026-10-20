#include <stdio.h>

int main() {
    int temperature[3][3][3];
    float average[3];
    int max, maxX, maxY, maxZ;
    printf("Enter temperature values:\n");

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            for (int z = 0; z < 3; z++) {
                printf("Temperature at (%d,%d,%d): ", x, y, z);
                scanf("%d", &temperature[x][y][z]);
            }
        }
    }
    for (int z = 0; z < 3; z++) {
        int sum = 0;

        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) {
                sum = sum + temperature[x][y][z];
            }
        }

        average[z] = sum / 9.0;
    }
    printf("\nAverage Temperature of Each Layer:\n");

    for (int z = 0; z < 3; z++) {
        printf("Layer %d: %.2f C\n", z + 1, average[z]);
    }
    int hottestLayer = 0;

    for (int z = 1; z < 3; z++) {
        if (average[z] > average[hottestLayer]) {
            hottestLayer = z;
        }
    }
    printf("\nHottest Layer: %d\n", hottestLayer + 1);
    printf("Average Temperature: %.2f C\n", average[hottestLayer]);
    max = temperature[0][0][0];
    maxX = 0;
    maxY = 0;
    maxZ = 0;

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            for (int z = 0; z < 3; z++) {

                if (temperature[x][y][z] > max) {
                    max = temperature[x][y][z];
                    maxX = x;
                    maxY = y;
                    maxZ = z;
                }

            }
        }
    }
    printf("\nMaximum Temperature: %d C\n", max);
    printf("Coordinates: (%d, %d, %d)\n", maxX, maxY, maxZ);

    return 0;
}