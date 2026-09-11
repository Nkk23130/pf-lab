#include<stdio.h>
int main(){
    int current_cost;
    int crust;
    printf("the current cost is:");
    scanf("%d", &current_cost);
    printf("which crust you want (press 1 for regular, 2 for thin ,and 3 for stuff) :");
    scanf("%d", &crust);
    

    if (crust == 1){
        printf("your total bill is:%d",current_cost);
    }
    else if (crust == 2){
        printf("your total bill is:%d",current_cost+1);
    }
    else if (crust == 3){
        printf("your total bill is:%d",current_cost+2);
    }
    return 0;
}