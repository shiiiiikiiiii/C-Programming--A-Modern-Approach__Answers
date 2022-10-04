#include <stdio.h>

int main(void){
    int num;

    printf("enter a two-digit number: ");
    scanf("%d", &num);
    printf("the reversal is: %d\n", 10 * (num % 10) + num / 10);
}