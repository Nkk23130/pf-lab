#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, i, hotDays = 0;
    double *temp;
    double *ptr;
    double hottest, coldest;
    do {
        printf("Enter number of days (1-10): ");
        scanf("%d", &n);
    } while (n < 1 || n > 10);
    temp = (double*)malloc(n * sizeof(double));

    if (temp == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (i = 0; i < n; i++){
        do {
            printf("Enter temperature for day %d: ", i + 1);
            scanf("%lf", &temp[i]);
        } while (temp[i] < -10 || temp[i] > 55);
    }
    printf("\n--- TEMPERATURE RECORD ---\n");
    for (i = 0; i < n; i++){
        printf("Day %d: %.2lf at address %p\n",
               i + 1, temp[i], (void*)&temp[i]);
    }
    ptr = temp;
    hottest = *ptr;
    coldest = *ptr;
    for (i = 0; i < n; i++){
        if (*ptr > hottest)
            hottest = *ptr;
        if (*ptr < coldest)
            coldest = *ptr;
        if (*ptr > 40)
            hotDays++;
        ptr++;
    }
    printf("\nHottest Temperature: %.2lf\n", hottest);
    printf("Coldest Temperature: %.2lf\n", coldest);
    printf("Days Above 40: %d\n", hotDays);
    free(temp);
    temp = NULL;
    printf("\nMemory successfully released!\n");
    return 0;
}
