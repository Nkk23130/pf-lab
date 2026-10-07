#include <stdio.h>

int main() {
    int amount;
    int transaction_count = 0;
    int total_withdrawn = 0;

    printf("=== ATM SESSION STARTED ===\n");
    printf("Enter withdrawal amount (Enter 0 to finish):\n\n");

    
    while (1) {
        printf("Enter amount: ");
        scanf("%d", &amount);

        
        if (amount == 0) {
            break;
        }

        
        total_withdrawn += amount;
        transaction_count++;
        printf("Processed: %d rupees\n\n", amount);
    }

    
    printf("\n=== SESSION SUMMARY ===\n");
    printf("Total transactions made: %d\n", transaction_count);
    printf("Total amount withdrawn: %d rupees\n", total_withdrawn);
    printf("Thank you for using the ATM!\n");

    return 0;
}