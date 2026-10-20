#include <stdio.h>

int main() {
    int sudoku[3][3];
    int valid = 1;
    printf("Enter 9 values (0 for empty cells):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &sudoku[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (sudoku[i][j] < 0 || sudoku[i][j] > 9) {
                valid = 0;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (sudoku[i][j] != 0) {

                for (int x = 0; x < 3; x++) {
                    for (int y = 0; y < 3; y++) {

                        if (i != x || j != y) {
                            if (sudoku[i][j] == sudoku[x][y]) {
                                valid = 0;
                            }
                        }

                    }
                }

            }

        }
    }
    if (valid == 1) {
        printf("Valid Grid\n");
    } else {
        printf("Invalid Grid\n");
    }

    return 0;
}