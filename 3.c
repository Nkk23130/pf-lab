#include <stdio.h>

int main() {
    int stock[10]   = {50, 15, 80,  5, 30, 12, 100, 20, 45,  8};
    int minimum[10] = {40, 25, 70, 25, 30, 50,  90, 20, 60, 40};
    int totalReorder = 0;
    int maxReorderNeeded = 0;
    int maxReorderIndex = -1;

    printf("--- PRODUCTS REQUIRING REORDER ---\n");

    for (int i = 0; i < 10; i++) {
        
        if (stock[i] < minimum[i]) {
            int reorderQuantity = minimum[i] - stock[i];
            
            printf("Product %d: Current Stock = %d, Minimum = %d -> Reorder = %d units\n", 
                   i + 1, stock[i], minimum[i], reorderQuantity);

            
            totalReorder += reorderQuantity;

            
            if (reorderQuantity > maxReorderNeeded) {
                maxReorderNeeded = reorderQuantity;
                maxReorderIndex = i;
            }
        }
    }

    
    printf("\n--- SUMMARY ---\n");
    printf("Total Reorder Quantity Across All Products: %d units\n", totalReorder);

    if (maxReorderIndex != -1) {
        printf("Product Needing Largest Reorder: Product %d (%d units needed)\n", 
               maxReorderIndex + 1, maxReorderNeeded);
    } else {
        printf("All products have sufficient stock. No reordering needed.\n");
    }

    return 0;
}