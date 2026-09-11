#include<stdio.h>
int main(){
    int size ;
    printf("your selected size is: (1.Small, 2.Medium, 3.Large) ");
    scanf("%d", &size);
    if (size==1){
        printf("the selected size is : small");
    }
    else if (size==2){
        printf("the selected size is : medium");
    }
    else if (size==3){
        printf("the selected size is : large");

    }
    else{
        printf("invalid size");
    }
    return 0;
}