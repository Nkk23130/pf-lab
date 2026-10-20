#include<stdio.h>
int main(){
    int seats[10][4]={0};
    int reserve;
    int row, seat;
    printf("enter number of seats you want to reserve:");
    scanf("%d", &reserve);
    for(int i=0; i<reserve; i++){
     printf("enter row number (1 to 10)");
     scanf("%d",&row);
     printf("enter seat number between(1-4)");
     scanf("%d",&seat);
     if(seats[row-1][seat-1]==1){ 
        printf("seat already booked\n");
     }
     else {
            seats[row-1][seat-1]=1;
            printf("seat booked sucessfully\n");
        }

    }
    for(int i=0; i<10; i++){
        printf("Row:%d\t",i+1);
        for(int j=0; j<4; j++){
            printf("%d\t", seats[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 10; i++) {
        int full = 1;
        for (int j = 0; j < 4; j++) {
            if (seats[i][j] == 0) {
                full = 0;
                break;
            }
        }
         if (full == 1) {
            printf("Row %d is completely reserved.\n", i + 1);
        }
    }



}