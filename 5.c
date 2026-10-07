#include <stdio.h>

int main() {
    int notes500[5] = {10, 5, 8, 12, 6};
    int notes200[5] = {20, 15, 10, 8, 14};
    int notes100[5] = {30, 25, 40, 35, 20};

    int total500Notes = 0;
    int total200Notes = 0;
    int total100Notes = 0;

    
    for (int i = 0; i < 5; i++) {
        total500Notes += notes500[i];
        total200Notes += notes200[i];
        total100Notes += notes100[i];
    }

  
    int totalMoney = (total500Notes * 500) + (total200Notes * 200) + (total100Notes * 100);

    printf("Total Cash Available in ATM: %d Rupees\n\n", totalMoney);

    
    int withdrawAmount;
    printf("Enter the amount you want to withdraw: ");
    scanf("%d", &withdrawAmount);

    if (withdrawAmount > totalMoney) {
        printf("Insufficient Funds\n");
    } else if (withdrawAmount % 100 != 0) {
        printf("Invalid Amount\n");
    } else {
        printf("Transaction Approved\n");
    }

    return 0;
}