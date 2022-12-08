#include <stdio.h>

int main(){
    char first[100], last[100];
    printf("enter a first and last name: ");
    scanf(" %s %s", first, last);
    printf("%s, %c.", last, first[0]);
}