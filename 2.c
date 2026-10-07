#include <stdio.h>

int main() {
    
    char passwords[5][50] = {
        "Pass123word",
        "abc12",
        "SUPERSECRET99",
        "qwer12345",
        "StrongP2026"
    };

    int maxScore = -1000;
    int strongestIndex = 0;
    int weakCount = 0;

    
    for (int i = 0; i < 5; i++) {
        int score = 0;
        int length = 0;

        
        for (int j = 0; passwords[i][j] != '\0'; j++) {
            char c = passwords[i][j];
            length++;

            
            if (c >= 'a' && c <= 'z') {
                score += 1;
            }
            
            else if (c >= 'A' && c <= 'Z') {
                score += 2;
            }
            
            else if (c >= '0' && c <= '9') {
                score += 3;
            }
        }

        
        if (length >= 8) {
            score += 5;
        }

        
        for (int j = 0; j < length - 2; j++) {
            if (passwords[i][j] == '1' && passwords[i][j + 1] == '2' && passwords[i][j + 2] == '3') {
                score -= 3;
                break; 
            }
        }

        
        printf("Password: %s -> Score: %d\n", passwords[i], score);

        
        if (score < 10) {
            weakCount++;
        }

        
        if (score > maxScore) {
            maxScore = score;
            strongestIndex = i;
        }
    }

    
    printf("\nStrongest Password: %s (Score: %d)\n", passwords[strongestIndex], maxScore);
    printf("Passwords scoring below 10: %d\n", weakCount);

    return 0;
}