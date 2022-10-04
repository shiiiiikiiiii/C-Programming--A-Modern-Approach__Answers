#include <stdio.h>

int main(void){
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, firstSum, secondSum, total;

    printf("enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);
    firstSum = i2 + i4 + i6 + i8 + i10 + i12;
    secondSum = i1 + i3 + i5 + i7 + i9 + i11;
    total = 3 * firstSum + secondSum;
    printf("check digit: %d", 9 - ((total - 1) % 10));
}