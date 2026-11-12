#include <stdio.h>
int main()
{
    double costPrice, sellPrice, quantity;
    double totalCost, totalSales, result;
    double percentage;
    double *pCost = &costPrice;
    double *pSell = &sellPrice;
    double *pQuantity = &quantity;
    double *pTotalCost = &totalCost;
    double *pTotalSales = &totalSales;
    double *pResult = &result;
    printf("Enter cost price: ");
    scanf("%lf", pCost);
    printf("Enter selling price: ");
    scanf("%lf", pSell);
    printf("Enter quantity sold: ");
    scanf("%lf", pQuantity);
    if (*pCost < 0 || *pSell < 0 || *pQuantity < 0){
        printf("Invalid input!\n");
        return 0;
    }
    *pTotalCost = (*pCost) * (*pQuantity);
    *pTotalSales = (*pSell) * (*pQuantity);
    *pResult = (*pTotalSales) - (*pTotalCost);
    if (*pResult > 0){
        printf("\nProfit\n");
        if (*pTotalCost != 0){ 
            percentage = (*pResult / *pTotalCost) * 100;
            printf("Profit Percentage: %.2lf%%\n", percentage);
        }
        else
            printf("Profit Percentage: Undefined\n");
    }
    else if (*pResult < 0){
        printf("\nLoss\n");
        if (*pTotalCost != 0){
            percentage = (-(*pResult) / *pTotalCost) * 100;
            printf("Loss Percentage: %.2lf%%\n", percentage);
        }
    }
    else{
        printf("\nNo profit no loss\n");
    }
    double *larger;
    if (*pCost > *pSell)
        larger = pCost;
    else
        larger = pSell;

    printf("\nLarger Value: %.2lf\n", *larger);
    if (larger == pCost)
        printf("Pointer points to Cost Price\n");
    else
        printf("Pointer points to Selling Price\n");
    printf("ADDRESS TABLE\n");
    printf("Variable\tAddress\n");
    printf("costPrice\t%p\n", (void*)&costPrice);
    printf("sellPrice\t%p\n", (void*)&sellPrice);
    printf("quantity\t%p\n", (void*)&quantity);
    printf("totalCost\t%p\n", (void*)&totalCost);
    printf("totalSalecost\t%p\n", (void*)&totalSales);
    printf("result\t%p\n", (void*)&result);
    printf("\nPointer\tAddress\n");
    printf("pCost\t%p\n", (void*)&pCost);
    printf("pSell\t%p\n", (void*)&pSell);
    printf("pQuantity\t%p\n", (void*)&pQuantity);
    printf("pTotalCost\t%p\n", (void*)&pTotalCost);
    printf("pTotalSales\t%p\n", (void*)&pTotalSales);
    printf("pResult\t%p\n", (void*)&pResult);
    printf("larger\t%p\n", (void*)&larger);
    return 0;
}
