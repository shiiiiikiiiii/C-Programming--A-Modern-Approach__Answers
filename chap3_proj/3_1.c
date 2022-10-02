#include <stdio.h>

int main(void){
    int mm, dd, yyyy;

    printf("enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);
    printf("%d%d%d", yyyy, mm, dd);
}