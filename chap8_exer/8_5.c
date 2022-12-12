#include <stdio.h>

int main(){
    int fibo[40] = {0, 1, 0};
    int tmp;

    for(int i = 2; i < 40; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    
    for(int i = 0; i < 40; i++){
        printf("%d ", fibo[i]);
    }
}