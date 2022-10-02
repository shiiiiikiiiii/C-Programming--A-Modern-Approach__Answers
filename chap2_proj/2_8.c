#include <stdio.h>

int main(void){
    float total, rate, payment;

    printf("enter amount of loan: ");
    scanf("%f", &total);
    printf("enter interest rate: ");
    scanf("%f", &rate);
    printf("enter monthly paymeny: ");
    scanf("%f", &payment);

    rate /= (12.0f * 100.0f);
    total += total*rate;
    total -= payment;
    printf("balance remaining after first payment: $%.2f\n", total);
    total += total*rate;
    total -= payment;
    printf("balance remaining after second payment: $%.2f\n", total);
    total += total*rate;
    total -= payment;
    printf("balance remaining after third payment: $%.2f\n", total);
}