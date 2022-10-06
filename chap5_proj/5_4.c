#include <stdio.h>

int main(void){
    int speed;

    printf("enter a wind speed(in knots): ");
    scanf("%d", &speed);
    printf("the description in the Beaufort scale is: ");

    if(speed >= 1 && speed <= 3){
        printf("calm\n");
    }
    else if(speed >= 4 && speed <= 27){
        printf("light air\n");
    }
    else if(speed >= 28 && speed <= 47){
        printf("gale\n");
    }
    else if(speed >= 48 && speed <= 63){
        printf("storm\n");
    }
    else{
        printf("hurricane\n");
    }
}