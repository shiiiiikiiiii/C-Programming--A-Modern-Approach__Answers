#include <stdio.h>

int main(void){
    int hours, minutes;
    printf("enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    printf("equivalent 12-hour time: ");

    if(hours < 12){
        printf("%d:%02d AM", hours, minutes);
    }
    else if(hours == 12 && minutes == 0){
        printf("12:00");
    }
    else{
        printf("%d:%2d PM", (hours%12), minutes);
    }
}