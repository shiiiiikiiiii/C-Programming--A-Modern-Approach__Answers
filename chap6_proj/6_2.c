#include <stdio.h>

int main(){
    int m = 0, n = 0, remainder = 0;
    printf("enter two integers: ");
    scanf("%d %d", &m, &n);

    while(n != 0){
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("greatest common divisor: %d", m);
}