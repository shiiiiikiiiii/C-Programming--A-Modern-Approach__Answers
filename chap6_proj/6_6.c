#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);

    for(int i = 2; i*i <= n; i += 2){
        printf("%d\n", i*i);
    }
}