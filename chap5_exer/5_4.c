#include <stdio.h>

int main(void){
    int i;
    printf("input i: ");
    scanf("%d", &i);

    if(i > 0){
        i = 1;
    }
    else if(i = 0){
        i = 0;
    }
    else {
        i = -1;
    }
    
    printf("sig(i) = %d\n", i);
}