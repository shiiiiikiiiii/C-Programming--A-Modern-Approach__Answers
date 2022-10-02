#include <stdio.h>

int main(void){
    int itemNumber, mm, dd, yyyy;
    float unitPrice;

    printf("enter item number: ");
    scanf("%d", &itemNumber);
    printf("enter unit price: ");
    scanf("%f", &unitPrice);
    printf("enter purchase date: ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);
    
    printf("item\t\tunit\t\tpurchase\n");
    printf("    \t\tprice\t\tdate\n");
    printf("%d\t\t$%6.2f\t\t%d/%d/%d", itemNumber, unitPrice, mm, dd, yyyy);
}