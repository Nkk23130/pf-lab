#include<stdio.h>
int main(){
    int total_bill, option;
    printf("what is total bill amount:");
    scanf("%d",&total_bill);
    printf("what is your selected option: (if you want homedelivery press 1, if you pick yourself press 2 )");
    scanf("%d",&option);
    if(option==1){
        total_bill= total_bill+3;
        printf("your final bill is:%d",total_bill);
    }
    else if (option==2){
        printf("your final bill is:%d",total_bill);
    }
    return 0;
}
