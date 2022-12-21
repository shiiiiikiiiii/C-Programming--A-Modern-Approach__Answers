#include <stdio.h>

long polynomial(int x);

int main(){
    int x;

    printf("enter x to compute 3x^5 + 2x^4 - 5x^3 - x^2 + 7x -6\nf(");
    scanf("%d", &x);
    printf(")=%ld", polynomial(x));
}

long polynomial(int x){
    long y = (3 * x * x * x * x * x) + (2 * x * x * x * x) + (5 * x * x * x) + (x * x) + (7 * x) -6;
    return y;
}