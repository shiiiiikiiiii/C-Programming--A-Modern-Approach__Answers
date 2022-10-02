#include <stdio.h>

#define PI 3.14159265f

int main (void){
    float r;

    printf("input the radius of a sphere to compute the volume ");
    scanf("%f", &r);
    printf("the volume is %.2f", 4.0f/3.0f*(PI)*(r*r*r));
}