#include <stdio.h>

int main(void){
    int hours, minuntes, nearestHour[] = {
        2, 10, 12, 13, 14, 16, 20, 24
    }, nearestMinute[] = {
        52, 31, 3, 24, 53, 53, 23, 0
    };
    char departure[][10] = {
        "8: 00 am",
        "9: 43 am",
        "11: 19 am",
        "12: 47 pm",
        "2: 00 pm",
        "3: 45 pm",
        "7: 00 pm",
        "9: 45 pm"
    }, arrival[][10] = {
        "10: 16 am",
        "11: 52 am",
        "1: 31 pm",
        "3: 00 pm",
        "4: 08 pm",
        "5: 55 pm",
        "9: 20 pm",
        "11: 58 pm"
    };
    printf("enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minuntes);

    for(int i = 0; i < 8; i++){
        if(hours < nearestHour[i] || (hours == nearestHour[i] && minuntes < nearestMinute[i])){
            printf("closest departure time is %s, arriving at %s", departure[i], arrival[i]);
            return 0;
        }
    }
}