#include<stdio.h>
int main(){
    int total_bill ,student_id;
    printf("what is total bill amount:");
    scanf("%d",&total_bill);
    printf("do you have an student id? (press 1 if you have , otherwise 0");
    scanf("%d",&student_id);
    if(student_id==1){
         total_bill=total_bill-2 ;
    } 

    if(total_bill<0){
        total_bill=0;
        printf("your final bill is %d",total_bill);
    }
    else{
    printf("your final bill is %d",total_bill);
    }
}