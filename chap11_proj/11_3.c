#include <stdio.h>

void reduce(int numerator, int denominator, int* reduced_numerator, int* reduced_denominator);

int main(){
    int numerator, denominator, reduced_numerator, reduced_denominator;
    printf("enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

    printf("the lowest terms: %d/%d", reduced_numerator, reduced_denominator);
}

void reduce(int numerator, int denominator, int* reduced_numerator, int* reduced_denominator){
    int remainder = 0;

    *reduced_numerator = numerator;
    *reduced_denominator = denominator;

    while(denominator != 0){
        remainder = numerator % denominator;
        numerator = denominator;
        denominator = remainder;
    }

    *reduced_numerator = *reduced_numerator / numerator;
    *reduced_denominator = *reduced_denominator / numerator;
}