#include <stdio.h>
void showRules(){
    printf("TAXI SERVICE\n");
    printf("Base fare: Rs. 150\n");
    printf("First 10 km: Rs. 60 per km\n");
    printf("After 10 km: Rs. 45 per km\n");
    printf("Waiting: first 5 minutes free, then Rs. 10 per minute\n");
    printf("Night charge (10 PM to 6 AM): extra 25%%\n");
}
float getDistance(){
    float distance;
    printf("Enter distance in km (up to 200): ");
    scanf("%f", &distance);
    while (distance <= 0 || distance > 200){
        printf("Wrong! Enter distance in km (up to 200): ");
        scanf("%f", &distance);
    }
    return distance;
}
int getWaiting(){
    int waiting;
    printf("Enter waiting time in minutes (0-120): ");
    scanf("%d", &waiting);
    while (waiting < 0 || waiting > 120){
        printf("Wrong! Enter waiting time in minutes (0-120): ");
        scanf("%d", &waiting);
    }
    return waiting;
}
float getDistanceCharge(float distance){
    float charge;
    if (distance <= 10)
        charge = 150 + distance * 60;
    else
        charge = 150 + 10 * 60 + (distance - 10) * 45;
    return charge;
}
float getWaitingCharge(int waiting){
    if (waiting > 5)
        return (waiting - 5) * 10;
    else
        return 0;
}
float addNightCharge(float fare, int hour){
    if (hour >= 22 || hour < 6)
        return fare + fare * 0.25;
    else
        return fare;
}
void printReceipt(float distance, int waiting, float finalFare){
    printf("\n------- TRIP RECEIPT -------\n");
    printf("Distance: %.2f km\n", distance);
    printf("Waiting Time: %d minutes\n", waiting);
    printf("Final Fare: Rs. %.2f\n", finalFare);
}
int main(){
    int i, waiting, hour;
    float distance, distanceCharge, waitingCharge, fare, finalFare;
    float totalEarnings = 0;
    float highest = 0;
    showRules();
    for (i = 1; i <= 3; i++){
        printf("\nTrip %d\n", i);
        distance = getDistance();
        waiting = getWaiting();
        printf("Enter hour of the trip (0-23): ");
        scanf("%d", &hour);
        while (hour < 0 || hour > 23){
            printf("Wrong! Enter hour of the trip (0-23): ");
            scanf("%d", &hour);
        }
        distanceCharge = getDistanceCharge(distance);
        waitingCharge = getWaitingCharge(waiting);
        fare = distanceCharge + waitingCharge;
        finalFare = addNightCharge(fare, hour);
        printReceipt(distance, waiting, finalFare);
        totalEarnings = totalEarnings + finalFare;
        if (finalFare > highest)
            highest = finalFare;
    }
    printf("\nTotal Earnings: Rs. %.2f\n", totalEarnings);
    printf("Highest Fare of the Day: Rs. %.2f\n", highest);
    return 0;
}