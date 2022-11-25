#include <stdio.h>

int main(void){
    int num;

    printf("enter a n-digit number: ");
    scanf("%d", &num);
    printf("the reversal is: ");

    while(num > 0){
        printf("%d", num%10);
        num /= 10;
    }
}