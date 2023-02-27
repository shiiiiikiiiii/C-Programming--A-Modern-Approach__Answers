#include <stdbool.h>
#include <stdio.h>

int main(){
    int temperatures[7][35];// = ...
    int i;
    int* p;
    for(p = &temperatures[i][1]; p < &temperatures[i][35]; p++){
        printf("%d", *p);
    }
}