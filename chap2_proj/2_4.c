#include <stdio.h>

int main(void){
    float amount;
    
    printf("enter an amount: ");
    scanf("%f", &amount);
    printf("with tax added: $%.2f", amount*1.05f);
}