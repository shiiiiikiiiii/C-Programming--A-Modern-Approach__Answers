#include <stdio.h>

int main(){
    float e = 1;
    int n, factorial;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        // reach the i-th item
        factorial = 1;
        for(int j = 1; j <= i; j++){
            // compute i!
            factorial *= j;
        }
        e += 1.0 / factorial;
    }

    printf("e = %f", e);
}