#include <stdio.h>

int main() {
    int category, subType, delayed;

    printf("Select Category:\n");
    printf("1. Greeting\n");
    printf("2. Query\n");
    printf("3. Complaint\n");
    printf("4. Feedback\n");
    printf("Enter category: ");
    scanf("%d", &category);

    if (category == 1) {
        printf("\nGreeting:\n");
        printf("1. Morning\n");
        printf("2. Evening\n");
        printf("Enter sub-type: ");
        scanf("%d", &subType);

        if (subType == 1) {
            printf("Good morning! How can I help you?\n");
        }
        else if (subType == 2) {
            printf("Good evening! How can I help you?\n");
        }
        else {
            printf("Invalid selection.\n");
        }
    }

    else if (category == 2) {
        printf("\nQuery:\n");
        printf("1. Product\n");
        printf("2. Billing\n");
        printf("3. Technical\n");
        printf("Enter sub-type: ");
        scanf("%d", &subType);

        if (subType == 1) {
            printf("Sure! I can help you with your product query.\n");
        }
        else if (subType == 2) {
            printf("Sure! I can help you with your billing query.\n");
        }
        else if (subType == 3) {
            printf("Sure! I can help you with your technical query.\n");
        }
        else {
            printf("Invalid selection.\n");
        }
    }

    else if (category == 3) {
        printf("\nComplaint:\n");
        printf("1. Delivery\n");
        printf("2. Quality\n");
        printf("Enter sub-type: ");
        scanf("%d", &subType);

        if (subType == 1) {
            printf("Is your order delayed? (1 = Yes, 0 = No): ");
            scanf("%d", &delayed);

            if (delayed == 1) {
                printf("We sincerely apologize for the delay in your order.\n");
            }
            else {
                printf("We apologize for any inconvenience with your delivery.\n");
            }
        }
        else if (subType == 2) {
            printf("We apologize for the quality issue. We will look into it.\n");
        }
        else {
            printf("Invalid selection.\n");
        }
    }

    else if (category == 4) {
        printf("\nFeedback:\n");
        printf("1. Positive\n");
        printf("2. Negative\n");
        printf("Enter sub-type: ");
        scanf("%d", &subType);

        if (subType == 1) {
            printf("Thank you for your positive feedback!\n");
        }
        else if (subType == 2) {
            printf("Thank you for your feedback. We will work to improve.\n");
        }
        else {
            printf("Invalid selection.\n");
        }
    }

    else {
        printf("Invalid selection.\n");
    }

    return 0;
}