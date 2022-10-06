#include <stdio.h>

int main(void){
    int hours, minuntes;
    printf("enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minuntes);

    // before 2:52, 9:45pm
    if(hours < 2 || (hours == 2 && minuntes < 52)){
        printf("closest departure time is 8:00 am, arriving at 10:16 am");
    }
    // before 10:31, 9:43am
    else if(hours < 10 || (hours == 10 && minuntes < 31)){
        printf("closest departure time is 9:43 am, arriving at 11:52 am");
    }
    // before 12:03, 11:19am
    else if(hours < 12 || (hours == 12 && minuntes < 3)){
        printf("closest departure time is 11:19 am, arriving at 1:31 am");
    }
    // before 13:24, 12:47pm
    else if(hours < 13 || (hours == 13 && minuntes < 24)){
        printf("closest departure time is 12:47 pm, arriving at 3:00 pm");
    }
    // before 14:53, 2:00pm
    else if(hours < 14 || (hours == 14 && minuntes < 53)){
        printf("closest departure time is 2:00 pm, arriving at 4:08 pm");
    }
    // before 16:53, 3:45pm
    else if(hours < 16 || (hours == 16 && minuntes < 53)){
        printf("closest departure time is 3:45 pm, arriving at 5:55 pm");
    }
    // before 20:23, 7:00pm
    else if(hours < 20 || (hours == 20 && minuntes < 23)){
        printf("closest departure time is 7:00 pm, arriving at 9:20 pm");
    }
    // before 24:00, 9:45pm
    else{
        printf("closest departure time is 9:45 pm, arriving at 11:58 pm");
    }
}