#include <stdio.h>
int findMax(int *p, int n){
    int max = *p;
    int i;
    for (i = 1; i < n; i++){
        if (*(p + i) > max)
            max = *(p + i);
    } 
    return max;
}
int findMin(int *p, int n){
    int min = *p;
    int i;
    for (i = 1; i < n; i++){
        if (*(p + i) < min)
            min = *(p + i);
    }
return min;
}
double findAverage(int *p, int n){
    int sum = 0;
    int i;
    for (i = 0; i < n; i++)
        sum = sum + *(p + i);

    return (double)sum / n;
}
int countAbove(int *p, int n, double avg){
    int count = 0;
    int i;
    for (i = 0; i < n; i++){
        if (*(p + i) > avg)
            count++;
    }
    return count;
}
void reverseArray(int *p, int n){
    int *start = p;
    int *end = p + n - 1;
    int temp;
    while (start < end){
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int searchMark(int *p, int n, int key){
    int i;
    for (i = 0; i < n; i++){
        if (*(p + i) == key)
            return i;
    }
    return -1;
}
void display(int *p, int n){
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", *(p + i));
    printf("\n");
}

int main(){
    int marks[10];
    int i, key, position, pass = 0;
    double avg;
    for (i = 0; i < 10; i++){
        do {
            printf("Enter marks of student %d: ", i + 1);
            scanf("%d", &marks[i]);
        } while (marks[i] < 0 || marks[i] > 100);
    }
    printf("\nOriginal Array:\n");
    display(marks, 10);
    printf("\nHighest Marks: %d\n", findMax(marks, 10));
    printf("Lowest Marks: %d\n", findMin(marks, 10));
    avg = findAverage(marks, 10);
    printf("Average Marks: %.2lf\n", avg);
    printf("Students Above Average: %d\n",
           countAbove(marks, 10, avg));
    for (i = 0; i < 10; i++){
        if (marks[i] >= 40)
            pass++;
    }
    printf("Pass Count: %d\n", pass);
    printf("\nEnter marks to search: ");
    scanf("%d", &key);
    position = searchMark(marks, 10, key);
    if (position == -1)
        printf("Mark not found!\n");
    else
        printf("Mark found at position %d\n", position);
    reverseArray(marks, 10);
    printf("\nReversed Array:\n");
    display(marks, 10);
    return 0;
}
