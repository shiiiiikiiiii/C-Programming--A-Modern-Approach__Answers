#include <stdio.h>

int main(void){
    int currentMM, currentDD, currentYY, earlyMM = 9999, earlyDD = 9999, earlyYY = 9999, earlier;
        
    while(1){
        earlier = 0;
        printf("enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &currentMM, &currentDD, &currentYY);

        if(currentMM ==0 && currentDD == 0 && currentYY == 0){
            break;
        }
        
        if(currentYY < earlyYY){
            earlier = 1;
        }
        else{
            if(currentYY == earlyYY && currentMM < earlyMM){
                earlier = 1;
            }
            else{
                if(currentYY == earlyYY && currentMM == earlyMM && currentDD < earlyDD){
                    earlier = 1;
                }
            }
        }
        
        if(earlier){
            earlyMM = currentMM;
            earlyDD = currentDD;
            earlyYY = currentYY;
        }
    }

    printf("%d/%d/%02d is the earliest date", earlyMM, earlyDD, earlyYY);
}