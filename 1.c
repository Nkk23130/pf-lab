#include <stdio.h>
#include <string.h>

int main() {
    char review[200], result[300];
    char *p;

    printf("Enter feedback: ");
    fgets(review, sizeof(review), stdin);
    review[strcspn(review, "\n")] = '\0';

    printf("Characters: %zu\n", strlen(review));

    if (strstr(review, "good")) {
        printf("Found: good\n"); 
    }
    if (strstr(review, "bad")) {  
        printf("Found: bad\n");
    }
    p = strstr(review, "bad");
    if (p) {
        *p = '\0';                  
        strcpy(result, review);     
        strcat(result, "not good"); 
        strcat(result, p + 3);      
    } 
    else {
        strcpy(result, review);
    }

    printf("Updated review: %s\n", result);
    return 0;
}