#include <stdio.h>
#include <stdlib.h>
void showInfo(int *a, int n){
    int i, total = 0;
    int *lowest = a;
    for (i = 0; i < n; i++){
        total = total + *(a + i);
        if (*(a + i) < *lowest)
            lowest = a + i;
    }
    printf("Total stock: %d\n", total);
    printf("Lowest stock: item %d with %d\n", (int)(lowest - a) + 1, *lowest);
}
int main(){
    int n, i, j, choice, pos, value, temp;
    int *stock, *newStock;
    printf("Enter starting size (3-8): ");
    scanf("%d", &n);
    while (n < 3 || n > 8){
        printf("Wrong! Enter starting size (3-8): ");
        scanf("%d", &n);
    }
    stock = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++){
        printf("Enter stock of item %d: ", i + 1);
        scanf("%d", stock + i);
    }
    do {
        printf("\n===== GROCERY STOCK MENU =====\n");
        printf("1. Display stock\n");
        printf("2. Update stock of one item\n");
        printf("3. Insert a new item\n");
        printf("4. Delete an item\n");
        printf("5. Sort stock\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1){
            printf("\nStock:\n");
            for (i = 0; i < n; i++)
                printf("Item %d: %d\n", i + 1, *(stock + i));
            showInfo(stock, n);
        }
        else if (choice == 2){ 
            printf("Enter position (1-%d): ", n);
            scanf("%d", &pos);
            if (pos < 1 || pos > n){
                printf("Invalid position!\n");
            }
            else{
                printf("Enter new stock value: ");
                scanf("%d", &value);
                *(stock + pos - 1) = value;
                showInfo(stock, n);
            }
        }
        else if (choice == 3){
            printf("Enter position to insert (1-%d): ", n + 1);
            scanf("%d", &pos);
            if (pos < 1 || pos > n + 1){
                printf("Invalid position!\n");
            }
            else{
                printf("Enter stock value of new item: ");
                scanf("%d", &value);
                newStock = (int *)malloc((n + 1) * sizeof(int));
                for (i = 0; i < pos - 1; i++)
                    *(newStock + i) = *(stock + i);
                *(newStock + pos - 1) = value;
                for (i = pos - 1; i < n; i++)
                    *(newStock + i + 1) = *(stock + i);
                free(stock);        
                stock = newStock;
                n = n + 1;
                showInfo(stock, n);
            }
        }
        else if (choice == 4){
            if (n == 1){
                printf("Cannot delete the last item!\n");
            }
            else{
                printf("Enter position to delete (1-%d): ", n);
                scanf("%d", &pos);
                if (pos < 1 || pos > n){
                    printf("Invalid position!\n");
                }
                else{
                    newStock = (int *)malloc((n - 1) * sizeof(int));
                    j = 0;
                    for (i = 0; i < n; i++){
                        if (i != pos - 1){
                            *(newStock + j) = *(stock + i);
                            j++;
                        }
                    }
                    free(stock);    
                    stock = newStock;
                    n = n - 1;
                    showInfo(stock, n);
                }
            }
        }
        else if (choice == 5){
            for (i = 0; i < n - 1; i++){
                for (j = 0; j < n - 1 - i; j++){
                    if (*(stock + j) > *(stock + j + 1)){
                        temp = *(stock + j);
                        *(stock + j) = *(stock + j + 1);
                        *(stock + j + 1) = temp;
                    }
                }
            }
            printf("Stock sorted.\n");
            showInfo(stock, n);
        }
        else if (choice != 6){
            printf("Wrong choice!\n");
        }
    } while (choice != 6);
    free(stock);
    stock = NULL;
    printf("Memory freed. Goodbye!\n");
    return 0;
}