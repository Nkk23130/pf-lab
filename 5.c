#include <stdio.h>

int main() {
    int marks[2][3][3];
    int total[2][3] = {0};
    for (int i = 0; i < 2; i++) {
        printf("\nClass %d:\n", i + 1);

        for (int j = 0; j < 3; j++) {
            printf("Student %d:\n", j + 1);

            for (int k = 0; k < 3; k++) {
                printf("Enter marks for Subject %d: ", k + 1);
                scanf("%d", &marks[i][j][k]);
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {

            for (int k = 0; k < 3; k++) {
                total[i][j] = total[i][j] + marks[i][j][k];
            }

            printf("Class %d - Student %d Total: %d\n",
                   i + 1, j + 1, total[i][j]);
        }
    }
    for (int i = 0; i < 2; i++) {

        int topper = 0;

        for (int j = 1; j < 3; j++) {
            if (total[i][j] > total[i][topper]) {
                topper = j;
            }
        }

        printf("\nTop Performer of Class %d: Student %d with %d marks\n",
               i + 1, topper + 1, total[i][topper]);
    }
    int overallClass = 0;
    int overallStudent = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {

            if (total[i][j] >
                total[overallClass][overallStudent]) {

                overallClass = i;
                overallStudent = j;
            }
        }
    }
    printf("\nOverall Topper: Class %d, Student %d with %d marks\n",
           overallClass + 1,
           overallStudent + 1,
           total[overallClass][overallStudent]);

    return 0;
}