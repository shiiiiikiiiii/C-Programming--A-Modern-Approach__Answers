#include <stdio.h>

int main(){
    char message[100], tmp;
    int i = 1;

    printf("enter a message: ");

    tmp = getchar();
    message[0] = tmp;
    while(tmp != '\n' && i < 100){
        tmp = getchar();
        message[i] = tmp;
        i++;
    }

    printf("reversal is: ");
    for(; i >= 0; i--){
        printf("%c", message[i]);
    }
}