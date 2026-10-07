#include <stdio.h>

int main() {
    int transfers[10] = {5000, 50, 12000, 500000, 20, 8000, 25000, 300, 450000, 15000};
    
    int flagged_count = 0;
    int normal_count = 0;
    long long normal_sum = 0;
    int max_transfer = transfers[0];

    printf("--- TRANSFER ANALYSIS ---\n");

    for (int i = 0; i < 10; i++) {
        int amount = transfers[i];

       
        if (amount < 100) {
            printf("Transfer %d (%d): Flagged (Test transaction - Too small)\n", i + 1, amount);
            flagged_count++;
        } 
        else if (amount > 200000) {
            printf("Transfer %d (%d): Flagged (Suspicious - Too large)\n", i + 1, amount);
            flagged_count++;
        } 
        else {
            normal_sum += amount;
            normal_count++;
        }

        
        if (amount > max_transfer) {
            max_transfer = amount;
        }
    }

    
    float normal_average = 0.0;
    if (normal_count > 0) {
        normal_average = (float)normal_sum / normal_count;
    }

    
    printf("\n--- SUMMARY ---\n");
    printf("Total flagged transfers: %d\n", flagged_count);
    printf("Average of normal transfers: %.2f\n", normal_average);
    printf("Largest transfer amount: %d\n", max_transfer);

    return 0;
}