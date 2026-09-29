#include <stdio.h>
#include <math.h>

int main() {
    float accuracy, confidence;
    int datasetSize;
    int role, statusFlags;
    float modelScore, average;

    printf("Enter accuracy (0-100): ");
    scanf("%f", &accuracy);

    printf("Enter confidence score (0-100): ");
    scanf("%f", &confidence);

    printf("Enter dataset size: ");
    scanf("%d", &datasetSize);

    printf("Enter user role (1=Intern, 2=Engineer, 3=Admin): ");
    scanf("%d", &role);

    printf("Enter status flags: ");
    scanf("%d", &statusFlags);

    /* Calculate model score */
    if (datasetSize / 1000.0 > 10) {
        modelScore = (accuracy * 0.5) +
                     (confidence * 0.3) +
                     (10 * 2);
    }
    else {
        modelScore = (accuracy * 0.5) +
                     (confidence * 0.3) +
                     ((datasetSize / 1000.0) * 2);
    }

    printf("\nModel Score: %.2f\n", modelScore);

    /* Deployment decision */
    if (statusFlags & 8) {
        printf("Rejected: model deprecated\n");
    }
    else if (!(statusFlags & 1)) {
        printf("Rejected: not trained\n");
    }
    else if (!(statusFlags & 2)) {
        printf("Rejected: not validated\n");
    }
    else if (!(statusFlags & 4)) {
        printf("Pending: awaiting approval\n");
    }
    else if (accuracy < 70 || confidence < 60) {
        printf("Rejected: performance too low\n");
    }
    else if (datasetSize < 5000) {
        printf("Rejected: dataset too small\n");
    }
    else if (role == 1) {
        printf("Denied: interns cannot deploy\n");
    }
    else if (role == 2 && modelScore < 80) {
        printf("Denied: engineer needs higher score\n");
    }
    else {
        printf("Approved for deployment\n");
    }

    /* Average of accuracy and confidence */
    average = (accuracy + confidence) / 2;

    printf("\nAverage of accuracy and confidence: %.2f\n", average);

    if (modelScore > average) {
        printf("Model score is above the average.\n");
    }
    else {
        printf("Model score is not above the average.\n");
    }

    /* sizeof variables */
    printf("\nSize of variables:\n");
    printf("accuracy: %zu bytes\n", sizeof(accuracy));
    printf("confidence: %zu bytes\n", sizeof(confidence));
    printf("datasetSize: %zu bytes\n", sizeof(datasetSize));
    printf("role: %zu bytes\n", sizeof(role));
    printf("statusFlags: %zu bytes\n", sizeof(statusFlags));
    printf("modelScore: %zu bytes\n", sizeof(modelScore));
    printf("average: %zu bytes\n", sizeof(average));

    return 0;
}
