#include<stdio.h>
int main(){
    int quantity ,crust ;
    printf("the quantity of pizza you ordered:");
    scanf("%d",&quantity);
    printf("which crust you want (press 1 for regular, 2 for thin ,and 3 for stuff) :");
    scanf("%d", &crust);
    if(crust==3 && quantity==3){
        printf("you get free garlic bread!");
    }
    else{
       printf(" thank you for your order.");
    }
return 0;
}