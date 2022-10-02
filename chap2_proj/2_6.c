#include <stdio.h>

int main(void){
    float x;
    
    printf("(Horner's Rule)input x to calculate : ");
    scanf("%f", &x);
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %f", ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x -6);
}