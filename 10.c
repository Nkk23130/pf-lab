#include <stdio.h>

int main() {

    int classes;
    int students;
    int subjects;
    int marks;
    int totalMarks;
    int classTotal;
    int overallTotal = 0;
    int overallSubjects = 0;
    float average;
    float classAverage;
    float overallAverage;
    int pass;

    printf("Enter number of classes: ");
    scanf("%d", &classes);

    for (int i = 1; i <= classes; i++) {

        printf("\nEnter number of students in Class %d: ", i);
        scanf("%d", &students);

        classTotal = 0;

        for (int j = 1; j <= students; j++) {

            printf("\nEnter number of subjects for Student %d: ", j);
            scanf("%d", &subjects);

            totalMarks = 0;
            pass = 1;

            for (int k = 1; k <= subjects; k++) {

                printf("Enter marks for Subject %d: ", k);
                scanf("%d", &marks);

                totalMarks = totalMarks + marks;

                if (marks < 40) {
                    pass = 0;
                }
            }

            average = (float)totalMarks / subjects;

            printf("Class %d, Student %d: Total Marks = %d, Average = %.2f, Result = ",
                   i, j, totalMarks, average);

            if (pass == 1) {
                printf("Pass\n");
            } else {
                printf("Fail\n");
            }

            classTotal = classTotal + totalMarks;
            overallTotal = overallTotal + totalMarks;
            overallSubjects = overallSubjects + subjects;
        }

        classAverage = (float)classTotal / overallSubjects;

        printf("\nTotal Marks of Class %d: %d\n", i, classTotal);
        printf("Class Average: %.2f\n", classAverage);
    }

    overallAverage = (float)overallTotal / overallSubjects;

    printf("\nTotal Marks of All Students: %d\n", overallTotal);
    printf("Overall School Average: %.2f\n", overallAverage);

    return 0;
}