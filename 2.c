#include <stdio.h>
void showRooms(){
    printf("CITY HOSPITAL\nRoom Charges:\n1. General Ward  - Rs. 1500/day\n2. Semi-Private  - Rs. 3500/day\n3. Private       - Rs. 6000/day\n");   
}
int getRoom(){
    int room;
    printf("Enter room type (1, 2 or 3): ");
    scanf("%d", &room);
     while (room < 1 || room > 3){
        printf("Wrong choice! Enter room type (1, 2 or 3): ");
        scanf("%d", &room);
    }
return room;
}
int getDays(){
    int days;
    printf("Enter number of days stayed (1-30): ");
    scanf("%d", &days);
     while (days < 1 || days > 30){
        printf("Wrong days! Enter number of days stayed (1-30): ");
        scanf("%d", &days);
    }
    return days;
}
char *getRoomName(int room){
    if (room == 1)
        return "General Ward";
    else if (room == 2)
        return "Semi-Private";
    else
        return "Private";
}
float getRoomCharges(int room, int days){
    float charges;
    if (room == 1)
        charges = 1500 * days;
    else if (room == 2)
        charges = 3500 * days;
    else
        charges = 6000 * days;

    return charges;
}
float getMedicineCharge(float medicine)
{
    float newMedicine;
    newMedicine = medicine + medicine * 0.05;
    return newMedicine;
}
float getFinalAmount(float total, int days){
    float finalAmount;
    if (days >= 7)
        finalAmount = total - total * 0.08;
    else
        finalAmount = total;
    return finalAmount;
}
void printBill(char *roomName, int days, float roomCharges,
               float medicineCharges, float finalAmount)
{
    printf("\n------- FINAL BILL -------\n");
    printf("Room Type: %s\n", roomName);
    printf("Days Stayed: %d\n", days);
    printf("Room Charges: Rs. %.2f\n", roomCharges);
    printf("Medicine Charges: Rs. %.2f\n", medicineCharges);
    printf("Final Amount: Rs. %.2f\n", finalAmount);
}

int main(){
    int room, days;
    float medicine, roomCharges, medicineCharges, total, finalAmount;
    char senior;
    showRooms();
    room = getRoom();
    days = getDays();
    printf("Enter medicine bill: ");
    scanf("%f", &medicine);
    while (medicine < 0) {
        printf("Wrong amount! Enter medicine bill: ");
        scanf("%f", &medicine);
    }
    roomCharges = getRoomCharges(room, days);
    medicineCharges = getMedicineCharge(medicine);
    total = roomCharges + medicineCharges;
    finalAmount = getFinalAmount(total, days);
    printf("Is the patient a senior citizen? (y/n): ");
    scanf(" %c", &senior);

    if (senior == 'y' || senior == 'Y'){
        finalAmount = finalAmount - 1000;
        if (finalAmount < 0)
            finalAmount = 0;
    }
    printBill(getRoomName(room), days, roomCharges, medicineCharges, finalAmount);
return 0;
}