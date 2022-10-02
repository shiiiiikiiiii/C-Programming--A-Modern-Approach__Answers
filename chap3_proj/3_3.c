#include <stdio.h>

int main(void){
    int GSIPrefix, groupIdentifier, publisherCode, itemNumber, checkDigit;

    printf("enter isbn: ");
    scanf("%d-%d-%d-%d-%d", &GSIPrefix, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);
    printf("\ngsi prefix: %d\n", GSIPrefix);
    printf("group identifier: %d\n", groupIdentifier);
    printf("publisher code: %d\n", publisherCode);
    printf("item number: %d\n", itemNumber);
    printf("check digit: %d\n", checkDigit);
}