#include<stdio.h>
int main(){
    int size, count, crust, hour, student_id, delivery;
    char cheese;
    float base_price = 0, subtotal = 0, total = 0;
    float discount_amount = 0, hh_discount = 0;
    
    printf("Select pizza size (1.Small, 2.Medium, 3.Large): ");
    scanf("%d", &size);
    
    if(size < 1 || size > 3){
        printf("Invalid size.");
        return 0;
    }
    
    if(size == 1) {base_price = 6.00; printf("Small size selected\n");}
    else if(size == 2) {base_price = 7.00; printf("Medium size selected\n\n");}
    else if(size == 3) {base_price = 9.00; printf("Large size selected\n");}
    
    printf("How many pizzas (1-3): ");
    scanf("%d", &count);
    
    if(count == 1){
        subtotal = base_price * 1;
        printf("%d pizza: $%.2f\n", count, subtotal);
    }
    else if(count == 2){
        subtotal = 15.00;  
        discount_amount = (base_price * 2) - 15.00;
        printf("%d pizzas: $%.2f (Save $%.2f!)\n", count, subtotal, discount_amount);
    }
    else if(count == 3){
        subtotal = 21.00; 
        discount_amount = (base_price * 3) - 21.00;
        printf("%d pizzas: $%.2f (Save $%.2f!)\n", count, subtotal, discount_amount);
    }
    else{
        printf("Invalid quantity");
        return 0;
    }
    
    printf("\nSelect crust (1.Regular, 2.Thin, 3.Stuffed): ");
    scanf("%d", &crust);
    
    if(crust == 1){
        printf("Regular crust selected (+$0.00)\n");
    }
    else if(crust == 2){
        subtotal = subtotal + 1.00;
        printf("Thin crust selected (+$1.00)\n");
    }
    else if(crust == 3){
        subtotal = subtotal + 2.00;
        printf("Stuffed crust selected (+$2.00)\n");
    }
    
    printf("Extra cheese (Y/N): ");
    scanf(" %c", &cheese); // space before %c
    
    if(cheese == 'Y' || cheese == 'y'){
        subtotal = subtotal + 1.50;
        printf("Extra cheese added (+$1.50)\n");
    }
    else if(cheese == 'N' || cheese == 'n'){
    }
    else{
        printf("Invalid option for cheese");
    }
    
    total = subtotal;

    printf("Enter current hour (0-23): ");
    scanf("%d", &hour);
    
    if(hour >= 11 && hour <= 14){
        hh_discount = total * 0.10;
        total = total - hh_discount;
        printf("Happy Hour 10%% discount applied (-$%.2f)\n", hh_discount);
    }
    
    printf("Do you have a student ID? (1.Yes, 0.No): ");
    scanf("%d", &student_id);
    
    if(student_id == 1){
        total = total - 2.00;
        printf("Student discount applied (-$2.00)\n");
    }
    
    if(count == 3 && crust == 3){
        printf("You get free garlic bread!\n");
    } else {
        printf("Thank you for your order!\n");
    }
    
    printf("Fulfillment Option (1.Pickup, 2.Delivery): ");
    scanf("%d", &delivery);
    
    if(delivery == 2){
        total = total + 3.00;
        printf("Delivery fee added (+$3.00)\n");
    }
    if(total < 0){
        total = 0.00;
    }
    
    // 9. Print Invoice
    printf("           FINAL INVOICE\n");
    printf("Subtotal:         $%.2f\n", subtotal);
    if(hh_discount > 0) printf("Happy Hour Disc: -$%.2f\n", hh_discount);
    if(student_id == 1) printf("Student Discount: -$2.00\n");
    if(delivery == 2) printf("Delivery Fee:     +$3.00\n");
    printf("FINAL TOTAL:      $%.2f\n", total);
    
    return 0;
}
