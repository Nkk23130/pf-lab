#include <stdio.h>

int main() {
    int originalNumber, temp, remainder;
    int reversedNumber = 0;

    
    printf("Enter a reference number: ");
    scanf("%d", &originalNumber);

    
    temp = originalNumber;


    while (temp > 0) {
        remainder = temp % 10;                     
        reversedNumber = (reversedNumber * 10) + remainder; 
        temp = temp / 10;                          
    }

    
    printf("Reversed Number: %d\n", reversedNumber);

    if (originalNumber == reversedNumber) {
        printf("Palindrome Confirmed\n");
    } else {
        printf("Not a Palindrome\n");
    }

    return 0;
}
