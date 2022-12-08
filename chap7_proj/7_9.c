#include <stdio.h>
#include <ctype.h>

int main(void){
    int hours, minuntes;
    char follow;
    printf("enter a 12-hour time: ");
    scanf("%d:%d %c", &hours, &minuntes, &follow);

    if(toupper(follow) == 'P'){
        hours += 12;
    }

    printf("equivalent 24-hour time: %d:%d", hours, minuntes);
}