#include <stdio.h>

int main() {
    int cardStatus, pin;
    float balance, withdrawal, newBalance;
    int notes2000, notes500, notes100;

    printf("Enter card status (1 = valid, 0 = blocked): ");
    scanf("%d", &cardStatus);

    printf("Enter PIN correctness (1 = correct, 0 = wrong): ");
    scanf("%d", &pin);

    printf("Enter account balance: ");
    scanf("%f", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%f", &withdrawal);

    if (cardStatus == 0) {
        printf("Card blocked. Contact bank.\n");
    }
    else if (pin == 0) {
        printf("Incorrect PIN.\n");
    }
    else if (withdrawal <= 0) {
        printf("Invalid amount.\n");
    }
    else if (withdrawal > balance) {
        printf("Insufficient balance.\n");
    }
    else if (withdrawal > 25000) {
        printf("Daily limit exceeded.\n");
    }
    else if ((balance - withdrawal) < 1000) {
        printf("Minimum balance must be maintained.\n");
    }
    else {
        newBalance = balance - withdrawal;

        printf("New balance: %.2f\n", newBalance);

        notes2000 = withdrawal / 2000;
        withdrawal = withdrawal - (notes2000 * 2000);

        notes500 = withdrawal / 500;
        withdrawal = withdrawal - (notes500 * 500);

        notes100 = withdrawal / 100;

        printf("Number of 2000 notes: %d\n", notes2000);
        printf("Number of 500 notes: %d\n", notes500);
        printf("Number of 100 notes: %d\n", notes100);

        printf("Please collect your cash.\n");
    }

    return 0;
}