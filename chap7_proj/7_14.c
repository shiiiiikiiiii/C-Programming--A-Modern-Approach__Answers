#include <stdio.h>
#include <math.h>

int main(){
    double x, y = 1, xOverY, average, yFormer;
    printf("enter a positive number: ");
    scanf("%lf", &x);

    do{
        xOverY = x / y;
        average = (xOverY + y) / 2;
        yFormer = y;
        y = average;
        // printf("yFormer %lf, y %lf\n", yFormer, y);
    } while (fabs(yFormer - y) > 0.00001 * y);
    
    printf("square root: %lf", y);
}