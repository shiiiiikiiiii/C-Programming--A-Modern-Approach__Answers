#include <stdio.h>

int main(){
    char* months[] = {"January", "Febrary", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"};
    int mm, dd, yyyy;

    printf("enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);
    printf("you entered the date %s %d, %d", months[mm - 1], dd, yyyy);
}