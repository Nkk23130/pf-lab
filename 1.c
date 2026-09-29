#include<stdio.h>
int main(){
    int hours , vehicle_type , membership ,base_price ,final_price;
    printf("enter vehicle type: \n 1 for bike\n 2 for car\n 3 for truck.\n");
    scanf("%d",&vehicle_type);
    if (vehicle_type==1 || vehicle_type==2 || vehicle_type==3){
    printf("enter time parked:");
    scanf("%d",&hours);
       if(hours<=0){
        printf("invalid time ");
       }
       else{
         printf("enter your membership status:\n 1 for member \n2 for non member\n");
         scanf("%d",&membership);
          if(vehicle_type==1){
            base_price=20*hours;
            }

          else if( vehicle_type==2){
            if(hours<=2){
                base_price=50;
            }
            else{
                base_price=50 + 30  *(hours - 2);
            }
          }
          else if( vehicle_type==3){
            if(hours<=3){
                base_price=100;
            }
            else{
               base_price= 100 + 50 *(hours -3);
            }

          }
          


       }
    }
    else {
        printf("invalid vehicle type.");
    }

    if(membership==1 && base_price>200){
        final_price=base_price*0.85;//applying 15% discount.
    }
    else{
        final_price=base_price;
    }

    printf("your final bill is:%d",final_price);
    return 0;


}