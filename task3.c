#include<stdio.h>
#include<math.h>
int main(){
    float kilometers;
    printf("distance in kilometers?");
    scanf("%f",&kilometers);
    printf("the distance in meters= %f \n", kilometers*1000);
    printf("the distance in centimeters= %f \n", kilometers*1000*100);
    return 0;

}