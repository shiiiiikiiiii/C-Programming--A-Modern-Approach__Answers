#include <stdio.h>

int main(void){
    int i1, i2, i3, i4, large1, large2, small1, small2;
    printf("enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    if(i1 >= i2){
        large1 = i1;
        small1 = i2;
    }
    else{
        large1 = i2;
        small1 = i1;
    }
    if(i3 >= i4){
        large2 = i3;
        small2 = i4;
    }
    else{
        large2 = i4;
        small2 = i3;
    }

    if(large1 >= large2){
        printf("largest: %d\n", large1);
    }
    else{
        printf("largest: %d\n", large2);
    }
    if(small1 <= small2){
        printf("smallest: %d\n", small1);
    }
    else{
        printf("smallest: %d\n", small2);
    }
}