#include<stdio.h>
int main(){
    float current_cost;
    char option;
    printf("what is current price?");
    scanf("%f", &current_cost);
    printf("do you want extra cheese?");
    scanf(" %c",&option);
    if(option == 'y' || option == 'Y'){
        current_cost=current_cost+1.5;
        printf("the final price is: %.2f", current_cost );
    }
    else if(option == 'N' || option == 'n'){
        printf("the final price is: %.2f", current_cost );
    }
    else{
        printf("select right option!");
    }
    return 0;
}