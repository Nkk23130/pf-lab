#include <stdio.h>

int main() {
    int signals[12];
    int sum = 0;
    float average;
    int overloaded_count = 0;
    int max_cars, min_cars;
    int max_index = 0, min_index = 0;

    printf("Enter the number of waiting cars for 12 traffic signals:\n");
    for (int i = 0; i < 12; i++) {
        printf("Signal %d: ", i + 1);
        scanf("%d", &signals[i]);
    }
    for (int i = 0; i < 12; i++) {
        sum += signals[i];
    }
    average = (float)sum / 12;
    
    max_cars = signals[0];
    min_cars = signals[0];

    for (int i = 0; i < 12; i++) {
        if (signals[i] > average) { overloaded_count++;}
        if (signals[i] > max_cars) {max_cars = signals[i]; max_index = i;}
        if (signals[i] < min_cars) {min_cars = signals[i]; min_index = i;}
    }

    int difference = max_cars - min_cars;

    printf("\n--- TRAFFIC SIGNAL ANALYSIS ---\n");
    printf("Average cars waiting: %.2f\n", average);
    printf("Number of overloaded signals: %d\n", overloaded_count);
    printf("Highest cars waiting: %d (at Signal %d)\n", max_cars, max_index + 1);
    printf("Lowest cars waiting: %d (at Signal %d)\n", min_cars, min_index + 1);
    printf("Difference between highest and lowest: %d\n", difference);

    return 0;
}