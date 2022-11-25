#include <stdio.h>

int main(void){
    float total, rate, payment, n;

    printf("enter amount of loan: ");
    scanf("%f", &total);
    printf("enter interest rate: ");
    scanf("%f", &rate);
    printf("enter monthly paymeny: ");
    scanf("%f", &payment);
    printf("enter numbers of payments: ");
    scanf("%f", &n);

    rate /= (12.0f * 100.0f);

    for(int i = 1; i <= n; i++){
        total += total*rate;
        total -= payment;
        printf("balance remaining after %dth payment: $%.2f\n", i, total);
    }
}