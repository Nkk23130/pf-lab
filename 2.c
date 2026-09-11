#include<stdio.h>
int main(){
    int quantity;
    int price=8;
    printf("the small size pizza quantity is:");
    scanf("%d",&quantity);
    if(quantity>1){
        printf("check our multi pizza details");

    }
    else{
        printf("your total amount is %d",quantity*price);
    }

    return 0;
}