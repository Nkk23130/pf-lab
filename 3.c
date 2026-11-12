#include <stdio.h>
void showRoutes(){
    printf("CITY BUS SERVICE\n");
    printf("Routes:\n");
    printf("1. Karachi to Hyderabad - Rs. 800\n");
    printf("2. Karachi to Sukkur    - Rs. 2200\n");
    printf("3. Karachi to Multan    - Rs. 3500\n");
}
int getRoute(){
    int route;
    printf("Enter route number (1-3): ");
    scanf("%d", &route);
    while (route < 1 || route > 3){
        printf("Wrong route! Enter route number (1-3): ");
        scanf("%d", &route);
    }
return route;
}
int getSeats(){
    int seats;
    printf("Enter number of seats (1-6): ");
    scanf("%d", &seats);
    while (seats < 1 || seats > 6){
        printf("Wrong seats! Enter number of seats (1-6): ");
        scanf("%d", &seats);
    }
return seats;
}
char getSeatType(){
    char type;
    printf("Enter seat type (E for Economy, B for Business): ");
    scanf(" %c", &type);
    if (type == 'e')
        type = 'E';
    if (type == 'b')
        type = 'B';
    while (type != 'E' && type != 'B'){
        printf("Wrong type! Enter E or B: ");
        scanf(" %c", &type);
        if (type == 'e')
            type = 'E';
        if (type == 'b')
            type = 'B';
    }
return type;
}
char *getRouteName(int route){
    if (route == 1)
        return "Karachi to Hyderabad";
    else if (route == 2)
        return "Karachi to Sukkur";
    else
        return "Karachi to Multan";
}
int getSeatFare(int route){
    int fare;
    if (route == 1)
        fare = 800;
    else if (route == 2)
        fare = 2200;
    else
        fare = 3500;
    return fare;
}
float getTotalFare(int seatFare, int seats){
    float total;
    total = seatFare * seats;
    return total;
}
float addSeatCharge(float total, char type){
    float newTotal;
    if (type == 'B')
        newTotal = total + total * 0.30;
    else
        newTotal = total;
    return newTotal;
}
void printTicket(char *routeName, int seats, char type, float finalFare){
    printf("\n------- BUS TICKET -------\n");
    printf("Route: %s\n", routeName);
    printf("Seats: %d\n", seats);
    if (type == 'E')
        printf("Seat Type: Economy\n");
    else
        printf("Seat Type: Business\n");
    printf("Final Fare: Rs. %.2f\n", finalFare);
}
int main(){
    int i, route, seats, seatFare;
    char type;
    float total, finalFare;
    float totalEarnings = 0;
    showRoutes();
    for (i = 1; i <= 2; i++){
        printf("\nPassenger %d\n", i);
        route = getRoute();
        seats = getSeats();
        type = getSeatType();
        seatFare = getSeatFare(route);
        total = getTotalFare(seatFare, seats);
        finalFare = addSeatCharge(total, type);
        printTicket(getRouteName(route), seats, type, finalFare);
        totalEarnings = totalEarnings + finalFare;
    }
    printf("\nTotal Earnings of Bus Company: Rs. %.2f\n", totalEarnings);
    return 0;
}