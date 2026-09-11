#include<stdio.h>
int main(){
    int total_bill,time;
    printf("what is total bill amount:");
    scanf("%d",&total_bill);
    printf("current time(0-23):");
    scanf("%d",&time);
    if(time>=11&&time<=14){
        total_bill=total_bill*0.9;
        printf("the final bill is:%d",total_bill);
    }
    else { 
    printf("the final bill is:%d", total_bill);
}
return 0;
}