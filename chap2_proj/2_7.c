#include <stdio.h>

int main(void){
    int remain, bill_20, bill_10, bill_5, bill_1;

    printf("enter a dollar amount: ");
    scanf("%d", &remain);

    bill_20 = remain / 20;
    remain -= 20 * bill_20;
    bill_10 = remain / 10;
    remain -= 10 * bill_10;
    bill_5 = remain / 5;
    remain -= 5 * bill_5;

    printf("$20 bills: %d\n", bill_20);
    printf("$10 bills: %d\n", bill_10);
    printf("$5 bills: %d\n", bill_5);
    printf("$1 bills: %d\n", remain);
}