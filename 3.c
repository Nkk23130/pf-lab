#include <stdio.h>
#include <string.h>

int main() {
    char email[100], domain[100];
    char *at;

    printf("Enter email address: ");
    fgets(email, 100, stdin);
    email[strcspn(email, "\n")] = '\0';

    at = strchr(email, '@');

    if (at != NULL) {
        strcpy(domain, at + 1);
        printf("Domain: %s\n", domain);
    } 
    else {
        printf("Invalid email: '@' not found.\n");
    }
 return 0;
}