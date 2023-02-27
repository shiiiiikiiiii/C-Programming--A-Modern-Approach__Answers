#include <stdio.h>

int main(){
    char message[100], *tmp = &message[0];
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
    for(; tmp >= &message[0]; tmp--){
        printf("%c", *tmp);
    }
}