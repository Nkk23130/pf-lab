#include<stdio.h>
int main(){
    int amount;
    printf("the amount is:");
    scanf("%d",&amount);
    if (amount==1)
    {
        printf("your bill of single pizza is :8");
    }
    else if (amount==2)
    {
        printf("your bill of combo of two pizza is :15");
    }
    else if (amount==3)
    {
        printf("your bill of a package of 3 pizzas is :21");
    }
    return 0;
}