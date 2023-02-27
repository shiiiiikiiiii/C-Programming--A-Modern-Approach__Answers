#include <stdio.h>

int main(){
    char message[100], *tmp = message;
    int i = 1;

    printf("enter a message: ");

    *tmp = getchar();
    tmp++;
    while(i < 100){
        *tmp = getchar();
        if(*tmp == '\n'){
            break;
        }
        tmp++;
        i++;
    }

    printf("reversal is: ");
    for(; tmp >= message; tmp--){
        printf("%c", *tmp);
    }
}