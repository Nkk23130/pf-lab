#include <stdio.h>

int main() {
    int marks[15] = {85, 96, 78, 92, 98, 100, 64, 88, 97, 72, 90, 81, 99, 60, 95};

    int sum = 0;
    int count100 = 0;

    
    for (int i = 0; i < 15; i++) {
        if (marks[i] + 5 > 100) {
            marks[i] = 100;
        } else {
            marks[i] = marks[i] + 5;
        }
    }

    
    int maxMark = marks[0];
    int minMark = marks[0];

    
    for (int i = 0; i < 15; i++) {
        sum += marks[i];

        
        if (marks[i] == 100) {
            count100++;
        }

        
        if (marks[i] > maxMark) {
            maxMark = marks[i];
        }

        
        if (marks[i] < minMark) {
            minMark = marks[i];
        }
    }

    
    float average = (float)sum / 15;

    
    printf("Updated Marks:\n");
    for (int i = 0; i < 15; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    
    printf("\n--- SUMMARY ---\n");
    printf("New Class Average: %.2f\n", average);
    printf("Students with exactly 100: %d\n", count100);
    printf("Highest Mark: %d\n", maxMark);
    printf("Lowest Mark: %d\n", minMark);
    printf("Range (Highest - Lowest): %d\n", maxMark - minMark);

    return 0;
}