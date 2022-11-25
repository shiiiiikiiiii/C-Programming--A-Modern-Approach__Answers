#include <stdio.h>

int main(){
    int m = 0, n = 0, remainder = 0, m0 = 0, n0 = 0;
    printf("enter a fraction: ");
    scanf("%d/%d", &m, &n);
    m0 = m;
    n0 = n;

    while(n != 0){
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("the lowest terms: %d/%d", m0/m, n0/m);
}