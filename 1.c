#include <stdio.h>
void showPacks(){
    printf("MOBILE RECHARGE PACKS\n1. Rs. 100\n2. Rs. 200\n3. Rs. 500\n4. Rs. 1000\n");
}
int getPack(){
    int choice;
    printf("Enter pack number (1-4): ");
    scanf("%d", &choice);
    while (choice < 1 || choice > 4){
        printf("Wrong choice! Enter pack number (1-4): ");
        scanf("%d", &choice);
    }
    return choice;
}
long long getMobile(){
    long long mobile;
    printf("Enter 11 digit mobile number: ");
    scanf("%lld", &mobile);

    while (mobile < 10000000000 || mobile > 99999999999){
        printf("Wrong number! Enter 11 digit mobile number: ");
        scanf("%lld", &mobile);
    }
    return mobile;
}
int getAmount(int choice){
    int amount;
    switch (choice){
        case 1:
            amount = 100;
            break;
        case 2:
            amount = 200;
            break;
        case 3:
            amount = 500;
            break;
        case 4:
            amount = 1000;
            break;
        default:
            amount = 0;
    }
    return amount;
}
float addTax(float amount){
    float newAmount;
    newAmount = amount + amount * 0.15;
    return newAmount;
}
float getBonus(float amount){
    float bonus;
    if (amount >= 500)
        bonus = amount * 0.10;
    else
        bonus = 0;
    return bonus;
}
void printSlip(long long mobile, float amount, float tax, float total){
    printf("\n------ RECHARGE SLIP ------\n");
    printf("Mobile Number: %lld\n", mobile);
    printf("Amount: Rs. %.2f\n", amount);
    printf("Amount with tax: Rs. %.2f\n", tax);
    printf("Total Balance: Rs. %.2f\n", total);
}

int main()
{
    int i, choice;
    long long mobile;
    float amount, tax, bonus, total, totalSpent = 0;
    showPacks();
    for (i = 1; i <= 3; i++){
        printf("\nRecharge %d\n", i);
        choice = getPack();
        mobile = getMobile();
        amount = getAmount(choice);
        tax = addTax(amount);
        bonus = getBonus(amount);
        total = amount + bonus;
        printSlip(mobile, amount, tax, total);
        totalSpent = totalSpent + amount;
    }
    printf("\nTotal Money Spent: Rs. %.2f\n", totalSpent);
return 0;
}