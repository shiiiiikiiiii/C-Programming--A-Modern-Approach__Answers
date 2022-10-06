#include <stdio.h>

int main(void){
    int num, dig;
    printf("enter a positive number(with no more than 4 digits): ");
    scanf("%d", &num);

    if (num >= 0 && num < 10){
        dig = 1;
    }
    else if(num >= 10 && num < 100){
        dig = 2;
    }
    else if(num >= 100 && num < 1000){
        dig = 3;
    }
    else{
        dig = 4;
    }

    printf("the number %d has %d digits\n", num, dig);
}