#include <stdio.h>

int main(void){
    int num;

    printf("enter a three-digit number: ");
    scanf("%d", &num);
    printf("the reversal is: %d", 100 * (num % 10) + num / 100 + ((num - (100 * (num / 100))) - num % 10));
}