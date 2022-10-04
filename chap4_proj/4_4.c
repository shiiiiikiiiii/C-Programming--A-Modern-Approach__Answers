#include <stdio.h>

int main(void){
    int dec, oct;

    printf("enter a number between 0 and 32767: ");
    scanf("%d", &dec);
    oct += dec % 8;
    oct += 10 * ((dec /= 8) % 8);
    oct += 100 * ((dec /= 8) % 8);
    oct += 1000 * ((dec /= 8) % 8);
    oct += 10000 * ((dec /= 8) % 8);
    printf("in octal, your number is: %05d", oct);
}