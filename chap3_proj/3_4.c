#include <stdio.h>

int main(void){
    int i, j, k;

    printf("enter phone number [ (xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &i, &j, &k);
    printf("you entered %d.%d.%d", i, j, k);
}