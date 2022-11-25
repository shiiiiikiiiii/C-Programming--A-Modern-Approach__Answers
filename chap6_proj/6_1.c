#include <stdio.h>

int main(){
    float tmp = 0.001, max = -99999;

    while(tmp > 0){
        printf("enter a number(<=0 to quit): ");
        scanf("%f", &tmp);
        if(tmp >= max){
            max = tmp;
        }
    }

    printf("the largest number entered was %.2f", max);
}