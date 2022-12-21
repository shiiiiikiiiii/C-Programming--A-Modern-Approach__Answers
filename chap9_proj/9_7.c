#include <stdio.h>

long power(int x, int n);

int main(){
    int x, n;
    printf("intput x and n to compute x^n\n");
    scanf("%d %d", &x, &n);
    printf("x^n = %ld", power(x, n));
}

long power(int x, int n){
    if(n == 0){
        return 1;
    }

    if((n % 2) == 0){
        return (long)power(x, n / 2) * power(x, n / 2);
    }
    else{
        return (long)x * power(x, n - 1);
    }
}