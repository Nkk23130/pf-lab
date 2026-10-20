#include <stdio.h>

int main() {
    int sales[4][5];
    int totalSalesman[4] = {0};
    int totalProduct[5] = {0};
    int highestProduct;
    int productIndex;
    printf("Enter sales for 4 salesmen and 5 products:\n");

    for (int i = 0; i < 4; i++) {
        printf("\nSalesman %d:\n", i + 1);

        for (int j = 0; j < 5; j++) {
            printf("Product %d: ", j + 1);
            scanf("%d", &sales[i][j]);
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            totalSalesman[i] = totalSalesman[i] + sales[i][j];
        }
    }

    printf("\nTotal Sales per Salesman:\n");

    for (int i = 0; i < 4; i++) {
        printf("Salesman %d: Rs. %d\n", i + 1, totalSalesman[i]);
    }
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 4; i++) {
            totalProduct[j] = totalProduct[j] + sales[i][j];
        }
    }

    printf("\nTotal Sales per Product:\n");

    for (int j = 0; j < 5; j++) {
        printf("Product %d: Rs. %d\n", j + 1, totalProduct[j]);
    }
    highestProduct = totalProduct[0];
    productIndex = 0;

    for (int j = 1; j < 5; j++) {
        if (totalProduct[j] > highestProduct) {
            highestProduct = totalProduct[j];
            productIndex = j;
        }
    }

    printf("\nBest-selling Product: Product %d\n", productIndex + 1);
    printf("Revenue: Rs. %d\n", highestProduct);

    printf("\nFinal Amounts:\n");

    for (int i = 0; i < 4; i++) {

        if (totalSalesman[i] > 10000) {
            float bonus = totalSalesman[i] * 0.10;
            float finalAmount = totalSalesman[i] + bonus;

            printf("Salesman %d: Rs. %.2f\n", i + 1, finalAmount);
            printf("Bonus Applied: Rs. %.2f\n", bonus);
        }
        else {
            printf("Salesman %d: Rs. %d\n", i + 1, totalSalesman[i]);
            printf("No Bonus Applied\n");
        }
    }

    return 0;
}