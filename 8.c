#include <stdio.h>

int main() {
    
    int seats[15] = {1, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 1};

    int bookedCount = 0;
    int emptyCount = 0;
    int firstAvailable = -1;
    int lastAvailable = -1;

    for (int i = 0; i < 15; i++) {
        if (seats[i] == 1) {
            bookedCount++;
        } else {
            emptyCount++;
            
            
            if (firstAvailable == -1) {
                firstAvailable = i + 1; 
            }
            
            
            lastAvailable = i + 1; 
        }
    }

    printf("Total Booked Seats: %d\n", bookedCount);
    printf("Total Empty Seats: %d\n", emptyCount);

    if (firstAvailable != -1) {
        printf("First Available Seat: Seat %d\n", firstAvailable);
        printf("Last Available Seat: Seat %d\n", lastAvailable);
    } else {
        printf("No seats available.\n");
    }

    
    int newlyBooked = 0;
    for (int i = 0; i < 15; i++) {
        if (seats[i] == 0) {
            seats[i] = 1; 
            newlyBooked++;
            if (newlyBooked == 3) {
                break; 
            }
        }
    }

    
    printf("\nFinal Seating Chart (1 = Booked, 0 = Empty):\n");
    for (int i = 0; i < 15; i++) {
        printf("[Seat %d: %d] ", i + 1, seats[i]);
    }
    printf("\n");

    return 0;
}