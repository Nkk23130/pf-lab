#include <stdio.h>
#include <string.h>
void readMarks(int *m1, int *m2, int *m3){
    printf("Enter mark of subject 1 (0-100): ");
    scanf("%d", m1);
    while (*m1 < 0 || *m1 > 100){
        printf("Wrong! Enter mark of subject 1 (0-100): ");
        scanf("%d", m1);
    }
    printf("Enter mark of subject 2 (0-100): ");
    scanf("%d", m2);
    while (*m2 < 0 || *m2 > 100){
        printf("Wrong! Enter mark of subject 2 (0-100): ");
        scanf("%d", m2);
    }
    printf("Enter mark of subject 3 (0-100): ");
    scanf("%d", m3);
    while (*m3 < 0 || *m3 > 100){
        printf("Wrong! Enter mark of subject 3 (0-100): ");
        scanf("%d", m3);
    }
}
void calculateStats(int m1, int m2, int m3, int *total, double *average, int *highest, int *lowest){
    *total = m1 + m2 + m3;
    *average = *total / 3.0;

    *highest = m1;
    if (m2 > *highest)
        *highest = m2;
    if (m3 > *highest)
        *highest = m3;

    *lowest = m1;
    if (m2 < *lowest)
        *lowest = m2;
    if (m3 < *lowest)
        *lowest = m3;
}
void swapMarks(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void addGraceMarks(int *mark, int grace){
    if (grace > 5)
        grace = 5;
    if (*mark >= 35 && *mark <= 39){
        *mark = *mark + grace;
        if (*mark > 40)
            *mark = 40;     
    }
}
void findGrade(double avg, char *grade, char *remarks){
    if (avg >= 80){
        *grade = 'A';
        strcpy(remarks, "Excellent");
    }
    else if (avg >= 60){
        *grade = 'B';
        strcpy(remarks, "Good");
    }
    else if (avg >= 40){
        *grade = 'C';
        strcpy(remarks, "Needs Improvement");
    }
    else{
        *grade = 'F';
        strcpy(remarks, "Needs Improvement");
    }
}
void incrementByValue(int x){
    x = x + 1;
}
void incrementByReference(int *x){
    *x = *x + 1;
}
int main(){
    int i;
    int m1, m2, m3;
    int total, highest, lowest;
    double average;
    char grade;
    char remarks[20];
    int allTotal[5];
    double allAverage[5];
    char allGrade[5];
    char allRemarks[5][20];
    for (i = 0; i < 5; i++){
        printf("\nStudent %d\n", i + 1);
        readMarks(&m1, &m2, &m3);
        addGraceMarks(&m1, 5);
        addGraceMarks(&m2, 5);
        addGraceMarks(&m3, 5);
        if (m1 < m2)
            swapMarks(&m1, &m2);
        if (m1 < m3)
            swapMarks(&m1, &m3);
        if (m2 < m3)
            swapMarks(&m2, &m3);
        printf("Marks after grace (high to low): %d %d %d\n", m1, m2, m3);
        calculateStats(m1, m2, m3, &total, &average, &highest, &lowest);
        printf("Highest: %d, Lowest: %d\n", highest, lowest);
        findGrade(average, &grade, remarks);
        allTotal[i] = total;
        allAverage[i] = average;
        allGrade[i] = grade;
        strcpy(allRemarks[i], remarks);
    }
    printf("\n=========== RESULT TABLE ===========\n");
    printf("%-8s %-7s %-9s %-6s %s\n", "Student", "Total", "Average", "Grade", "Remarks");
    for (i = 0; i < 5; i++){
        printf("%-8d %-7d %-9.2f %-6c %s\n", i + 1, allTotal[i], allAverage[i], allGrade[i], allRemarks[i]);
    }
    int num = 10;
    printf("\n--- Value and Reference Demo ---\n");
    printf("Before: num = %d\n", num);
    incrementByValue(num);
    printf("After incrementByValue: num = %d\n", num);
    incrementByReference(&num);
    printf("After incrementByReference: num = %d\n", num);
return 0;
}