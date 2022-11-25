#include <stdio.h>

int main(){
    float e = 1, tmp = 999, epsilon = 1;
    int factorial;
    scanf("%d", &epsilon);

    for(int i = 1; tmp > epsilon; i++){
        // reach the i-th item
        factorial = 1;
        for(int j = 1; j <= i; j++){
            // compute i!
            factorial *= j;
        }
        tmp = 1.0 / factorial;
        e += tmp;
    }

    printf("e = %f", e);
}