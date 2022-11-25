#include <stdio.h>

int main(){
    int days, start;
    printf("enter number of days in month: ");
    scanf("%d", &days);
    printf("enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    for(int i = 1; i < start; i++){
        printf("   ");
    }

    for(int current = 1; current <= days; current++){
        printf("%2d ", current);
        if((current + start - 1) % 7 == 0){
            printf("\n");
        }
    }
}