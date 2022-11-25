#include <stdio.h>

int main(void){
    int n = 0, d = 2;
    printf("input a integer to test if it is a prime number\n");
    scanf("%d", &n);

    for(; (d*d) < n; d++){
        if(n % d == 0){
            break;
        }
    }
    if((d*d) < n){
        printf("%d is divisible by %d", n, d);
    }
    else{
        printf("%d is prime", n);
    }
}