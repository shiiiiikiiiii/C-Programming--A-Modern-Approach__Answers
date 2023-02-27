#include <stdbool.h>
#include <stdio.h>

int* search(const int a[], int n, int key){
    int* p;
    for(p = a; p < &a[n]; p++){
        if(*p == key){
            return p;
        }
    }
    return 0;
}

int main(){
    int temperatures[7][35];// = ...
    int* p;
    for(int i = 0; i < 7; i++){
        p = search(&temperatures[i][0], 35, 32);
        printf("the highest temperature of the %dth day is %d", i, *p);
    }
}